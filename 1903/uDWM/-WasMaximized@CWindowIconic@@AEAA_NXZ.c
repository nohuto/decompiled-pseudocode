/*
 * XREFs of ?WasMaximized@CWindowIconic@@AEAA_NXZ @ 0x18003F9E0
 * Callers:
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x18003F8D0 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004E210 (__security_check_cookie.c)
 *     memset_0 @ 0x18004FDC2 (memset_0.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180090D28 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

char __fastcall CWindowIconic::WasMaximized(CWindowIconic *this)
{
  char v2; // bl
  CWindowData *v3; // rcx
  struct CWindowData *MDIOwner; // rdi
  WINDOWPLACEMENT wndpl; // [rsp+20h] [rbp-48h] BYREF

  v2 = 0;
  v3 = (CWindowData *)*((_QWORD *)this + 9);
  if ( (*((_BYTE *)v3 + 606) & 1) == 0 || (MDIOwner = CWindowData::GetMDIOwner(v3)) == 0LL )
    MDIOwner = (struct CWindowData *)*((_QWORD *)this + 10);
  wndpl.length = 44;
  memset_0(&wndpl.flags, 0, 0x28uLL);
  if ( GetWindowPlacement(*((HWND *)MDIOwner + 5), &wndpl) )
    return (wndpl.flags & 2) != 0;
  return v2;
}
