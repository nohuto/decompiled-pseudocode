/*
 * XREFs of PpmPerfQueryPackageProcessorCount @ 0x1402F6FF0
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x140005278 (KeGetPrcb.c)
 */

__int64 __fastcall PpmPerfQueryPackageProcessorCount(int a1)
{
  unsigned int v1; // ebx
  ULONG i; // edi
  __int64 Prcb; // rax
  unsigned int v5; // edx

  v1 = 0;
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; v1 = v5 )
  {
    Prcb = KeGetPrcb(i);
    v5 = v1 + 1;
    if ( a1 != *(_DWORD *)(Prcb + 24888) )
      v5 = v1;
    ++i;
  }
  return v1;
}
