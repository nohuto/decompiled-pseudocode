/*
 * XREFs of NtQueryDirectoryObject @ 0x1405C63B0
 * Callers:
 *     <none>
 * Callees:
 *     ObpUnlockDirectory @ 0x140003F00 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x140004084 (ObpLockDirectoryShared.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400BEF80 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x1405F07E0 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x1405FA460 (ObReferenceObjectByHandle.c)
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
  KPROCESSOR_MODE PreviousMode; // di
  ULONG v10; // r12d
  const void **PoolWithQuotaTag; // rax
  const void **v12; // r14
  int v13; // ebx
  ULONG v14; // r14d
  ULONG v15; // edi
  NTSTATUS v16; // esi
  unsigned int v17; // ecx
  _QWORD *v18; // r13
  _QWORD *v19; // rbx
  ULONG v20; // esi
  ULONG v21; // r15d
  ULONG v22; // eax
  __int64 v23; // r8
  __int64 v24; // rax
  unsigned int v25; // r10d
  unsigned __int16 Length; // r9
  char *v27; // r15
  int v28; // eax
  char *v29; // rbx
  int v30; // r12d
  const void **v31; // r15
  PVOID v32; // r13
  const void **v33; // rsi
  char *v34; // rbx
  char *v35; // rbx
  PVOID v36; // rbx
  ULONG v37; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // [rsp+30h] [rbp-A8h]
  int v42; // [rsp+34h] [rbp-A4h]
  int v43; // [rsp+38h] [rbp-A0h]
  __int64 v44; // [rsp+38h] [rbp-A0h]
  unsigned int v45; // [rsp+40h] [rbp-98h]
  const void **v46; // [rsp+48h] [rbp-90h]
  const void **Src; // [rsp+50h] [rbp-88h]
  PVOID Object; // [rsp+60h] [rbp-78h] BYREF
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-70h] BYREF
  __int128 v50; // [rsp+78h] [rbp-60h] BYREF
  __int64 v51; // [rsp+88h] [rbp-50h]
  __int64 v52; // [rsp+90h] [rbp-48h]
  int v53; // [rsp+98h] [rbp-40h]
  int v54; // [rsp+9Ch] [rbp-3Ch]

  v7 = BufferLength;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v54 = 0;
  v50 = 0LL;
  v53 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, BufferLength, 2u);
    v39 = (__int64)Context;
    if ( (unsigned __int64)Context >= 0x7FFFFFFF0000LL )
      v39 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v39 = *(_DWORD *)v39;
    if ( ReturnLength )
    {
      v40 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v40 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v40 = *(_DWORD *)v40;
    }
    if ( RestartScan )
      v10 = 0;
    else
      v10 = *Context;
  }
  else if ( RestartScan )
  {
    v10 = 0;
  }
  else
  {
    v10 = *Context;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  PoolWithQuotaTag = (const void **)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v12 = PoolWithQuotaTag;
  Src = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  memset(PoolWithQuotaTag, 0, v7);
  v13 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    return v13;
  }
  else
  {
    v46 = v12;
    v14 = 32;
    v43 = 32;
    v15 = 0;
    v42 = 0;
    v16 = -2147483622;
    v41 = -2147483622;
    ObpLockDirectoryShared((__int64)&v50, Object);
    v17 = 0;
    v45 = 0;
    v18 = Object;
    do
    {
      v19 = (_QWORD *)*v18;
      if ( *v18 )
      {
        while ( 1 )
        {
          v20 = v14;
          v21 = v15;
          v22 = v15++;
          if ( v10 == v22 )
          {
            v23 = v19[1] - 48LL;
            v44 = v23;
            if ( (*(_BYTE *)(v23 + 26) & 2) == 0 || (v24 = ObpInfoMaskToOffset[*(_BYTE *)(v23 + 26) & 3], v23 == v24) )
            {
              RtlInitUnicodeString(&DestinationString, 0LL);
              v23 = v44;
            }
            else
            {
              DestinationString = *(UNICODE_STRING *)(v23 - v24 + 8);
            }
            v25 = (unsigned __int8)ObHeaderCookie;
            Length = DestinationString.Length;
            v14 += DestinationString.Length
                 + 36
                 + *(unsigned __int16 *)(ObTypeIndexTable[*(unsigned __int8 *)(v23 + 24) ^ BYTE1(v23) ^ (unsigned __int64)(unsigned __int8)ObHeaderCookie]
                                       + 16);
            v43 = v14;
            if ( v14 > BufferLength )
            {
              v15 = v21;
              v28 = -1073741789;
              if ( !ReturnSingleEntry )
                v28 = 261;
              v41 = v28;
              if ( !ReturnSingleEntry )
                v14 = v20;
              v43 = v14;
              v16 = v28;
              goto LABEL_25;
            }
            *(_WORD *)v46 = DestinationString.Length;
            *((_WORD *)v46 + 1) = Length + 2;
            v46[1] = DestinationString.Buffer;
            *((_WORD *)v46 + 8) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v23 + 24) ^ BYTE1(v23) ^ (unsigned __int64)v25]
                                           + 16);
            *((_WORD *)v46 + 9) = *(_WORD *)(ObTypeIndexTable[*(unsigned __int8 *)(v23 + 24) ^ BYTE1(v23) ^ (unsigned __int64)v25]
                                           + 16)
                                + 2;
            v46[3] = *(const void **)(ObTypeIndexTable[*(unsigned __int8 *)(v23 + 24) ^ BYTE1(v23) ^ (unsigned __int64)v25]
                                    + 24);
            v16 = 0;
            v41 = 0;
            v27 = (char *)(v46 + 4);
            v46 += 4;
            ++v42;
            if ( ReturnSingleEntry )
              goto LABEL_26;
            ++v10;
          }
          v19 = (_QWORD *)*v19;
          if ( !v19 )
          {
            v17 = v45;
            v16 = v41;
            break;
          }
        }
      }
      v45 = ++v17;
      ++v18;
    }
    while ( v17 < 0x25 );
LABEL_25:
    v27 = (char *)v46;
LABEL_26:
    if ( v16 < 0 )
    {
      v31 = Src;
      v32 = Buffer;
    }
    else
    {
      memset(v27, 0, 0x20uLL);
      v29 = v27 + 32;
      v30 = v42;
      v31 = Src;
      v32 = Buffer;
      if ( v42 )
      {
        v33 = Src + 3;
        do
        {
          memmove(v29, *(v33 - 2), *((unsigned __int16 *)v33 - 12));
          *(v33 - 2) = (char *)Buffer + v29 - (char *)Src;
          v34 = &v29[*((unsigned __int16 *)v33 - 12)];
          *(_WORD *)v34 = 0;
          v34 += 2;
          memmove(v34, *v33, *((unsigned __int16 *)v33 - 4));
          *v33 = (char *)Buffer + v34 - (char *)Src;
          v35 = &v34[*((unsigned __int16 *)v33 - 4)];
          *(_WORD *)v35 = 0;
          v29 = v35 + 2;
          v33 += 4;
          --v30;
        }
        while ( v30 );
        v14 = v43;
        v16 = v41;
      }
    }
    v36 = Object;
    ObpUnlockDirectory((__int64)Object, (__int64)&v50);
    v37 = BufferLength;
    if ( v14 <= BufferLength )
      v37 = v14;
    memmove(v32, v31, v37);
    if ( ReturnLength )
      *ReturnLength = v14;
    if ( v16 >= 0 )
      *Context = v15;
    ObfDereferenceObject(v36);
    ExFreePoolWithTag(v31, 0);
    return v16;
  }
}
