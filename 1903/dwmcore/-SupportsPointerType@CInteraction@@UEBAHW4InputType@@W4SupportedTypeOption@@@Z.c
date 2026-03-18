/*
 * XREFs of ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800C4CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x1800195A8 (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800C4CD0 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 */

__int64 __fastcall CInteraction::SupportsPointerType(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx

  v2 = 0;
  if ( a2 == 7 )
  {
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
      LOBYTE(v2) = (unsigned int)CInputSinkStruct::GetInputQueueType(v4, 7) != 0;
  }
  else
  {
    return (unsigned int)CInteractionProcessor::SupportsPointerType(a1 + 344);
  }
  return v2;
}
