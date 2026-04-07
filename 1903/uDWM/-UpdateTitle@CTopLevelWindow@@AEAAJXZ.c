/*
 * XREFs of ?UpdateTitle@CTopLevelWindow@@AEAAJXZ @ 0x1800371A8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001B210 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?SetText@CText@@QEAAJPEBG@Z @ 0x1800371E8 (-SetText@CText@@QEAAJPEBG@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18004FBC4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CTopLevelWindow::UpdateTitle(CText **this)
{
  unsigned int v1; // ebx
  int v3; // eax
  void *v4; // [rsp+28h] [rbp-10h]

  v1 = 0;
  if ( this[64] )
  {
    v3 = CText::SetText(this[64], *((const unsigned __int16 **)this[90] + 2));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x12FBu, v4);
  }
  return v1;
}
