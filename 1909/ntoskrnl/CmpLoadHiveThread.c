/*
 * XREFs of CmpLoadHiveThread @ 0x14075BB10
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBits @ 0x1400076F0 (RtlSetBits.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     RtlNumberOfSetBits @ 0x140083DF0 (RtlNumberOfSetBits.c)
 *     RtlSetAllBits @ 0x1400D7250 (RtlSetAllBits.c)
 *     RtlAreBitsClear @ 0x1400ED610 (RtlAreBitsClear.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     CmpApplyAdminSdOnHiveFiles @ 0x1401BE7A4 (CmpApplyAdminSdOnHiveFiles.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     RtlUnicodeStringInit @ 0x14027F434 (RtlUnicodeStringInit.c)
 *     SetFailureLocation @ 0x14027F4C0 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x1405FF930 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x1405FFA40 (CmpAcquireShutdownRundown.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x14063725C (CmpFlushHive.c)
 *     CmpInitHiveFromFile @ 0x140639858 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x14068C5C0 (CmpDoFileSetSizeEx.c)
 *     CmpGetFileSize @ 0x14068FC4C (CmpGetFileSize.c)
 *     HvUnlockHiveFlusherExclusive @ 0x14068FF8C (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x14068FFC4 (HvLockHiveFlusherExclusive.c)
 *     PsTerminateSystemThread @ 0x1406ADC90 (PsTerminateSystemThread.c)
 *     RtlAppendStringToString @ 0x14071D430 (RtlAppendStringToString.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14075C34C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x14075C4B4 (HvpDropPagedBins.c)
 *     CmpMarkCurrentValueDirty @ 0x14075C6C4 (CmpMarkCurrentValueDirty.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x14075C790 (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpInitBackupHive @ 0x14082D274 (CmpInitBackupHive.c)
 *     CmpIsShutdownRundownActive @ 0x1408320A8 (CmpIsShutdownRundownActive.c)
 *     CmpLogFailureToGetFileSize @ 0x1408334D4 (CmpLogFailureToGetFileSize.c)
 *     CmpDiskFullWarning @ 0x140833A8C (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x140913940 (ExRaiseHardError.c)
 */

NTSTATUS __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // r15d
  int v2; // edi
  __int64 v3; // r14
  ULONG_PTR inited; // rbx
  wchar_t *v5; // rsi
  int v6; // ecx
  struct _KEVENT *v7; // r15
  __int64 v8; // r12
  _DWORD *v9; // r15
  int v10; // eax
  STRING *v11; // r13
  unsigned int v12; // r12d
  HANDLE v13; // r13
  NTSTATUS FileSize; // eax
  __int64 v15; // rcx
  int v16; // ebx
  HANDLE v17; // r12
  NTSTATUS v18; // eax
  __int64 v19; // rcx
  int v20; // ebx
  __int128 v21; // xmm0
  __int64 v22; // rax
  ULONG v23; // ebx
  ULONG i; // r12d
  __int64 v25; // rax
  int v26; // r12d
  __int64 v27; // rax
  int v28; // eax
  wchar_t *v29; // rcx
  int v31; // [rsp+38h] [rbp-D0h]
  int v32; // [rsp+40h] [rbp-C8h]
  char v33; // [rsp+58h] [rbp-B0h] BYREF
  int v34; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG Length[2]; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR v36; // [rsp+68h] [rbp-A0h]
  ULONG_PTR v37; // [rsp+70h] [rbp-98h] BYREF
  HANDLE v38; // [rsp+78h] [rbp-90h] BYREF
  STRING *Source; // [rsp+80h] [rbp-88h]
  __int128 v40; // [rsp+88h] [rbp-80h] BYREF
  int v41; // [rsp+98h] [rbp-70h]
  int v42; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v43; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v44[4]; // [rsp+A4h] [rbp-64h] BYREF
  HANDLE v45; // [rsp+A8h] [rbp-60h] BYREF
  HANDLE v46; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v47; // [rsp+B8h] [rbp-50h] BYREF
  STRING *v48; // [rsp+C0h] [rbp-48h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+C8h] [rbp-40h]
  ULONG_PTR BugCheckParameter2[44]; // [rsp+D8h] [rbp-30h] BYREF

  v1 = BugCheckParameter3;
  v36 = BugCheckParameter3;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v2 = 0;
  v3 = 19LL * v1;
  *(_QWORD *)Length = 0LL;
  v41 = 0;
  BugCheckParameter3a = v1;
  LODWORD(inited) = 0;
  KeWaitForSingleObject(&CmpMachineHiveList[v3 + 8], Executive, 0, 0, 0LL);
  if ( v1 == CmpCheckHiveIndex )
  {
    KeWaitForSingleObject(&CmpLoadWorkerDebugEvent, Executive, 0, 0, 0LL);
    if ( (_BYTE)KdDebuggerEnabled )
    {
      if ( !(_BYTE)KdDebuggerNotPresent )
        __debugbreak();
    }
  }
  v5 = CmpMachineHiveList[v3 + 3];
  BYTE2(CmpMachineHiveList[v3 + 7]) = 1;
  if ( v5 )
  {
    v9 = v5 + 80;
    v37 = (ULONG_PTR)v5;
    v10 = *((_DWORD *)v5 + 40);
    if ( (v10 & 0x8001) != 0 )
    {
      if ( CmpMiniNTBoot || CmpVolatileBoot )
      {
        if ( (v10 & 2) != 0 )
        {
          CmpLockRegistry();
          HvLockHiveFlusherExclusive((__int64)v5);
          *v9 &= ~2u;
          HvUnlockHiveFlusherExclusive((__int64)v5);
          CmpUnlockRegistry();
        }
        *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
        SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
        RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v3 + 17]);
      }
      v26 = v36;
    }
    else
    {
      v11 = (STRING *)&CmpMachineHiveList[v3 + 17];
      Source = v11;
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v11, 0, &v38, &v34, 7u, 0LL, (__int64)Length, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
        goto LABEL_83;
      v12 = (16 * (v34 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v11, 4u, &v45, &v42, v12, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        v2 = 16;
        goto LABEL_83;
      }
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v11, 5u, &v46, &v43, v12, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        v2 = 32;
        goto LABEL_83;
      }
      LODWORD(inited) = CmpGetFileSize(v38, &v47);
      if ( (inited & 0x80000000) != 0LL )
      {
        v2 = 40;
        goto LABEL_83;
      }
      v13 = v45;
      FileSize = CmpGetFileSize(v45, &v40);
      v16 = FileSize;
      if ( FileSize < 0 )
      {
        CmpLogFailureToGetFileSize(v15, 4LL, (unsigned int)FileSize);
        *((_QWORD *)v5 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v5;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v16, 43);
        *(_QWORD *)&v40 = 0LL;
      }
      v17 = v46;
      v18 = CmpGetFileSize(v46, (_QWORD *)&v40 + 1);
      v20 = v18;
      if ( v18 < 0 )
      {
        CmpLogFailureToGetFileSize(v19, 5LL, (unsigned int)v18);
        *((_QWORD *)v5 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v5;
        SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v20, 45);
        *((_QWORD *)&v40 + 1) = 0LL;
      }
      CmpBecomeActiveFlusherAndReconciler(v5);
      CmpLockRegistry();
      HvLockHiveFlusherExclusive((__int64)v5);
      v21 = v40;
      *((_QWORD *)v5 + 192) = v38;
      v22 = v47;
      *((_QWORD *)v5 + 196) = v13;
      *((_QWORD *)v5 + 197) = v17;
      *((_QWORD *)v5 + 224) = v22;
      *(_OWORD *)(v5 + 900) = v21;
      *v9 &= ~2u;
      *((_DWORD *)v5 + 1038) = HIDWORD(CmpMachineHiveList[v3 + 4]);
      *((_DWORD *)v5 + 46) = Length[1];
      if ( (int)CmpDoFileSetSizeEx((__int64)v5, 0, (unsigned int)(*((_DWORD *)v5 + 68) + 4096), 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      v23 = Length[0];
      if ( *((_DWORD *)v5 + 34) != Length[0] )
      {
        for ( i = 0; i < *((_DWORD *)v5 + 22); i += v23 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v5 + 44), i, v23) )
            RtlSetBits((PRTL_BITMAP)(v5 + 44), i, v23);
        }
        *((_DWORD *)v5 + 26) = RtlNumberOfSetBits((PRTL_BITMAP)(v5 + 44));
        *((_DWORD *)v5 + 34) = v23;
      }
      v25 = *((_QWORD *)v5 + 8);
      if ( *(_DWORD *)(v25 + 4092) || (*(_DWORD *)(v25 + 4088) & 4) != 0 )
      {
        RtlSetAllBits((PRTL_BITMAP)(v5 + 44));
        *((_DWORD *)v5 + 26) = *((_DWORD *)v5 + 22);
      }
      HvUnlockHiveFlusherExclusive((__int64)v5);
      CmpUnlockRegistry();
      CmpLockRegistryExclusive();
      v26 = v36;
      if ( (_DWORD)v36 == 3 )
      {
        HvLockHiveFlusherShared((__int64)v5);
        CmpMarkCurrentValueDirty((ULONG_PTR)v5);
        HvUnlockHiveFlusherShared((__int64)v5);
      }
      CmpMachineHiveList[v3 + 6] = v5;
      LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v5);
      if ( (inited & 0x80000000) != 0LL )
      {
        v11 = Source;
        v2 = 80;
LABEL_83:
        *((_QWORD *)v5 + 7) = BugCheckParameter2;
        BugCheckParameter2[0] = (ULONG_PTR)v5;
        SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, v2);
        v48 = v11;
        CmpPuntBoot = 1;
        ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&v48, 1, (__int64)v44);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3a, (int)inited);
      }
      CmpUnlockRegistry();
      CmpFinishBeingActiveFlusherAndReconciler(v5);
      v27 = *((_QWORD *)v5 + 8);
      if ( *(_DWORD *)(v27 + 4092) || (*(_DWORD *)(v27 + 4088) & 4) != 0 )
      {
        CmpFlushHive((ULONG_PTR)v5, 0xCu);
        CmpLockRegistry();
        HvLockHiveFlusherExclusive((__int64)v5);
        *(_DWORD *)(*((_QWORD *)v5 + 8) + 4092LL) = 0;
        *(_DWORD *)(*((_QWORD *)v5 + 8) + 4088LL) &= ~4u;
        HvUnlockHiveFlusherExclusive((__int64)v5);
        CmpUnlockRegistry();
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
      *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
      RtlAppendStringToString(&SystemHiveFullPathName, Source);
      if ( CmpDoIdleProcessing && (int)CmpInitBackupHive(v5, CmpMachineHiveList[v3]) < 0 )
        CmpDoIdleProcessing = 0;
    }
    *((_DWORD *)v5 + 1038) |= 4u;
    if ( v26 == 3 )
    {
      CmpLockRegistry();
      HvLockHiveFlusherShared((__int64)v5);
      *v9 |= 0x200u;
      HvUnlockHiveFlusherShared((__int64)v5);
      CmpUnlockRegistry();
    }
    goto LABEL_69;
  }
  inited = (int)CmpInitHiveFromFile(
                  (PCUNICODE_STRING)&CmpMachineHiveList[v3 + 17],
                  (int)CmpMachineHiveList[v3 + 4],
                  &v37,
                  (char *)&CmpMachineHiveList[v3 + 7] + 3,
                  0x1090001u,
                  0LL,
                  v31,
                  v32,
                  (__int64)&v33,
                  BugCheckParameter2);
  if ( v1 == 6 && !BYTE4(CmpMachineHiveList[v3 + 7]) && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
    || (v6 = 0x8000, ((__int64)CmpMachineHiveList[v3 + 4] & 0x8000) != 0)
    && !BYTE4(CmpMachineHiveList[v3 + 7])
    && (_DWORD)inited == -1073741772 )
  {
    LODWORD(inited) = 0;
    goto LABEL_75;
  }
  if ( (_DWORD)inited != -1073741431 || !(unsigned __int8)CmpIsShutdownRundownActive(0x8000LL, 3221225524LL) )
  {
    if ( (inited & 0x80000000) != 0LL
      || (v5 = (wchar_t *)v37, (v6 & (__int64)CmpMachineHiveList[v3 + 4]) == 0)
      && (!*(_QWORD *)(v37 + 1568) || !*(_QWORD *)(v37 + 1576)) )
    {
      CmpPuntBoot = 1;
      KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v1, inited);
    }
    *(_DWORD *)(v37 + 4152) = HIDWORD(CmpMachineHiveList[v3 + 4]) | 4;
    CmpMachineHiveList[v3 + 6] = v5;
    if ( v33 )
    {
      v7 = &stru_140424E50;
      CmpInitRmLogOnLoad = 1;
      v8 = 7LL;
      do
      {
        KeSetEvent(v7, 0, 0);
        v7 = (struct _KEVENT *)((char *)v7 + 152);
        --v8;
      }
      while ( v8 );
    }
    v9 = v5 + 80;
    if ( (*((_DWORD *)v5 + 40) & 0x8001) == 0
      && CmpDoIdleProcessing
      && (int)CmpInitBackupHive(v5, CmpMachineHiveList[v3]) < 0 )
    {
      CmpDoIdleProcessing = 0;
    }
LABEL_69:
    if ( (unsigned __int8)CmpAcquireShutdownRundown() )
    {
      if ( (*v9 & 0x8001) == 0 )
      {
        if ( *((_QWORD *)v5 + 192) )
        {
          v28 = CmpApplyAdminSdOnHiveFiles((ULONG_PTR)v5, (ULONG_PTR)CmpMachineHiveList[v3]);
          LODWORD(inited) = v28;
          if ( v28 < 0 )
            KeBugCheckEx(0x51u, 0x13uLL, (ULONG_PTR)v5, (ULONG_PTR)CmpMachineHiveList[v3], v28);
        }
      }
      CmpReleaseShutdownRundown();
    }
    else
    {
      LODWORD(inited) = -1073741431;
    }
  }
LABEL_75:
  BYTE1(CmpMachineHiveList[v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v3 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v29 = CmpMachineHiveList[v3 + 18];
  if ( v29 )
  {
    ExFreePoolWithTag(v29, 0);
    RtlUnicodeStringInit((PUNICODE_STRING)&CmpMachineHiveList[v3 + 17], 0LL);
  }
  return PsTerminateSystemThread(inited);
}
