/*
 * XREFs of CcRemapBcb @ 0x14010AC80
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 */

PVOID __stdcall CcRemapBcb(PVOID Bcb)
{
  unsigned __int64 v1; // rcx

  v1 = (unsigned __int64)Bcb & 0xFFFFFFFFFFFFFFFEuLL;
  if ( *(_WORD *)v1 == 762 )
  {
    v1 = *(_QWORD *)(*(_QWORD *)(v1 + 16) + 56LL);
  }
  else if ( *(_WORD *)v1 == 765 )
  {
    v1 = *(_QWORD *)(v1 + 56);
  }
  if ( !*(_WORD *)(v1 + 16) )
    KeBugCheckEx(0x34u, 0x1FF5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !*(_DWORD *)(*(_QWORD *)(v1 + 8) + 4LL) )
    KeBugCheckEx(0x34u, 0x1FF6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( !(unsigned __int16)_InterlockedIncrement((volatile signed __int32 *)(v1 + 16)) )
    KeBugCheckEx(0x34u, 0x9BCuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  return (PVOID)(v1 | 1);
}
