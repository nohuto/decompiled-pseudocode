/*
 * XREFs of ?SetHandleFallbackInteractions@CInteraction@@UEAAX_N@Z @ 0x1800DB8B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::SetHandleFallbackInteractions(CInteraction *this, char a2)
{
  *((_BYTE *)this + 1608) &= ~4u;
  *((_BYTE *)this + 1608) |= 4 * a2;
}
