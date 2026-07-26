/*
 * XREFs of NetPacketShallowCopyMany @ 0x1C00823D0
 * Callers:
 *     <none>
 * Callees:
 *     NetPacketReuseMany @ 0x1C00822A0 (NetPacketReuseMany.c)
 *     NetPacketShallowCopyOne @ 0x1C0082470 (NetPacketShallowCopyOne.c)
 */

__int64 __fastcall NetPacketShallowCopyMany(
        struct _NET_DATAPATH_DESCRIPTOR *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int a6)
{
  int v6; // ebx
  int v11; // esi

  v6 = 0;
  if ( !a6 )
    return 0LL;
  while ( 1 )
  {
    v11 = NetPacketShallowCopyOne(a1, a2 + (unsigned int)(a3 * v6), a4 + (unsigned int)(a5 * v6));
    if ( v11 < 0 )
      break;
    if ( ++v6 >= a6 )
      return 0LL;
  }
  if ( v6 )
    NetPacketReuseMany(a1, a2, a3, v6 - 1);
  return (unsigned int)v11;
}
