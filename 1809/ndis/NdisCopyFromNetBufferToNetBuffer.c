/*
 * XREFs of NdisCopyFromNetBufferToNetBuffer @ 0x1C0012900
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0026E40 (memmove.c)
 */

NDIS_STATUS __stdcall NdisCopyFromNetBufferToNetBuffer(
        PNET_BUFFER Destination,
        ULONG DestinationOffset,
        ULONG BytesToCopy,
        PNET_BUFFER Source,
        ULONG SourceOffset,
        PULONG BytesCopied)
{
  unsigned __int64 v6; // r13
  unsigned __int64 v7; // r14
  ULONG v8; // ebp
  NDIS_STATUS v9; // ebx
  _MDL *CurrentMdl; // rdi
  _MDL *v11; // rsi
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v13; // rax
  size_t v14; // rcx
  char *MappedSystemVa; // r15
  char *v16; // r15
  size_t v17; // rcx
  char *v18; // r12
  char *v19; // r12
  size_t i; // r13
  size_t v21; // r14
  char *v23; // rax
  size_t v24; // rdx
  char *v25; // rax
  size_t v26; // rax
  size_t Size; // [rsp+38h] [rbp-40h]
  size_t v29; // [rsp+80h] [rbp+8h]
  size_t v30; // [rsp+98h] [rbp+20h]

  v6 = DestinationOffset + Destination->CurrentMdlOffset;
  v7 = SourceOffset + Source->CurrentMdlOffset;
  v8 = *BytesCopied;
  v9 = 0;
  CurrentMdl = Destination->CurrentMdl;
  v11 = Source->CurrentMdl;
  while ( v11 )
  {
    ByteCount = v11->ByteCount;
    if ( v7 < ByteCount )
      break;
    v11 = v11->Next;
    v7 -= ByteCount;
  }
  while ( CurrentMdl )
  {
    v13 = CurrentMdl->ByteCount;
    if ( v6 < v13 )
      break;
    CurrentMdl = CurrentMdl->Next;
    v6 -= v13;
  }
  if ( BytesToCopy && v11 && CurrentMdl )
  {
    v14 = BytesToCopy;
    v30 = BytesToCopy;
    if ( v11->ByteCount - v7 <= BytesToCopy )
      v14 = v11->ByteCount - v7;
    Size = v14;
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)v11->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
    if ( MappedSystemVa
      && ((v16 = &MappedSystemVa[v7], v17 = CurrentMdl->ByteCount - v6, v29 = v17, (CurrentMdl->MdlFlags & 5) == 0)
        ? (v23 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag),
           v17 = v29,
           v18 = v23)
        : (v18 = (char *)CurrentMdl->MappedSystemVa),
          v18) )
    {
      v19 = &v18[v6];
      for ( i = Size; ; i -= v21 )
      {
LABEL_18:
        v21 = v17;
        if ( v17 >= i )
          v21 = i;
        memmove(v19, v16, v21);
        if ( v30 == v21 )
        {
          v8 = BytesToCopy;
          goto LABEL_22;
        }
        v24 = v30 - v21;
        v30 -= v21;
        if ( v29 == v21 )
          break;
        v19 += v21;
        v17 = v29 - v21;
        v29 -= v21;
LABEL_37:
        if ( i == v21 )
        {
          while ( 1 )
          {
            v11 = v11->Next;
            if ( !v11 )
              goto LABEL_48;
            v26 = v11->ByteCount;
            if ( (_DWORD)v26 )
            {
              i = v24;
              if ( v26 <= v24 )
                i = v11->ByteCount;
              if ( (v11->MdlFlags & 5) != 0 )
                v16 = (char *)v11->MappedSystemVa;
              else
                v16 = (char *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
              if ( v16 )
              {
                v17 = v29;
                goto LABEL_18;
              }
              goto LABEL_23;
            }
          }
        }
        v16 += v21;
      }
      while ( 1 )
      {
        CurrentMdl = CurrentMdl->Next;
        if ( !CurrentMdl )
          break;
        v17 = CurrentMdl->ByteCount;
        v29 = v17;
        if ( CurrentMdl->ByteCount )
        {
          if ( (CurrentMdl->MdlFlags & 5) != 0 )
          {
            v19 = (char *)CurrentMdl->MappedSystemVa;
          }
          else
          {
            v25 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
            v17 = v29;
            v19 = v25;
            v24 = v30;
          }
          if ( !v19 )
            goto LABEL_23;
          goto LABEL_37;
        }
      }
LABEL_48:
      v8 = BytesToCopy - v24;
    }
    else
    {
LABEL_23:
      v9 = -1073741670;
    }
  }
  else
  {
    v8 = 0;
  }
LABEL_22:
  *BytesCopied = v8;
  return v9;
}
