/*
 * XREFs of NdisCopyFromNetBufferToNetBuffer @ 0x1C001FEA0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0041380 (memmove.c)
 */

NDIS_STATUS __stdcall NdisCopyFromNetBufferToNetBuffer(
        PNET_BUFFER Destination,
        ULONG DestinationOffset,
        ULONG BytesToCopy,
        PNET_BUFFER Source,
        ULONG SourceOffset,
        PULONG BytesCopied)
{
  unsigned __int64 v6; // r12
  unsigned __int64 v7; // r15
  ULONG v8; // ebp
  NDIS_STATUS v9; // ebx
  _MDL *CurrentMdl; // rdi
  _MDL *v11; // rsi
  unsigned __int64 ByteCount; // rax
  unsigned __int64 v13; // rax
  size_t v14; // rcx
  char *MappedSystemVa; // r14
  char *v16; // r14
  size_t v17; // r13
  char *v18; // r15
  size_t v19; // rcx
  char *v20; // r15
  size_t v21; // r12
  size_t v23; // rdx
  char *v24; // rax
  size_t v25; // rax
  char *v26; // rax
  size_t Size; // [rsp+80h] [rbp+8h]
  size_t v29; // [rsp+98h] [rbp+20h]

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
    v29 = BytesToCopy;
    if ( v11->ByteCount - v7 <= BytesToCopy )
      v14 = v11->ByteCount - v7;
    Size = v14;
    if ( (v11->MdlFlags & 5) != 0 )
      MappedSystemVa = (char *)v11->MappedSystemVa;
    else
      MappedSystemVa = (char *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000000u);
    if ( MappedSystemVa
      && ((v16 = &MappedSystemVa[v7], v17 = CurrentMdl->ByteCount - v6, (CurrentMdl->MdlFlags & 5) == 0)
        ? (v18 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u))
        : (v18 = (char *)CurrentMdl->MappedSystemVa),
          v18) )
    {
      v19 = Size;
      v20 = &v18[v6];
      while ( 1 )
      {
LABEL_18:
        v21 = v17;
        if ( v17 >= v19 )
          v21 = v19;
        memmove(v20, v16, v21);
        if ( v29 == v21 )
        {
          v8 = BytesToCopy;
          goto LABEL_22;
        }
        v23 = v29 - v21;
        v29 -= v21;
        if ( v17 == v21 )
          break;
        v20 += v21;
        v17 -= v21;
LABEL_37:
        if ( Size == v21 )
        {
          while ( 1 )
          {
            v11 = v11->Next;
            if ( !v11 )
              goto LABEL_48;
            v25 = v11->ByteCount;
            if ( (_DWORD)v25 )
            {
              v19 = v23;
              if ( v25 <= v23 )
                v19 = v11->ByteCount;
              Size = v19;
              if ( (v11->MdlFlags & 5) != 0 )
              {
                v16 = (char *)v11->MappedSystemVa;
              }
              else
              {
                v26 = (char *)MmMapLockedPagesSpecifyCache(v11, 0, MmCached, 0LL, 0, 0x40000000u);
                v19 = Size;
                v16 = v26;
              }
              if ( v16 )
                goto LABEL_18;
              goto LABEL_23;
            }
          }
        }
        v16 += v21;
        v19 = Size - v21;
        Size -= v21;
      }
      while ( 1 )
      {
        CurrentMdl = CurrentMdl->Next;
        if ( !CurrentMdl )
          break;
        v17 = CurrentMdl->ByteCount;
        if ( CurrentMdl->ByteCount )
        {
          if ( (CurrentMdl->MdlFlags & 5) != 0 )
          {
            v20 = (char *)CurrentMdl->MappedSystemVa;
          }
          else
          {
            v24 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, 0x40000000u);
            v23 = v29;
            v20 = v24;
          }
          if ( !v20 )
            goto LABEL_23;
          goto LABEL_37;
        }
      }
LABEL_48:
      v8 = BytesToCopy - v23;
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
