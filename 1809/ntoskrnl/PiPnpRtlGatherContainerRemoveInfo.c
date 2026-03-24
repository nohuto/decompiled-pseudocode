/*
 * XREFs of PiPnpRtlGatherContainerRemoveInfo @ 0x140828F84
 * Callers:
 *     PiPnpRtlCmActionCallback @ 0x140599080 (PiPnpRtlCmActionCallback.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     PiDmGetObject @ 0x1405989C8 (PiDmGetObject.c)
 *     PiPnpRtlFreePanelRemoveInfo @ 0x140828EE0 (PiPnpRtlFreePanelRemoveInfo.c)
 */

__int64 __fastcall PiPnpRtlGatherContainerRemoveInfo(__int64 a1, __int64 a2, unsigned int ***a3)
{
  __int64 *PoolWithTag; // rax
  __int64 v7; // r9
  int Object; // ebx
  __int64 v9; // r9

  PoolWithTag = (__int64 *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x47706E50u);
  *a3 = (unsigned int **)PoolWithTag;
  if ( !PoolWithTag )
  {
    Object = -1073741670;
LABEL_8:
    PiPnpRtlFreePanelRemoveInfo(*a3);
    *a3 = 0LL;
    return (unsigned int)Object;
  }
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  Object = PiDmGetObject(1LL, a1, PoolWithTag, v7);
  if ( (int)(Object + 0x80000000) >= 0 && Object != -1073741772 )
    goto LABEL_8;
  Object = PiDmGetObject(5LL, a2, (__int64 *)*a3 + 1, v9);
  if ( Object == -1073741772 )
    Object = 0;
  if ( Object < 0 )
    goto LABEL_8;
  return (unsigned int)Object;
}
