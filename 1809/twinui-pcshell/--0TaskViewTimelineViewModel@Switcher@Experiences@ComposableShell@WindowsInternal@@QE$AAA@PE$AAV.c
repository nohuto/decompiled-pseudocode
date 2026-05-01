/*
 * XREFs of ??0TaskViewTimelineViewModel@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAVSwitchItemListViewModel@1234@PE$AAVObject@Platform@@@Z @ 0x180269BD0
 * Callers:
 *     _lambda_bb5ee7a853464f85d103d6a4a4db2877_::operator() @ 0x18026BFE4 (_lambda_bb5ee7a853464f85d103d6a4a4db2877_--operator().c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18007F598 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x180088460 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18025B6D4 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@__IRowHeightFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVRowHeight@2345@NH@Z @ 0x18026F048 (-CreateInstance@__IRowHeightFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAA.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::TaskViewTimelineViewModel::TaskViewTimelineViewModel(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 Instance; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdi
  _DWORD v11[6]; // [rsp+28h] [rbp-18h] BYREF
  void *v12; // [rsp+50h] [rbp+10h] BYREF
  __int64 v13; // [rsp+68h] [rbp+28h]

  v11[0] = -147706592;
  v11[1] = 1004406091;
  v11[2] = -569983063;
  v11[3] = 865357291;
  v12 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.TaskViewTimelineViewModel",
                                (struct Platform::Guid *)v11,
                                &v12,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
  Instance = WindowsInternal::ComposableShell::Experiences::Switcher::__IRowHeightFactory::CreateInstance(v12, a2, a3);
  v13 = Instance;
  v8 = __abi_winrt_ptr_ctor(Instance);
  v13 = v8;
  if ( Instance )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)Instance + 16LL))(Instance);
  v9 = __abi_winrt_ptr_ctor(v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v12 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v12 + 16LL))(v12);
  return v9;
}
