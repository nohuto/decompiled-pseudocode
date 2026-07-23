/*
 * XREFs of EtwpSavePersistedLogger @ 0x1408CB79C
 * Callers:
 *     EtwpSavePersistedLoggersWorker @ 0x1408CBB70 (EtwpSavePersistedLoggersWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     MmMapLockedPagesWithReservedMapping @ 0x14018EA60 (MmMapLockedPagesWithReservedMapping.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwWriteFile @ 0x1401B83F0 (ZwWriteFile.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwSetInformationFile @ 0x1401B87D0 (ZwSetInformationFile.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmUnmapReservedMapping @ 0x1402A9A10 (MmUnmapReservedMapping.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpDelayCreate @ 0x14069B2B4 (EtwpDelayCreate.c)
 *     MmAllocateMappingAddress @ 0x1406FA580 (MmAllocateMappingAddress.c)
 *     MmFreeMappingAddress @ 0x1406FD750 (MmFreeMappingAddress.c)
 *     EtwpQueryPersistedMemory @ 0x1408CB6B8 (EtwpQueryPersistedMemory.c)
 *     EtwpTraceSavePersistedLoggerStop @ 0x1408CBEE0 (EtwpTraceSavePersistedLoggerStop.c)
 */

__int64 __fastcall EtwpSavePersistedLogger(_DWORD *a1, __int64 a2)
{
  _DWORD *v3; // r13
  HANDLE v4; // r14
  int v5; // edi
  struct _MDL *v6; // r15
  PVOID MappingAddress; // r12
  unsigned __int64 v8; // r8
  __int64 Length; // rsi
  int v10; // ebx
  PMDL Mdl; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 i; // r9
  struct _MDL *v15; // rcx
  unsigned int v16; // r10d
  unsigned int v17; // r11d
  unsigned int v18; // eax
  struct _MDL *v19; // rdi
  __int64 v20; // r13
  _QWORD *v21; // rdx
  unsigned int v22; // eax
  __int64 v23; // r9
  bool v24; // zf
  unsigned int v25; // eax
  _DWORD *v26; // rax
  _DWORD *Buffer; // rdi
  unsigned int v28; // eax
  bool v29; // cf
  char v31[4]; // [rsp+50h] [rbp-79h] BYREF
  int v32; // [rsp+54h] [rbp-75h]
  int v33; // [rsp+58h] [rbp-71h]
  unsigned int v34; // [rsp+5Ch] [rbp-6Dh]
  unsigned int v35; // [rsp+60h] [rbp-69h]
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  PVOID P; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v38; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v39; // [rsp+7Ch] [rbp-4Dh]
  LARGE_INTEGER ByteOffset; // [rsp+80h] [rbp-49h] BYREF
  _DWORD *v41; // [rsp+88h] [rbp-41h]
  __int64 v42; // [rsp+90h] [rbp-39h]
  UNICODE_STRING DestinationString; // [rsp+98h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-21h] BYREF
  _DWORD FileInformation[10]; // [rsp+B8h] [rbp-11h] BYREF

  v42 = a2;
  v41 = a1;
  v3 = a1;
  FileHandle = 0LL;
  ByteOffset.QuadPart = 0LL;
  v32 = 0;
  v4 = 0LL;
  P = 0LL;
  v5 = 0;
  v6 = 0LL;
  MappingAddress = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_SAVE_PERSISTED_LOGGER_START, 0LL, 0, 0LL);
  Length = (unsigned int)v3[2];
  if ( !(_DWORD)Length || (Length & 0xFFF) != 0 )
  {
    v10 = -1072037875;
    goto LABEL_39;
  }
  MappingAddress = MmAllocateMappingAddress((unsigned int)Length, 0x4B777445u);
  if ( !MappingAddress )
  {
    v10 = -1073741670;
    goto LABEL_47;
  }
  Mdl = IoAllocateMdl(0LL, Length, 0, 0, 0LL);
  v6 = Mdl;
  if ( Mdl )
  {
    Mdl->MdlFlags |= 2u;
    v10 = EtwpQueryPersistedMemory(v12, a2, &P, &v38);
    if ( v10 < 0 )
      goto LABEL_41;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)((char *)v3 + (unsigned int)v3[3]));
    v13 = 0LL;
    for ( i = 0LL; (unsigned int)i < v38; v13 += v8 )
    {
      v8 = *((_QWORD *)P + i);
      if ( v8 < 0x10000000000LL )
        goto LABEL_26;
      v8 >>= 40;
      i = (unsigned int)(i + 1);
    }
    if ( v13 << 12 != (_DWORD)Length * v3[1] )
    {
LABEL_26:
      v10 = -1072103376;
      goto LABEL_41;
    }
    LOBYTE(i) = 1;
    v31[0] = 0;
    v10 = EtwpDelayCreate((__int64)&FileHandle, (__int64)&DestinationString, v31, i, 0, 1);
    if ( v10 < 0 )
    {
      v4 = FileHandle;
    }
    else
    {
      memset(FileInformation, 0, sizeof(FileInformation));
      FileInformation[8] = 0x2000;
      v4 = FileHandle;
      ZwSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
      v33 = 0;
      v15 = v6 + 1;
      v16 = 0;
      v17 = 0;
      v34 = 0;
      v35 = 0;
      if ( v3[1] )
      {
        v18 = (unsigned int)Length >> 12;
        v39 = (unsigned int)Length >> 12;
        do
        {
          if ( v18 )
          {
            v19 = v15;
            v20 = v18;
            do
            {
              v21 = P;
              v22 = v17 + 1;
              v19->Next = (struct _MDL *)(v17 + (*((_QWORD *)P + v16) & 0xFFFFFFFFFFLL));
              v17 = 0;
              v19 = (struct _MDL *)((char *)v19 + 8);
              v23 = v21[v16] >> 40;
              v24 = v22 == v23;
              if ( v22 != v23 )
                v17 = v22;
              v25 = v16 + 1;
              if ( !v24 )
                v25 = v16;
              v16 = v25;
              --v20;
            }
            while ( v20 );
            v3 = v41;
            v34 = v25;
            v35 = v17;
          }
          v26 = MmMapLockedPagesWithReservedMapping(MappingAddress, 0x4B777445u, v6, MmCached);
          Buffer = v26;
          if ( *v26 == (_DWORD)Length )
          {
            if ( v26[2] <= *v26 )
              v28 = v26[2];
            else
              v28 = v26[1];
            Buffer[12] = v28;
            if ( v28 > (unsigned int)Length || v28 <= 0x48 )
            {
              v4 = FileHandle;
            }
            else
            {
              if ( (_DWORD)Length != v28 )
                memset((char *)Buffer + v28, 255, (unsigned int)Length - v28);
              v4 = FileHandle;
              v10 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
              if ( v10 >= 0 )
              {
                ++v32;
                ByteOffset.QuadPart += Length;
              }
            }
          }
          MmUnmapReservedMapping(Buffer, 0x4B777445u, v6);
          v18 = v39;
          v29 = (unsigned int)(v33 + 1) < v3[1];
          v16 = v34;
          v17 = v35;
          ++v33;
          v15 = v6 + 1;
        }
        while ( v29 );
        v5 = v32;
      }
    }
LABEL_39:
    if ( v4 )
      ZwClose(v4);
    goto LABEL_41;
  }
  v10 = -1073741670;
LABEL_41:
  if ( MappingAddress )
    MmFreeMappingAddress(MappingAddress, 0x4B777445u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  if ( P )
    ExFreePoolWithTag(P, 0);
LABEL_47:
  LOBYTE(v8) = 1;
  KsrFreePersistedMemoryBlock(EtwpKsrGuid, v42, v8);
  EtwpTraceSavePersistedLoggerStop((unsigned int)&DestinationString, Length, v3[1], v5, v10);
  return (unsigned int)v10;
}
