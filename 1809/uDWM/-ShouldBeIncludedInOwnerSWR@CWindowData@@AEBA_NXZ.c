/*
 * XREFs of ?ShouldBeIncludedInOwnerSWR@CWindowData@@AEBA_NXZ @ 0x180012F50
 * Callers:
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18000D380 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18000F120 (-OwnerChange@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18000F668 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180012950 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001D830 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18004BF20 (__security_check_cookie.c)
 *     ?ContainsRect@@YA_NAEBUtagRECT@@0@Z @ 0x18008910C (-ContainsRect@@YA_NAEBUtagRECT@@0@Z.c)
 *     ?WillEndAnimationCloaked@CWindowData@@QEBA_NXZ @ 0x18008D5B0 (-WillEndAnimationCloaked@CWindowData@@QEBA_NXZ.c)
 */

char __fastcall CWindowData::ShouldBeIncludedInOwnerSWR(CWindowData *this)
{
  char v2; // si
  CWindowData *v4; // rcx
  bool v5; // bl
  HWND v6; // rcx
  int v7; // ecx
  wchar_t **i; // rdx
  WCHAR *v9; // rax
  int v10; // r10d
  int v11; // r8d
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 0;
  if ( (*((_BYTE *)this + 596) & 1) != 0
    && (*((_DWORD *)this + 25) & 0xC00000) != 0xC00000
    && (*((char *)this + 104) >= 0 || (*((_DWORD *)this + 151) & 0xFFF) == 0x11) )
  {
    if ( *((_QWORD *)this + 4) )
    {
      v4 = (CWindowData *)*((_QWORD *)this + 68);
      if ( v4 )
      {
        v5 = CWindowData::WillEndAnimationCloaked(v4);
        if ( CWindowData::WillEndAnimationCloaked(this) == v5
          && ContainsRect((const struct tagRECT *)(*((_QWORD *)this + 68) + 48LL), (const struct tagRECT *)this + 3) )
        {
          v6 = (HWND)*((_QWORD *)this + 5);
          ClassName[0] = 0;
          v2 = 1;
          if ( GetClassNameW(v6, ClassName, 260) )
          {
            v7 = 0;
            for ( i = off_1800BA6D8; ; ++i )
            {
              v9 = ClassName;
              do
              {
                v10 = *(WCHAR *)((char *)v9 + (char *)*i - (char *)ClassName);
                v11 = *v9 - v10;
                if ( v11 )
                  break;
                ++v9;
              }
              while ( v10 );
              if ( !v11 )
                break;
              if ( ++v7 )
                return v2;
            }
            return 0;
          }
        }
      }
    }
  }
  return v2;
}
