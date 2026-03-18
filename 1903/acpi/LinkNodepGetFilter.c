/*
 * XREFs of LinkNodepGetFilter @ 0x1C002AA18
 * Callers:
 *     LinkNodeCrackPrt @ 0x1C001B04C (LinkNodeCrackPrt.c)
 *     LinkNodepGetFilter @ 0x1C002AA18 (LinkNodepGetFilter.c)
 * Callees:
 *     LinkNodepGetFilter @ 0x1C002AA18 (LinkNodepGetFilter.c)
 */

__int64 __fastcall LinkNodepGetFilter(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 result; // rax

  v2 = *(_QWORD *)(a1 + 64);
  if ( (*(_BYTE *)(v2 + 8) & 0x60) != 0 && *(_QWORD *)(v2 + 736) == a2 )
    return a1;
  v4 = *(_QWORD *)(v2 + 752);
  if ( v4 == v2 + 752 )
    return 0LL;
  v5 = v4 - 768;
  v6 = v4 - 768;
  while ( 1 )
  {
    v7 = *(_QWORD *)(v6 + 720);
    if ( v7 )
    {
      result = LinkNodepGetFilter(v7, a2);
      if ( result )
        break;
    }
    v6 = *(_QWORD *)(v6 + 768) - 768LL;
    if ( v6 == v5 )
      return 0LL;
  }
  return result;
}
