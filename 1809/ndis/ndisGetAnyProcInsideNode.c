/*
 * XREFs of ndisGetAnyProcInsideNode @ 0x1C00BB4B4
 * Callers:
 *     NdisAllocateSharedMemory @ 0x1C0022590 (NdisAllocateSharedMemory.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026050 (__security_check_cookie.c)
 */

__int64 __fastcall ndisGetAnyProcInsideNode(USHORT a1)
{
  char v1; // cl
  unsigned __int64 i; // rax
  unsigned int Group; // [rsp+20h] [rbp-28h]
  USHORT Count; // [rsp+24h] [rbp-24h] BYREF
  _GROUP_AFFINITY Affinity; // [rsp+28h] [rbp-20h] BYREF

  KeQueryNodeActiveAffinity(a1, &Affinity, &Count);
  v1 = 0;
  Group = Affinity.Group;
  if ( Count )
  {
    for ( i = Affinity.Mask; (i & 1) == 0; i >>= 1 )
      BYTE2(Group) = ++v1;
  }
  else
  {
    BYTE2(Group) = -1;
  }
  return Group;
}
