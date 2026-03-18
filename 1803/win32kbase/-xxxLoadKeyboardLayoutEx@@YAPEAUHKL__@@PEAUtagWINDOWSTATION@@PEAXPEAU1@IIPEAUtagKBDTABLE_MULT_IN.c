/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0129D60
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C012AD00 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     ThreadUnlock1 @ 0x1C0022E20 (ThreadUnlock1.c)
 *     HMAllocObject @ 0x1C0035000 (HMAllocObject.c)
 *     HMAssignmentLock @ 0x1C00374D0 (HMAssignmentLock.c)
 *     Win32AllocPoolZInit @ 0x1C004DA00 (Win32AllocPoolZInit.c)
 *     UserSetLastError @ 0x1C00598E8 (UserSetLastError.c)
 *     HKLtoPKL @ 0x1C005BC40 (HKLtoPKL.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0128538 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C0129804 (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0129C00 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C012A3F8 (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     DestroyKF @ 0x1C012A5BC (DestroyKF.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C012A860 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C012A970 (xxxInternalActivateKeyboardLayout.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C013E338 (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C013EA38 (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C013F0B8 (ApiSetEditionNotifyShellLanguageHook.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        signed int a8,
        unsigned int a9)
{
  HKL v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rdx
  struct tagTHREADINFO *v13; // r14
  unsigned int v15; // esi
  struct tagKL *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  const unsigned __int16 *v19; // r9
  struct tagKBDFILE *KeyboardLayoutFile; // rbx
  __int64 v21; // rax
  char *v22; // rax
  void *v23; // rax
  unsigned int v24; // ebx
  unsigned int v25; // r12d
  struct tagKBDFILE *v26; // rax
  __int64 v27; // rcx
  const WCHAR *v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rbx
  __int64 v32; // rax
  int inited; // [rsp+4Ch] [rbp-B4h]
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v36; // [rsp+60h] [rbp-A0h]
  PCWSTR SourceString[2]; // [rsp+70h] [rbp-90h]
  __int128 v38; // [rsp+80h] [rbp-80h]
  void *v39[2]; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v41; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v43; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v44; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v45; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v46[3]; // [rsp+100h] [rbp+0h] BYREF
  _QWORD v47[3]; // [rsp+118h] [rbp+18h] BYREF
  int v48; // [rsp+130h] [rbp+30h] BYREF
  __int16 v49; // [rsp+134h] [rbp+34h]
  int v50; // [rsp+14Ch] [rbp+4Ch]

  v10 = (HKL)a3;
  v11 = 0LL;
  v39[0] = a2;
  v12 = (unsigned int)a8;
  SourceString[0] = a7;
  *(_QWORD *)&v36 = a3;
  v35 = 0LL;
  if ( !a8 || (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 0LL;
  v13 = gptiCurrent;
  if ( a3 )
  {
    v11 = HKLtoPKL((__int64)gptiCurrent, a3);
    if ( !v11 )
      return 0LL;
    v12 = (unsigned int)a8;
  }
  if ( (_DWORD)v12 == (_DWORD)v10 )
    return *(HKL *)(v11 + 40);
  v15 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    if ( PsGetThreadProcessId(*(PETHREAD *)v13) != (HANDLE)gpidLogon )
    {
      UserSetLastError(1004);
      return 0LL;
    }
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    while ( 1 )
    {
      v16 = (struct tagKL *)HKLtoPKL((__int64)gptiCurrent, 1LL);
      if ( !v16 )
        break;
      xxxInternalUnloadKeyboardLayout((struct tagKL **)a1, v16, 0x80000000);
    }
    v10 = (HKL)v36;
    v12 = (unsigned int)a8;
  }
  v17 = *((_QWORD *)a1 + 5);
  v18 = v17;
  if ( !v17 )
  {
LABEL_19:
    if ( (int)IsEditionResetIMELayoutSupported(v11, v12) >= 0
      && !(unsigned int)EditionResetIMELayout((unsigned int)a8, a9, &v35) )
    {
      return 0LL;
    }
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v48);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v39[0], a4, a5, v19, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      v21 = HMAllocObject(0LL, 0LL, 0xDu, 0x78u);
      v18 = v21;
      if ( v21 )
      {
        v39[1] = KeyboardLayoutFile;
        v39[0] = (void *)(v21 + 56);
        v40 = *(_OWORD *)v39;
        HMAssignmentLock((__int64)&v40);
        if ( *(_DWORD *)a6 )
        {
          v23 = Win32AllocPoolZInit(8LL * *(unsigned int *)a6, 0x746B7355u);
          *(_QWORD *)(v18 + 96) = v23;
          if ( v23 )
          {
            v24 = 0;
            v25 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v24 + 324] )
                {
                  a6[36 * v24 + 33] = 0;
                  v26 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v24 + 324],
                          *(_DWORD *)&a6[8 * v24 + 328],
                          *(_DWORD *)&a6[8 * v24 + 330],
                          (const unsigned __int16 *)(2LL * v24),
                          &a6[36 * v24 + 2],
                          *(_DWORD *)&a6[36 * v24 + 34],
                          *(_DWORD *)&a6[36 * v24 + 36]);
                  if ( !v26 )
                    break;
                  v27 = *(_QWORD *)(v18 + 96);
                  *((_QWORD *)&v38 + 1) = v26;
                  *(_QWORD *)&v38 = v27 + 8LL * v25;
                  v41 = v38;
                  HMAssignmentLock((__int64)&v41);
                  ++v25;
                }
                ++v24;
              }
              while ( v24 < *(_DWORD *)a6 );
              v15 = a9;
            }
            *(_DWORD *)(v18 + 88) = v25;
            v10 = (HKL)v36;
          }
        }
        v28 = SourceString[0];
        *(_DWORD *)(v18 + 32) = 0;
        *(_WORD *)(v18 + 74) = 0;
        *(_QWORD *)(v18 + 40) = a8;
        *(_QWORD *)(v18 + 16) = v18;
        *(_QWORD *)(v18 + 24) = v18;
        RtlInitUnicodeString(&DestinationString, v28);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v18 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v18 + 32) |= 0x80000000;
        SourceString[1] = *(PCWSTR *)(v18 + 56);
        SourceString[0] = (PCWSTR)(v18 + 48);
        v43 = *(_OWORD *)SourceString;
        HMAssignmentLock((__int64)&v43);
        v29 = *(_QWORD *)(v18 + 48);
        *(_DWORD *)(v18 + 104) = *(_DWORD *)(*(_QWORD *)(v29 + 32) + 96LL);
        *(_DWORD *)(v18 + 108) = *(_DWORD *)(*(_QWORD *)(v29 + 32) + 100LL);
        *(_DWORD *)(*(_QWORD *)(v29 + 32) + 80LL) |= (v15 >> 15) & 7;
        *(_QWORD *)(v18 + 80) = v35;
        if ( inited )
        {
          *(_WORD *)(v18 + 72) = v49;
          *(_DWORD *)(v18 + 64) = v50;
          *(_DWORD *)(v18 + 68) = v48;
        }
        else
        {
          *(_WORD *)(v18 + 72) = 0;
          *(_QWORD *)(v18 + 64) = 1LL;
        }
        v30 = *((_QWORD *)a1 + 5);
        if ( v30 )
        {
          *(_QWORD *)(v18 + 16) = v30;
          *(_QWORD *)(v18 + 24) = *(_QWORD *)(v30 + 24);
          *(_QWORD *)(*(_QWORD *)(v30 + 24) + 16LL) = v18;
          *(_QWORD *)(v30 + 24) = v18;
        }
        else
        {
          *(_QWORD *)&v36 = (char *)a1 + 40;
          *((_QWORD *)&v36 + 1) = v18;
          v44 = v36;
          HMAssignmentLock((__int64)&v44);
        }
        goto LABEL_48;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v35 )
      Win32FreePool(v35);
    return 0LL;
  }
  while ( 1 )
  {
    if ( *(_QWORD *)(v18 + 40) == (int)v12 )
    {
      v11 = *(unsigned int *)(v18 + 32);
      if ( (int)v11 >= 0 )
        break;
    }
    v18 = *(_QWORD *)(v18 + 16);
    if ( v18 == v17 )
      goto LABEL_19;
  }
  if ( (v11 & 0x20000000) != 0 )
  {
    v22 = (char *)qword_1C01A0E28 + dword_1C01A0E30 * (unsigned int)(unsigned __int16)*(_DWORD *)v18;
    v22[25] &= ~1u;
    *(_DWORD *)(v18 + 32) &= ~0x20000000u;
  }
  else if ( (a9 & 0x40000000) == 0 )
  {
    v15 = a9 & 0xFFFFFF7F;
  }
LABEL_48:
  v46[0] = *((_QWORD *)v13 + 51);
  *((_QWORD *)v13 + 51) = v46;
  v46[1] = v18;
  _InterlockedIncrement((volatile signed __int32 *)(v18 + 8));
  if ( v10 )
  {
    v31 = HKLtoPKL((__int64)v13, (__int64)v10);
    if ( v31 )
    {
      v47[0] = *((_QWORD *)v13 + 51);
      *((_QWORD *)v13 + 51) = v47;
      v47[1] = v31;
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 8));
      xxxSetPKLinThreads((struct tagKL *)v18, (struct tagKL *)v31);
      xxxInternalUnloadKeyboardLayout((struct tagKL **)a1, (struct tagKL *)v31, 0x80000000);
      ThreadUnlock1();
    }
  }
  if ( (v15 & 8) != 0 )
    ReorderKeyboardLayouts(a1, (struct tagKL *)v18);
  xxxWindowEvent(0x80000000LL, 0LL, 0LL);
  if ( (v15 & 0x80u) == 0 )
    ApiSetEditionNotifyShellLanguageHook(v13, 0LL, 0LL);
  if ( (v15 & 1) != 0 )
    xxxInternalActivateKeyboardLayout(v18, v15, 0LL);
  if ( (v15 & 0x40000000) != 0 )
  {
    SetGlobalKeyboardTableInfo(v18);
    *((_QWORD *)&v38 + 1) = v18;
    *(_QWORD *)&v38 = &gspklBaseLayout;
    v45 = v38;
    HMAssignmentLock((__int64)&v45);
    xxxSetPKLinThreads((struct tagKL *)v18, 0LL);
  }
  if ( (v15 & 0x80000000) != 0 && !gspklBaseLayout )
    SetGlobalKeyboardTableInfo(v18);
  v32 = ThreadUnlock1();
  if ( !v32 )
    return 0LL;
  return *(HKL *)(v32 + 40);
}
