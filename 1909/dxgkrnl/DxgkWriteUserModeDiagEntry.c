/*
 * XREFs of DxgkWriteUserModeDiagEntry @ 0x1C020650C
 * Callers:
 *     DxgkEscape @ 0x1C0106440 (DxgkEscape.c)
 * Callees:
 *     ?WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z @ 0x1C0002F24 (-WriteDiagnosticEntry@DXGDIAGNOSTICS@@QEBAJPEAU_DXGK_DIAG_HEADER@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C510 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkWriteUserModeDiagEntry(struct _DXGK_DIAG_HEADER *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct DXGGLOBAL *Global; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 CurrentProcess; // rax
  __int128 v12; // xmm0
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  DXGFASTMUTEX **v17; // rcx
  __int64 v18; // [rsp+30h] [rbp+8h]

  if ( *((_DWORD *)a1 + 1) >= 0x400u )
  {
    v4 = WdLogNewEntry5_WdError(a1, a2, a3);
    *(_QWORD *)(v4 + 24) = *((unsigned int *)a1 + 1);
    *(_QWORD *)(v4 + 32) = 1024LL;
    WdLogEvent5_WdError(v4);
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)a1, a2);
  if ( !Global )
  {
    v10 = WdLogNewEntry5_WdError(v7, v6, v9);
LABEL_5:
    *(_QWORD *)(v10 + 24) = a1;
    WdLogEvent5_WdError(v10);
    return 3221225860LL;
  }
  CurrentProcess = PsGetCurrentProcess(v7, v6);
  v12 = *(_OWORD *)PsGetProcessImageFileName(CurrentProcess);
  *((_DWORD *)a1 + 9) &= ~0x80000000;
  *((_OWORD *)a1 + 1) = v12;
  *((_DWORD *)a1 + 9) ^= (PsGetCurrentProcessSessionId(v14, v13) ^ *((_DWORD *)a1 + 9)) & 0x7FFFFFFF;
  *((_DWORD *)a1 + 8) = (unsigned int)PsGetCurrentThreadId();
  v18 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 1) = v18 * KeQueryTimeIncrement();
  v17 = (DXGFASTMUTEX **)*((_QWORD *)Global + 73);
  if ( !v17 )
  {
    v10 = WdLogNewEntry5_WdError(0LL, v15, v16);
    *(_QWORD *)(v10 + 32) = Global;
    goto LABEL_5;
  }
  return DXGDIAGNOSTICS::WriteDiagnosticEntry(v17, a1);
}
