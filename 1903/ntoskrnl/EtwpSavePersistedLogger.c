/*
 * XREFs of EtwpSavePersistedLogger @ 0x140907A28
 * Callers:
 *     EtwpSavePersistedLoggersWorker @ 0x140907FF4 (EtwpSavePersistedLoggersWorker.c)
 * Callees:
 *     EtwWrite @ 0x140036280 (EtwWrite.c)
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x1401986D0 (MmMapLockedPagesWithReservedMapping.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1401C01D0 (ZwWriteFile.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401C05B0 (ZwSetInformationFile.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MmUnmapReservedMapping @ 0x1402C1100 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     EtwpDelayCreate @ 0x1406B8E58 (EtwpDelayCreate.c)
 *     MmAllocateMappingAddress @ 0x1407343E0 (MmAllocateMappingAddress.c)
 *     MmFreeMappingAddress @ 0x140735D70 (MmFreeMappingAddress.c)
 *     EtwpInitializeCompressedWriter @ 0x140907444 (EtwpInitializeCompressedWriter.c)
 *     EtwpQueryPersistedMemory @ 0x140907944 (EtwpQueryPersistedMemory.c)
 *     EtwpTraceSavePersistedLoggerStop @ 0x14090834C (EtwpTraceSavePersistedLoggerStop.c)
 *     EtwpWriteBufferCompressed @ 0x140908468 (EtwpWriteBufferCompressed.c)
 *     EtwpWriteRemainingCompressedData @ 0x140908628 (EtwpWriteRemainingCompressedData.c)
 */

__int64 __fastcall EtwpSavePersistedLogger(unsigned int *a1, __int64 a2)
{
  unsigned int *v3; // rsi
  HANDLE v4; // r14
  int v5; // edi
  unsigned int v6; // r12d
  struct _MDL *v7; // r13
  unsigned __int64 v8; // r8
  __int64 Length; // r15
  int v10; // ebx
  PMDL Mdl; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r9
  struct _MDL *v15; // rcx
  unsigned int v16; // esi
  unsigned int *v17; // r14
  unsigned int v18; // eax
  unsigned int v19; // r14d
  struct _MDL *v20; // r10
  __int64 v21; // r11
  _QWORD *v22; // rdx
  unsigned int v23; // eax
  __int64 v24; // r9
  bool v25; // zf
  unsigned int v26; // eax
  _DWORD *v27; // rax
  _DWORD *v28; // rsi
  unsigned int v29; // eax
  unsigned int v30; // r11d
  __int64 v31; // rbx
  struct _MDL *v32; // r14
  _QWORD *v33; // rdx
  unsigned int v34; // r10d
  unsigned int v35; // eax
  __int64 v36; // r9
  __int64 v37; // rcx
  _DWORD *Buffer; // rax
  void *v39; // rsi
  int v41; // [rsp+50h] [rbp-B0h] BYREF
  char v42[4]; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v43; // [rsp+58h] [rbp-A8h]
  unsigned int v44; // [rsp+5Ch] [rbp-A4h]
  unsigned int v45; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v46; // [rsp+64h] [rbp-9Ch]
  unsigned int *v47; // [rsp+68h] [rbp-98h]
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  PVOID v49; // [rsp+78h] [rbp-88h] BYREF
  PVOID MappingAddress; // [rsp+80h] [rbp-80h]
  unsigned int v51; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+8Ch] [rbp-74h]
  LARGE_INTEGER ByteOffset; // [rsp+90h] [rbp-70h] BYREF
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A8h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v57[8]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD FileInformation[10]; // [rsp+100h] [rbp+0h] BYREF

  v55 = a2;
  v47 = a1;
  v3 = a1;
  memset(FileInformation, 0, sizeof(FileInformation));
  ByteOffset.QuadPart = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v4 = 0LL;
  IoStatusBlock.Pointer = 0LL;
  v5 = 0;
  IoStatusBlock.Information = 0LL;
  v6 = 0;
  FileHandle = 0LL;
  v7 = 0LL;
  v41 = 0;
  v45 = 0;
  MappingAddress = 0LL;
  v49 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(v57, 0, sizeof(v57));
  EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SAVE_PERSISTED_LOGGER_START, 0LL, 0, 0LL);
  Length = v3[2];
  v52 = Length;
  if ( !(_DWORD)Length || (Length & 0xFFF) != 0 )
  {
    v10 = -1072037875;
    goto LABEL_60;
  }
  MappingAddress = MmAllocateMappingAddress((unsigned int)Length, 0x4B777445u);
  if ( !MappingAddress || (Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL), (v7 = Mdl) == 0LL) )
  {
    v10 = -1073741670;
    goto LABEL_60;
  }
  Mdl->MdlFlags |= 2u;
  v10 = EtwpQueryPersistedMemory(v12, a2, &v49, &v51);
  if ( v10 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v3 + v3[3]));
    v13 = 0LL;
    v14 = 0LL;
    if ( v51 )
    {
      while ( 1 )
      {
        v8 = *((_QWORD *)v49 + v14);
        if ( v8 < 0x10000000000LL )
          break;
        v8 >>= 40;
        v14 = (unsigned int)(v14 + 1);
        v13 += v8;
        if ( (unsigned int)v14 >= v51 )
          goto LABEL_10;
      }
LABEL_25:
      v10 = -1072103376;
      goto LABEL_60;
    }
LABEL_10:
    if ( v13 << 12 != Length * v3[1] )
      goto LABEL_25;
    LOBYTE(v14) = 1;
    v42[0] = 0;
    v10 = EtwpDelayCreate((__int64)&FileHandle, (__int64)&DestinationString, v42, v14, 0, 1);
    if ( v10 < 0 )
    {
      v4 = FileHandle;
      goto LABEL_60;
    }
    memset(FileInformation, 0, sizeof(FileInformation));
    v4 = FileHandle;
    FileInformation[8] = 0x2000;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
    v10 = EtwpInitializeCompressedWriter((__int64)v57, Length, (__int64)v4);
    if ( v10 < 0 )
      goto LABEL_60;
    v15 = v7 + 1;
    v16 = 0;
    v43 = 0;
    v44 = 0;
    if ( !v47[1] )
      goto LABEL_44;
    v17 = v47;
    v18 = (unsigned int)Length >> 12;
    v46 = (unsigned int)Length >> 12;
    while ( 1 )
    {
      if ( v18 )
      {
        v19 = v43;
        v20 = v15;
        v21 = v18;
        do
        {
          v22 = v49;
          v23 = v16 + 1;
          v20->Next = (struct _MDL *)(v16 + (*((_QWORD *)v49 + v19) & 0xFFFFFFFFFFLL));
          v16 = 0;
          v20 = (struct _MDL *)((char *)v20 + 8);
          v24 = v22[v19] >> 40;
          v25 = v23 == v24;
          if ( v23 != v24 )
            v16 = v23;
          v26 = v19 + 1;
          if ( !v25 )
            v26 = v19;
          v19 = v26;
          --v21;
        }
        while ( v21 );
        LODWORD(Length) = v52;
        v17 = v47;
        v43 = v26;
        v44 = v16;
      }
      v27 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v7, MmCached);
      v28 = v27;
      if ( *v27 != (_DWORD)Length )
        goto LABEL_24;
      v29 = v27[2] <= *v27 ? v27[2] : v27[1];
      v28[12] = v29;
      if ( v29 > (unsigned int)Length )
        break;
      if ( v29 > 0x48 )
      {
        if ( (_DWORD)Length != v29 )
          memset((char *)v28 + v29, 255, (unsigned int)Length - v29);
        if ( v6 )
          v10 = EtwpWriteBufferCompressed(v57, v28);
        else
          v57[1] += (unsigned int)Length;
      }
      v5 = v41;
LABEL_38:
      MmUnmapReservedMapping(v28, 0x4B777445u, v7);
      if ( v10 < 0 && !v6 )
      {
        v4 = FileHandle;
        v6 = v45;
        v3 = v47;
        goto LABEL_60;
      }
      v16 = v44;
      if ( ++v6 >= v17[1] )
      {
        v4 = FileHandle;
LABEL_44:
        EtwpWriteRemainingCompressedData(v57, &v45, &v41);
        v30 = 0;
        if ( (unsigned int)Length >> 12 )
        {
          v31 = (unsigned int)Length >> 12;
          v32 = v7 + 1;
          do
          {
            v33 = v49;
            v34 = v16 + 1;
            v35 = v30 + 1;
            v32->Next = (struct _MDL *)(v16 + (*((_QWORD *)v49 + v30) & 0xFFFFFFFFFFLL));
            v32 = (struct _MDL *)((char *)v32 + 8);
            v36 = v33[v30] >> 40;
            v37 = v16 + 1;
            if ( v37 != v36 )
              v35 = v30;
            v16 = 0;
            v30 = v35;
            if ( v37 != v36 )
              v16 = v34;
            --v31;
          }
          while ( v31 );
          v4 = FileHandle;
        }
        Buffer = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v7, MmCached);
        v6 = v45;
        v39 = Buffer;
        v5 = v41;
        Buffer[34] |= 0x4000000u;
        v25 = Buffer[37] == 4;
        Buffer[11] = 3;
        v46 = v6 + 1;
        Buffer[35] = v6 + 1;
        if ( v25 )
          Buffer[93] += v5;
        else
          Buffer[95] += v5;
        ByteOffset.QuadPart = 0LL;
        v10 = ZwWriteFile(v4, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
        MmUnmapReservedMapping(v39, 0x4B777445u, v7);
        v3 = v47;
        if ( v10 >= 0 )
          v6 = v46;
        else
          LOBYTE(v5) = v5 + 1;
        goto LABEL_60;
      }
      v18 = v46;
      v15 = v7 + 1;
    }
    v5 = v41;
LABEL_24:
    ++v5;
    v10 = -1073741306;
    v41 = v5;
    goto LABEL_38;
  }
LABEL_60:
  if ( v57[4] )
  {
    ExFreePoolWithTag((PVOID)v57[4], 0);
    v57[4] = 0LL;
  }
  if ( v57[5] )
  {
    ExFreePoolWithTag((PVOID)v57[5], 0);
    v57[5] = 0LL;
  }
  if ( v4 )
    ZwClose(v4);
  if ( MappingAddress )
    MmFreeMappingAddress(MappingAddress, 0x4B777445u);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( v49 )
    ExFreePoolWithTag(v49, 0);
  LOBYTE(v8) = 1;
  KsrFreePersistedMemoryBlock(EtwpKsrGuid, v55, v8);
  EtwpTraceSavePersistedLoggerStop((unsigned int)&DestinationString, Length, v3[1], v6, v5, v10);
  return (unsigned int)v10;
}
