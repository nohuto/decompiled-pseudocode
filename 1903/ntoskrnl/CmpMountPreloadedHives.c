/*
 * XREFs of CmpMountPreloadedHives @ 0x140760BCC
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x14075DD80 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     RtlSetBits @ 0x140007660 (RtlSetBits.c)
 *     KeStackAttachProcess @ 0x140013AD0 (KeStackAttachProcess.c)
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     KeUnstackDetachProcess @ 0x14003A6B0 (KeUnstackDetachProcess.c)
 *     RtlNumberOfSetBits @ 0x1400839F0 (RtlNumberOfSetBits.c)
 *     PsGetServerSiloGlobals @ 0x14008D470 (PsGetServerSiloGlobals.c)
 *     RtlAreBitsClear @ 0x140098F70 (RtlAreBitsClear.c)
 *     RtlSetAllBits @ 0x1401075D0 (RtlSetAllBits.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     SetFailureLocation @ 0x14027F760 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1406344A4 (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 *     CmpInitializeActualFileSizes @ 0x140660C30 (CmpInitializeActualFileSizes.c)
 *     CmpDoFileSetSizeEx @ 0x140662D3C (CmpDoFileSetSizeEx.c)
 *     CmpInitCmRM @ 0x140697A28 (CmpInitCmRM.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406E97F4 (CmpQueryHiveRedirectionFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406EEA7C (CmRmFinalizeRecovery.c)
 *     HvpDropPagedBins @ 0x140757C20 (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x14083442C (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x140913EE0 (ExRaiseHardError.c)
 *     SyspartGetSystemPartition @ 0x140932BC8 (SyspartGetSystemPartition.c)
 */

void CmpMountPreloadedHives()
{
  int v0; // esi
  wchar_t *v1; // rbx
  __int64 v2; // rdi
  int v3; // eax
  __int64 HostSilo; // rax
  const WCHAR *v5; // rdx
  int SystemPartition; // ebx
  ULONG v7; // ebx
  unsigned int v8; // r13d
  ULONG i; // r15d
  int v10; // ebx
  PKRESOURCEMANAGER *v11; // rcx
  UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Source[4]; // [rsp+68h] [rbp-A0h] BYREF
  __int64 Length; // [rsp+70h] [rbp-98h] BYREF
  int v15; // [rsp+7Ch] [rbp-8Ch] BYREF
  int v16; // [rsp+80h] [rbp-88h] BYREF
  int v17; // [rsp+84h] [rbp-84h] BYREF
  HANDLE v18; // [rsp+88h] [rbp-80h] BYREF
  HANDLE v19; // [rsp+90h] [rbp-78h] BYREF
  HANDLE v20; // [rsp+98h] [rbp-70h] BYREF
  wchar_t *PoolWithTag; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING *p_Destination; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD v23[44]; // [rsp+B8h] [rbp-50h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+218h] [rbp+110h] BYREF

  v0 = 0;
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  *(_DWORD *)Source = 0;
  memset(v23, 0, sizeof(v23));
  memset(&ApcState, 0, sizeof(ApcState));
  Length = 0LL;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x62534D43u);
  v1 = PoolWithTag;
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v2 = CmpPreloadedHivesList;
  if ( (__int64 *)CmpPreloadedHivesList != &CmpPreloadedHivesList )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 - 1456) & 1) != 0 )
        goto LABEL_39;
      Destination.Buffer = v1;
      *(_QWORD *)&Destination.Length = 0x10000000LL;
      if ( !CmpQueryHiveRedirectionFileList((PUNICODE_STRING)(v2 + 232), &Destination) || Destination.Length == 2 )
        break;
LABEL_17:
      ExFreePoolWithTag(*(PVOID *)(v2 + 208), 0);
      *(_QWORD *)(v2 + 200) = 0LL;
      *(_WORD *)(v2 + 202) = 0;
      *(_QWORD *)(v2 + 208) = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination, 0, &v18, &v15, 7u, 0LL, (__int64)&Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 16;
LABEL_46:
        *(_QWORD *)(v2 - 1560) = v23;
        v23[0] = v2 - 1616;
        SetFailureLocation(*(_QWORD *)(v2 - 1560), 0, 21, SystemPartition, v0);
        CmpPuntBoot = 1;
        p_Destination = &Destination;
        ExRaiseHardError(-1073741288, 1, 1, (unsigned int)&p_Destination, 1, (__int64)&Source[2]);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2 - 1616, SystemPartition);
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 4u, &v19, &v16, 0x12u, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 32;
        goto LABEL_46;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 5u, &v20, &v17, 0x12u, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 48;
        goto LABEL_46;
      }
      v7 = Length;
      *(_QWORD *)(v2 - 80) = v18;
      *(_QWORD *)(v2 - 48) = v19;
      *(_QWORD *)(v2 - 40) = v20;
      *(_DWORD *)(v2 - 1456) &= ~2u;
      *(_DWORD *)(v2 - 1432) = HIDWORD(Length);
      v8 = *(_DWORD *)(v2 - 1344) + 4096;
      if ( *(_DWORD *)(v2 - 1480) != v7 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 1528); i += v7 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 - 1528), i, v7) )
            RtlSetBits((PRTL_BITMAP)(v2 - 1528), i, v7);
        }
        *(_DWORD *)(v2 - 1512) = RtlNumberOfSetBits((PRTL_BITMAP)(v2 - 1528));
        *(_DWORD *)(v2 - 1480) = v7;
      }
      SystemPartition = CmpInitializeActualFileSizes(v2 - 1616, &Source[2]);
      if ( SystemPartition < 0 )
      {
        v0 = 64;
        goto LABEL_46;
      }
      if ( (int)CmpDoFileSetSizeEx(v2 - 1616, 0, v8, 1) < 0 )
        CmpCannotWriteConfiguration = 1;
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) )
      {
        RtlSetAllBits((PRTL_BITMAP)(v2 - 1528));
        *(_DWORD *)(v2 - 1512) = *(_DWORD *)(v2 - 1528);
      }
      SystemPartition = HvpDropPagedBins(v2 - 1616);
      if ( SystemPartition < 0 )
      {
        v0 = 96;
        goto LABEL_46;
      }
      if ( *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) )
      {
        CmpUnlockRegistry();
        CmpFlushHive(v2 - 1616, 0xCu);
        CmpLockRegistryExclusive();
        *(_DWORD *)(*(_QWORD *)(v2 - 1552) + 4092LL) = 0;
      }
      if ( CmpCannotWriteConfiguration )
        CmpDiskFullWarning();
      v10 = *(_DWORD *)(v2 - 1456);
      *(_DWORD *)(v2 - 1456) = v10 & 0xFFFFF7FF;
      CmpUnlockRegistry();
      KeStackAttachProcess(PsInitialSystemProcess, &ApcState);
      CmpInitCmRM(v2 - 1616, (v10 & 0x800) != 0);
      KeUnstackDetachProcess(&ApcState);
      v11 = *(PKRESOURCEMANAGER **)(v2 + 2576);
      *(_DWORD *)(v2 + 2536) |= 8u;
      if ( v11 )
      {
        TmEnableCallbacks(v11[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v11);
        CmRmFinalizeRecovery(*(_QWORD *)(v2 + 2576));
      }
      CmpLockRegistryExclusive();
      v1 = PoolWithTag;
LABEL_39:
      *(_DWORD *)(v2 + 2536) |= 4u;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &CmpPreloadedHivesList )
        goto LABEL_3;
    }
    Destination.Buffer = v1;
    *(_QWORD *)&Destination.Length = 0x10000000LL;
    v3 = *(_DWORD *)(v2 - 1456);
    if ( (v3 & 0x1000) != 0 )
    {
      HostSilo = PsGetHostSilo();
      Source[0] = **((_WORD **)PsGetServerSiloGlobals(HostSilo) + 132);
      RtlAppendUnicodeToString(&Destination, L"\\??\\");
      RtlAppendUnicodeToString(&Destination, Source);
      v5 = L":";
    }
    else
    {
      if ( (v3 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(v1);
        if ( SystemPartition < 0 )
          goto LABEL_46;
        goto LABEL_16;
      }
      if ( (v3 & 0x200000) == 0 )
      {
LABEL_16:
        RtlAppendUnicodeToString(&Destination, *(PCWSTR *)(v2 + 208));
        goto LABEL_17;
      }
      v5 = L"\\OSDataRoot";
    }
    RtlAppendUnicodeToString(&Destination, v5);
    goto LABEL_16;
  }
LABEL_3:
  ExFreePoolWithTag(v1, 0);
}
