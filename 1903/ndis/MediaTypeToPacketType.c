/*
 * XREFs of MediaTypeToPacketType @ 0x1C00C93F8
 * Callers:
 *     PktMonClientComponentRegister @ 0x1C0023D2C (PktMonClientComponentRegister.c)
 *     PktMonClientAddEdge @ 0x1C00C958C (PktMonClientAddEdge.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MediaTypeToPacketType(int a1)
{
  __int64 result; // rax

  if ( !a1 )
    return 1LL;
  if ( a1 == 16 )
    return 2LL;
  result = 3LL;
  if ( a1 != 19 )
    return 0LL;
  return result;
}
