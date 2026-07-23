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

LOGICAL __fastcall sub_180064FB8(_QWORD *BaseAddress)
{
  LOGICAL result; // eax
  void *v3; // r8
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(BaseAddress[7] + 176LL) = 0LL;
  result = sub_180065058(BaseAddress);
  v3 = (void *)BaseAddress[11];
  if ( v3 )
  {
    v4 = 0LL;
    if ( *((_DWORD *)BaseAddress + 24) )
    {
      do
      {
        v5 = *(_QWORD *)(BaseAddress[11] + 8 * v4);
        if ( v5 )
        {
          v6 = *(_QWORD *)(v5 + 176);
          if ( v6 )
          {
            if ( (*(_DWORD *)(v6 + 32) & 0x80000) == 0 && *(_QWORD *)(v6 + 56) != v5 )
            {
              *(_QWORD *)(v6 + 56) = v5;
              sub_180064EEC((PVOID *)v5);
            }
          }
        }
        v4 = (unsigned int)(v4 + 1);
      }
      while ( (unsigned int)v4 < *((_DWORD *)BaseAddress + 24) );
      v3 = (void *)BaseAddress[11];
    }
    result = RtlFreeHeap(HeapHandle, 0, v3);
  }
  if ( (BaseAddress[4] & 0x8000) != 0 )
    return RtlFreeHeap(HeapHandle, 0, BaseAddress);
  return result;
}
