/*
 * XREFs of PopProcessorSetPep @ 0x140193320
 * Callers:
 *     <none>
 * Callees:
 *     KeGetPrcb @ 0x1400A6204 (KeGetPrcb.c)
 */

__int64 __fastcall PopProcessorSetPep(ULONG a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx

  v2 = *(_QWORD *)(a2 + 64);
  v3 = 0;
  if ( v2 && *(_QWORD *)(v2 + 104) )
  {
    PopFxProcessorPlugin = *(_QWORD *)(a2 + 64);
    *(_QWORD *)(KeGetPrcb(a1) + 24280) = a2;
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
