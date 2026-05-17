/*
 * XREFs of sub_18007C1B8 @ 0x18007C1B8
 * Callers:
 *     sub_18000EC54 @ 0x18000EC54 (sub_18000EC54.c)
 *     RtlSetThreadPreferredUILanguages @ 0x180012A10 (RtlSetThreadPreferredUILanguages.c)
 *     sub_180015318 @ 0x180015318 (sub_180015318.c)
 * Callees:
 *     sub_180005F60 @ 0x180005F60 (sub_180005F60.c)
 *     sub_180015770 @ 0x180015770 (sub_180015770.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

__int64 __fastcall sub_18007C1B8(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // ebx
  __int64 *Heap; // rax
  __int64 *UserPrefLanguages; // rdi
  int v9; // esi
  __int64 v11; // rcx

  v3 = 0;
  if ( NtCurrentTeb()->UserPrefLanguages )
  {
    UserPrefLanguages = (__int64 *)NtCurrentTeb()->UserPrefLanguages;
  }
  else
  {
    Heap = (__int64 *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 16LL);
    UserPrefLanguages = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    *Heap = 0LL;
    Heap[1] = 0LL;
    NtCurrentTeb()->UserPrefLanguages = Heap;
  }
  v9 = a3 - 4;
  if ( !v9 )
  {
    if ( a1 )
    {
      if ( *UserPrefLanguages )
      {
        *(_DWORD *)(a1 + 40) = *(_DWORD *)(*UserPrefLanguages + 40);
        sub_180015770(*UserPrefLanguages);
      }
      *UserPrefLanguages = a1;
      return v3;
    }
    return (unsigned int)-1073741811;
  }
  if ( v9 != 1 )
    return v3;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v11 = UserPrefLanguages[1];
  if ( v11 )
    sub_180005F60(v11);
  UserPrefLanguages[1] = a2;
  return v3;
}
