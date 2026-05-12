/*
 * XREFs of RaidGetResourceListElement @ 0x1C00207CC
 * Callers:
 *     RaidTranslateResourceListAddress @ 0x1C00205EC (RaidTranslateResourceListAddress.c)
 *     RaidGetResourceListInterrupt @ 0x1C00206F8 (RaidGetResourceListInterrupt.c)
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
  int v8; // r8d
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx

  v6 = *a1;
  v8 = *(_DWORD *)(*a1 + 4LL);
  *a4 = *(_DWORD *)(*a1 + 8LL);
  result = a2;
  *a3 = v8;
  v10 = 20LL * a2;
  if ( a5 )
  {
    *a4 = *(_DWORD *)(v6 + 8);
    result = v10 + v6 + 20;
    *a3 = v8;
    *a5 = result;
  }
  if ( a6 )
  {
    v11 = a1[1];
    *a3 = *(_DWORD *)(v11 + 4);
    *a4 = *(_DWORD *)(v11 + 8);
    result = v10 + v11 + 20;
    *a6 = result;
  }
  return result;
}
