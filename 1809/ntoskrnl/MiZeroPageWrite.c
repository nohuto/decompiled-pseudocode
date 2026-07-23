/*
 * XREFs of MiZeroPageWrite @ 0x140128508
 * Callers:
 *     MmZeroPageWrite @ 0x140128488 (MmZeroPageWrite.c)
 * Callees:
 *     MiIsRetryIoStatus @ 0x140022E18 (MiIsRetryIoStatus.c)
 *     MmUnmapLockedPages @ 0x140033F00 (MmUnmapLockedPages.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     IoSynchronousPageWriteEx @ 0x1400DEAA0 (IoSynchronousPageWriteEx.c)
 *     IoAllocateMdl @ 0x1400DFD50 (IoAllocateMdl.c)
 *     IoFreeMdl @ 0x1400E0BE0 (IoFreeMdl.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     MiRetardMdl @ 0x1402A85DC (MiRetardMdl.c)
 */

__int64 __fastcall MiZeroPageWrite(struct _FILE_OBJECT *a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r13
  _QWORD *v5; // r8
  struct _FILE_OBJECT *v6; // r10
  struct _MDL *v7; // rbx
  __int64 v8; // rdi
  unsigned __int64 v9; // r14
  PMDL Mdl; // rax
  unsigned __int64 v11; // rdi
  CSHORT MdlFlags; // r12
  CSHORT v13; // r12
  struct _MDL *v14; // rdx
  __int64 v15; // rsi
  unsigned int v16; // eax
  ULONG v17; // ecx
  CSHORT v18; // ax
  struct _MDL *v19; // rcx
  __int64 v20; // rdx
  int Status; // r15d
  CSHORT v22; // ax
  int v24; // [rsp+40h] [rbp-C0h]
  struct _KEVENT Object; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v27; // [rsp+68h] [rbp-98h]
  struct _FILE_OBJECT *v28; // [rsp+70h] [rbp-90h]
  struct _IO_STATUS_BLOCK v29; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v30[176]; // [rsp+90h] [rbp-70h] BYREF

  v4 = a3;
  v5 = a2;
  v28 = a1;
  v6 = a1;
  v7 = 0LL;
  v8 = (unsigned int)v4;
  v9 = (unsigned __int64)(v4 + 4095) >> 12;
  if ( a4 && (unsigned int)v4 > a4 )
    v8 = a4;
  if ( (unsigned int)v8 > 0x10000 )
  {
    Mdl = IoAllocateMdl(0LL, v8, 0, 0, 0LL);
    v5 = a2;
    v7 = Mdl;
    v6 = v28;
  }
  v11 = (unsigned __int64)(v8 + 4095) >> 12;
  if ( v7 )
  {
    MdlFlags = v7->MdlFlags;
  }
  else
  {
    v7 = (struct _MDL *)v30;
    MdlFlags = 0;
    if ( (unsigned int)v11 > 0x10 )
      LODWORD(v11) = 16;
  }
  v24 = 0;
  v13 = MdlFlags | 0x4002;
  v14 = v7 + 1;
  LODWORD(v15) = v11;
  do
  {
    v16 = v9;
    if ( (unsigned int)v15 <= (unsigned int)v9 )
      v16 = v15;
    v15 = v16;
    v17 = v16 << 12;
    if ( (_DWORD)v9 == v16 )
    {
      LODWORD(v11) = v9;
      if ( (v4 & 0xFFF) != 0 )
        v17 = (v4 & 0xFFF | v17) - 4096;
    }
    v27 = v17;
    v7->ByteCount = v17;
    v18 = 8 * ((((unsigned __int64)v17 + 4095) >> 12) + 6);
    v19 = v14;
    v7->Next = 0LL;
    v7->Size = v18;
    v7->StartVa = 0LL;
    v7->ByteOffset = 0;
    v7->MdlFlags = v13;
    if ( (_DWORD)v15 )
    {
      v20 = v15;
      do
      {
        v19->Next = (struct _MDL *)qword_14043BEA0;
        v19 = (struct _MDL *)((char *)v19 + 8);
        --v20;
      }
      while ( v20 );
    }
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.Size = 6;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    Object.Header.SignalState = 0;
    v29.Status = 0;
    v29.Information = 0LL;
    Status = IoSynchronousPageWriteEx(v6, v7, v5, &Object, 0, 0LL, &v29);
    if ( Status >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      Status = v29.Status;
    }
    v22 = v7->MdlFlags;
    if ( (v22 & 0x200) != 0 )
    {
      MiRetardMdl(v7);
      v22 = v7->MdlFlags;
    }
    if ( (v22 & 1) != 0 )
      MmUnmapLockedPages(v7->MappedSystemVa, v7);
    if ( Status >= 0 )
    {
      v5 = a2;
      LODWORD(v9) = v9 - v15;
      *a2 += v27;
      if ( v24 )
      {
        --v24;
      }
      else if ( (unsigned int)v15 < (unsigned int)v11 )
      {
        LODWORD(v15) = v11;
      }
      goto LABEL_25;
    }
    v24 = 8;
    if ( !MiIsRetryIoStatus(Status, v27) || (_DWORD)v15 == 1 )
      break;
    v5 = a2;
    LODWORD(v15) = (unsigned int)v15 >> 1;
LABEL_25:
    v6 = v28;
    v14 = v7 + 1;
  }
  while ( (_DWORD)v9 );
  if ( v7 != (struct _MDL *)v30 )
    IoFreeMdl(v7);
  return (unsigned int)Status;
}
