/*
 * XREFs of CmpFlushBackupHive @ 0x14082CE80
 * Callers:
 *     CmpSyncNextBackupHive @ 0x14082D3B4 (CmpSyncNextBackupHive.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140002BC0 (RtlAppendUnicodeToString.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401C1130 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x1401C17D0 (ZwSetInformationObject.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpCmdHiveOpen @ 0x14068367C (CmpCmdHiveOpen.c)
 *     RtlAppendStringToString @ 0x14071D430 (RtlAppendStringToString.c)
 *     CmpFreeOffsetArray @ 0x14082D224 (CmpFreeOffsetArray.c)
 *     CmpInitBackupHive @ 0x14082D274 (CmpInitBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14082D578 (CmpWriteOffsetArrayToFile.c)
 *     CmpDestroyHive @ 0x14082F334 (CmpDestroyHive.c)
 *     CmpCmdRenameHive @ 0x1408339C0 (CmpCmdRenameHive.c)
 *     HvSnapshotHiveToOffsetArray @ 0x14083EB48 (HvSnapshotHiveToOffsetArray.c)
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
  int v20[2]; // [rsp+68h] [rbp-A0h] BYREF
  STRING Destination; // [rsp+70h] [rbp-98h] BYREF
  int v22[2]; // [rsp+80h] [rbp-88h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v26[56]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v27[44]; // [rsp+E8h] [rbp-20h] BYREF
  char v28; // [rsp+248h] [rbp+140h] BYREF

  v1 = a1;
  *(_QWORD *)&Destination.Length = 0x800000LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  P = 0LL;
  v2 = 0;
  v20[0] = 0;
  v3 = 0LL;
  *(_QWORD *)v22 = 0LL;
  v4 = 0;
  v20[1] = 0;
  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  FileInformation_1 = 1;
  memset(v26, 0, 0x30uLL);
  memset(v27, 0, sizeof(v27));
  v5 = 19 * v1;
  Destination.Buffer = &v28;
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
      CmpAttachToRegistryProcess((__int64)v26);
      CmpLockRegistry();
      if ( CmpDoIdleProcessing )
      {
        ExAcquirePushLockExclusiveEx((ULONG_PTR)(v6 + 36), 0LL);
        inited = HvSnapshotHiveToOffsetArray(v6, v20, v22, &v20[1]);
        if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6 + 9, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
          ExfTryToWakePushLock((volatile signed __int64 *)v6 + 9);
        KeAbPostRelease((ULONG_PTR)(v6 + 36));
        v2 = v20[0];
        v3 = *(_QWORD *)v22;
        v4 = v20[1];
      }
      else
      {
        inited = -1073741431;
      }
      CmpUnlockRegistry();
      KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
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
                       0x1000001u,
                       0,
                       0LL,
                       0LL,
                       v27),
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
        CmpAttachToRegistryProcess((__int64)v26);
        CmpDestroyHive(v12);
        KiUnstackDetachProcess((struct _KTHREAD *)v26, 0);
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
