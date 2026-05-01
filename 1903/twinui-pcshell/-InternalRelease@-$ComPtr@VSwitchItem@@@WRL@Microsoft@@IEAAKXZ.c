/*
 * XREFs of ?InternalRelease@?$ComPtr@VSwitchItem@@@WRL@Microsoft@@IEAAKXZ @ 0x180360128
 * Callers:
 *     ??$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Microsoft@@YAJPEAPEAVSwitchItem@@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Z @ 0x18035FC50 (--$MakeAndInitialize@VSwitchItem@@V1@AEAPEAUIApplicationView@@AEAW4GroupingType@@@Details@WRL@Mi.c)
 *     ?SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z @ 0x180360354 (-SwitchItem_CreateInstance@@YAJPEAUIApplicationView@@W4GroupingType@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObservableItem@@UISwitchItem@@UISwitchItemInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180360210 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VObs_ea_180360210.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<SwitchItem>::InternalRelease(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ObservableItem,ISwitchItem,ISwitchItemInternal>::Release(v1);
  }
  return result;
}
