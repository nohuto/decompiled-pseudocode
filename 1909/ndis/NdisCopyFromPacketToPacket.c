/*
 * XREFs of NdisCopyFromPacketToPacket @ 0x1C0080E40
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0041380 (memmove.c)
 */

void __stdcall NdisCopyFromPacketToPacket(
        PNDIS_PACKET Destination,
        UINT DestinationOffset,
        UINT BytesToCopy,
        PNDIS_PACKET Source,
        UINT SourceOffset,
        PUINT BytesCopied)
{
  _MDL *Head; // rdi
  char *v10; // rbx
  _MDL *v11; // rsi
  UINT ByteCount; // r14d
  char *MappedSystemVa; // r13
  UINT v14; // ebp
  UINT v16; // eax
  UINT v17; // ecx
  char *v18; // rax
  UINT v19; // eax
  UINT v20; // ecx
  __int64 v21; // rbx
  unsigned int v22; // [rsp+20h] [rbp-38h]
  char *v23; // [rsp+28h] [rbp-30h]

  v22 = 0;
  *BytesCopied = 0;
  if ( BytesToCopy )
  {
    Head = Destination->Private.Head;
    if ( Head )
    {
      v10 = (char *)((Head->MdlFlags & 5) != 0 ? Head->MappedSystemVa : MmMapLockedPages(Destination->Private.Head, 0));
      v11 = Source->Private.Head;
      ByteCount = Head->ByteCount;
      v23 = v10;
      if ( v11 )
      {
        if ( (v11->MdlFlags & 5) != 0 )
          MappedSystemVa = (char *)v11->MappedSystemVa;
        else
          MappedSystemVa = (char *)MmMapLockedPages(v11, 0);
        v14 = v11->ByteCount;
        if ( BytesToCopy )
        {
          v16 = BytesToCopy;
          v17 = 0;
          while ( ByteCount )
          {
            if ( !v14 )
            {
              v11 = v11->Next;
              if ( !v11 )
                goto LABEL_40;
              if ( (v11->MdlFlags & 5) != 0 )
                MappedSystemVa = (char *)v11->MappedSystemVa;
              else
                MappedSystemVa = (char *)MmMapLockedPages(v11, 0);
              v14 = v11->ByteCount;
              goto LABEL_37;
            }
            if ( !DestinationOffset )
              goto LABEL_28;
            if ( DestinationOffset <= ByteCount )
            {
              ByteCount -= DestinationOffset;
              v23 = &v10[DestinationOffset];
              DestinationOffset = 0;
LABEL_28:
              if ( SourceOffset )
              {
                if ( SourceOffset > v14 )
                {
                  SourceOffset -= v14;
                  v14 = 0;
LABEL_38:
                  v16 = BytesToCopy;
                  goto LABEL_39;
                }
                v14 -= SourceOffset;
                MappedSystemVa += SourceOffset;
                SourceOffset = 0;
              }
              v19 = v14;
              v20 = BytesToCopy - v22;
              if ( v14 > ByteCount )
                v19 = ByteCount;
              if ( v20 >= v19 )
                v20 = v19;
              v21 = v20;
              memmove(v23, MappedSystemVa, v20);
              v23 += v21;
              MappedSystemVa += v21;
              v22 += v21;
              v14 -= v21;
              ByteCount -= v21;
LABEL_37:
              v17 = v22;
              goto LABEL_38;
            }
            DestinationOffset -= ByteCount;
            ByteCount = 0;
LABEL_39:
            v10 = v23;
            if ( v17 >= v16 )
              goto LABEL_40;
          }
          Head = Head->Next;
          if ( !Head )
            goto LABEL_40;
          if ( (Head->MdlFlags & 5) != 0 )
            v18 = (char *)Head->MappedSystemVa;
          else
            v18 = (char *)MmMapLockedPages(Head, 0);
          ByteCount = Head->ByteCount;
          v23 = v18;
          goto LABEL_37;
        }
LABEL_40:
        *BytesCopied = v22;
      }
    }
  }
}
