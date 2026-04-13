/*
 * XREFs of ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$0A@U?$ImplementsMarker@V?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@Details@23@UIWeakReferenceSource@@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@Windows@@UIAsyncOperationLocal@Internal@9@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@23@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001D8F4
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAUHSTRING__@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$IAsyncOperation@PEAUHSTRING__@@@Foundation@6@UIAsyncOperationLocal@56@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@23@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001C790 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0_ea_18001C790.c)
 * Callees:
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAsyncOperationLocal@Internal@Windows@@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@23@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18001D574 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAsyncOperationLocal@I.c)
 */

__int64 __fastcall Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,0,Microsoft::WRL::Details::ImplementsMarker<Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<HSTRING__ *>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>>,IWeakReferenceSource,Windows::Foundation::IAsyncOperation<HSTRING__ *>,Windows::Internal::IAsyncOperationLocal,Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncDeferral>,Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncFireCompletion>>::CanCastTo(
        __int64 a1,
        _DWORD *a2,
        _QWORD *a3)
{
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *a2 == 54
    && a2[1] == *(_DWORD *)&GUID_00000036_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000036_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000036_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
LABEL_6:
    result = 0LL;
    goto LABEL_17;
  }
  v5 = a1 + 72;
  if ( *a2 == -1796592748
    && a2[1] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data2
    && a2[2] == *(_DWORD *)GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4
    && a2[3] == *(_DWORD *)&GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90.Data4[4]
    || *a2 == 3
    && a2[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = v5;
    goto LABEL_6;
  }
  result = 2147500034LL;
LABEL_17:
  if ( (_DWORD)result == -2147467262 )
  {
    v6 = a1 + 160;
    if ( *a2 == 56
      && a2[1] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data2
      && a2[2] == *(_DWORD *)GUID_00000038_0000_0000_c000_000000000046.Data4
      && a2[3] == *(_DWORD *)&GUID_00000038_0000_0000_c000_000000000046.Data4[4]
      || (v6 = a1 + 168, *a2 == 1042277891)
      && a2[1] == *(_DWORD *)&GUID_3e1fe603_f897_5263_b328_0806426b8a79.Data2
      && a2[2] == *(_DWORD *)GUID_3e1fe603_f897_5263_b328_0806426b8a79.Data4
      && a2[3] == *(_DWORD *)&GUID_3e1fe603_f897_5263_b328_0806426b8a79.Data4[4] )
    {
      *a3 = v6;
      return 0LL;
    }
    else
    {
      return Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Windows::Internal::IAsyncOperationLocal,Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncDeferral>,Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncFireCompletion>>::CanCastTo(
               a1 + 176,
               a2,
               a3);
    }
  }
  return result;
}
