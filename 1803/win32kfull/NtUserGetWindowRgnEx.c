/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C0073970
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     CalcVisRgn @ 0x1C002B5D0 (CalcVisRgn.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     MirrorRegion @ 0x1C00F5E18 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C026E69C (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rdx
  HRGN v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  int v10; // ebx
  __int64 v11; // rdx
  int v12; // edx
  int v13; // ecx
  unsigned int v14; // r9d
  unsigned int RgnBox; // eax
  unsigned int v16; // ebx
  unsigned int v17; // eax
  __int64 v19; // rax
  int v20; // eax
  HRGN v21; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v22[16]; // [rsp+28h] [rbp-20h] BYREF

  v21 = a2;
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_21;
  v10 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm() )
    v10 = 127;
  if ( (~v10 & a3) != 0 )
  {
    UserSetLastError(1004LL, v11);
    goto LABEL_21;
  }
  v6 = v21;
  if ( !v21 )
  {
    v16 = 0;
    UserSetLastError(87LL, v11);
    goto LABEL_19;
  }
  if ( (a3 & 2) != 0 )
  {
    v12 = (2 * (a3 & 4 | 0x4000200)) | 0x10;
    if ( (a3 & 8) == 0 )
      v12 = 2 * (a3 & 4 | 0x4000200);
    v13 = v12 | 1;
    if ( (a3 & 0x10) != 0 )
      v13 = v12;
    v14 = v13 | 0x1000000;
    if ( (a3 & 0x40) == 0 )
      v14 = v13;
    CalcVisRgn(&v21, v7, (struct tagWND *)v7, v14);
    RgnBox = GreGetRgnBox(v21, v22);
  }
  else
  {
    v19 = *(_QWORD *)(v7 + 40);
    v5 = *(_QWORD *)(v19 + 168);
    if ( !v5 || (*(_BYTE *)(v19 + 21) & 8) != 0 )
      goto LABEL_21;
    RgnBox = GreCombineRgn(v21, v5, 0LL, 5LL);
  }
  v16 = RgnBox;
  if ( !RgnBox )
  {
LABEL_21:
    v16 = 0;
    goto LABEL_19;
  }
  v6 = *(HRGN *)(v7 + 40);
  if ( (*((_WORD *)v6 + 21) & 0x3FFF) != 0x29D )
  {
    v17 = GreOffsetRgn(v21, (unsigned int)-*((_DWORD *)v6 + 22), (unsigned int)-*((_DWORD *)v6 + 23));
    v6 = *(HRGN *)(v7 + 40);
    v16 = v17;
  }
  if ( (*((_BYTE *)v6 + 26) & 0x40) != 0 && (a3 & 1) == 0 )
    MirrorRegion(v7, v21, 0LL);
  if ( (a3 & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 448) )
      {
        v6 = **(HRGN **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5) + 448) + 8LL);
        if ( ((_DWORD)v6[13] & 1) != 0 )
        {
          v6 = *(HRGN *)(v7 + 40);
          v20 = *((_DWORD *)v6 + 72);
          if ( (v20 & 0xF) == 0 && (v20 & 0x40000000) != 0 )
            GreScaleRgnToDestLogPixel(*((unsigned __int16 *)v6 + 142), v21);
        }
      }
    }
  }
LABEL_19:
  UserSessionSwitchLeaveCrit(v6, v5, v8, v9);
  return v16;
}
