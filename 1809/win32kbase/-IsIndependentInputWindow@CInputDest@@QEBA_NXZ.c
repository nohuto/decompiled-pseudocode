/*
 * XREFs of ?IsIndependentInputWindow@CInputDest@@QEBA_NXZ @ 0x1C008B2A4
 * Callers:
 *     ?DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C002F178 (-DoesBelongToForeground@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z @ 0x1C0130FA4 (-DoesBelongToForegroundThread@CInputDest@@QEBA_NW4ForegroundCheck@1@@Z.c)
 *     ?HandlePointerNodeWithTarget@CTouchProcessor@@AEAA?AW4PointerNodeWithTargetHandling@1@PEBUCPointerInfoNode@@IPEAU3@@Z @ 0x1C013E8A4 (-HandlePointerNodeWithTarget@CTouchProcessor@@AEAA-AW4PointerNodeWithTargetHandling@1@PEBUCPoint.c)
 * Callees:
 *     ?IsCompositionInput@CInputDest@@QEBA_NXZ @ 0x1C002EFF8 (-IsCompositionInput@CInputDest@@QEBA_NXZ.c)
 */

char __fastcall CInputDest::IsIndependentInputWindow(CInputDest *this)
{
  char v2; // bl
  __int64 v4; // rcx
  bool v5; // cl

  v2 = 0;
  if ( CInputDest::IsCompositionInput(this) )
  {
    if ( *((_DWORD *)this + 21) == 2 )
      v4 = *((_QWORD *)this + 9);
    else
      v4 = 0LL;
    if ( v4 )
      v5 = (unsigned int)IsMessageOnlyWindow() != 0;
    else
      v5 = 0;
    if ( v5 )
      return 1;
  }
  return v2;
}
