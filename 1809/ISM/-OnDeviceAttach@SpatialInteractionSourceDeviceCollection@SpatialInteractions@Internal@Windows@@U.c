/*
 * XREFs of ?OnDeviceAttach@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJKKPEAUIHidDevice@234@PEAUMPCControllerDeviceInfo@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800AEDE0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJKKAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800AFB28 (-AddDeviceToCache@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 *     ?QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@V?$function@$$A6AXAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z@6@_N@Z @ 0x1800AFC34 (-QueueWorkItem@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 *     ??0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@123@KKV?$function@$$A6AXXZ@std@@@Z @ 0x1801248BC (--0SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@QEAA@PEAUIHidDevice@.c)
 *     ??2@YAPEAX_K@Z @ 0x18012C18C (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnDeviceAttach(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        unsigned int a2,
        __int64 a3,
        struct Windows::Internal::SpatialInteractions::IHidDevice *a4,
        struct MPCControllerDeviceInfo *a5,
        struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *a6)
{
  char *v6; // rbx
  __int128 v8; // xmm0
  _DWORD *v9; // rsi
  __int64 v10; // rax
  int v11; // eax
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r9
  volatile signed __int32 *v15; // rbx
  char *v17; // [rsp+30h] [rbp-79h] BYREF
  volatile signed __int32 *v18; // [rsp+38h] [rbp-71h]
  __int128 v19; // [rsp+40h] [rbp-69h]
  __int64 v20; // [rsp+50h] [rbp-59h] BYREF
  __int128 v21; // [rsp+58h] [rbp-51h]
  __int64 *v22; // [rsp+88h] [rbp-21h]
  _QWORD v23[8]; // [rsp+90h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+4Fh]

  v6 = (char *)this - 8;
  DWORD2(v19) = a2;
  *(_QWORD *)&v19 = (char *)this - 8;
  v8 = v19;
  v9 = operator new(0x4B8uLL);
  v9[2] = 1;
  v9[3] = 1;
  *(_QWORD *)v9 = &std::_Ref_count_obj<Windows::Internal::SpatialInteractions::SpatialInteractionSourceController>::`vftable';
  v20 = (__int64)off_18013E5F8;
  v22 = &v20;
  v21 = v8;
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceController::SpatialInteractionSourceController(
    (Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *)(v9 + 4),
    (__int64)&v20);
  v10 = *((_QWORD *)v9 + 2);
  v17 = (char *)(v9 + 4);
  v18 = v9;
  v11 = (*(__int64 (__fastcall **)(_DWORD *))(v10 + 128))(v9 + 4);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v11 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::AddDeviceToCache(
            v6,
            a2,
            0LL,
            &v17);
    v12 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(char *, struct MPCControllerDeviceInfo *))(*(_QWORD *)v17 + 144LL))(v17, a5);
      v12 = v11;
      if ( v11 >= 0 )
      {
        (**(void (__fastcall ***)(struct Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks *))a6)(a6);
        v23[0] = off_18013E2C0;
        v23[1] = v6;
        LOBYTE(v14) = 1;
        v23[7] = v23;
        v11 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::QueueWorkItem(
                v6,
                &v17,
                v23,
                v14);
        v12 = v11;
        if ( v11 >= 0 )
        {
          v12 = 0;
          goto LABEL_11;
        }
        v13 = 246LL;
      }
      else
      {
        v13 = 236LL;
      }
    }
    else
    {
      v13 = 234LL;
    }
  }
  else
  {
    v13 = 232LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)v11);
LABEL_11:
  if ( v18 )
  {
    if ( _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
    {
      v15 = v18;
      (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
      if ( _InterlockedExchangeAdd(v15 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v18 + 8LL))(v18);
    }
  }
  return v12;
}
