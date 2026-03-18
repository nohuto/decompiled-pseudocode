/*
 * XREFs of ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00220E8
 * Callers:
 *     ?iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z @ 0x1C0020DF0 (-iCombine@RGNOBJ@@QEAAJAEAV1@0J@Z.c)
 *     GreCombineRgn @ 0x1C0023180 (GreCombineRgn.c)
 *     GreOffsetRgn @ 0x1C00347B0 (GreOffsetRgn.c)
 *     GreExtCreateRegion @ 0x1C0043EF0 (GreExtCreateRegion.c)
 *     ?IsEmpty@CRegion@@UEBA_NXZ @ 0x1C0044350 (-IsEmpty@CRegion@@UEBA_NXZ.c)
 *     GreGetRgnBox @ 0x1C005FE50 (GreGetRgnBox.c)
 *     GreCopyVisRgn @ 0x1C0063650 (GreCopyVisRgn.c)
 *     ?iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z @ 0x1C0071C18 (-iReduce@RGNMEMOBJ@@QEAAJAEAVRGNOBJ@@@Z.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C48B0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     EngUpdateDeviceSurface @ 0x1C00C8050 (EngUpdateDeviceSurface.c)
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
