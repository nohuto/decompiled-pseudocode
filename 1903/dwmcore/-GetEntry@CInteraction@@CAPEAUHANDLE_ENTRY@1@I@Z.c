/*
 * XREFs of ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x18004472C
 * Callers:
 *     ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x180044C80 (--0CInteraction@@IEAA@PEAVCComposition@@@Z.c)
 *     ?Release@CInteraction@@UEAAKXZ @ 0x1800C01C0 (-Release@CInteraction@@UEAAKXZ.c)
 *     ?ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z @ 0x1801D7D58 (-ResolveInteractionHandle@CInteraction@@SAXIPEA_KPEAPEAV1@@Z.c)
 * Callees:
 *     ?ValidEntry@HANDLE_TABLE@@QEBAHI@Z @ 0x180041BE8 (-ValidEntry@HANDLE_TABLE@@QEBAHI@Z.c)
 */

struct CInteraction::HANDLE_ENTRY *__fastcall CInteraction::GetEntry(unsigned int a1)
{
  __int64 v1; // r8
  int v2; // r9d

  if ( HANDLE_TABLE::ValidEntry((HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable, a1) )
    return (struct CInteraction::HANDLE_ENTRY *)((char *)lpMem + (unsigned int)(v2 * Size));
  return (struct CInteraction::HANDLE_ENTRY *)v1;
}
