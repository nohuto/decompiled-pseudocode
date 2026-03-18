/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C00E0910
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     CalcVisRgn @ 0x1C00662C0 (CalcVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     MirrorRegion @ 0x1C00EC7A8 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C0298DC8 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  HRGN v5; // rcx
  __int64 v6; // rdi
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // r9d
  unsigned int RgnBox; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ebx
  unsigned int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  int v23; // eax
  __int64 v25; // rax
  __int64 v26; // rdx
  HRGN v27; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v28[2]; // [rsp+28h] [rbp-20h] BYREF

  v27 = a2;
  EnterSharedCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  if ( !v6 )
    goto LABEL_27;
  v7 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm() )
    v7 = 127;
  if ( (~v7 & a3) != 0 )
  {
    UserSetLastError(1004LL, v8, v9, v10);
    goto LABEL_27;
  }
  v5 = v27;
  if ( !v27 )
  {
    v17 = 0;
    UserSetLastError(87LL, v8, v9, v10);
    goto LABEL_23;
  }
  if ( (a3 & 2) != 0 )
  {
    v28[0] = 0LL;
    v28[1] = 0LL;
    v11 = (2 * (a3 & 4 | 0x4000200)) | 0x10;
    if ( (a3 & 8) == 0 )
      v11 = 2 * (a3 & 4 | 0x4000200);
    v12 = v11 | 1;
    if ( (a3 & 0x10) != 0 )
      v12 = v11;
    v13 = v12 | 0x1000000;
    if ( (a3 & 0x40) == 0 )
      v13 = v12;
    CalcVisRgn(&v27, v6, (struct tagWND *)v6, v13);
    RgnBox = GreGetRgnBox(v27, v28);
  }
  else
  {
    v25 = *(_QWORD *)(v6 + 40);
    v26 = *(_QWORD *)(v25 + 168);
    if ( !v26 || (*(_BYTE *)(v25 + 21) & 8) != 0 )
      goto LABEL_27;
    RgnBox = GreCombineRgn(v27, v26, 0LL, 5LL);
  }
  v17 = RgnBox;
  if ( !RgnBox )
  {
LABEL_27:
    v17 = 0;
    goto LABEL_23;
  }
  v5 = *(HRGN *)(v6 + 40);
  if ( (*((_WORD *)v5 + 21) & 0x3FFF) != 0x29D )
  {
    v18 = GreOffsetRgn(v27, (unsigned int)-*((_DWORD *)v5 + 22));
    v5 = *(HRGN *)(v6 + 40);
    v17 = v18;
  }
  if ( (*((_BYTE *)v5 + 26) & 0x40) != 0 && (a3 & 1) == 0 )
    MirrorRegion(v6, v27, 0LL);
  if ( (a3 & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v15, v16) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v19, v20) + 448) )
      {
        v5 = **(HRGN **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v21, v22) + 448) + 8LL);
        if ( ((_DWORD)v5[16] & 1) != 0 )
        {
          v5 = *(HRGN *)(v6 + 40);
          v23 = *((_DWORD *)v5 + 72);
          if ( (v23 & 0xF) == 0 && (v23 & 0x40000000) != 0 )
            GreScaleRgnToDestLogPixel(*((unsigned __int16 *)v5 + 142), v27);
        }
      }
    }
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v5);
  return v17;
}
