/*
 * XREFs of NtUserMagGetContextInformation @ 0x1C01F21E0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     MagGetLensContextInformation @ 0x1C019B440 (MagGetLensContextInformation.c)
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
  __int64 v18; // rcx
  unsigned int *v20; // rax
  unsigned int v21; // ecx
  unsigned int v22; // edi
  __int64 v23; // rax
  __int128 *v24; // rcx
  __int128 v25; // xmm1
  __int128 v26; // xmm0
  __int64 ThreadWin32Thread; // rax
  int v28; // ebx
  _DWORD *v29; // rax
  size_t Size; // [rsp+40h] [rbp-148h] BYREF
  __int64 v31; // [rsp+48h] [rbp-140h]
  _OWORD *v32; // [rsp+50h] [rbp-138h]
  __int64 v33; // [rsp+68h] [rbp-120h]
  ULONG64 v34; // [rsp+70h] [rbp-118h]
  __int64 v35; // [rsp+78h] [rbp-110h]
  __int128 v36; // [rsp+A0h] [rbp-E8h]
  __int128 v37; // [rsp+B0h] [rbp-D8h]
  __int128 v38; // [rsp+C0h] [rbp-C8h]
  _BYTE v39[112]; // [rsp+D0h] [rbp-B8h] BYREF

  v34 = a4;
  v7 = 0LL;
  LODWORD(Size) = 0;
  memset(v39, 0, 0x68uLL);
  v8 = 0LL;
  v31 = 0LL;
  v35 = 0LL;
  v9 = 0LL;
  v32 = 0LL;
  v10 = 1;
  EnterCrit(0LL, 1LL);
  if ( a1 == -3 )
  {
    v33 = -1LL;
  }
  else if ( a1 )
  {
    v33 = ValidateHwnd(a1);
    if ( !v33 )
      goto LABEL_5;
  }
  else
  {
    v33 = 0LL;
  }
  if ( a2 >= 11 )
  {
    LensContextInformation = -1073741821;
    goto LABEL_6;
  }
  v20 = (unsigned int *)v34;
  if ( v34 >= MmUserProbeAddress )
    v20 = (unsigned int *)MmUserProbeAddress;
  v21 = *v20;
  LODWORD(Size) = *v20;
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
          if ( v21 < 4 )
            goto LABEL_30;
          v7 = v39;
          LODWORD(Size) = 4;
          goto LABEL_68;
        }
        goto LABEL_5;
      }
      if ( !a3 )
        goto LABEL_5;
      v22 = 48;
      if ( v21 < 0x30 )
        goto LABEL_30;
      v9 = (_OWORD *)Win32AllocPoolZInit(48LL, 1735226197LL);
      v32 = v9;
      if ( v9 )
      {
        v24 = (__int128 *)a3;
        v11 = (ULONG64)(a3 + 48);
        if ( a3 + 48 < a3 || v11 > MmUserProbeAddress )
          v24 = (__int128 *)MmUserProbeAddress;
        v36 = *v24;
        v37 = v24[1];
        v25 = v37;
        v38 = v24[2];
        v26 = v38;
        *v9 = v36;
        v9[1] = v25;
        v9[2] = v26;
        v7 = v9;
        goto LABEL_67;
      }
LABEL_55:
      LensContextInformation = -1073741801;
      goto LABEL_6;
    }
    if ( !a3 )
      goto LABEL_5;
    if ( v21 < 0x10 )
      goto LABEL_30;
    v22 = 160;
    if ( v21 <= 0xA0 )
      v22 = v21;
    v23 = Win32AllocPoolZInit(v22, 1735226197LL);
    v35 = v23;
LABEL_65:
    if ( v23 )
    {
      v7 = (_BYTE *)v23;
LABEL_67:
      LODWORD(Size) = v22;
      goto LABEL_68;
    }
    goto LABEL_55;
  }
  if ( a2 == 6 )
  {
    if ( !a3 )
      goto LABEL_5;
    if ( v21 < 8 )
      goto LABEL_30;
    v22 = 208;
    if ( v21 <= 0xD0 )
      v22 = v21;
    v23 = Win32AllocPoolZInit(v22, 1735226197LL);
    v8 = v23;
    v31 = v23;
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
        if ( v21 < 0x10 )
          goto LABEL_30;
        v7 = v39;
        LODWORD(Size) = 16;
        goto LABEL_68;
      }
      goto LABEL_5;
    case 3:
      if ( a3 )
      {
        if ( v21 < 0x20 )
          goto LABEL_30;
        v7 = v39;
        LODWORD(Size) = 32;
        goto LABEL_68;
      }
      goto LABEL_5;
    case 4:
      if ( a3 )
      {
        if ( v21 < 0x24 )
          goto LABEL_30;
        v7 = v39;
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
  if ( v21 < 0x64 )
  {
LABEL_30:
    LensContextInformation = -1073741306;
    goto LABEL_6;
  }
  v7 = v39;
  LODWORD(Size) = 100;
LABEL_68:
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v11);
  LensContextInformation = MagGetLensContextInformation(
                             *(_QWORD **)&gMagnContext,
                             ThreadWin32Thread,
                             v33,
                             0LL,
                             a2,
                             (__int64)v7,
                             (int *)&Size);
  if ( LensContextInformation >= 0 )
  {
    v28 = Size;
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (char *)MmUserProbeAddress;
    memmove(a3, v7, (unsigned int)Size);
    v29 = (_DWORD *)v34;
    if ( v34 >= MmUserProbeAddress )
      v29 = (_DWORD *)MmUserProbeAddress;
    *v29 = v28;
  }
  if ( LensContextInformation < 0 )
    goto LABEL_6;
  v15 = 1LL;
LABEL_7:
  if ( !v10 )
  {
    v16 = RtlNtStatusToDosError(LensContextInformation);
    UserSetLastError(v16, v17);
  }
  if ( v9 )
    Win32FreePool(v9);
  v18 = v35;
  if ( v35 )
    Win32FreePool(v35);
  if ( v8 )
    Win32FreePool(v8);
  UserSessionSwitchLeaveCrit(v18, v11, v12, v13);
  return v15;
}
