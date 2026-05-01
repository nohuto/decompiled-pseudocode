/*
 * XREFs of ?Get@?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1801A9394
 * Callers:
 *     ?GetResults@?$AsyncOperation@U?$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Foundation@Windows@@U?$IAsyncOperationCompletedHandler@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@23@V?$CMarshaledInterfaceResult@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@UEAAJPEAPEAUIGetCurrentActivityForViewOperationResults@Activities@Data@23@@Z @ 0x1801A9D70 (-GetResults@-$AsyncOperation@U-$IAsyncOperation@PEAVGetCurrentActivityForViewOperationResults@Ac.c)
 * Callees:
 *     ?_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z @ 0x180019450 (-_Unmarshal@CMarshaledInterface@@AEAAJAEBU_GUID@@PEAPEAX_N@Z.c)
 *     ??0WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18002A0F0 (--0WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ??$CopyLocal@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@?$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJV?$ComPtrRef@V?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18008D84C (--$CopyLocal@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@-$Gi.c)
 *     ??$Initialize@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@?$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJAEBV?$ComPtr@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@WRL@Microsoft@@@Z @ 0x18008D880 (--$Initialize@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@-$G.c)
 *     ??4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z @ 0x18008D9C4 (--4CMarshaledInterface@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?IsInitialized@?$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEBA_NXZ @ 0x18008E65C (-IsInitialized@-$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DD450 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?CopyLocal@?$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Internal@Windows@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801A89DC (-CopyLocal@-$GitPtrSupportsAgile@UIGetCurrentActivityForViewOperationResults@Activities@Data@Int.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Windows::Internal::CMarshaledInterfaceResult<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::Get(
        __int64 a1,
        void **a2)
{
  RTL_SRWLOCK *v4; // rsi
  bool IsInitialized; // al
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // rdx
  unsigned int v9; // eax
  __int64 v11; // [rsp+50h] [rbp+20h] BYREF
  __int64 v12; // [rsp+58h] [rbp+28h] BYREF
  __int64 v13; // [rsp+60h] [rbp+30h] BYREF

  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v12);
  Microsoft::WRL::WeakRef::WeakRef((Microsoft::WRL::WeakRef *)&v11);
  v4 = (RTL_SRWLOCK *)(a1 + 32);
  AcquireSRWLockShared((PSRWLOCK)(a1 + 32));
  CMarshaledInterface::operator=(&v12, (__int64 *)(a1 + 24));
  IsInitialized = Windows::Internal::GitPtrSupportsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::IsInitialized((_QWORD *)(a1 + 16));
  v7 = 0;
  if ( IsInitialized )
  {
    v13 = 0LL;
    Windows::Internal::GitPtrSupportsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::CopyLocal<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
      v6,
      &v13);
    Windows::Internal::GitPtrSupportsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::Initialize<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>(
      &v11,
      &v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v13);
  }
  ReleaseSRWLockShared(v4);
  *a2 = 0LL;
  if ( Windows::Internal::GitPtrSupportsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::IsInitialized(&v11) )
  {
    v9 = Windows::Internal::GitPtrSupportsAgile<Windows::Internal::Data::Activities::IGetCurrentActivityForViewOperationResults>::CopyLocal(
           &v11,
           v8,
           a2);
LABEL_7:
    v7 = v9;
    goto LABEL_8;
  }
  if ( v12 )
  {
    v9 = CMarshaledInterface::_Unmarshal((CMarshaledInterface *)&v12, &GUID_570e20d1_ca8a_454c_92d3_3d2a5d160fcc, a2, 0);
    goto LABEL_7;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v11);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v12);
  return v7;
}
