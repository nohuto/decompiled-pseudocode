/*
 * XREFs of CmpLoadHiveThread @ 0x140757530
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 *     RtlNumberOfSetBits @ 0x1400839F0 (RtlNumberOfSetBits.c)
 *     RtlAreBitsClear @ 0x140098F70 (RtlAreBitsClear.c)
 *     RtlSetAllBits @ 0x1401075D0 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SetFailureLocation @ 0x14027F760 (SetFailureLocation.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     HvUnlockHiveFlusherShared @ 0x14062D480 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x14062D4B4 (HvLockHiveFlusherShared.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpInitHiveFromFile @ 0x1406365F8 (CmpInitHiveFromFile.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     CmpGetFileSize @ 0x140660D44 (CmpGetFileSize.c)
 *     HvUnlockHiveFlusherExclusive @ 0x1406612E8 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140661320 (HvLockHiveFlusherExclusive.c)
 *     CmpDoFileSetSizeEx @ 0x140662D3C (CmpDoFileSetSizeEx.c)
 *     PsTerminateSystemThread @ 0x1406B85A0 (PsTerminateSystemThread.c)
 *     RtlAppendStringToString @ 0x14071B640 (RtlAppendStringToString.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140757AB8 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     HvpDropPagedBins @ 0x140757C20 (HvpDropPagedBins.c)
 *     CmpMarkCurrentValueDirty @ 0x140757E30 (CmpMarkCurrentValueDirty.c)
 *     CmpBecomeActiveFlusherAndReconciler @ 0x140757EFC (CmpBecomeActiveFlusherAndReconciler.c)
 *     CmpInitBackupHive @ 0x140831660 (CmpInitBackupHive.c)
 *     CmpLogFailureToGetFileSize @ 0x140833E74 (CmpLogFailureToGetFileSize.c)
 *     CmpDiskFullWarning @ 0x14083442C (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x140913EE0 (ExRaiseHardError.c)
 */

NTSTATUS __fastcall CmpLoadHiveThread(ULONG_PTR BugCheckParameter3)
{
  unsigned int v1; // r13d
  int v2; // edi
  __int64 v3; // r14
  ULONG_PTR inited; // rbx
  wchar_t *v5; // rsi
  ULONG_PTR v6; // rsi
  wchar_t *v7; // rcx
  int v9; // eax
  struct _KEVENT *v10; // r15
  __int64 v11; // r12
  STRING *v12; // r12
  unsigned int v13; // r15d
  HANDLE v14; // r12
  NTSTATUS FileSize; // eax
  __int64 v16; // rcx
  int v17; // ebx
  HANDLE v18; // r15
  NTSTATUS v19; // eax
  __int64 v20; // rcx
  int v21; // ebx
  __int128 v22; // xmm0
  __int64 v23; // rax
  ULONG v24; // ebx
  __int64 v25; // rax
  __int64 v26; // rax
  ULONG i; // r15d
  int v28; // eax
  int v29; // [rsp+38h] [rbp-D0h]
  int v30; // [rsp+40h] [rbp-C8h]
  char v31; // [rsp+58h] [rbp-B0h] BYREF
  int v32; // [rsp+5Ch] [rbp-ACh] BYREF
  ULONG Length[2]; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR v34; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE v35; // [rsp+70h] [rbp-98h] BYREF
  STRING *Source; // [rsp+78h] [rbp-90h]
  STRING *Source_8[2]; // [rsp+80h] [rbp-88h] BYREF
  int v38; // [rsp+90h] [rbp-78h] BYREF
  int v39; // [rsp+94h] [rbp-74h] BYREF
  _BYTE v40[8]; // [rsp+98h] [rbp-70h] BYREF
  HANDLE v41; // [rsp+A0h] [rbp-68h] BYREF
  HANDLE v42; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v43; // [rsp+B0h] [rbp-58h] BYREF
  STRING *v44; // [rsp+B8h] [rbp-50h] BYREF
  ULONG_PTR BugCheckParameter3a; // [rsp+C0h] [rbp-48h]
  ULONG_PTR BugCheckParameter2[44]; // [rsp+C8h] [rbp-40h] BYREF

  v1 = BugCheckParameter3;
  memset(BugCheckParameter2, 0, sizeof(BugCheckParameter2));
  v2 = 0;
  v3 = 19LL * v1;
  *(_QWORD *)Length = 0LL;
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
  if ( !v5 )
  {
    inited = (int)CmpInitHiveFromFile(
                    (PCUNICODE_STRING)&CmpMachineHiveList[v3 + 17],
                    (int)CmpMachineHiveList[v3 + 4],
                    &v34,
                    (char *)&CmpMachineHiveList[v3 + 7] + 3,
                    0x1090001u,
                    0LL,
                    v29,
                    v30,
                    (__int64)&v31,
                    BugCheckParameter2);
    if ( v1 == 6
      && !BYTE4(CmpMachineHiveList[v3 + 7])
      && ((_DWORD)inited == -1073741772 || (_DWORD)inited == -1073741765)
      || ((__int64)CmpMachineHiveList[v3 + 4] & 0x8000) != 0
      && !BYTE4(CmpMachineHiveList[v3 + 7])
      && (_DWORD)inited == -1073741772 )
    {
      LODWORD(inited) = 0;
    }
    else if ( (_DWORD)inited != -1073741431 || (CmpShutdownRundown & 1) == 0 )
    {
      if ( (inited & 0x80000000) != 0LL
        || (v6 = v34, ((__int64)CmpMachineHiveList[v3 + 4] & 0x8000) == 0)
        && (!*(_QWORD *)(v34 + 1568) || !*(_QWORD *)(v34 + 1576)) )
      {
        CmpPuntBoot = 1;
        KeBugCheckEx(0x74u, 2uLL, (ULONG_PTR)BugCheckParameter2, v1, inited);
      }
      *(_DWORD *)(v34 + 4152) = HIDWORD(CmpMachineHiveList[v3 + 4]) | 4;
      CmpMachineHiveList[v3 + 6] = (wchar_t *)v6;
      if ( v31 )
      {
        CmpInitRmLogOnLoad = 1;
        v10 = &stru_140424E50;
        v11 = 7LL;
        do
        {
          KeSetEvent(v10, 0, 0);
          v10 = (struct _KEVENT *)((char *)v10 + 152);
          --v11;
        }
        while ( v11 );
      }
      if ( (*(_DWORD *)(v6 + 160) & 0x8001) == 0
        && CmpDoIdleProcessing
        && (int)CmpInitBackupHive(v6, CmpMachineHiveList[v3]) < 0 )
      {
        CmpDoIdleProcessing = 0;
      }
    }
    goto LABEL_13;
  }
  v9 = *((_DWORD *)v5 + 40);
  v34 = (ULONG_PTR)v5;
  if ( (v9 & 0x8001) == 0 )
  {
    v12 = (STRING *)&CmpMachineHiveList[v3 + 17];
    Source = v12;
    LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v12, 0, &v35, &v32, 7u, 0LL, (__int64)Length, 0LL, 0LL);
    if ( (inited & 0x80000000) == 0LL )
    {
      v13 = (16 * (v32 == 2)) | 2;
      LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v12, 4u, &v41, &v38, v13, 0LL, 0LL, 0LL, 0LL);
      if ( (inited & 0x80000000) != 0LL )
      {
        v2 = 16;
      }
      else
      {
        LODWORD(inited) = CmpOpenHiveFile((UNICODE_STRING *)v12, 5u, &v42, &v39, v13, 0LL, 0LL, 0LL, 0LL);
        if ( (inited & 0x80000000) != 0LL )
        {
          v2 = 32;
        }
        else
        {
          LODWORD(inited) = CmpGetFileSize(v35, &v43);
          if ( (inited & 0x80000000) != 0LL )
          {
            v2 = 40;
          }
          else
          {
            v14 = v41;
            FileSize = CmpGetFileSize(v41, Source_8);
            v17 = FileSize;
            if ( FileSize < 0 )
            {
              CmpLogFailureToGetFileSize(v16, 4LL, (unsigned int)FileSize);
              *((_QWORD *)v5 + 7) = BugCheckParameter2;
              BugCheckParameter2[0] = (ULONG_PTR)v5;
              SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v17, 43);
              Source_8[0] = 0LL;
            }
            v18 = v42;
            v19 = CmpGetFileSize(v42, &Source_8[1]);
            v21 = v19;
            if ( v19 < 0 )
            {
              CmpLogFailureToGetFileSize(v20, 5LL, (unsigned int)v19);
              *((_QWORD *)v5 + 7) = BugCheckParameter2;
              BugCheckParameter2[0] = (ULONG_PTR)v5;
              SetFailureLocation((__int64)BugCheckParameter2, 1, 22, v21, 45);
              Source_8[1] = 0LL;
            }
            CmpBecomeActiveFlusherAndReconciler(v5);
            CmpLockRegistry();
            HvLockHiveFlusherExclusive((__int64)v5);
            v22 = *(_OWORD *)Source_8;
            *((_QWORD *)v5 + 192) = v35;
            v23 = v43;
            *((_QWORD *)v5 + 196) = v14;
            *((_QWORD *)v5 + 197) = v18;
            *((_QWORD *)v5 + 224) = v23;
            *(_OWORD *)(v5 + 900) = v22;
            *((_DWORD *)v5 + 40) &= ~2u;
            *((_DWORD *)v5 + 1038) = HIDWORD(CmpMachineHiveList[v3 + 4]);
            *((_DWORD *)v5 + 46) = Length[1];
            if ( (int)CmpDoFileSetSizeEx((__int64)v5, 0, (unsigned int)(*((_DWORD *)v5 + 68) + 4096), 1) < 0 )
              CmpCannotWriteConfiguration = 1;
            v24 = Length[0];
            if ( *((_DWORD *)v5 + 34) != Length[0] )
            {
              for ( i = 0; i < *((_DWORD *)v5 + 22); i += v24 )
              {
                if ( !RtlAreBitsClear((PRTL_BITMAP)(v5 + 44), i, v24) )
                  RtlSetBits((PRTL_BITMAP)(v5 + 44), i, v24);
              }
              *((_DWORD *)v5 + 26) = RtlNumberOfSetBits((PRTL_BITMAP)(v5 + 44));
              *((_DWORD *)v5 + 34) = v24;
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
            if ( v1 == 3 )
            {
              HvLockHiveFlusherShared((__int64)v5);
              CmpMarkCurrentValueDirty((ULONG_PTR)v5);
              HvUnlockHiveFlusherShared((__int64)v5);
            }
            CmpMachineHiveList[v3 + 6] = v5;
            LODWORD(inited) = HvpDropPagedBins((ULONG_PTR)v5);
            if ( (inited & 0x80000000) == 0LL )
            {
              CmpUnlockRegistry();
              CmpFinishBeingActiveFlusherAndReconciler(v5);
              v26 = *((_QWORD *)v5 + 8);
              if ( *(_DWORD *)(v26 + 4092) || (*(_DWORD *)(v26 + 4088) & 4) != 0 )
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
              if ( CmpDoIdleProcessing )
              {
                v28 = CmpInitBackupHive((ULONG_PTR)v5, CmpMachineHiveList[v3]);
                if ( v28 < 0 )
                  CmpDoIdleProcessing = 0;
              }
              goto LABEL_20;
            }
            v12 = Source;
            v2 = 80;
          }
        }
      }
    }
    *((_QWORD *)v5 + 7) = BugCheckParameter2;
    BugCheckParameter2[0] = (ULONG_PTR)v5;
    SetFailureLocation((__int64)BugCheckParameter2, 0, 22, inited, v2);
    v44 = v12;
    CmpPuntBoot = 1;
    ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&v44, 1, (__int64)v40);
    KeBugCheckEx(0x74u, 2uLL, 1uLL, BugCheckParameter3a, (int)inited);
  }
  if ( CmpMiniNTBoot || CmpVolatileBoot )
  {
    if ( (v9 & 2) != 0 )
    {
      CmpLockRegistry();
      HvLockHiveFlusherExclusive((__int64)v5);
      *((_DWORD *)v5 + 40) &= ~2u;
      HvUnlockHiveFlusherExclusive((__int64)v5);
      CmpUnlockRegistry();
    }
    *(_DWORD *)&SystemHiveFullPathName.Length = 0x800000;
    SystemHiveFullPathName.Buffer = (char *)&SystemHiveFullPathBuffer;
    RtlAppendStringToString(&SystemHiveFullPathName, (const STRING *)&CmpMachineHiveList[v3 + 17]);
  }
LABEL_20:
  *((_DWORD *)v5 + 1038) |= 4u;
  if ( v1 == 3 )
  {
    CmpLockRegistry();
    HvLockHiveFlusherShared((__int64)v5);
    *((_DWORD *)v5 + 40) |= 0x200u;
    HvUnlockHiveFlusherShared((__int64)v5);
    CmpUnlockRegistry();
  }
LABEL_13:
  BYTE1(CmpMachineHiveList[v3 + 7]) = 1;
  KeSetEvent((PRKEVENT)&CmpMachineHiveList[v3 + 11], 0, 0);
  if ( _InterlockedIncrement(&CmpLoadWorkerIncrement) == 6 && (unsigned int)CmpCheckHiveIndex < 7 )
    KeSetEvent(&CmpLoadWorkerDebugEvent, 0, 0);
  v7 = CmpMachineHiveList[v3 + 18];
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    CmpMachineHiveList[v3 + 17] = 0LL;
    CmpMachineHiveList[v3 + 18] = 0LL;
  }
  return PsTerminateSystemThread(inited);
}
