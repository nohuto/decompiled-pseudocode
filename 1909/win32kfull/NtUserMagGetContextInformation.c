/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C0230FF0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     MagGetLensContextInformation @ 0x1C01CFF90 (MagGetLensContextInformation.c)
 */

__int64 __fastcall NtUserMagGetContextInformation(__int64 a1, int a2, char *a3, ULONG64 a4)
{
  _BYTE *v7; // r14
  __int64 v8; // r13
  _OWORD *v9; // r15
  int v10; // r12d
  ULONG64 v11; // rdx
  __int64 v12; // r8
  NTSTATUS LensContextInformation; // edi
  __int64 v14; // rbx
  ULONG v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int *v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // edi
  __int64 v24; // rax
  __int128 *v25; // rcx
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int64 ThreadWin32Thread; // rax
  int v29; // ebx
  _DWORD *v30; // rax
  size_t Size; // [rsp+40h] [rbp-148h] BYREF
  __int64 v32; // [rsp+48h] [rbp-140h]
  _OWORD *v33; // [rsp+50h] [rbp-138h]
  __int64 v34; // [rsp+68h] [rbp-120h]
  ULONG64 v35; // [rsp+70h] [rbp-118h]
  __int64 v36; // [rsp+78h] [rbp-110h]
  __int128 v37; // [rsp+A0h] [rbp-E8h]
  __int128 v38; // [rsp+B0h] [rbp-D8h]
  __int128 v39; // [rsp+C0h] [rbp-C8h]
  _BYTE v40[112]; // [rsp+D0h] [rbp-B8h] BYREF

  v35 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset(v40, 0, 0x68uLL);
  v8 = 0LL;
  v32 = 0LL;
  v36 = 0LL;
  v9 = 0LL;
  v33 = 0LL;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v34 = -1LL;
  }
  else if ( a1 )
  {
    v34 = ValidateHwnd(a1);
    if ( !v34 )
      goto LABEL_5;
  }
  else
  {
    v34 = 0LL;
  }
  if ( a2 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_6;
  }
  v21 = (unsigned int *)v35;
  if ( v35 >= MmUserProbeAddress )
    v21 = (unsigned int *)MmUserProbeAddress;
  v22 = *v21;
  LODWORD(Size) = *v21;
  if ( a2 > 6 )
  {
    if ( a2 != 7 )
    {
      if ( a2 != 8 )
      {
        v11 = (unsigned int)(a2 - 9);
        if ( (unsigned int)v11 > 1 )
          goto LABEL_68;
        if ( a3 )
        {
          if ( v22 < 4 )
            goto LABEL_30;
          v7 = v40;
          LODWORD(Size) = 4;
          goto LABEL_68;
        }
        goto LABEL_5;
      }
      if ( !a3 )
        goto LABEL_5;
      v23 = 48;
      if ( v22 < 0x30 )
        goto LABEL_30;
      v9 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
      v33 = v9;
      if ( v9 )
      {
        v25 = (__int128 *)a3;
        v11 = (ULONG64)(a3 + 48);
        if ( a3 + 48 < a3 || v11 > MmUserProbeAddress )
          v25 = (__int128 *)MmUserProbeAddress;
        v37 = *v25;
        v38 = v25[1];
        v26 = v38;
        v39 = v25[2];
        v27 = v39;
        *v9 = v37;
        v9[1] = v26;
        v9[2] = v27;
        v7 = v9;
        goto LABEL_67;
      }
LABEL_55:
      LensContextInformation = -1073741801;
      goto LABEL_6;
    }
    if ( !a3 )
      goto LABEL_5;
    if ( v22 < 0x10 )
      goto LABEL_30;
    v23 = 160;
    if ( v22 <= 0xA0 )
      v23 = v22;
    v24 = Win32AllocPoolZInit(v23, 1735226197LL);
    v36 = v24;
LABEL_65:
    if ( v24 )
    {
      v7 = (_BYTE *)v24;
LABEL_67:
      LODWORD(Size) = v23;
      goto LABEL_68;
    }
    goto LABEL_55;
  }
  if ( a2 == 6 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( v22 < 8 )
      goto LABEL_30;
    v23 = 208;
    if ( v22 <= 0xD0 )
      v23 = v22;
    v24 = Win32AllocPoolZInit(v23, 1735226197LL);
    v8 = v24;
    v32 = v24;
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
        if ( v22 < 0x10 )
          goto LABEL_30;
        v7 = v40;
        LODWORD(Size) = 16;
        goto LABEL_68;
      }
      goto LABEL_5;
    case 3:
      if ( a3 )
      {
        if ( v22 < 0x20 )
          goto LABEL_30;
        v7 = v40;
        LODWORD(Size) = 32;
        goto LABEL_68;
      }
      goto LABEL_5;
    case 4:
      if ( a3 )
      {
        if ( v22 < 0x24 )
          goto LABEL_30;
        v7 = v40;
        LODWORD(Size) = 36;
        goto LABEL_68;
      }
LABEL_5:
      LensContextInformation = -1073741811;
LABEL_6:
      v10 = 0;
      v14 = 0LL;
      goto LABEL_7;
  }
  if ( !a3 )
    goto LABEL_5;
  if ( v22 < 0x64 )
  {
LABEL_30:
    LensContextInformation = -1073741306;
    goto LABEL_6;
  }
  v7 = v40;
  LODWORD(Size) = 100;
LABEL_68:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11, v12);
  LensContextInformation = MagGetLensContextInformation(
                             *(_QWORD **)&gMagnContext,
                             ThreadWin32Thread,
                             v34,
                             0LL,
                             a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation >= 0 )
  {
    v29 = Size;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (char *)MmUserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    v30 = (_DWORD *)v35;
    if ( v35 >= MmUserProbeAddress )
      v30 = (_DWORD *)MmUserProbeAddress;
    *v30 = v29;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_6;
  v14 = 1LL;
LABEL_7:
  if ( !v10 )
  {
    v15 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v15, v16, v17, v18);
  }
  if ( v9 )
    Win32FreePool(v9);
  v19 = v36;
  if ( v36 )
    Win32FreePool(v36);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v19);
  return v14;
}
