/*
 * XREFs of ?_PaintDividerForDWM@CAppTransitionManager@@AEAAJPEAUHDC__@@PEAUHBITMAP__@@PEAUtagBITMAPINFO@@W4DEVICE_SCALE_FACTOR@@@Z @ 0x180327868
 * Callers:
 *     ?_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x180327FD4 (-_TagDividerBitmap@CAppTransitionManager@@AEAAJPEAUIAppLayoutOperation@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800854A4 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z @ 0x18036D9CC (-JointDivider_Paint@@YAXPEAUHDC__@@AEBUCRect@Geometry@@1W4DEVICE_SCALE_FACTOR@@PEAUHFONT__@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::_PaintDividerForDWM(
        CAppTransitionManager *this,
        HDC a2,
        HBITMAP a3,
        struct tagBITMAPINFO *a4,
        enum DEVICE_SCALE_FACTOR a5)
{
  signed __int64 v7; // rbx
  size_t v8; // rax
  _BYTE *lpvBits; // rax
  unsigned int LastError; // ebx
  int DIBits; // eax
  int v12; // r9d
  int v13; // edx
  signed __int64 i; // rcx
  _BYTE *lpBits; // [rsp+48h] [rbp-28h]
  HGDIOBJ h; // [rsp+50h] [rbp-20h]
  struct HDC__ rcSrc; // [rsp+58h] [rbp-18h] BYREF
  int v20; // [rsp+5Ch] [rbp-14h]
  LONG biWidth; // [rsp+60h] [rbp-10h]
  char *v22; // [rsp+64h] [rbp-Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  rcSrc.unused = 0;
  v20 = 0;
  h = SelectObject(a2, a3);
  biWidth = a4->bmiHeader.biWidth;
  LODWORD(v22) = -a4->bmiHeader.biHeight;
  JointDivider_Paint(a2, &rcSrc, (const struct Geometry::CRect *)&rcSrc, a5, 0LL);
  v7 = (biWidth - rcSrc.unused) * ((int)v22 - v20);
  v8 = 4 * v7;
  if ( !is_mul_ok(v7, 4uLL) )
    v8 = -1LL;
  lpvBits = operator new[](v8, (const struct std::nothrow_t *)&std::nothrow);
  lpBits = lpvBits;
  if ( lpvBits )
  {
    DIBits = GetDIBits(a2, a3, 0, (_DWORD)v22 - v20, lpvBits, a4, 0);
    v12 = (int)v22;
    v13 = v20;
    if ( DIBits == (_DWORD)v22 - v20 )
    {
      if ( v7 > 0 )
      {
        for ( i = 0LL; i < v7; ++i )
          lpBits[4 * i + 3] = 0;
        v12 = (int)v22;
        v13 = v20;
      }
      SetDIBits(a2, a3, 0, v12 - v13, lpBits, a4, 0);
      LastError = 0;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x2EC,
                    (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
                    (const char *)(unsigned int)v22);
    }
    operator delete(lpBits);
  }
  else
  {
    LastError = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2DF,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)0x8007000ELL);
  }
  if ( h )
    SelectObject(a2, h);
  return LastError;
}
