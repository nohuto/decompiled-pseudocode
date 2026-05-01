/*
 * XREFs of ?s_CreateInstance@CDesktopVisibilityChangeHelper@@SAJPEAUIDesktopVisibilityChangesNotification@@AEBU_GUID@@PEAPEAX@Z @ 0x180121F9C
 * Callers:
 *     ?_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z @ 0x180127C98 (-_RegisterDesktopVisibilitySource@CImmersiveMode@@AEAAJPEAUIImmersiveMonitor@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800870F0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z @ 0x18012102C (--0CDesktopVisibilityChangeHelper@@QEAA@PEAUIDesktopVisibilityChangesNotification@@@Z.c)
 */

__int64 __fastcall CDesktopVisibilityChangeHelper::s_CreateInstance(
        struct IDesktopVisibilityChangesNotification *a1,
        const struct _GUID *a2,
        void **a3)
{
  CDesktopVisibilityChangeHelper *v4; // rbx
  CDesktopVisibilityChangeHelper *v6; // rax
  CDesktopVisibilityChangeHelper *v7; // rdi
  unsigned int v8; // ebx

  *a3 = 0LL;
  v4 = 0LL;
  v6 = (CDesktopVisibilityChangeHelper *)operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
  {
    v4 = CDesktopVisibilityChangeHelper::CDesktopVisibilityChangeHelper(v6, a1);
    v7 = v4;
  }
  if ( v7 )
    v8 = (**(__int64 (__fastcall ***)(CDesktopVisibilityChangeHelper *, GUID *, void **))v4)(
           v4,
           &GUID_fc413902_2a24_4522_ad1f_2d27c0ffee84,
           a3);
  else
    v8 = -2147024882;
  if ( v7 )
    (*(void (__fastcall **)(CDesktopVisibilityChangeHelper *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
