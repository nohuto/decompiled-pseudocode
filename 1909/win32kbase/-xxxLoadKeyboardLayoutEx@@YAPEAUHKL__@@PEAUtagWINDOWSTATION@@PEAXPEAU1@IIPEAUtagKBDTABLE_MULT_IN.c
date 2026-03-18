/*
 * XREFs of ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0073634
 * Callers:
 *     xxxSafeLoadKeyboardLayoutEx @ 0x1C0073550 (xxxSafeLoadKeyboardLayoutEx.c)
 * Callees:
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C0012FC0 (Win32AllocPoolZInit.c)
 *     HMAssignmentLock @ 0x1C0024280 (HMAssignmentLock.c)
 *     ThreadUnlock1 @ 0x1C0026330 (ThreadUnlock1.c)
 *     HMAllocObject @ 0x1C0028410 (HMAllocObject.c)
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C002D794 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0073198 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ApiSetEditionNotifyShellLanguageHook @ 0x1C0073AF0 (ApiSetEditionNotifyShellLanguageHook.c)
 *     SetGlobalKeyboardTableInfo @ 0x1C0074090 (SetGlobalKeyboardTableInfo.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00743B0 (xxxInternalActivateKeyboardLayout.c)
 *     HKLtoPKL @ 0x1C0074EE0 (HKLtoPKL.c)
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C007503C (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     ApiSetEditionFreeIMEKeyboardLayouts @ 0x1C0075294 (ApiSetEditionFreeIMEKeyboardLayouts.c)
 *     ?LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z @ 0x1C007547C (-LockKbdLayoutListHead@@YAPEAUtagKL@@PEAUtagWINDOWSTATION@@PEAU1@@Z.c)
 *     ?LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z @ 0x1C00754BC (-LoadKeyboardLayoutFile@@YAPEAUtagKBDFILE@@PEAXIIPEBGPEAGKK@Z.c)
 *     ApiSetEditionInitSystemCharsetInfoForLayout @ 0x1C0075E7C (ApiSetEditionInitSystemCharsetInfoForLayout.c)
 *     DestroyKF @ 0x1C00B73C0 (DestroyKF.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 *     memset @ 0x1C00BF640 (memset.c)
 *     ?ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z @ 0x1C017E28C (-ReorderKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@PEAUtagKL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  struct tagTHREADINFO *v15; // r12
  unsigned int v16; // esi
  __int64 v17; // rbx
  __int64 v18; // rdx
  int v19; // eax
  char *v20; // rax
  __int64 v21; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  struct tagKL *v26; // rax
  const unsigned __int16 *v27; // r9
  __int64 v28; // r8
  struct tagKBDFILE *KeyboardLayoutFile; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  const WCHAR *v32; // rdx
  __int64 v33; // r15
  int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rcx
  void *v38; // rax
  unsigned int v39; // r15d
  unsigned int v40; // r13d
  struct tagKBDFILE *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r14
  int inited; // [rsp+4Ch] [rbp-B4h]
  __int64 v48; // [rsp+50h] [rbp-B0h] BYREF
  PCWSTR SourceString[2]; // [rsp+60h] [rbp-A0h]
  void *v50[2]; // [rsp+70h] [rbp-90h]
  HKL v51; // [rsp+80h] [rbp-80h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  __int64 v53; // [rsp+98h] [rbp-68h] BYREF
  __int64 v54; // [rsp+A0h] [rbp-60h]
  __int64 v55; // [rsp+A8h] [rbp-58h]
  __int128 v56; // [rsp+B0h] [rbp-50h]
  __int128 v57; // [rsp+C0h] [rbp-40h]
  _QWORD v58[4]; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v59; // [rsp+F0h] [rbp-10h] BYREF
  __int128 v60; // [rsp+100h] [rbp+0h] BYREF
  __int128 v61; // [rsp+110h] [rbp+10h] BYREF
  __int128 v62; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v63[16]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v64[16]; // [rsp+140h] [rbp+40h] BYREF
  _BYTE v65[16]; // [rsp+150h] [rbp+50h] BYREF
  _DWORD v66[8]; // [rsp+160h] [rbp+60h] BYREF

  v9 = a8;
  v12 = 0LL;
  v51 = a3;
  v50[0] = a2;
  SourceString[0] = a7;
  memset(v66, 0, sizeof(v66));
  v48 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( !a8 || a1 && (*((_DWORD *)a1 + 8) & 4) != 0 )
    return 0LL;
  v15 = gptiCurrent;
  if ( a3 )
  {
    v12 = HKLtoPKL(gptiCurrent, a3);
    if ( !v12 )
      return 0LL;
  }
  if ( a8 == (_DWORD)a3 )
    return *(HKL *)(v12 + 40);
  v16 = a9;
  if ( (a9 & 0x40000000) != 0 )
  {
    if ( PsGetThreadProcessId(*(PETHREAD *)v15) != (HANDLE)gpidLogon )
    {
      UserSetLastError(1004LL, v23);
      return 0LL;
    }
    if ( !a1 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v25);
    ApiSetEditionFreeIMEKeyboardLayouts(a1);
    while ( 1 )
    {
      v26 = (struct tagKL *)HKLtoPKL(gptiCurrent, 1LL);
      if ( !v26 )
        break;
      xxxInternalUnloadKeyboardLayout(a1, v26, 0x80000000LL);
    }
  }
  if ( a1 )
    v17 = *((_QWORD *)a1 + 5);
  else
    v17 = gspklWinstaLessSessionLayouts;
  v18 = v17;
  if ( v17 )
  {
    while ( 1 )
    {
      if ( *(_QWORD *)(v17 + 40) == a8 )
      {
        v19 = *(_DWORD *)(v17 + 32);
        if ( v19 >= 0 )
          break;
      }
      v17 = *(_QWORD *)(v17 + 16);
      if ( v17 == v18 )
        goto LABEL_34;
    }
    if ( (v19 & 0x20000000) != 0 )
    {
      CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
        (__int64)v63,
        v18,
        v14);
      v20 = (char *)qword_1C0210758 + dword_1C0210760 * (unsigned int)(unsigned __int16)*(_DWORD *)v17;
      v20[25] &= ~1u;
      *(_DWORD *)(v17 + 32) &= ~0x20000000u;
    }
    else if ( (a9 & 0x40000000) == 0 )
    {
      v16 = a9 & 0xFFFFFF7F;
    }
LABEL_14:
    v53 = *((_QWORD *)v15 + 51);
    *((_QWORD *)v15 + 51) = &v53;
    v54 = v17;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
      (__int64)v64,
      v18,
      v14);
    _InterlockedIncrement((volatile signed __int32 *)(v17 + 8));
    if ( v51 )
    {
      v45 = HKLtoPKL(v15, v51);
      if ( v45 )
      {
        v58[0] = *((_QWORD *)v15 + 51);
        v58[2] = 0LL;
        *((_QWORD *)v15 + 51) = v58;
        v58[1] = v45;
        CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
          (__int64)v65,
          v43,
          v44);
        _InterlockedIncrement((volatile signed __int32 *)(v45 + 8));
        xxxSetPKLinThreads((struct tagKL *)v17, (struct tagKL *)v45);
        xxxInternalUnloadKeyboardLayout(a1, (struct tagKL *)v45, 0x80000000LL);
        ThreadUnlock1();
      }
    }
    if ( (v16 & 8) != 0 )
      ReorderKeyboardLayouts(a1, (struct tagKL *)v17);
    xxxWindowEvent(0x80000000LL, 0LL, 0LL);
    if ( (v16 & 0x80u) == 0 )
      ApiSetEditionNotifyShellLanguageHook(v15, 0LL, 0LL);
    if ( (v16 & 1) != 0 )
      xxxInternalActivateKeyboardLayout(a1, v17, v16, 0LL);
    if ( (v16 & 0x40000000) != 0 )
    {
      SetGlobalKeyboardTableInfo(v17);
      *((_QWORD *)&v57 + 1) = v17;
      *(_QWORD *)&v57 = &gspklBaseLayout;
      v62 = v57;
      HMAssignmentLock((__int64 **)&v62);
      xxxSetPKLinThreads((struct tagKL *)v17, 0LL);
    }
    if ( (v16 & 0x80000000) != 0 && !gspklBaseLayout )
      SetGlobalKeyboardTableInfo(v17);
    v21 = ThreadUnlock1();
    if ( v21 )
      return *(HKL *)(v21 + 40);
    return 0LL;
  }
LABEL_34:
  if ( (int)IsEditionResetIMELayoutSupported(v13, v18) < 0 || (unsigned int)EditionResetIMELayout(a8, a9, &v48) )
  {
    inited = ApiSetEditionInitSystemCharsetInfoForLayout(SourceString[0], v66);
    KeyboardLayoutFile = LoadKeyboardLayoutFile(v50[0], a4, a5, v27, a6 + 290, 0, 0);
    if ( KeyboardLayoutFile )
    {
      LOBYTE(v28) = 13;
      v30 = HMAllocObject(0LL, 0LL, v28, 0x80u);
      v17 = v30;
      if ( v30 )
      {
        v50[1] = KeyboardLayoutFile;
        v50[0] = (void *)(v30 + 56);
        v59 = *(_OWORD *)v50;
        HMAssignmentLock((__int64 **)&v59);
        v31 = *(unsigned int *)a6;
        if ( (_DWORD)v31 )
        {
          v38 = Win32AllocPoolZInit(8 * v31, 1953198933LL);
          *(_QWORD *)(v17 + 96) = v38;
          if ( v38 )
          {
            v39 = 0;
            v40 = 0;
            if ( *(_DWORD *)a6 )
            {
              do
              {
                if ( *(_QWORD *)&a6[8 * v39 + 324] )
                {
                  a6[36 * v39 + 33] = 0;
                  v41 = LoadKeyboardLayoutFile(
                          *(void **)&a6[8 * v39 + 324],
                          *(_DWORD *)&a6[8 * v39 + 328],
                          *(_DWORD *)&a6[8 * v39 + 330],
                          (const unsigned __int16 *)(2LL * v39),
                          &a6[36 * v39 + 2],
                          *(_DWORD *)&a6[36 * v39 + 34],
                          *(_DWORD *)&a6[36 * v39 + 36]);
                  if ( !v41 )
                    break;
                  v42 = *(_QWORD *)(v17 + 96);
                  *((_QWORD *)&v56 + 1) = v41;
                  *(_QWORD *)&v56 = v42 + 8LL * v40;
                  v60 = v56;
                  HMAssignmentLock((__int64 **)&v60);
                  ++v40;
                }
                ++v39;
              }
              while ( v39 < *(_DWORD *)a6 );
              v16 = a9;
            }
            *(_DWORD *)(v17 + 88) = v40;
            v9 = a8;
          }
        }
        v32 = SourceString[0];
        *(_DWORD *)(v17 + 32) = 0;
        *(_WORD *)(v17 + 74) = 0;
        *(_QWORD *)(v17 + 40) = v9;
        *(_QWORD *)(v17 + 16) = v17;
        *(_QWORD *)(v17 + 24) = v17;
        RtlInitUnicodeString(&DestinationString, v32);
        RtlUnicodeStringToInteger(&DestinationString, 0x10u, (PULONG)(v17 + 112));
        if ( (*((_DWORD *)a6 + 194) & 1) != 0 )
          *(_DWORD *)(v17 + 32) |= 0x80000000;
        v33 = v17 + 48;
        SourceString[1] = *(PCWSTR *)(v17 + 56);
        SourceString[0] = (PCWSTR)(v17 + 48);
        v61 = *(_OWORD *)SourceString;
        HMAssignmentLock((__int64 **)&v61);
        v34 = *((_DWORD *)a6 + 195);
        if ( v34 )
        {
          v35 = *(_QWORD *)(v17 + 48);
        }
        else
        {
          v35 = *(_QWORD *)v33;
          v34 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v33 + 32LL) + 96LL);
        }
        *(_DWORD *)(v17 + 104) = v34;
        v36 = *((_DWORD *)a6 + 196);
        if ( !v36 )
          v36 = *(_DWORD *)(*(_QWORD *)(v35 + 32) + 100LL);
        *(_DWORD *)(v17 + 108) = v36;
        *(_DWORD *)(v17 + 116) = *((_DWORD *)a6 + 195);
        *(_DWORD *)(v17 + 120) = *((_DWORD *)a6 + 196);
        *(_DWORD *)(*(_QWORD *)(v35 + 32) + 80LL) |= (v16 >> 15) & 7;
        *(_QWORD *)(v17 + 80) = v48;
        if ( inited )
        {
          *(_WORD *)(v17 + 72) = v66[1];
          *(_DWORD *)(v17 + 64) = v66[7];
          *(_DWORD *)(v17 + 68) = v66[0];
        }
        else
        {
          *(_WORD *)(v17 + 72) = 0;
          *(_QWORD *)(v17 + 64) = 1LL;
        }
        if ( a1 )
          v37 = *((_QWORD *)a1 + 5);
        else
          v37 = gspklWinstaLessSessionLayouts;
        if ( v37 )
        {
          *(_QWORD *)(v17 + 16) = v37;
          *(_QWORD *)(v17 + 24) = *(_QWORD *)(v37 + 24);
          *(_QWORD *)(*(_QWORD *)(v37 + 24) + 16LL) = v17;
          *(_QWORD *)(v37 + 24) = v17;
        }
        else
        {
          LockKbdLayoutListHead(a1, (struct tagKL *)v17);
        }
        goto LABEL_14;
      }
      DestroyKF(KeyboardLayoutFile);
    }
    if ( v48 )
      Win32FreePool(v48);
  }
  return 0LL;
}
