/*
 * XREFs of ??1?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18009BB84
 * Callers:
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x18009BDCC (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ?reset@?$shared_object@V?$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VRawInputProvidersTracing@@$00$0EAAAAAAAAAAA@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1800A0430 (-reset@-$shared_object@V-$ActivityData@VRawInputProvidersTracing@@U_TlgReflectorTag_Param0IsProv.c)
 * Callees:
 *     ?reset@shared_buffer@details@wil@@QEAAXXZ @ 0x180052910 (-reset@shared_buffer@details@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6AXXZ@Z @ 0x180099F00 (-get@-$static_lazy@VRawInputProvidersTracing@@@details@wil@@QEAAPEAVRawInputProvidersTracing@@P6.c)
 *     ??$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x18009B480 (--$_TlgWriteActivityAutoStop@$0EAAAAAAAAAAA@$03@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 */

void __fastcall wil::ActivityBase<RawInputProvidersTracing,1,70368744177664,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>::~ActivityData<RawInputProvidersTracing,_TlgReflectorTag_Param0IsProviderType>(
        __int64 a1)
{
  __int64 v2; // rcx
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax

  wil::details::shared_buffer::reset((LPVOID *)(a1 + 224));
  if ( *(_BYTE *)(a1 + 64) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, *(LPVOID *)(a1 + 56));
    *(_BYTE *)(a1 + 64) = 0;
  }
  *(_QWORD *)(a1 + 56) = 0LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    *(_DWORD *)a1 = 2;
    v4 = wil::details::static_lazy<RawInputProvidersTracing>::get(
           v2,
           (void (__cdecl *)())lambda_260b9137d63ddd75627644ad4182c2ea_::_lambda_invoker_cdecl_);
    _TlgWriteActivityAutoStop<70368744177664,4>((const struct _TlgProvider_t *)v4[1]);
  }
  *(_DWORD *)a1 = 3;
}
