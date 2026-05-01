/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AAI@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@AAI@Z @ 0x100102FE
 * Callers:
 *     ?Remove@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010E2B (-Remove@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeOption.c)
 *     ?Remove@?$EventSource@U?$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QAEJUEventRegistrationToken@@@Z @ 0x10010F84 (-Remove@-$EventSource@U-$IEventHandler@PAVAppMemoryUsageLimitChangingEventArgs@System@Windows@@@.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QAEJI@Z @ 0x10009D20 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QAEJI@Z.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QAE@XZ @ 0x100103C7 (--0EventTargetArray@Details@WRL@Microsoft@@QAE@XZ.c)
 */

int __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned int &>(
        volatile signed __int32 **a1,
        unsigned int *a2)
{
  Microsoft::WRL::Details::EventTargetArray *v4; // eax
  int v5; // edi
  volatile signed __int32 *v6; // esi

  *a1 = 0;
  v4 = (Microsoft::WRL::Details::EventTargetArray *)operator new(0x18u);
  if ( !v4 )
    return -2147024882;
  v6 = (volatile signed __int32 *)Microsoft::WRL::Details::EventTargetArray::EventTargetArray(v4);
  v5 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
         (Microsoft::WRL::Details::EventTargetArray *)v6,
         *a2);
  if ( v5 >= 0 )
  {
    if ( v6 )
      _InterlockedIncrement(v6 + 2);
    *a1 = v6;
    v5 = 0;
  }
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((Microsoft::WRL::Details::EventTargetArray *)v6);
  return v5;
}
