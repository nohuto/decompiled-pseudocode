/*
 * XREFs of NtQueryDirectoryObject @ 0x14068EE90
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400B75B0 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     ObpUnlockDirectory @ 0x140109F98 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x140109FD8 (ObpLockDirectoryShared.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405E9350 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 */

NTSTATUS __stdcall NtQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG BufferLength,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  size_t v7; // rbx
  KPROCESSOR_MODE PreviousMode; // si
  __int64 v10; // rdx
  __int64 v11; // rcx
  ULONG v12; // r14d
  const void **PoolWithQuotaTag; // rax
  const void **v15; // r13
  int v16; // ebx
  ULONG v17; // r15d
  ULONG v18; // esi
  NTSTATUS v19; // r13d
  unsigned int v20; // ecx
  _QWORD *v21; // rax
  _QWORD *v22; // rdi
  ULONG v23; // r12d
  ULONG v24; // r11d
  ULONG v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r10
  unsigned int v29; // r9d
  unsigned __int16 Length; // r8
  ULONG v31; // edx
  const void **v32; // r11
  int v33; // eax
  char *v34; // rbx
  const void **v35; // rdi
  char *v36; // rbx
  char *v37; // rbx
  PVOID v38; // rbx
  ULONG v39; // eax
  int v40; // [rsp+30h] [rbp-A8h]
  int v41; // [rsp+30h] [rbp-A8h]
  int v42; // [rsp+38h] [rbp-A0h]
  unsigned int v43; // [rsp+3Ch] [rbp-9Ch]
  const void **v44; // [rsp+40h] [rbp-98h]
  const void **Src; // [rsp+48h] [rbp-90h]
  ULONG v46; // [rsp+54h] [rbp-84h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  _QWORD *v48; // [rsp+60h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-70h] BYREF
  __int128 v50; // [rsp+78h] [rbp-60h] BYREF
  __int16 v51; // [rsp+96h] [rbp-42h]
  int v52; // [rsp+98h] [rbp-40h]

  v7 = BufferLength;
  v50 = 0LL;
  v51 = 0;
  v52 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, BufferLength, 2u);
    v10 = 0x7FFFFFFF0000LL;
    v11 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Context < 0x7FFFFFFF0000LL )
      v11 = (__int64)Context;
    *(_DWORD *)v11 = *(_DWORD *)v11;
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
    if ( RestartScan )
      v12 = 0;
    else
      v12 = *Context;
  }
  else if ( RestartScan )
  {
    v12 = 0;
  }
  else
  {
    v12 = *Context;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  PoolWithQuotaTag = (const void **)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v15 = PoolWithQuotaTag;
  Src = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  memset(PoolWithQuotaTag, 0, v7);
  v16 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    return v16;
  }
  v44 = v15;
  v17 = 32;
  v42 = 32;
  v18 = 0;
  v40 = 0;
  v19 = -2147483622;
  ObpLockDirectoryShared((__int64)&v50, (__int64)Object);
  v20 = 0;
  v43 = 0;
  v21 = Object;
  v48 = Object;
  while ( 1 )
  {
    v22 = (_QWORD *)*v21;
    if ( *v21 )
      break;
LABEL_33:
    v43 = ++v20;
    v48 = ++v21;
    if ( v20 >= 0x25 )
      goto LABEL_42;
  }
  while ( 1 )
  {
    v23 = v17;
    v24 = v18;
    v46 = v18;
    v25 = v18++;
    if ( v12 == v25 )
      break;
LABEL_31:
    v22 = (_QWORD *)*v22;
    if ( !v22 )
    {
      v21 = v48;
      v20 = v43;
      goto LABEL_33;
    }
  }
  v26 = v22[1];
  if ( (*(_BYTE *)(v26 - 22) & 2) == 0 || (v27 = ObpInfoMaskToOffset[*(_BYTE *)(v26 - 22) & 3], v26 - 48 == v27) )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v24 = v46;
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)(v26 - 48 - v27 + 8);
  }
  v28 = (unsigned __int8)((unsigned __int16)(v26 - 48) >> 8);
  v29 = (unsigned __int8)ObHeaderCookie;
  Length = DestinationString.Length;
  v31 = DestinationString.Length
      + 36
      + v17
      + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ (unsigned __int8)ObHeaderCookie]
                            + 16);
  if ( v17 > v31 )
  {
    v19 = 261;
    goto LABEL_41;
  }
  if ( v31 <= BufferLength )
  {
    *(_WORD *)v44 = DestinationString.Length;
    *((_WORD *)v44 + 1) = Length + 2;
    v44[1] = DestinationString.Buffer;
    *((_WORD *)v44 + 8) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ v29] + 16);
    *((_WORD *)v44 + 9) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ v29] + 16) + 2;
    v44[3] = *(const void **)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ v29] + 24);
    v19 = 0;
    v17 = v31;
    v42 = v31;
    v32 = v44 + 4;
    v44 += 4;
    v33 = ++v40;
    if ( ReturnSingleEntry )
      goto LABEL_43;
    ++v12;
    goto LABEL_31;
  }
  v19 = -1073741789;
  if ( !ReturnSingleEntry )
    v19 = 261;
  v17 += DestinationString.Length
       + 36
       + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v26 - 24) ^ v28 ^ (unsigned __int8)ObHeaderCookie]
                             + 16);
  if ( !ReturnSingleEntry )
    v17 = v23;
  v42 = v17;
LABEL_41:
  v18 = v24;
LABEL_42:
  v32 = v44;
  v33 = v40;
LABEL_43:
  if ( v19 >= 0 )
  {
    *v32 = 0LL;
    v32[1] = 0LL;
    v32[2] = 0LL;
    v32[3] = 0LL;
    v34 = (char *)(v32 + 4);
    if ( v33 )
    {
      v35 = Src + 3;
      do
      {
        v41 = v33 - 1;
        memmove(v34, *(v35 - 2), *((unsigned __int16 *)v35 - 12));
        *(v35 - 2) = (char *)Buffer + v34 - (char *)Src;
        v36 = &v34[*((unsigned __int16 *)v35 - 12)];
        *(_WORD *)v36 = 0;
        v36 += 2;
        memmove(v36, *v35, *((unsigned __int16 *)v35 - 4));
        *v35 = (char *)Buffer + v36 - (char *)Src;
        v37 = &v36[*((unsigned __int16 *)v35 - 4)];
        *(_WORD *)v37 = 0;
        v34 = v37 + 2;
        v35 += 4;
        v33 = v41;
      }
      while ( v41 );
      v17 = v42;
    }
  }
  v38 = Object;
  ObpUnlockDirectory((__int64)Object, (__int64)&v50);
  v39 = BufferLength;
  if ( v17 <= BufferLength )
    v39 = v17;
  memmove(Buffer, Src, v39);
  if ( ReturnLength )
    *ReturnLength = v17;
  if ( v19 >= 0 )
    *Context = v18;
  ObfDereferenceObject(v38);
  ExFreePoolWithTag(Src, 0);
  return v19;
}
