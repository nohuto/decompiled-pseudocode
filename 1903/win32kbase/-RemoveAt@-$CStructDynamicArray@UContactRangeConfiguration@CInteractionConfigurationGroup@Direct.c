/*
 * XREFs of ?RemoveAt@?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@QEAAXI@Z @ 0x1C007DE84
 * Callers:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1C007D7CC (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     Win32FreePool @ 0x1C0016AB0 (Win32FreePool.c)
 */

void __fastcall CStructDynamicArray<DirectComposition::CInteractionConfigurationGroup::ContactRangeConfiguration>::RemoveAt(
        __int64 a1,
        unsigned int a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx

  v3 = a2;
  Win32FreePool(*(_QWORD *)(*(_QWORD *)a1 + 8LL * a2));
  if ( v3 < --*(_DWORD *)(a1 + 8) )
  {
    do
    {
      v4 = v3++;
      *(_QWORD *)(*(_QWORD *)a1 + 8 * v4) = *(_QWORD *)(*(_QWORD *)a1 + 8LL * v3);
    }
    while ( v3 < *(_DWORD *)(a1 + 8) );
  }
}
