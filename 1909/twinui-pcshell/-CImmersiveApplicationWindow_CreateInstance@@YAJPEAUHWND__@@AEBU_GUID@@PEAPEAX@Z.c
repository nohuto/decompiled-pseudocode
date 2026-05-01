/*
 * XREFs of ?CImmersiveApplicationWindow_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x18016E260
 * Callers:
 *     ?GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@PEAPEAX@Z @ 0x18002EED0 (-GetWindowsInternal@CImmersiveApp@@UEAAJW4IMMERSIVE_APPLICATION_GET_WINDOWS_FILTER@@AEBU_GUID@@P.c)
 *     ?GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@@Z @ 0x180163160 (-GetDestinationInformation@CImmersiveApp@@UEAAJPEAPEAUIImmersiveApplicationWindow@@PEAUtagRECT@@.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180089C34 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ??0CImmersiveApplicationWindow@@QEAA@PEAUHWND__@@@Z @ 0x18016E1E8 (--0CImmersiveApplicationWindow@@QEAA@PEAUHWND__@@@Z.c)
 */

__int64 __fastcall CImmersiveApplicationWindow_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  CImmersiveApplicationWindow *v4; // rbx
  CImmersiveApplicationWindow *v6; // rax
  CImmersiveApplicationWindow *v7; // rdi
  unsigned int v8; // ebx

  *a3 = 0LL;
  v4 = 0LL;
  v6 = (CImmersiveApplicationWindow *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = 0LL;
  if ( v6 )
  {
    v4 = CImmersiveApplicationWindow::CImmersiveApplicationWindow(v6, a1);
    v7 = v4;
  }
  if ( v7 )
    v8 = (**(__int64 (__fastcall ***)(CImmersiveApplicationWindow *, GUID *, void **))v4)(
           v4,
           &GUID_c6636ec2_eba1_4e6d_a995_8fa14b8b2891,
           a3);
  else
    v8 = -2147024882;
  if ( v7 )
    (*(void (__fastcall **)(CImmersiveApplicationWindow *))(*(_QWORD *)v7 + 16LL))(v7);
  return v8;
}
