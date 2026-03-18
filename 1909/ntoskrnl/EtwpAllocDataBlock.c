/*
 * XREFs of EtwpAllocDataBlock @ 0x1406AAAE4
 * Callers:
 *     EtwpEnableGuid @ 0x140691558 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x140693238 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpNotifyGuid @ 0x1406A9BCC (EtwpNotifyGuid.c)
 *     EtwpQueueReply @ 0x1406AA9DC (EtwpQueueReply.c)
 *     EtwpBuildNotificationPacket @ 0x1406AAA68 (EtwpBuildNotificationPacket.c)
 * Callees:
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocDataBlock(size_t Size, void *Src, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi

  v3 = 0;
  *a3 = 0LL;
  if ( Src && *((_DWORD *)Src + 1) != (_DWORD)Size )
  {
    return (unsigned int)-1073741820;
  }
  else
  {
    v6 = Size;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x44777445u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( Src )
        memmove(PoolWithTag, Src, v6);
      else
        memset(PoolWithTag, 0, v6);
      v8[2] = 1;
      *a3 = v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
