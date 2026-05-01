/*
 * XREFs of ?Attach@?$ComPtr@VLegacyViewWrapper@@@WRL@Microsoft@@QEAAXPEAVLegacyViewWrapper@@@Z @ 0x18026A4FC
 * Callers:
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAI$$TPEBGAEAY0DF@$$CBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEA$$T$$QEAPEBGAEAY0DF@$$CBG$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x1802667F0 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAI$$TPEBGAEAY0DF@$$CBGW4ViewLi.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x180266954 (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4View.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UILegacyViewWrapper@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18026DE50 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VView_ea_18026DE50.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<LegacyViewWrapper>::Attach(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,ILegacyViewWrapper>::Release(v4);
  *a1 = a2;
  return result;
}
