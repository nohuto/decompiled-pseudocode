/*
 * XREFs of ?SupportsPointerType@CInteraction@@UEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180011800
 * Callers:
 *     <none>
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x180011830 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?GetInputQueueType@CInputSinkStruct@@QEBA?AW4CompositionInputQueueType@@W4InputType@@@Z @ 0x180017764 (-GetInputQueueType@CInputSinkStruct@@QEBA-AW4CompositionInputQueueType@@W4InputType@@@Z.c)
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
      LOBYTE(v2) = (unsigned int)CInputSinkStruct::GetInputQueueType(v4, 7LL) != 0;
  }
  else
  {
    return (unsigned int)CInteractionProcessor::SupportsPointerType(a1 + 344);
  }
  return v2;
}
