/*
 * XREFs of ?DpiBrightnessIfGetBacklightReduction@@YAJPEAXPEAU_DXGK_BACKLIGHT_INFO@@@Z @ 0x1C02A7990
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00250D0 (_guard_dispatch_icall_nop.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00D0908 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00D192C (DpiAcquireCoreSyncAccessSafe.c)
 */

__int64 __fastcall DpiBrightnessIfGetBacklightReduction(_QWORD *a1, struct _DXGK_BACKLIGHT_INFO *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int16 v6; // bp
  int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v2 = a1[8];
  v3 = 0LL;
  v6 = *(_WORD *)(v2 + 4754);
  if ( v6 == 2 )
    v3 = v2 + 4752;
  if ( !v3 )
    return 3221225659LL;
  v8 = -1073741661;
  KeWaitForSingleObject((PVOID)(v2 + 4480), Executive, 0, 0, 0LL);
  v9 = 32LL;
  if ( v6 == 2 )
    v9 = v2 + 4784;
  if ( *(_QWORD *)v9 )
  {
    v8 = DpiAcquireCoreSyncAccessSafe((__int64)a1, 0);
    if ( v8 >= 0 )
    {
      v10 = 80LL;
      v11 = 8LL;
      if ( v6 == 2 )
      {
        v10 = v2 + 4832;
        v11 = v2 + 4760;
      }
      v8 = (*(__int64 (__fastcall **)(_QWORD, struct _DXGK_BACKLIGHT_INFO *))v10)(*(_QWORD *)v11, a2);
      DpiReleaseCoreSyncAccessSafe((__int64)a1, 0);
    }
  }
  KeReleaseMutex((PRKMUTEX)(v2 + 4480), 0);
  return (unsigned int)v8;
}
