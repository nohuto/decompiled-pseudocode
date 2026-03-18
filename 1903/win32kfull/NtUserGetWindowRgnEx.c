/*
 * XREFs of NtUserGetWindowRgnEx @ 0x1C01066B0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     CalcVisRgn @ 0x1C00C4BF0 (CalcVisRgn.c)
 *     MirrorRegion @ 0x1C01118F8 (MirrorRegion.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     GreScaleRgnToDestLogPixel @ 0x1C0299378 (GreScaleRgnToDestLogPixel.c)
 */

__int64 __fastcall NtUserGetWindowRgnEx(__int64 a1, HRGN a2, int a3)
{
  __int64 v5; // rdx
  HRGN v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  int v14; // ecx
  unsigned int v15; // r9d
  unsigned int RgnBox; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  unsigned int v20; // ebx
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // eax
  __int64 v30; // rax
  __int64 v31; // rdx
  HRGN v32; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v33[2]; // [rsp+28h] [rbp-20h] BYREF

  v32 = a2;
  EnterSharedCrit(0LL, 1LL);
  v7 = ValidateHwnd(a1);
  if ( !v7 )
    goto LABEL_27;
  v9 = 63;
  if ( (unsigned int)UserUnsafeIsCurrentProcessDwm(v6, v5, v8) )
    v9 = 127;
  if ( (~v9 & a3) != 0 )
  {
    UserSetLastError(1004LL, v10, v11, v12);
    goto LABEL_27;
  }
  v6 = v32;
  if ( !v32 )
  {
    v20 = 0;
    UserSetLastError(87LL, v10, v11, v12);
    goto LABEL_23;
  }
  if ( (a3 & 2) != 0 )
  {
    v33[0] = 0LL;
    v33[1] = 0LL;
    v13 = (2 * (a3 & 4 | 0x4000200)) | 0x10;
    if ( (a3 & 8) == 0 )
      v13 = 2 * (a3 & 4 | 0x4000200);
    v14 = v13 | 1;
    if ( (a3 & 0x10) != 0 )
      v14 = v13;
    v15 = v14 | 0x1000000;
    if ( (a3 & 0x40) == 0 )
      v15 = v14;
    CalcVisRgn(&v32, v7, (struct tagWND *)v7, v15);
    RgnBox = GreGetRgnBox(v32, v33);
  }
  else
  {
    v30 = *(_QWORD *)(v7 + 40);
    v31 = *(_QWORD *)(v30 + 168);
    if ( !v31 || (*(_BYTE *)(v30 + 21) & 8) != 0 )
      goto LABEL_27;
    RgnBox = GreCombineRgn(v32, v31, 0LL, 5LL);
  }
  v20 = RgnBox;
  if ( !RgnBox )
  {
LABEL_27:
    v20 = 0;
    goto LABEL_23;
  }
  v6 = *(HRGN *)(v7 + 40);
  if ( (*((_WORD *)v6 + 21) & 0x3FFF) != 0x29D )
  {
    v21 = GreOffsetRgn(v32, (unsigned int)-*((_DWORD *)v6 + 22));
    v6 = *(HRGN *)(v7 + 40);
    v20 = v21;
  }
  if ( (*((_BYTE *)v6 + 26) & 0x40) != 0 && (a3 & 1) == 0 )
    MirrorRegion(v7, v32, 0LL);
  if ( (a3 & 0x20) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v17, v18, v19) )
    {
      if ( *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v22, v23, v24) + 448) )
      {
        v6 = **(HRGN **)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v25, v26, v27) + 448) + 8LL);
        if ( ((_DWORD)v6[16] & 1) != 0 )
        {
          v6 = *(HRGN *)(v7 + 40);
          v28 = *((_DWORD *)v6 + 72);
          if ( (v28 & 0xF) == 0 && (v28 & 0x40000000) != 0 )
            GreScaleRgnToDestLogPixel(*((unsigned __int16 *)v6 + 142), v32);
        }
      }
    }
  }
LABEL_23:
  UserSessionSwitchLeaveCrit(v6);
  return v20;
}
