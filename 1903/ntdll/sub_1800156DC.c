/*
 * XREFs of sub_1800156DC @ 0x1800156DC
 * Callers:
 *     sub_180009360 @ 0x180009360 (sub_180009360.c)
 *     sub_18001564C @ 0x18001564C (sub_18001564C.c)
 *     sub_1800FD9F4 @ 0x1800FD9F4 (sub_1800FD9F4.c)
 *     sub_1800FDA88 @ 0x1800FDA88 (sub_1800FDA88.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 */

PVOID __fastcall sub_1800156DC(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int *a6)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // edx
  unsigned __int64 v8; // rcx
  unsigned int v9; // ecx
  PVOID result; // rax

  v6 = a3 * (unsigned __int64)a2;
  if ( v6 > 0xFFFFFFFF )
    return 0LL;
  v7 = v6 + a1;
  if ( (unsigned int)v6 + a1 < a1 )
    return 0LL;
  v8 = a5 * (unsigned __int64)a4;
  if ( v8 > 0xFFFFFFFF )
    return 0LL;
  v9 = v7 + v8;
  if ( v9 < v7 )
    return 0LL;
  result = 0LL;
  if ( a6 )
    *a6 = v9;
  if ( v9 )
    return RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v9);
  return result;
}
