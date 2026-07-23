/*
 * XREFs of EtwpDequeueBufferPendingCompressionFromQueue @ 0x140315328
 * Callers:
 *     EtwpDequeueBufferPendingCompression @ 0x140315234 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueBufferPendingCompressionFromQueue(_QWORD *a1, volatile signed __int32 *a2, __int64 a3)
{
  _QWORD **v3; // r9
  _QWORD *i; // r10
  _QWORD *v7; // rcx

  v3 = (_QWORD **)(a1 + 1);
  for ( i = (_QWORD *)a1[1]; ; i = (_QWORD *)*i )
  {
    if ( !i )
      return 0LL;
    if ( *((_DWORD *)i + 3) == 4 && *((char *)i + 20) >= 0 )
      break;
    v3 = (_QWORD **)i;
  }
  _InterlockedDecrement(a2);
  v7 = *v3;
  *v3 = (_QWORD *)**v3;
  if ( *v7 )
    *v7 = 0LL;
  else
    *a1 = v3;
  *(_QWORD *)(a3 + 32) = *v3;
  *v3 = (_QWORD *)(a3 + 32);
  if ( v3 == (_QWORD **)*a1 )
    *a1 = a3 + 32;
  return i - 4;
}
