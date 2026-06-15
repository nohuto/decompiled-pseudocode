/*
 * XREFs of _lambda_fcdb45138a38d4e40f36b66b4947cbe9_::operator() @ 0x180108568
 * Callers:
 *     _lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_::operator() @ 0x180052DA8 (_lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_--operator().c)
 * Callees:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18000CAB0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x18005EFD4 (-GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@P.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_fcdb45138a38d4e40f36b66b4947cbe9_::operator()(
        __int64 a1,
        SystemEffectDescriptor *a2,
        _QWORD *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v8; // r15
  int DefaultEffectChainClsids; // eax
  void *v10; // rbx
  int v11; // r11d
  int v12; // eax
  unsigned int v13; // edi
  __int64 v14; // rdx
  int v16; // [rsp+48h] [rbp-21h] BYREF
  int v17; // [rsp+50h] [rbp-19h] BYREF
  __int64 v18; // [rsp+58h] [rbp-11h] BYREF
  LPVOID pv; // [rsp+60h] [rbp-9h] BYREF
  __int128 v20; // [rsp+68h] [rbp-1h] BYREF
  __int64 v21; // [rsp+78h] [rbp+Fh]
  __int64 v22; // [rsp+80h] [rbp+17h] BYREF
  int v23; // [rsp+88h] [rbp+1Fh]
  int v24; // [rsp+8Ch] [rbp+23h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]
  unsigned int v26; // [rsp+E0h] [rbp+77h] BYREF

  v21 = -2LL;
  pv = 0LL;
  v26 = 0;
  v22 = 0LL;
  v23 = 0;
  v24 = 0;
  *a4 = 0LL;
  v8 = a5;
  *a5 = 0LL;
  DefaultEffectChainClsids = SystemEffectDescriptor::GetDefaultEffectChainClsids(
                               a2,
                               (struct CAudioSignalProcessingModeArray *)&v22,
                               &v26,
                               (struct _GUID **)&pv);
  v10 = pv;
  if ( DefaultEffectChainClsids < 0
    || !v26
    || (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(&v22, a3) == -1 )
  {
LABEL_12:
    v13 = 0;
    goto LABEL_13;
  }
  v18 = 0LL;
  *(_QWORD *)&v20 = v10;
  LODWORD(a5) = v11;
  v26 = 0;
  v16 = 0;
  v17 = 1;
  v12 = Microsoft::WRL::Details::MakeAndInitialize<CCompositeSystemEffect,ICompositeSystemEffect,enum APO_TYPE &,enum FormatChangePosition &,enum AUDIO_DIRECTION &,unsigned int &,_GUID const * &>(
          &v18,
          &v17,
          &v16,
          (int *)&v26,
          (unsigned int *)&a5,
          (_OWORD **)&v20);
  v13 = v12;
  if ( v12 < 0 )
  {
    v14 = 1497LL;
    goto LABEL_8;
  }
  v20 = *(_OWORD *)a3;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *, _QWORD, _DWORD, _QWORD *, _QWORD *))(*(_QWORD *)v18 + 24LL))(
          v18,
          *(_QWORD *)(*(_QWORD *)a1 + 16LL),
          &v20,
          0LL,
          0,
          a4,
          v8);
  v13 = v12;
  if ( v12 >= 0 )
  {
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    goto LABEL_12;
  }
  v14 = 1498LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v14,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)v12);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
LABEL_13:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v22);
  CoTaskMemFree(v10);
  return v13;
}
