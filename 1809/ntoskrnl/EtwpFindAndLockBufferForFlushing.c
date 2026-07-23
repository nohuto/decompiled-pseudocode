/*
 * XREFs of EtwpFindAndLockBufferForFlushing @ 0x1408BF644
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1408BF2D8 (EtwpBufferingModeFlush.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpFindAndLockBufferForFlushing(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r10
  _QWORD *v3; // r8
  bool i; // zf
  __int64 v5; // rcx

  v2 = (_QWORD *)(a1 + 96);
  v3 = *(_QWORD **)(a1 + 96);
  for ( i = v3 == (_QWORD *)(a1 + 96); ; i = v3 == v2 )
  {
    if ( i )
      v3 = 0LL;
    if ( !v3 )
      break;
    v5 = v3[2];
    if ( *(_QWORD *)(v5 + 24) == a2 )
    {
      if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 44), 3, 0) )
      {
        if ( *(_QWORD *)(v5 + 24) == a2 )
          return v5;
        _InterlockedExchange((volatile __int32 *)(v5 + 44), 0);
      }
      return 0LL;
    }
    v3 = (_QWORD *)*v3;
  }
  return 0LL;
}
