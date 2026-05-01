/*
 * XREFs of ??0TimelineHost@TimelineUI@@QE$AAA@XZ @ 0x180269F1C
 * Callers:
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::operator() @ 0x18026BFE4 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--operator().c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x180088460 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z @ 0x18025B7BC (-__abi_winrt_cast_to@@YAPE$AAVObject@Platform@@_NPE$AAV12@AEBU_GUID@@@Z.c)
 *     ?GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ @ 0x18025D864 (-GetForCurrentThread@ICoreWindowStatic@Core@UI@Windows@@UE$AAAPE$AAVCoreWindow@234@XZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TimelineUI::TimelineHost::TimelineHost(__int64 a1, __int64 a2, __int64 a3, void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 (__fastcall ***v5)(_QWORD, __int64, __int64 *); // rdi
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // [rsp+28h] [rbp-18h] BYREF
  int v11; // [rsp+30h] [rbp-10h]
  int v12; // [rsp+34h] [rbp-Ch]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  __int64 (__fastcall ***v14)(_QWORD, __int64, __int64 *); // [rsp+78h] [rbp+38h]
  __int64 v15; // [rsp+80h] [rbp+40h]

  v10 = 53LL;
  v11 = 192;
  v12 = 1174405120;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"TimelineUI.TimelineHost",
                                (struct Platform::Guid *)&v10,
                                (void **)&v13,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  v5 = (__int64 (__fastcall ***)(_QWORD, __int64, __int64 *))Windows::UI::Core::ICoreWindowStatic::GetForCurrentThread(v13);
  v14 = v5;
  v6 = __abi_winrt_cast_to(1, v5, (__int64)&_uuidof__AVTimelineHost_TimelineUI__);
  v15 = v6;
  v7 = __abi_winrt_ptr_ctor(v6);
  v15 = v7;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v5 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, __int64, __int64 *)))(*v5)[2])(v5);
  v8 = __abi_winrt_ptr_ctor(v7);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return v8;
}
