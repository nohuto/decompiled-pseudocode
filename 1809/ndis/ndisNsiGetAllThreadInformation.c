/*
 * XREFs of ndisNsiGetAllThreadInformation @ 0x1C00B3A60
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z @ 0x1C0001338 (-ndisCmGetThreadState@@YAXPEAU_ETHREAD@@PEAI1@Z.c)
 */

__int64 __fastcall ndisNsiGetAllThreadInformation(__int64 a1)
{
  int v1; // eax
  unsigned int *v2; // rdx
  __int64 result; // rax
  unsigned int v4; // ecx

  v1 = *(_DWORD *)(a1 + 32);
  if ( v1 )
  {
    v4 = v1 - 1;
    result = 3221225485LL;
    if ( v4 <= 1 )
      return 3221225474LL;
  }
  else
  {
    v2 = *(unsigned int **)(a1 + 40);
    if ( v2 )
      ndisCmGetThreadState(KeGetCurrentThread(), v2, v2 + 1);
    return 0LL;
  }
  return result;
}
