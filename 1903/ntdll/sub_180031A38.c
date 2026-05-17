/*
 * XREFs of sub_180031A38 @ 0x180031A38
 * Callers:
 *     sub_1800318A8 @ 0x1800318A8 (sub_1800318A8.c)
 *     sub_1800356E0 @ 0x1800356E0 (sub_1800356E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180031A38(__int64 a1, signed __int32 a2)
{
  __int64 result; // rax
  signed __int32 v4; // edx
  int v5; // ett

  _m_prefetchw((const void *)(a1 + 428));
  result = *(unsigned int *)(a1 + 428);
  do
  {
    if ( (_DWORD)result == -2 )
    {
      v4 = a2;
      goto LABEL_8;
    }
    if ( (_DWORD)result == a2 || (_DWORD)result == -1 )
      break;
    v4 = -1;
LABEL_8:
    v5 = result;
    result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 428), v4, result);
  }
  while ( v5 != (_DWORD)result );
  return result;
}
