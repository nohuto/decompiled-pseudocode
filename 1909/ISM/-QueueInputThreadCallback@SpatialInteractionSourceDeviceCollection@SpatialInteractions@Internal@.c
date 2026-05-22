/*
 * XREFs of ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800E40E8
 * Callers:
 *     _lambda_94bf11a16993f060fe03c20fc4fc2394_::operator() @ 0x1800E0D18 (_lambda_94bf11a16993f060fe03c20fc4fc2394_--operator().c)
 *     ?OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJXZ @ 0x1800E38D0 (-OnFinalRelease@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@U.c)
 *     _lambda_f7bf13e3725ed8e2d2abfc7e94bc16a5_::operator() @ 0x1800EB320 (_lambda_f7bf13e3725ed8e2d2abfc7e94bc16a5_--operator().c)
 *     ?AddSource@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800EB6A4 (-AddSource@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJA.c)
 *     ?OnInputSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800ECD40 (-OnInputSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 *     ?RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800ED0D4 (-RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000ADC4 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy@?$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ @ 0x1800285C4 (-_Tidy@-$_Func_class@XPEBU_MIT_KEYBOARD_INPUT_MESSAGE@@@std@@IEAAXXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180051734 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$function@$$A6AXAEAV?$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z @ 0x1800CE5F4 (--0-$function@$$A6AXAEAV-$ComPtr@VDataProviderPrincipal@@@WRL@Microsoft@@@Z@std@@QEAA@AEBV01@@Z.c)
 *     ?_Growmap@?$deque@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@V?$allocator@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@2@@std@@IEAAX_K@Z @ 0x1800E6578 (-_Growmap@-$deque@V-$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInte.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // rdi
  __int64 v5; // r15
  _QWORD *Ptr; // rcx
  __int64 v7; // rdx
  const char *v8; // r9
  __int64 v9; // rdx
  unsigned int LastError; // ebx
  const char *v11; // r9
  __int64 result; // rax
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+50h] [rbp+8h]

  v4 = a1 + 84;
  AcquireSRWLockExclusive(a1 + 84);
  try
  {
    if ( a1[81].Ptr <= (char *)a1[83].Ptr + 1 )
      std::deque<std::function<void (Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *)>>::_Growmap(&a1[79]);
    a1[82].Ptr = (PVOID)((__int64)a1[82].Ptr & ((__int64)a1[81].Ptr - 1));
    v5 = ((__int64)a1[83].Ptr + (unsigned __int64)a1[82].Ptr) & ((__int64)a1[81].Ptr - 1);
    Ptr = a1[80].Ptr;
    if ( !Ptr[v5] )
    {
      *((_QWORD *)a1[80].Ptr + v5) = std::_Allocate<16,std::_Default_allocate_traits,0>(0x40uLL);
      Ptr = a1[80].Ptr;
    }
    std::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>::function<void (Microsoft::WRL::ComPtr<DataProviderPrincipal> &)>(
      Ptr[v5],
      a2);
    ++a1[83].Ptr;
    if ( SetEvent(a1[86].Ptr) )
    {
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2, v7);
      result = 0LL;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x43D,
                    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcede"
                             "vicecollection.cpp",
                    v8);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2, v9);
      result = LastError;
    }
  }
  catch ( ... )
  {
    v15 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x43F,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
            v11);
    std::_Func_class<void,_MIT_KEYBOARD_INPUT_MESSAGE const *>::_Tidy(a2, v13);
    return v15;
  }
  return result;
}
