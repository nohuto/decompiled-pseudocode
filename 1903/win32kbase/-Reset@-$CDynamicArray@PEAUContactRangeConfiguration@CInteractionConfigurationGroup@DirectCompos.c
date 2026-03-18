/*
 * XREFs of ?Reset@?$CDynamicArray@PEAUContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@$0HHHAHDFF@@@QEAAX_N@Z @ 0x1C007DE50
 * Callers:
 *     ??1?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAA@XZ @ 0x1C007DD98 (--1-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposi.c)
 *     ?Reset@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAX_N@Z @ 0x1C007DDF8 (-Reset@-$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectCom.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall CDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration *,2003858261>::Reset(
        __int64 a1,
        char a2)
{
  __int64 v3; // rcx

  if ( a2 )
  {
    v3 = *(_QWORD *)a1;
    if ( v3 )
    {
      Win32FreePool(v3);
      *(_QWORD *)a1 = 0LL;
    }
    *(_DWORD *)(a1 + 12) = 0;
  }
  *(_DWORD *)(a1 + 8) = 0;
}
