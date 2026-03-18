/*
 * XREFs of MiZeroPageWrite @ 0x1400FCFF4
 * Callers:
 *     MmZeroPageWrite @ 0x1400FCF78 (MmZeroPageWrite.c)
 * Callees:
 *     IoAllocateMdl @ 0x1400369F0 (IoAllocateMdl.c)
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     MmUnmapLockedPages @ 0x14006AD00 (MmUnmapLockedPages.c)
 *     IoSynchronousPageWriteEx @ 0x1400A794C (IoSynchronousPageWriteEx.c)
 *     MiIsRetryIoStatus @ 0x1400DFB50 (MiIsRetryIoStatus.c)
 *     IoFreeMdl @ 0x1400FCDD0 (IoFreeMdl.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiRetardMdl @ 0x1402BFC7C (MiRetardMdl.c)
 */

__int64 __fastcall MiZeroPageWrite(struct _FILE_OBJECT *a1, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // r15
  PMDL v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rdi
  CSHORT MdlFlags; // r12
  CSHORT v11; // r12
  PMDL v12; // rdx
  __int64 v13; // rsi
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  CSHORT v17; // ax
  _QWORD *p_Next; // rcx
  __int64 v19; // rdx
  int Status; // r15d
  CSHORT v21; // ax
  int v23; // [rsp+40h] [rbp-C0h]
  struct _KEVENT Object; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v25; // [rsp+60h] [rbp-A0h]
  _QWORD *v26; // [rsp+68h] [rbp-98h]
  struct _IO_STATUS_BLOCK v27; // [rsp+70h] [rbp-90h] BYREF
  struct _FILE_OBJECT *v28; // [rsp+80h] [rbp-80h]
  _BYTE Mdl[176]; // [rsp+90h] [rbp-70h] BYREF

  v4 = a3;
  v26 = a2;
  v28 = a1;
  v25 = a3;
  memset(&Object, 0, sizeof(Object));
  v27.Pointer = 0LL;
  v27.Information = 0LL;
  memset(Mdl, 0, sizeof(Mdl));
  v6 = 0LL;
  v7 = (unsigned int)v4;
  v8 = (unsigned __int64)(v4 + 4095) >> 12;
  if ( a4 && (unsigned int)v4 > a4 )
    v7 = a4;
  if ( (unsigned int)v7 > 0x10000 )
    v6 = IoAllocateMdl(0LL, v7, 0, 0, 0LL);
  v9 = (unsigned __int64)(v7 + 4095) >> 12;
  if ( v6 )
  {
    MdlFlags = v6->MdlFlags;
  }
  else
  {
    MdlFlags = 0;
    v6 = (PMDL)Mdl;
    if ( (unsigned int)v9 > 0x10 )
      LODWORD(v9) = 16;
  }
  v23 = 0;
  v11 = MdlFlags | 0x4002;
  v12 = v6 + 1;
  LODWORD(v13) = v9;
  while ( 1 )
  {
    v14 = v8;
    if ( (unsigned int)v13 <= (unsigned int)v8 )
      v14 = v13;
    v13 = v14;
    v15 = v14 << 12;
    if ( (_DWORD)v8 == v14 )
    {
      LODWORD(v9) = v8;
      if ( (v4 & 0xFFF) != 0 )
        v15 = (v4 & 0xFFF | (unsigned int)v15) - 4096;
    }
    v16 = (unsigned int)v15;
    v6->ByteCount = v15;
    v17 = 8 * (((unsigned __int64)(v15 + 4095) >> 12) + 6);
    p_Next = &v12->Next;
    v6->Next = 0LL;
    v6->Size = v17;
    v6->StartVa = 0LL;
    v6->ByteOffset = 0;
    v6->MdlFlags = v11;
    if ( (_DWORD)v13 )
    {
      v19 = v13;
      do
      {
        *p_Next++ = qword_140466860;
        --v19;
      }
      while ( v19 );
    }
    LOWORD(Object.Header.Lock) = 0;
    Object.Header.WaitListHead.Blink = &Object.Header.WaitListHead;
    Object.Header.SignalState = 0;
    Object.Header.WaitListHead.Flink = &Object.Header.WaitListHead;
    v27.Status = 0;
    v27.Information = 0LL;
    Object.Header.Size = 6;
    Status = IoSynchronousPageWriteEx(v28, v6, v26, &Object, 0, 0LL, &v27);
    if ( Status >= 0 )
    {
      KeWaitForSingleObject(&Object, WrPageOut, 0, 0, 0LL);
      Status = v27.Status;
    }
    v21 = v6->MdlFlags;
    if ( (v21 & 0x200) != 0 )
    {
      MiRetardMdl(v6);
      v21 = v6->MdlFlags;
    }
    if ( (v21 & 1) != 0 )
      MmUnmapLockedPages(v6->MappedSystemVa, v6);
    if ( Status < 0 )
      break;
    LODWORD(v8) = v8 - v13;
    *v26 += v16;
    if ( v23 )
    {
      --v23;
    }
    else if ( (unsigned int)v13 < (unsigned int)v9 )
    {
      LODWORD(v13) = v9;
    }
LABEL_26:
    v12 = v6 + 1;
    if ( !(_DWORD)v8 )
      goto LABEL_27;
    LOWORD(v4) = v25;
  }
  v23 = 8;
  if ( MiIsRetryIoStatus(Status, v16) && (_DWORD)v13 != 1 )
  {
    LODWORD(v13) = (unsigned int)v13 >> 1;
    goto LABEL_26;
  }
LABEL_27:
  if ( v6 != (PMDL)Mdl )
    IoFreeMdl(v6);
  return (unsigned int)Status;
}
