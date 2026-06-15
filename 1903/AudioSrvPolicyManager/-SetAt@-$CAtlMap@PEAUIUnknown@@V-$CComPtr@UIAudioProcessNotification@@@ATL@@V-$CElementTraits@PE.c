/*
 * XREFs of ?SetAt@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAAPEAU__POSITION@@AEBQEAUIUnknown@@AEBV?$CComPtr@UIAudioProcessNotification@@@2@@Z @ 0x180015684
 * Callers:
 *     ?RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z @ 0x1800142B0 (-RegisterProcessNotification@CProcess@@UEAAJPEAUIAudioProcessNotification@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000D67C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEBAPEAVCNode@12@AEBQEAUIUnknown@@AEAI1AEAPEAV312@@Z @ 0x180015FEC (-GetNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     ?InitHashTable@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@QEAA_NI_N@Z @ 0x1800161E8 (-InitHashTable@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementT.c)
 *     ?NewNode@?$CAtlMap@PEAUIUnknown@@V?$CComPtr@UIAudioProcessNotification@@@ATL@@V?$CElementTraits@PEAUIUnknown@@@3@V?$CElementTraits@V?$CComPtr@UIAudioProcessNotification@@@ATL@@@3@@ATL@@AEAAPEAVCNode@12@AEBQEAUIUnknown@@II@Z @ 0x180016488 (-NewNode@-$CAtlMap@PEAUIUnknown@@V-$CComPtr@UIAudioProcessNotification@@@ATL@@V-$CElementTraits@.c)
 *     _guard_dispatch_icall_nop @ 0x180035AC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::SetAt(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 Node; // rax
  __int64 v7; // r8
  __int64 v8; // rbx
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdi
  unsigned int v14; // [rsp+30h] [rbp-38h] BYREF
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF
  __int64 v18; // [rsp+88h] [rbp+20h] BYREF

  v15 = -2LL;
  Node = ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::GetNode(
           a1,
           a2,
           (unsigned int)&v14,
           (unsigned int)&v18,
           (__int64)&v16);
  v8 = Node;
  if ( Node )
  {
    v11 = *(_QWORD *)(Node + 8);
    v12 = *a3;
    if ( v11 != *a3 )
    {
      if ( v12 )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 8LL))(*a3);
        v11 = *(_QWORD *)(v8 + 8);
      }
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      *(_QWORD *)(v8 + 8) = v12;
    }
  }
  else
  {
    if ( !*(_QWORD *)a1 )
    {
      LOBYTE(v7) = 1;
      if ( !(unsigned __int8)ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::InitHashTable(
                               a1,
                               *(unsigned int *)(a1 + 16),
                               v7) )
        ATL::AtlThrowImpl(-2147024882);
    }
    v8 = ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::NewNode(
           a1,
           a2,
           v14,
           (unsigned int)v18);
    v18 = v8;
    v9 = *a3;
    v10 = *(_QWORD *)(v8 + 8);
    if ( v10 != *a3 )
    {
      try
      {
        if ( v9 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*a3);
          v10 = *(_QWORD *)(v8 + 8);
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
        *(_QWORD *)(v8 + 8) = v9;
      }
      catch ( ... )
      {
        ATL::CAtlMap<IUnknown *,ATL::CComPtr<IAudioProcessNotification>,ATL::CElementTraits<IUnknown *>,ATL::CElementTraits<ATL::CComPtr<IAudioProcessNotification>>>::RemoveAtPos(
          a1,
          v18);
        throw;
      }
    }
  }
  return v8;
}
