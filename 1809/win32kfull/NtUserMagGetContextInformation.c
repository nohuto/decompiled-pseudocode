/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C02197A0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     MagGetLensContextInformation @ 0x1C01BC4E0 (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, ULONG64 a4)
{
  _BYTE *v7; // r14
  __int64 v8; // r13
  _OWORD *v9; // r15
  int v10; // r12d
  ULONG64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS LensContextInformation; // edi
  __int64 v15; // rbx
  ULONG v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  unsigned int *v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // edi
  __int64 v25; // rax
  _OWORD *v26; // rcx
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int64 ThreadWin32Thread; // rax
  int v30; // ebx
  _DWORD *v31; // rax
  size_t Size; // [rsp+40h] [rbp-118h] BYREF
  __int64 v33; // [rsp+48h] [rbp-110h]
  _OWORD *v34; // [rsp+50h] [rbp-108h]
  __int64 v35; // [rsp+68h] [rbp-F0h]
  ULONG64 v36; // [rsp+70h] [rbp-E8h]
  __int64 v37; // [rsp+78h] [rbp-E0h]
  _BYTE v38[112]; // [rsp+A0h] [rbp-B8h] BYREF

  v36 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset(v38, 0, 0x68uLL);
  v8 = 0LL;
  v33 = 0LL;
  v37 = 0LL;
  v9 = 0LL;
  v34 = 0LL;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v35 = -1LL;
  }
  else if ( a1 )
  {
    v35 = ValidateHwnd(a1);
    if ( !v35 )
      goto LABEL_5;
  }
  else
  {
    v35 = 0LL;
  }
  if ( a2 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_6;
  }
  v22 = (unsigned int *)v36;
  if ( v36 >= MmUserProbeAddress )
    v22 = (unsigned int *)MmUserProbeAddress;
  v23 = *v22;
  LODWORD(Size) = *v22;
  if ( a2 > 6 )
  {
    v11 = (unsigned int)(a2 - 7);
    if ( a2 != 7 )
    {
      v11 = (unsigned int)(a2 - 8);
      if ( a2 != 8 )
      {
        v11 = (unsigned int)(a2 - 9);
        if ( (unsigned int)v11 > 1 )
          goto LABEL_68;
        if ( a3 )
        {
          if ( v23 < 4 )
            goto LABEL_30;
          v7 = v38;
          LODWORD(Size) = 4;
          goto LABEL_68;
        }
        goto LABEL_5;
      }
      if ( !a3 )
        goto LABEL_5;
      v24 = 48;
      if ( v23 < 0x30 )
        goto LABEL_30;
      v9 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
      v34 = v9;
      if ( v9 )
      {
        v26 = a3;
        v11 = (ULONG64)(a3 + 48);
        if ( a3 + 48 < a3 || v11 > MmUserProbeAddress )
          v26 = (_OWORD *)MmUserProbeAddress;
        v27 = v26[1];
        v28 = v26[2];
        *v9 = *v26;
        v9[1] = v27;
        v9[2] = v28;
        v7 = v9;
        goto LABEL_67;
      }
LABEL_55:
      LensContextInformation = -1073741801;
      goto LABEL_6;
    }
    if ( !a3 )
      goto LABEL_5;
    if ( v23 < 0x10 )
      goto LABEL_30;
    v24 = 160;
    if ( v23 <= 0xA0 )
      v24 = v23;
    v25 = Win32AllocPoolZInit(v24, 1735226197LL);
    v37 = v25;
LABEL_65:
    if ( v25 )
    {
      v7 = (_BYTE *)v25;
LABEL_67:
      LODWORD(Size) = v24;
      goto LABEL_68;
    }
    goto LABEL_55;
  }
  if ( a2 == 6 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( v23 < 8 )
      goto LABEL_30;
    v24 = 208;
    if ( v23 <= 0xD0 )
      v24 = v23;
    v25 = Win32AllocPoolZInit(v24, 1735226197LL);
    v8 = v25;
    v33 = v25;
    goto LABEL_65;
  }
  if ( a2 < 0 )
    goto LABEL_68;
  if ( a2 <= 1 )
    goto LABEL_5;
  switch ( a2 )
  {
    case 2:
      if ( a3 )
      {
        if ( v23 < 0x10 )
          goto LABEL_30;
        v7 = v38;
        LODWORD(Size) = 16;
        goto LABEL_68;
      }
      goto LABEL_5;
    case 3:
      if ( a3 )
      {
        if ( v23 < 0x20 )
          goto LABEL_30;
        v7 = v38;
        LODWORD(Size) = 32;
        goto LABEL_68;
      }
      goto LABEL_5;
    case 4:
      if ( a3 )
      {
        if ( v23 < 0x24 )
          goto LABEL_30;
        v7 = v38;
        LODWORD(Size) = 36;
        goto LABEL_68;
      }
LABEL_5:
      LensContextInformation = -1073741811;
LABEL_6:
      v10 = 0;
      v15 = 0LL;
      goto LABEL_7;
  }
  if ( !a3 )
    goto LABEL_5;
  if ( v23 < 0x64 )
  {
LABEL_30:
    LensContextInformation = -1073741306;
    goto LABEL_6;
  }
  v7 = v38;
  LODWORD(Size) = 100;
LABEL_68:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  LensContextInformation = MagGetLensContextInformation(
                             *(_QWORD **)&gMagnContext,
                             ThreadWin32Thread,
                             v35,
                             0LL,
                             a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation >= 0 )
  {
    v30 = Size;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (char *)MmUserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    v31 = (_DWORD *)v36;
    if ( v36 >= MmUserProbeAddress )
      v31 = (_DWORD *)MmUserProbeAddress;
    *v31 = v30;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_6;
  v15 = 1LL;
LABEL_7:
  if ( !v10 )
  {
    v16 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v16, v17, v18, v19);
  }
  if ( v9 )
    Win32FreePool(v9);
  v20 = v37;
  if ( v37 )
    Win32FreePool(v37);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v20, v11, v12, v13);
  return v15;
}
