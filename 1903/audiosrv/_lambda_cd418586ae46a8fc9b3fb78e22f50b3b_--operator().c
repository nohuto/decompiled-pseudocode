/*
 * XREFs of _lambda_cd418586ae46a8fc9b3fb78e22f50b3b_::operator() @ 0x180067590
 * Callers:
 *     _lambda_12caadf06097df6adadb33ec639f4e18_::operator() @ 0x1800376C8 (_lambda_12caadf06097df6adadb33ec639f4e18_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180037FC8 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180038840 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18003AC10 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18005F170 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x1800BE0E4 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x1800BE110 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_cd418586ae46a8fc9b3fb78e22f50b3b_::operator()(
        __int64 a1,
        SystemEffectDescriptor *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v8; // r14
  int v9; // r11d
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  int v14; // [rsp+48h] [rbp-11h] BYREF
  int v15; // [rsp+50h] [rbp-9h] BYREF
  __int64 v16; // [rsp+58h] [rbp-1h] BYREF
  struct _GUID *v17; // [rsp+60h] [rbp+7h] BYREF
  __int128 v18; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v19; // [rsp+78h] [rbp+1Fh]
  __int64 v20; // [rsp+80h] [rbp+27h] BYREF
  int v21; // [rsp+88h] [rbp+2Fh]
  int v22; // [rsp+8Ch] [rbp+33h]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+57h]
  unsigned int v24; // [rsp+D0h] [rbp+77h] BYREF

  v19 = -2LL;
  v17 = 0LL;
  v24 = 0;
  v20 = 0LL;
  v21 = 0;
  v22 = 0;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  if ( (int)SystemEffectDescriptor::GetDefaultEffectChainClsids(
              a2,
              (struct CAudioSignalProcessingModeArray *)&v20,
              &v24,
              &v17) < 0
    || !v24
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(&v20, a3) == -1 )
  {
    goto LABEL_10;
  }
  v16 = 0LL;
  *(_QWORD *)&v18 = v17;
  LODWORD(a5) = v9;
  v24 = 0;
  v14 = 0;
  v15 = 1;
  v10 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
          &v16,
          &v15,
          &v14,
          (int *)&v24,
          (unsigned int *)&a5,
          (_OWORD **)&v18);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v18 = *(_OWORD *)a3;
    v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD, _DWORD, _QWORD *, _QWORD *))(*(_QWORD *)v16 + 24LL))(
            v16,
            *(_QWORD *)(*(_QWORD *)a1 + 16LL),
            &v18,
            0LL,
            0,
            a4,
            v8);
    v11 = v10;
    if ( v10 < 0 )
    {
      v12 = 1538LL;
      goto LABEL_8;
    }
    ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v16);
LABEL_10:
    v11 = 0;
    goto LABEL_11;
  }
  v12 = 1537LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v10);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v16);
LABEL_11:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>(&v17);
  return v11;
}
