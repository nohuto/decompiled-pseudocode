/*
 * XREFs of RaidGetResourceListElement @ 0x1C001F264
 * Callers:
 *     RaidTranslateResourceListAddress @ 0x1C001F084 (RaidTranslateResourceListAddress.c)
 *     RaidGetResourceListInterrupt @ 0x1C001F190 (RaidGetResourceListInterrupt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetResourceListElement(
        _QWORD *a1,
        unsigned int a2,
        _DWORD *a3,
        _DWORD *a4,
        __int64 *a5,
        __int64 *a6)
{
  __int64 v6; // r10
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx

  v6 = *a1;
  *a3 = *(_DWORD *)(*a1 + 4LL);
  *a4 = *(_DWORD *)(v6 + 8);
  result = a2;
  v8 = 20LL * a2;
  if ( a5 )
  {
    *a4 = *(_DWORD *)(v6 + 8);
    result = v8 + v6 + 20;
    *a5 = result;
  }
  if ( a6 )
  {
    v9 = a1[1];
    *a3 = *(_DWORD *)(v9 + 4);
    *a4 = *(_DWORD *)(v9 + 8);
    result = v8 + v9 + 20;
    *a6 = result;
  }
  return result;
}
