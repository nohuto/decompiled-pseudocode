/*
 * XREFs of CmpMountPreloadedHives @ 0x1407369D0
 * Callers:
 *     CmpFinishSystemHivesLoad @ 0x140733770 (CmpFinishSystemHivesLoad.c)
 * Callees:
 *     RtlAreBitsClear @ 0x14000F1D0 (RtlAreBitsClear.c)
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     RtlSetBits @ 0x140076D70 (RtlSetBits.c)
 *     PsGetHostSilo @ 0x140091BB0 (PsGetHostSilo.c)
 *     PsGetServerSiloGlobals @ 0x1400922CC (PsGetServerSiloGlobals.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SetFailureLocation @ 0x14026BD48 (SetFailureLocation.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpInitializeActualFileSizes @ 0x1405A7144 (CmpInitializeActualFileSizes.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpInitCmRM @ 0x1406804A8 (CmpInitCmRM.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 *     CmpQueryHiveRedirectionFileList @ 0x1406CA164 (CmpQueryHiveRedirectionFileList.c)
 *     CmRmFinalizeRecovery @ 0x1406CEEC8 (CmRmFinalizeRecovery.c)
 *     HvpDropPagedBins @ 0x140737784 (HvpDropPagedBins.c)
 *     CmpDiskFullWarning @ 0x1407FC264 (CmpDiskFullWarning.c)
 *     ExRaiseHardError @ 0x1408D78A0 (ExRaiseHardError.c)
 *     SyspartGetSystemPartition @ 0x1408F6178 (SyspartGetSystemPartition.c)
 */

void CmpMountPreloadedHives()
{
  int v0; // esi
  wchar_t *PoolWithTag; // r13
  __int64 v2; // rdi
  int v3; // eax
  __int64 HostSilo; // rax
  const WCHAR *v5; // rdx
  int SystemPartition; // ebx
  ULONG v7; // ebx
  unsigned int v8; // r15d
  ULONG i; // r15d
  ULONG v10; // eax
  int v11; // ebx
  PKRESOURCEMANAGER *v12; // rcx
  UNICODE_STRING Destination; // [rsp+58h] [rbp-B0h] BYREF
  int Source; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v15; // [rsp+6Ch] [rbp-9Ch]
  __int64 v16; // [rsp+70h] [rbp-98h] BYREF
  ULONG Length[2]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING *p_Destination; // [rsp+80h] [rbp-88h] BYREF
  int v19; // [rsp+8Ch] [rbp-7Ch] BYREF
  int v20; // [rsp+90h] [rbp-78h] BYREF
  int v21; // [rsp+94h] [rbp-74h] BYREF
  HANDLE v22; // [rsp+98h] [rbp-70h] BYREF
  HANDLE v23; // [rsp+A0h] [rbp-68h] BYREF
  _QWORD v24[44]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v25[48]; // [rsp+208h] [rbp+100h] BYREF

  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  Source = 0;
  memset(v24, 0, sizeof(v24));
  *(_QWORD *)Length = 0LL;
  v0 = 0;
  PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x62534D43u);
  if ( !PoolWithTag )
    KeBugCheckEx(0x74u, 2uLL, 1uLL, 0LL, 0xFFFFFFFFC000009AuLL);
  v2 = CmpPreloadedHivesList;
  if ( (__int64 *)CmpPreloadedHivesList != &CmpPreloadedHivesList )
  {
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 - 1456) & 1) != 0 )
        goto LABEL_39;
      Destination.Buffer = PoolWithTag;
      *(_QWORD *)&Destination.Length = 0x10000000LL;
      if ( !CmpQueryHiveRedirectionFileList((PUNICODE_STRING)(v2 + 232), &Destination) || Destination.Length == 2 )
        break;
LABEL_17:
      ExFreePoolWithTag(*(PVOID *)(v2 + 208), 0);
      *(_QWORD *)(v2 + 200) = 0LL;
      *(_WORD *)(v2 + 202) = 0;
      *(_QWORD *)(v2 + 208) = 0LL;
      SystemPartition = CmpOpenHiveFile(&Destination, 0, &v22, &v19, 7u, 0LL, (int *)Length, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 16;
LABEL_46:
        *(_QWORD *)(v2 - 1560) = v24;
        v24[0] = v2 - 1616;
        SetFailureLocation(*(_QWORD *)(v2 - 1560), 0, 21, SystemPartition, v0);
        CmpPuntBoot = 1;
        p_Destination = &Destination;
        ExRaiseHardError(3221226008LL, 1LL, 1LL, &p_Destination, 1, &v16);
        KeBugCheckEx(0x74u, 2uLL, 1uLL, v2 - 1616, SystemPartition);
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 4u, &v23, &v20, 0x12u, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 32;
        goto LABEL_46;
      }
      SystemPartition = CmpOpenHiveFile(&Destination, 5u, (HANDLE *)&p_Destination, &v21, 0x12u, 0LL, 0LL, 0LL, 0LL);
      if ( SystemPartition < 0 )
      {
        v0 = 48;
        goto LABEL_46;
      }
      v7 = Length[0];
      *(_QWORD *)(v2 - 80) = v22;
      *(_QWORD *)(v2 - 48) = v23;
      *(_QWORD *)(v2 - 40) = p_Destination;
      *(_DWORD *)(v2 - 1456) &= ~2u;
      *(_DWORD *)(v2 - 1432) = Length[1];
      v8 = *(_DWORD *)(v2 - 1344) + 4096;
      v15 = v8;
      if ( *(_DWORD *)(v2 - 1480) != v7 )
      {
        for ( i = 0; i < *(_DWORD *)(v2 - 1528); i += v7 )
        {
          if ( !RtlAreBitsClear((PRTL_BITMAP)(v2 - 1528), i, v7) )
            RtlSetBits((PRTL_BITMAP)(v2 - 1528), i, v7);
        }
        v10 = RtlNumberOfSetBits((PRTL_BITMAP)(v2 - 1528));
        v8 = v15;
        *(_DWORD *)(v2 - 1512) = v10;
        *(_DWORD *)(v2 - 1480) = v7;
      }
      SystemPartition = CmpInitializeActualFileSizes(v2 - 1616, &v16);
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
      v11 = *(_DWORD *)(v2 - 1456);
      *(_DWORD *)(v2 - 1456) = v11 & 0xFFFFF7FF;
      CmpUnlockRegistry();
      KiStackAttachProcess(PsInitialSystemProcess, 0LL, (__int64)v25);
      CmpInitCmRM(v2 - 1616, (v11 & 0x800) != 0);
      KiUnstackDetachProcess((__int64)v25, 0LL);
      v12 = *(PKRESOURCEMANAGER **)(v2 + 2576);
      *(_DWORD *)(v2 + 2536) |= 8u;
      if ( v12 )
      {
        TmEnableCallbacks(v12[7], (PTM_RM_NOTIFICATION)CmKtmNotification, v12);
        CmRmFinalizeRecovery(*(_QWORD *)(v2 + 2576));
      }
      CmpLockRegistryExclusive();
LABEL_39:
      *(_DWORD *)(v2 + 2536) |= 4u;
      v2 = *(_QWORD *)v2;
      if ( (__int64 *)v2 == &CmpPreloadedHivesList )
        goto LABEL_3;
    }
    Destination.Buffer = PoolWithTag;
    *(_QWORD *)&Destination.Length = 0x10000000LL;
    v3 = *(_DWORD *)(v2 - 1456);
    if ( (v3 & 0x1000) != 0 )
    {
      HostSilo = PsGetHostSilo();
      LOWORD(Source) = **((_WORD **)PsGetServerSiloGlobals(HostSilo) + 134);
      RtlAppendUnicodeToString(&Destination, L"\\??\\");
      RtlAppendUnicodeToString(&Destination, (PCWSTR)&Source);
      v5 = L":";
    }
    else
    {
      if ( (v3 & 0x2000) != 0 )
      {
        SystemPartition = SyspartGetSystemPartition(PoolWithTag);
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
  ExFreePoolWithTag(PoolWithTag, 0);
}
