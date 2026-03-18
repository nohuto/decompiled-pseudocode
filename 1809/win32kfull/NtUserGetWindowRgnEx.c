/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C0067F20
 * Callers:
 *     <none>
 * Callees:
 *     CalcVisRgn @ 0x1C003C7D0 (CalcVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     MirrorRegion @ 0x1C00C7908 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C02826CC (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rdx
  HRGN v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // r9d
  unsigned int RgnBox; // eax
  unsigned int v15; // ebx
  unsigned int v16; // eax
  int v17; // eax
  __int64 v19; // rax
  HRGN v20; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v21[16]; // [rsp+28h] [rbp-20h] BYREF

  v20 = a2;
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_27;
  v10 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm() )
    v10 = 127;
  if ( (~v10 & a3) != 0 )
  {
    UserSetLastError(1004LL);
    goto LABEL_27;
  }
  v6 = v20;
  if ( !v20 )
  {
    v15 = 0;
    UserSetLastError(87LL);
    goto LABEL_23;
  }
  if ( (a3 & 2) != 0 )
  {
    v11 = (2 * (a3 & 4 | 0x4000200)) | 0x10;
    if ( (a3 & 8) == 0 )
      v11 = 2 * (a3 & 4 | 0x4000200);
    v12 = v11 | 1;
    if ( (a3 & 0x10) != 0 )
      v12 = v11;
    v13 = v12 | 0x1000000;
    if ( (a3 & 0x40) == 0 )
      v13 = v12;
    CalcVisRgn(&v20, v7, (struct tagWND *)v7, v13);
    RgnBox = GreGetRgnBox(v20, v21);
  }
  else
  {
    v19 = *(_QWORD *)(v7 + 40);
    v5 = *(_QWORD *)(v19 + 168);
    if ( !v5 || (*(_BYTE *)(v19 + 21) & 8) != 0 )
      goto LABEL_27;
    RgnBox = GreCombineRgn(v20, v5, 0LL, 5LL);
  }
  v15 = RgnBox;
  if ( !RgnBox )
  {
LABEL_27:
    v15 = 0;
    goto LABEL_23;
  }
  v6 = *(HRGN *)(v7 + 40);
  if ( (*((_WORD *)v6 + 21) & 0x2FFF) != 0x29D )
  {
    v16 = GreOffsetRgn(v20, (unsigned int)-*((_DWORD *)v6 + 22), (unsigned int)-*((_DWORD *)v6 + 23));
    v6 = *(HRGN *)(v7 + 40);
    v15 = v16;
  }
  if ( (*((_BYTE *)v6 + 26) & 0x40) != 0 && (a3 & 1) == 0 )
    MirrorRegion(v7, v20, 0LL);
  if ( (a3 & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 456) )
      {
        v6 = **(HRGN **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 456) + 8LL);
        if ( ((_DWORD)v6[16] & 1) != 0 )
        {
          v6 = *(HRGN *)(v7 + 40);
          v17 = *((_DWORD *)v6 + 72);
          if ( (v17 & 0xF) == 0 && (v17 & 0x40000000) != 0 )
            GreScaleRgnToDestLogPixel(*((unsigned __int16 *)v6 + 142), v20);
        }
      }
    }
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v15;
}
