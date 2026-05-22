/*
 * XREFs of ?CallbackOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E1340
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x1800285C4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ??0?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CE5F4 (--0-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Swap@?$_Func_class@XE@std@@IEAAXAEAV12@@Z @ 0x1800E68A8 (-_Swap@-$_Func_class@XE@std@@IEAAXAEAV12@@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::CallbackOnInputThread(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a2)
{
  RTL_SRWLOCK *v3; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *v13; // [rsp+20h] [rbp-A8h] BYREF
  _BYTE v14[56]; // [rsp+30h] [rbp-98h] BYREF
  __int64 v15; // [rsp+68h] [rbp-60h]
  _BYTE v16[64]; // [rsp+70h] [rbp-58h] BYREF

  v3 = (RTL_SRWLOCK *)((char *)this + 664);
  while ( 1 )
  {
    v15 = 0LL;
    AcquireSRWLockExclusive(v3);
    if ( !*((_QWORD *)this + 82) )
      break;
    v6 = (_QWORD *)*((_QWORD *)this + 78);
    if ( v6 )
      v6 = (_QWORD *)*v6;
    v7 = std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
           (__int64)v16,
           *(_QWORD *)(v6[1] + 8 * (*((_QWORD *)this + 81) & (v6[2] - 1LL))));
    std::_Func_class<void,unsigned char>::_Swap(v7, v14);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v16, v8);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(
      *(_QWORD *)(*((_QWORD *)this + 79) + 8 * (*((_QWORD *)this + 81) & (*((_QWORD *)this + 80) - 1LL))),
      v9);
    if ( (*((_QWORD *)this + 82))-- == 1LL )
      *((_QWORD *)this + 81) = 0LL;
    else
      ++*((_QWORD *)this + 81);
    if ( v3 )
      ReleaseSRWLockExclusive(v3);
    if ( v15 )
    {
      v13 = a2;
      (*(void (__fastcall **)(__int64, struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks **))(*(_QWORD *)v15 + 16LL))(
        v15,
        &v13);
    }
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v14, v10);
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy((__int64)v14, v5);
  return 0LL;
}
