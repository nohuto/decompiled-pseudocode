/*
 * XREFs of ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1C0037C40
 * Callers:
 *     ??1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ @ 0x1C0037C10 (--1CInteractionConfigurationGroup@DirectComposition@@QEAA@XZ.c)
 * Callees:
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C0037CA0 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 *     ?Reset@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C0037CF8 (-Reset@-$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectCompos.c)
 */

__int64 __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::~CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdx

  LOBYTE(a2) = 1;
  CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::Reset(a1, a2);
  LOBYTE(v3) = 1;
  return CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Reset(
           a1,
           v3);
}
