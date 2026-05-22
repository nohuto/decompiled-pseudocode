/*
 * XREFs of ?QueueInputThreadCallback@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJV?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@Z @ 0x1800B388C
 * Callers:
 *     ?AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800B2A20 (-AddSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     ?RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800B2DD0 (-RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 *     ?OnSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800B2FD0 (-OnSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     ?OnSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800B34B0 (-OnSourceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800035C4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_Growmap@?$deque@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@V?$allocator@V?$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInteractions@Internal@Windows@@@Z@std@@@2@@std@@IEAAX_K@Z @ 0x1800B4F34 (-_Growmap@-$deque@V-$function@$$A6AXPEAUISpatialInteractionSourceCollectionCallbacks@SpatialInte.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueInputThreadCallback(
        RTL_SRWLOCK *a1,
        __int64 a2)
{
  RTL_SRWLOCK *v4; // r14
  __int64 v5; // r15
  _QWORD *Ptr; // rax
  __int64 v7; // r15
  __int64 (__fastcall ***v8)(_QWORD, __int64); // rcx
  __int64 v9; // rdx
  const char *v10; // r9
  __int64 v11; // rdx
  unsigned int LastError; // edi
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  unsigned int v19; // [rsp+60h] [rbp+8h]

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
      *((_QWORD *)a1[80].Ptr + v5) = operator new(0x40uLL);
      Ptr = a1[80].Ptr;
    }
    v7 = Ptr[v5];
    *(_QWORD *)(v7 + 56) = 0LL;
    v8 = *(__int64 (__fastcall ****)(_QWORD, __int64))(a2 + 56);
    if ( v8 )
      *(_QWORD *)(v7 + 56) = (**v8)(v8, v7);
    ++a1[83].Ptr;
    if ( SetEvent(a1[86].Ptr) )
    {
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      v15 = *(_QWORD *)(a2 + 56);
      if ( v15 )
      {
        LOBYTE(v9) = v15 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v15 + 32LL))(v15, v9);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
      result = 0LL;
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x5B8,
                    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcede"
                             "vicecollection.cpp",
                    v10);
      if ( v4 )
        ReleaseSRWLockExclusive(v4);
      v13 = *(_QWORD *)(a2 + 56);
      if ( v13 )
      {
        LOBYTE(v11) = v13 != a2;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 32LL))(v13, v11);
        *(_QWORD *)(a2 + 56) = 0LL;
      }
      result = LastError;
    }
  }
  catch ( ... )
  {
    v19 = wil::details::in1diag3::Return_CaughtException(
            retaddr,
            (void *)0x5BA,
            (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
            v10);
    v16 = *(_QWORD *)(a2 + 56);
    if ( v16 )
    {
      LOBYTE(v17) = v16 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 32LL))(v16, v17);
      *(_QWORD *)(a2 + 56) = 0LL;
    }
    return v19;
  }
  return result;
}
