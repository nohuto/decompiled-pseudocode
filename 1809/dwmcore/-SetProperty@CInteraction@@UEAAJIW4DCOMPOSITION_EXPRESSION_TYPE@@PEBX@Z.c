/*
 * XREFs of ?SetProperty@CInteraction@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18019CF90
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z @ 0x18007F4FC (-SetRailsEnabled_RenderThread@CInteraction@@AEAAJ_NW4RailsAxis@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CInteraction::SetProperty(__int64 a1, int a2, __int64 a3, char *a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  unsigned int v6; // r8d

  v4 = 0;
  v5 = a2 - 11;
  if ( !v5 )
  {
    v6 = 0;
    goto LABEL_6;
  }
  if ( v5 == 1 )
  {
    v6 = 1;
LABEL_6:
    CInteraction::SetRailsEnabled_RenderThread(a1 - 8, *a4, v6);
    return v4;
  }
  v4 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(a1, 0LL, 0, -2147024809, 0x271u);
  return v4;
}
