/*
 * XREFs of CmpFlushBackupHive @ 0x1407F5250
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1407F5738 (CmpSyncNextBackupHive.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140015E00 (RtlAppendUnicodeToString.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1401B8E70 (ZwSetInformationObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpCmdHiveOpen @ 0x1405B594C (CmpCmdHiveOpen.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     RtlAppendStringToString @ 0x1406CC680 (RtlAppendStringToString.c)
 *     CmpFreeOffsetArray @ 0x1407F55D0 (CmpFreeOffsetArray.c)
 *     CmpInitBackupHive @ 0x1407F5620 (CmpInitBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407F5934 (CmpWriteOffsetArrayToFile.c)
 *     CmpDestroyHive @ 0x1407F7978 (CmpDestroyHive.c)
 *     CmpCmdRenameHive @ 0x1407FC1A0 (CmpCmdRenameHive.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140806EE0 (HvSnapshotHiveToOffsetArray.c)
 */

__int64 __fastcall CmpFlushBackupHive(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned int v2; // r15d
  __int64 v3; // r12
  int v4; // r13d
  __int64 v5; // rbx
  wchar_t *v6; // rsi
  void *v7; // r14
  int inited; // edi
  wchar_t *v9; // rdx
  int v10; // ecx
  void *v11; // rcx
  _QWORD *v12; // rbx
  void *v13; // rcx
  char FileInformation; // [rsp+58h] [rbp-B0h] BYREF
  char FileInformation_1; // [rsp+59h] [rbp-AFh] BYREF
  __int16 ObjectInformation; // [rsp+5Ch] [rbp-ACh] BYREF
  int v18; // [rsp+60h] [rbp-A8h] BYREF
  int v19; // [rsp+64h] [rbp-A4h] BYREF
  int v20; // [rsp+68h] [rbp-A0h] BYREF
  int v21; // [rsp+6Ch] [rbp-9Ch] BYREF
  STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  int v23[2]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v27[56]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v28[44]; // [rsp+E8h] [rbp-20h] BYREF
  char v29; // [rsp+248h] [rbp+140h] BYREF

  v1 = a1;
  P = 0LL;
  v20 = 0;
  *(_QWORD *)v23 = 0LL;
  v2 = 0;
  v21 = 0;
  v3 = 0LL;
  FileInformation_1 = 1;
  v4 = 0;
  memset(v28, 0, sizeof(v28));
  *(_DWORD *)&Destination.Length = 0x800000;
  v5 = 19 * v1;
  Destination.Buffer = &v29;
  v6 = CmpMachineHiveList[v5 + 6];
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v5]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v7 = (void *)*((_QWORD *)v6 + 195);
  if ( v7 )
  {
    inited = CmpCmdRenameHive(v7, 0LL, 1);
    if ( inited >= 0 )
    {
      *((_QWORD *)v6 + 195) = 0LL;
      v9 = CmpMachineHiveList[v5];
      Destination.Length -= 8;
      inited = CmpInitBackupHive(v6, v9);
      if ( inited < 0 )
        goto LABEL_14;
      CmpAttachToRegistryProcess((__int64)v27);
      CmpLockRegistry();
      if ( CmpDoIdleProcessing )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v6 + 36), 0LL);
        inited = HvSnapshotHiveToOffsetArray(v6, &v20, v23, &v21);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v6 + 9);
        KeAbPostRelease((ULONG_PTR)(v6 + 36));
        v2 = v20;
        v3 = *(_QWORD *)v23;
        v4 = v21;
      }
      else
      {
        inited = -1073741431;
      }
      CmpUnlockRegistry();
      KiUnstackDetachProcess((__int64)v27, 0LL);
      if ( inited < 0 )
        goto LABEL_14;
      inited = CmpWriteOffsetArrayToFile(v10, v2, v3, v4, *((HANDLE *)v6 + 195));
      CmpFreeOffsetArray(v2, v3);
      if ( inited < 0
        || (v11 = (void *)*((_QWORD *)v6 + 195),
            ObjectInformation = 0,
            ZwSetInformationObject(v11, ObjectHandleFlagInformation, &ObjectInformation, 2u),
            ZwClose(*((HANDLE *)v6 + 195)),
            *((_QWORD *)v6 + 195) = 0LL,
            FileInformation = 0,
            inited = CmpCmdHiveOpen(
                       (PCUNICODE_STRING)&Destination,
                       0,
                       &FileInformation,
                       (ULONG_PTR *)&P,
                       0x1190001u,
                       0,
                       0LL,
                       0LL,
                       v28),
            inited < 0) )
      {
LABEL_14:
        v13 = (void *)*((_QWORD *)v6 + 195);
        if ( v13 )
        {
          LOWORD(v19) = 0;
          ZwSetInformationObject(v13, ObjectHandleFlagInformation, &v19, 2u);
          ZwClose(*((HANDLE *)v6 + 195));
          *((_QWORD *)v6 + 195) = 0LL;
        }
        if ( (int)CmpCmdRenameHive(v7, 0LL, 1) >= 0 )
          *((_QWORD *)v6 + 195) = v7;
      }
      else
      {
        v12 = P;
        *((_QWORD *)v6 + 195) = *((_QWORD *)P + 192);
        v12[192] = 0LL;
        CmpAttachToRegistryProcess((__int64)v27);
        CmpDestroyHive(v12);
        KiUnstackDetachProcess((__int64)v27, 0LL);
        ZwSetInformationFile(v7, &IoStatusBlock, &FileInformation_1, 1u, FileDispositionInformation);
        LOWORD(v18) = 0;
        ZwSetInformationObject(v7, ObjectHandleFlagInformation, &v18, 2u);
        ZwClose(v7);
      }
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)inited;
}
