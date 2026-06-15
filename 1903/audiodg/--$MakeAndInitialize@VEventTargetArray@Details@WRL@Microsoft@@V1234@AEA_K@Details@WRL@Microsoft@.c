/*
 * XREFs of ??$MakeAndInitialize@VEventTargetArray@Details@WRL@Microsoft@@V1234@AEA_K@Details@WRL@Microsoft@@YAJPEAPEAVEventTargetArray@012@AEA_K@Z @ 0x1400449B8
 * Callers:
 *     ?Remove@?$EventSource@U?$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@@PEAVAudioDeviceModuleNotificationEventArgs@234@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJUEventRegistrationToken@@@Z @ 0x14004B374 (-Remove@-$EventSource@U-$ITypedEventHandler@PEAVAudioDeviceModulesManager@Devices@Media@Windows@.c)
 * Callees:
 *     ?RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z @ 0x1400024F4 (-RuntimeClassInitialize@EventTargetArray@Details@WRL@Microsoft@@QEAAJ_K@Z.c)
 *     ?Attach@?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetArray@Details@23@@Z @ 0x1400025CC (-Attach@-$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAXPEAVEventTargetAr.c)
 *     ??0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ @ 0x140002600 (--0EventTargetArray@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140013AF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x14001619C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Microsoft::WRL::Details::EventTargetArray,Microsoft::WRL::Details::EventTargetArray,unsigned __int64 &>(
        volatile signed __int32 **a1,
        unsigned __int64 *a2)
{
  Microsoft::WRL::Details::EventTargetArray *v4; // rax
  int v5; // edi
  Microsoft::WRL::Details::EventTargetArray *v6; // rax
  unsigned __int64 v7; // rdx
  volatile signed __int32 *v8; // rbx
  Microsoft::WRL::Details::EventTargetArray *v10; // [rsp+30h] [rbp+8h] BYREF
  Microsoft::WRL::Details::EventTargetArray *v11; // [rsp+40h] [rbp+18h]

  *a1 = 0LL;
  v4 = (Microsoft::WRL::Details::EventTargetArray *)operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v4;
  if ( v4 )
  {
    v6 = Microsoft::WRL::Details::EventTargetArray::EventTargetArray(v4);
    v10 = 0LL;
    Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::Attach((__int64 *)&v10, (__int64)v6);
    v7 = *a2;
    v8 = (volatile signed __int32 *)v10;
    v5 = Microsoft::WRL::Details::EventTargetArray::RuntimeClassInitialize(v10, v7);
    if ( v5 >= 0 )
    {
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 3);
        v8 = (volatile signed __int32 *)v10;
      }
      *a1 = v8;
      v5 = 0;
    }
    if ( v8 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
