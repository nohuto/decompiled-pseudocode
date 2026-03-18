/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C001B860
 * Callers:
 *     GreExtCreateRegion @ 0x1C0018220 (GreExtCreateRegion.c)
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0018D30 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     ?vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z @ 0x1C001B7A0 (-vUpdate_VisRect@DC@@QEAAXPEAVREGION@@@Z.c)
 *     GreCombineRgn @ 0x1C00247C0 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x1C0049CF0 (GreOffsetRgn.c)
 *     GreCopyVisRgn @ 0x1C0077730 (GreCopyVisRgn.c)
 *     GreGetRgnBox @ 0x1C00792B0 (GreGetRgnBox.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C0087A00 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     EngUpdateDeviceSurface @ 0x1C00A13E0 (EngUpdateDeviceSurface.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C00ADEA4 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C0124510 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RGNOBJ::iComplexity(RGNOBJ *this)
{
  __int64 result; // rax

  result = 1LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 84LL) != 1 )
    return (unsigned int)(*(_DWORD *)(*(_QWORD *)this + 80LL) > 0xA0u) + 2;
  return result;
}
