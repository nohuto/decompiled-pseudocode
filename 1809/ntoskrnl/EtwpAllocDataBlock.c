/*
 * XREFs of EtwpAllocDataBlock @ 0x140658CE4
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C4D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpEnableGuid @ 0x140655F58 (EtwpEnableGuid.c)
 *     EtwpNotifyGuid @ 0x1406588A8 (EtwpNotifyGuid.c)
 *     EtwpBuildNotificationPacket @ 0x140658C68 (EtwpBuildNotificationPacket.c)
 *     EtwpQueueReply @ 0x140658E44 (EtwpQueueReply.c)
 * Callees:
 *     memmove @ 0x1401D1440 (memmove.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocDataBlock(size_t Size, void *Src, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi

  v3 = 0;
  *a3 = 0LL;
  if ( !Src || *((_DWORD *)Src + 1) == (_DWORD)Size )
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
  else
  {
    return (unsigned int)-1073741820;
  }
  return v3;
}
