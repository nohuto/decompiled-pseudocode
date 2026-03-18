/*
 * XREFs of DxgkWriteUserModeDiagEntry @ 0x1C01D7B54
 * Callers:
 *     DxgkEscape @ 0x1C01124E0 (DxgkEscape.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C00052D8 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000E4D0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011A40 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0011B30 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0011DE0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWriteUserModeDiagEntry(struct _DXGK_DIAG_HEADER *a1)
{
  __int64 v2; // rax
  struct DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  struct DXGGLOBAL *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 CurrentProcess; // rax
  DXGDIAGNOSTICS *v11; // rcx
  __int64 v12; // rax
  unsigned int v13; // ebx
  _BYTE v14[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]
  __int64 v17; // [rsp+50h] [rbp+8h]

  if ( *((_DWORD *)a1 + 1) < 0x400u )
  {
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    v6 = Global;
    if ( Global )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)Global + 69, 0);
      DXGPUSHLOCK::AcquireExclusive(v15);
      v16 = 2;
      CurrentProcess = PsGetCurrentProcess(v9, v8);
      *((_OWORD *)a1 + 1) = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
      *((_QWORD *)a1 + 4) = PsGetCurrentThreadId();
      v17 = MEMORY[0xFFFFF78000000320];
      *((_QWORD *)a1 + 1) = v17 * KeQueryTimeIncrement();
      v11 = (DXGDIAGNOSTICS *)*((_QWORD *)v6 + 76);
      if ( v11 )
      {
        v13 = DXGDIAGNOSTICS::WriteDiagnosticEntry(v11, a1);
      }
      else
      {
        v12 = WdLogNewEntry5_WdError(0LL);
        *(_QWORD *)(v12 + 24) = a1;
        *(_QWORD *)(v12 + 32) = v6;
        WdLogEvent5_WdError(v12);
        v13 = -1073741436;
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
      return v13;
    }
    else
    {
      v7 = WdLogNewEntry5_WdError(v5);
      *(_QWORD *)(v7 + 24) = a1;
      WdLogEvent5_WdError(v7);
      return 3221225860LL;
    }
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v2 + 24) = *((unsigned int *)a1 + 1);
    *(_QWORD *)(v2 + 32) = 1024LL;
    WdLogEvent5_WdError(v2);
    return 3221225485LL;
  }
}
