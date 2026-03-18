/*
 * XREFs of ?WriteDiagEntry@VIDPN_MGR@@QEAAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C001A10C
 * Callers:
 *     _BmlLogDiagnosticsPacket @ 0x1C01410E4 (_BmlLogDiagnosticsPacket.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002E18 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::WriteDiagEntry(DXGFASTMUTEX ***this, struct _DXGK_DIAG_HEADER *a2, __int64 a3)
{
  __int64 CurrentProcess; // rax
  __int128 v6; // xmm0
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  DXGFASTMUTEX **v11; // r8
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+38h] [rbp+10h]

  if ( !a2 || !*((_DWORD *)a2 + 1) )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( a2 && *((_DWORD *)a2 + 1) >= 0x30u )
  {
    CurrentProcess = PsGetCurrentProcess();
    v6 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
    *((_DWORD *)a2 + 9) &= ~0x80000000;
    *((_OWORD *)a2 + 1) = v6;
    *((_DWORD *)a2 + 9) ^= (PsGetCurrentProcessSessionId(v8, v7) ^ *((_DWORD *)a2 + 9)) & 0x7FFFFFFF;
    *((_DWORD *)a2 + 8) = (unsigned int)PsGetCurrentThreadId();
    v18 = MEMORY[0xFFFFF78000000320];
    *((_QWORD *)a2 + 1) = v18 * KeQueryTimeIncrement();
    v11 = this[63];
    if ( v11 )
    {
      CurrentThread = KeGetCurrentThread();
      if ( this[5][2] != CurrentThread )
      {
        v14 = WdLogNewEntry5_WdAssertion(CurrentThread, v9);
        WdLogEvent5_WdAssertion(v14);
        v11 = this[63];
      }
      return DXGDIAGNOSTICS::WriteDiagnosticEntry(v11, a2);
    }
    else
    {
      v16 = WdLogNewEntry5_WdError(v10, v9, 0LL);
      *(_QWORD *)(v16 + 24) = a2;
      *(_QWORD *)(v16 + 32) = this;
      WdLogEvent5_WdError(v16);
      return 3221225860LL;
    }
  }
  else
  {
    v17 = WdLogNewEntry5_WdError(this, a2, a3);
    *(_QWORD *)(v17 + 24) = a2;
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
}
