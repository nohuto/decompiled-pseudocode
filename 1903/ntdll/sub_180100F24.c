/*
 * XREFs of sub_180100F24 @ 0x180100F24
 * Callers:
 *     sub_1800FECFC @ 0x1800FECFC (sub_1800FECFC.c)
 *     sub_1800FED60 @ 0x1800FED60 (sub_1800FED60.c)
 *     sub_1800FEDC8 @ 0x1800FEDC8 (sub_1800FEDC8.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_180100F24(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int *a7)
{
  unsigned __int64 v7; // r8
  unsigned int v8; // eax

  if ( !a1 )
    return 0LL;
  v7 = a4 * (unsigned __int64)a3;
  if ( v7 > 0xFFFFFFFF )
    return 0LL;
  v8 = v7 + a2;
  if ( (unsigned int)v7 + a2 < a2 )
    return 0LL;
  if ( a7 )
    *a7 = v8;
  return RtlReAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, a1, v8);
}
