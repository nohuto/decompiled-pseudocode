/*
 * XREFs of ?DetachFromChannel@CWindowNode@@UEAAXPEAVCChannelContext@@_N@Z @ 0x18005D5C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Detach@CWindowNode@@QEAAJXZ @ 0x180095F8C (-Detach@CWindowNode@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

void __fastcall CWindowNode::DetachFromChannel(CWindowNode *this, struct CChannelContext *a2, bool a3)
{
  int v6; // eax
  unsigned int v7; // ecx

  if ( a3 )
  {
    v6 = CWindowNode::Detach(this);
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x149u);
  }
  CNotificationResource::DetachFromChannel(this, a2, a3);
}
