/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0063FE4
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0063F00 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     ThreadUnlock1 @ 0x1C00250E0 (ThreadUnlock1.c)
 *     HMAllocObject @ 0x1C002DDE0 (HMAllocObject.c)
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     HMAssignmentLock @ 0x1C0031820 (HMAssignmentLock.c)
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 *     DestroyKF @ 0x1C0063BD0 (DestroyKF.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0063DFC (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0064468 (ApiSetEditionNotifyShellLanguageHook.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0064990 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C0064BC0 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0065680 (HKLtoPKL.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00659EC (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C0065C44 (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C0065E78 (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C0065EB8 (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C0066868 (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C014E00C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

HKL __fastcall xxxLoadKeyboardLayoutEx(
        struct tagWINDOWSTATION *a1,
        void *a2,
        HKL a3,
        unsigned int a4,
        unsigned int a5,
        wchar_t *a6,
        const unsigned __int16 *a7,
        unsigned int a8,
        unsigned int a9)
{
  signed int v9; // r13d
  int v10; // ebx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // r15
  unsigned int v14; // esi
  __int64 v15; // rbx
  __int64 v16; // rdx
  int v17; // eax
  char *v18; // rax
  __int64 v19; // rax
  struct tagKL *v21; // rax
  const unsigned __int16 *v22; // r9
  struct tagKBDFILE *KeyboardLayoutFile; // r12
  __int64 v24; // rax
  __int64 v25; // rax
  const WCHAR *v26; // rdx
  void *v27; // rax
  __int64 v28; // r12
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  void *v33; // rax
  unsigned int v34; // r12d
  unsigned int v35; // r13d
  struct tagKBDFILE *v36; // rax
  __int64 v37; // rcx
  __int64 v38; // r14
  void *v39[2]; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v40; // [rsp+50h] [rbp-B0h]
  unsigned int v41; // [rsp+54h] [rbp-ACh]
  unsigned int v42; // [rsp+58h] [rbp-A8h]
  int inited; // [rsp+5Ch] [rbp-A4h]
  __int64 v44; // [rsp+60h] [rbp-A0h] BYREF
  PCWSTR SourceString[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v46; // [rsp+80h] [rbp-80h]
  __int128 v47; // [rsp+90h] [rbp-70h] BYREF
  __int128 v48; // [rsp+A0h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v50[3]; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD v51[3]; // [rsp+D8h] [rbp-28h] BYREF
  int v52; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v53; // [rsp+F4h] [rbp-Ch]
  int v54; // [rsp+10Ch] [rbp+Ch]

  v9 = a8;
  v10 = (int)a3;
  v40 = a5;
  v12 = 0LL;
  SourceString[0] = a7;
  v41 = a4;
  *(_QWORD *)&v46 = a3;
  v39[0] = a2;
  v42 = a8;
  v44 = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 0LL;
  v13 = gptiCurrent;
  if ( a3 )
  {
    v12 = HKLtoPKL(gptiCurrent, a3);
    if ( !v12 )
      return 0LL;
  }
  if ( a8 == v10 )
    return *(HKL *)(v12 + 40);
  v14 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    if ( PsGetThreadProcessId(*(PETHREAD *)v13) != (HANDLE)gpidLogon )
    {
      UserSetLastError(1004LL);
      return 0LL;
    }
    if ( !a1 )
      MicrosoftTelemetryAssertTriggeredMsgKM("NULL pwinsta unexpected in Logon process");
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    while ( 1 )
    {
      v21 = (struct tagKL *)HKLtoPKL(gptiCurrent, 1LL);
      if ( !v21 )
        break;
      xxxInternalUnloadKeyboardLayout(a1, v21, 0x80000000);
    }
    v14 = a9;
  }
  if ( a1 )
    v15 = *((_QWORD *)a1 + 5);
  else
    v15 = gspklWinstaLessSessionLayouts;
  v16 = v15;
  if ( v15 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v15 + 40) == a8 )
      {
        v17 = *(_DWORD *)(v15 + 32);
        if ( v17 >= 0 )
          break;
      }
      v15 = *(_QWORD *)(v15 + 16);
      if ( v15 == v16 )
        goto LABEL_35;
    }
    if ( (v17 & 0x20000000) != 0 )
    {
      v18 = (char *)qword_1C01CBA58 + dword_1C01CBA60 * (unsigned int)(unsigned __int16)*(_DWORD *)v15;
      v18[25] &= ~1u;
      *(_DWORD *)(v15 + 32) &= ~0x20000000u;
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v14 &= ~0x80u;
    }
LABEL_14:
    v50[0] = *((_QWORD *)v13 + 52);
    *((_QWORD *)v13 + 52) = v50;
    v50[1] = v15;
    _InterlockedIncrement((volatile signed __int32 *)(v15 + 8));
    if ( (_QWORD)v46 )
    {
      v38 = HKLtoPKL(v13, v46);
      if ( v38 )
      {
        v51[0] = *((_QWORD *)v13 + 52);
        *((_QWORD *)v13 + 52) = v51;
        v51[1] = v38;
        _InterlockedIncrement((volatile signed __int32 *)(v38 + 8));
        xxxSetPKLinThreads((struct tagKL *)v15, (struct tagKL *)v38);
        xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v38, 0x80000000);
        ThreadUnlock1();
      }
    }
    if ( (v14 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v15);
    xxxWindowEvent(0x80000000LL, 0LL, 0LL, 0LL, 0);
    if ( (v14 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v13, 0LL, 0LL);
    if ( (v14 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(a1, v15, v14, 0LL);
    if ( (v14 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v15);
      *((_QWORD *)&v46 + 1) = v15;
      *(_QWORD *)&v46 = &gspklBaseLayout;
      *(_OWORD *)SourceString = v46;
      HMAssignmentLock((__int64)SourceString);
      xxxSetPKLinThreads((struct tagKL *)v15, 0LL);
    }
    if ( (v14 & 0x80000000) != 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo(v15);
    v19 = ThreadUnlock1();
    if ( v19 )
      return *(HKL *)(v19 + 40);
    return 0LL;
  }
LABEL_35:
  if ( (int)IsEditionResetIMELayoutSupported(v12, v16) < 0 || (unsigned int)EditionResetIMELayout(a8, v14, &v44) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], &v52);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v39[0], v41, v40, v22, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      v24 = HMAllocObject(0LL, 0LL, 0xDu, 0x80u);
      v15 = v24;
      if ( v24 )
      {
        v39[1] = KeyboardLayoutFile;
        v39[0] = (void *)(v24 + 56);
        v47 = *(_OWORD *)v39;
        HMAssignmentLock((__int64)&v47);
        v25 = *(unsigned int *)a6;
        if ( (_DWORD)v25 )
        {
          v33 = Win32AllocPoolZInit(8 * v25, 0x746B7355u);
          *(_QWORD *)(v15 + 96) = v33;
          if ( v33 )
          {
            v34 = 0;
            v35 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v34 + 324] )
                {
                  a6[36 * v34 + 33] = 0;
                  v36 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v34 + 324],
                          *(_DWORD *)&a6[8 * v34 + 328],
                          *(_DWORD *)&a6[8 * v34 + 330],
                          (const unsigned __int16 *)(2LL * v34),
                          &a6[36 * v34 + 2],
                          *(_DWORD *)&a6[36 * v34 + 34],
                          *(_DWORD *)&a6[36 * v34 + 36]);
                  if ( !v36 )
                    break;
                  v37 = *(_QWORD *)(v15 + 96);
                  v39[1] = v36;
                  v39[0] = (void *)(v37 + 8LL * v35);
                  v48 = *(_OWORD *)v39;
                  HMAssignmentLock((__int64)&v48);
                  ++v35;
                }
                ++v34;
              }
              while ( v34 < *(_DWORD *)a6 );
              v14 = a9;
            }
            *(_DWORD *)(v15 + 88) = v35;
            v9 = v42;
          }
        }
        v26 = SourceString[0];
        *(_DWORD *)(v15 + 32) = 0;
        *(_WORD *)(v15 + 74) = 0;
        *(_QWORD *)(v15 + 40) = v9;
        *(_QWORD *)(v15 + 16) = v15;
        *(_QWORD *)(v15 + 24) = v15;
        RtlInitUnicodeString(&DestinationString, v26);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v15 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v15 + 32) |= 0x80000000;
        v27 = *(void **)(v15 + 56);
        v28 = v15 + 48;
        v39[0] = (void *)(v15 + 48);
        v39[1] = v27;
        HMAssignmentLock((__int64)v39);
        v29 = *((_DWORD *)a6 + 195);
        if ( v29 )
        {
          v30 = *(_QWORD *)(v15 + 48);
        }
        else
        {
          v30 = *(_QWORD *)v28;
          v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 32LL) + 96LL);
        }
        *(_DWORD *)(v15 + 104) = v29;
        v31 = *((_DWORD *)a6 + 196);
        if ( !v31 )
          v31 = *(_DWORD *)(*(_QWORD *)(v30 + 32) + 100LL);
        *(_DWORD *)(v15 + 108) = v31;
        *(_DWORD *)(v15 + 116) = *((_DWORD *)a6 + 195);
        *(_DWORD *)(v15 + 120) = *((_DWORD *)a6 + 196);
        *(_DWORD *)(*(_QWORD *)(v30 + 32) + 80LL) |= (v14 >> 15) & 7;
        *(_QWORD *)(v15 + 80) = v44;
        if ( inited )
        {
          *(_WORD *)(v15 + 72) = v53;
          *(_DWORD *)(v15 + 64) = v54;
          *(_DWORD *)(v15 + 68) = v52;
        }
        else
        {
          *(_WORD *)(v15 + 72) = 0;
          *(_QWORD *)(v15 + 64) = 1LL;
        }
        if ( a1 )
          v32 = *((_QWORD *)a1 + 5);
        else
          v32 = gspklWinstaLessSessionLayouts;
        if ( v32 )
        {
          *(_QWORD *)(v15 + 16) = v32;
          *(_QWORD *)(v15 + 24) = *(_QWORD *)(v32 + 24);
          *(_QWORD *)(*(_QWORD *)(v32 + 24) + 16LL) = v15;
          *(_QWORD *)(v32 + 24) = v15;
        }
        else
        {
          LockKbdLayoutListHead(a1, (struct tagKL *)v15);
        }
        goto LABEL_14;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v44 )
      Win32FreePool(v44);
  }
  return 0LL;
}
