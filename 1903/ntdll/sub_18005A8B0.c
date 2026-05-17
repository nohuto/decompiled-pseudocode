/*
 * XREFs of sub_18005A8B0 @ 0x18005A8B0
 * Callers:
 *     RtlpIsQualifiedLanguage @ 0x18005A920 (RtlpIsQualifiedLanguage.c)
 *     sub_1800EB91C @ 0x1800EB91C (sub_1800EB91C.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     sub_180059D64 @ 0x180059D64 (sub_180059D64.c)
 */

__int64 __fastcall sub_18005A8B0(__int64 *a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rax
  unsigned int v4; // r9d
  __int64 Heap; // rax

  v1 = 0;
  if ( a1 )
  {
    v3 = sub_180059D64(0x2Au, 8uLL);
    if ( v3 )
    {
      Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, v4, v3);
      if ( Heap )
        *a1 = Heap;
      else
        return (unsigned int)-1073741801;
    }
    else
    {
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v1;
}
