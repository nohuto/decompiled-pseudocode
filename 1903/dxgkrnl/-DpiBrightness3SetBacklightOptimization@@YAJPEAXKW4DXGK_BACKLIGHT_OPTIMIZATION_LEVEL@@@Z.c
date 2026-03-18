/*
 * XREFs of ?DpiBrightness3SetBacklightOptimization@@YAJPEAXKW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C02A6670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0127548 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0127A14 (DpiReleaseCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightness3SetBacklightOptimization(_QWORD *a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rdi
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 (__fastcall *v14)(_QWORD, _QWORD, _QWORD); // rax

  v3 = a1[8];
  KeWaitForSingleObject((PVOID)(v3 + 4480), Executive, 0, 0, 0LL);
  v7 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
  v11 = v7;
  if ( v7 >= 0 )
  {
    v13 = 0LL;
    if ( *(_WORD *)(v3 + 4754) == 3 )
      v13 = v3 + 4752;
    if ( v13 )
    {
      v14 = *(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(v13 + 64);
      if ( v14 )
        LODWORD(v11) = v14(*(_QWORD *)(v13 + 8), a2, a3);
      else
        LODWORD(v11) = -1073741661;
    }
    else
    {
      LODWORD(v11) = -1073741637;
    }
    DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v9, v8, v10);
    *(_QWORD *)(v12 + 24) = v11;
    WdLogEvent5_WdError(v12);
  }
  KeReleaseMutex((PRKMUTEX)(v3 + 4480), 0);
  return (unsigned int)v11;
}
