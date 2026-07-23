/*
 * XREFs of LdrpGetDelayloadAPIInfo @ 0x1800848CC
 * Callers:
 *     LdrpLogDelayLoadTrigger @ 0x180022110 (LdrpLogDelayLoadTrigger.c)
 *     LdrpRedirectDelayloadFailure @ 0x1800847EC (LdrpRedirectDelayloadFailure.c)
 *     LdrpResolveDelayloadAddress @ 0x1800D0B9C (LdrpResolveDelayloadAddress.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall LdrpGetDelayloadAPIInfo(__int64 a1, __int64 a2, __int64 a3, __int64 *a4, _DWORD *a5)
{
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // rdx
  int v8; // ecx
  _DWORD *result; // rax

  v5 = *(_QWORD *)(a1 + 48);
  v6 = 0LL;
  v7 = *(_QWORD *)(v5 + *(unsigned int *)(a2 + 16) + 8 * ((a3 - *(unsigned int *)(a2 + 12) - v5) >> 3));
  if ( v7 < 0 )
  {
    v8 = (unsigned __int16)v7;
  }
  else
  {
    v8 = 0;
    v6 = v7 + v5 + 2;
  }
  *a4 = v6;
  result = a5;
  *a5 = v8;
  return result;
}
