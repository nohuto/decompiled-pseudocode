/*
 * XREFs of _WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch$73 @ 0x180226DC5
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x18013B500 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall WindowEventDispatcher::ApplyWindowingEnvironmentSettingsRequested_::_1_::catch_73(wil *a1, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rdx

  v2 = *(__int64 **)(a2 + 240);
  v3 = *v2;
  v4 = (unsigned int)wil::ResultFromCaughtException(a1);
  (*(void (__fastcall **)(__int64 *, __int64))(v3 + 80))(v2, v4);
  (*(void (__fastcall **)(__int64 *, _QWORD))(*v2 + 72))(v2, 0LL);
  return &loc_180226B2C;
}
