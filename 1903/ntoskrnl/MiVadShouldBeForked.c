/*
 * XREFs of MiVadShouldBeForked @ 0x1402E5314
 * Callers:
 *     MiAllocateChildVads @ 0x14089A8C0 (MiAllocateChildVads.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiVadShouldBeForked(__int64 a1)
{
  int v1; // edx
  int v2; // eax
  _BOOL8 result; // rax

  v1 = *(_DWORD *)(a1 + 48);
  result = 0;
  if ( (v1 & 0x500000) != 0x500000 )
  {
    if ( (v1 & 0x100000) != 0 && ((v1 & 0x400000) != 0 || (v1 & 0xC0000u) >= 0x80000) )
      return 1;
    v2 = v1 & 0x70;
    if ( ((v1 & 0x70) == 0 || v2 == 32 || v2 == 80)
      && (v1 & 0x3100000) != 0x2100000
      && (v1 & 0x5100000) != 0x4100000
      && ((v1 & 0x100000) != 0 || (*(_DWORD *)(a1 + 64) & 0x4000000) != 0) )
    {
      return 1;
    }
  }
  return result;
}
