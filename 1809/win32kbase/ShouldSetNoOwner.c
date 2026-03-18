/*
 * XREFs of ShouldSetNoOwner @ 0x1C0079C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ShouldSetNoOwner(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  int v4; // edx

  if ( (*(_DWORD *)(a1 + 820) & 0x30) != 0 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  v3 = *(_QWORD *)(a2 + 24);
  if ( a2 == *(_QWORD *)(v3 + 104) )
    return 0LL;
  if ( a2 == *(_QWORD *)(*(_QWORD *)(v3 + 8) + 24LL) )
    return 0LL;
  v4 = *(_DWORD *)(*(_QWORD *)(a2 + 40) + 236LL);
  result = 1LL;
  if ( (unsigned int)(v4 - 1) <= 1 || v4 == 16 )
    return 0LL;
  return result;
}
