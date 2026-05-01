/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@I@Details@WRL@Microsoft@@YGJPAPAVEventTargetArray@012@$$QAI@Z @ 0x10008C90
 * Callers:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AAEJPAU?$IEventHandler@PAUIInspectable@@@Foundation@Windows@@PAXPAUEventRegistrationToken@@@Z @ 0x100089C0 (-AddInternal@-$EventSource@U-$IEventHandler@PAUIInspectable@@@Foundation@Windows@@U-$InvokeModeO.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UAGKXZ @ 0x100094C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UAGKXZ @ 0x10009D10 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UA.c)
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QAEJI@Z @ 0x10009D20 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QAEJI@Z.c)
 *     ??2@YAPAXIABUnothrow_t@std@@@Z @ 0x1000CA62 (--2@YAPAXIABUnothrow_t@std@@@Z.c)
 *     @_guard_check_icall_nop@4 @ 0x1000CDF0 (@_guard_check_icall_nop@4.c)
 */

int __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned int>(
        _DWORD *a1,
        unsigned int *a2)
{
  void *v2; // esi
  struct Microsoft::WRL::Details::ModuleBase *v3; // eax
  void (__thiscall *v4)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *); // edi
  int v5; // edi

  *a1 = 0;
  v2 = operator new(0x18u, (const struct std::nothrow_t *)std::nothrow);
  if ( !v2 )
    return -2147024882;
  v3 = Microsoft::WRL::Details::ModuleBase::module_;
  *((_DWORD *)v2 + 2) = 1;
  *(_DWORD *)v2 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IUnknown>::`vftable';
  if ( v3 )
  {
    v4 = *(void (__thiscall **)(_DWORD, struct Microsoft::WRL::Details::ModuleBase *))(*(_DWORD *)v3 + 4);
    if ( (char *)v4 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(v3);
    else
      v4(*(_DWORD *)(*(_DWORD *)v3 + 4), v3);
  }
  *(_DWORD *)v2 = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 5) = 0;
  v5 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(
         (Microsoft::WRL::Details::EventTargetArray *)v2,
         *a2);
  if ( v5 >= 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v2 + 2);
    v5 = 0;
    *a1 = v2;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((Microsoft::WRL::Details::EventTargetArray *)v2);
  return v5;
}
