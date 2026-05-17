/*
 * XREFs of sub_180064FB8 @ 0x180064FB8
 * Callers:
 *     sub_180064EEC @ 0x180064EEC (sub_180064EEC.c)
 *     sub_180064F24 @ 0x180064F24 (sub_180064F24.c)
 *     sub_1800CD828 @ 0x1800CD828 (sub_1800CD828.c)
 * Callees:
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180064EEC @ 0x180064EEC (sub_180064EEC.c)
 *     sub_180065058 @ 0x180065058 (sub_180065058.c)
 */

__int64 __fastcall sub_180064FB8(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(*(_QWORD *)(a1 + 56) + 176LL) = 0LL;
  result = sub_180065058(a1);
  v3 = *(_QWORD *)(a1 + 88);
  if ( v3 )
  {
    v4 = 0LL;
    if ( *(_DWORD *)(a1 + 96) )
    {
      do
      {
        v5 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v4);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 176);
          if ( v6 )
          {
            if ( (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && *(_QWORD *)(v6 + 56) != v5 )
            {
              *(_QWORD *)(v6 + 56) = v5;
              sub_180064EEC(v5);
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *(_DWORD *)(a1 + 96) );
      v3 = *(_QWORD *)(a1 + 88);
    }
    result = RtlFreeHeap(qword_180165420, 0, v3);
  }
  if ( (*(_DWORD *)(a1 + 32) & 0x8000) != 0 )
    return RtlFreeHeap(qword_180165420, 0, a1);
  return result;
}
