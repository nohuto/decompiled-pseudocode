/*
 * XREFs of ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x1800377C8
 * Callers:
 *     _lambda_12caadf06097df6adadb33ec639f4e18_::operator() @ 0x1800376C8 (_lambda_12caadf06097df6adadb33ec639f4e18_--operator().c)
 *     _lambda_7015787212d530e04e17b0823ea9804b_::operator() @ 0x180067078 (_lambda_7015787212d530e04e17b0823ea9804b_--operator().c)
 *     _lambda_903ccf9134cc2c82d7843578f8252e54_::operator() @ 0x180067488 (_lambda_903ccf9134cc2c82d7843578f8252e54_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x180037CAC (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x180037D58 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180037E4C (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180037FC8 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        SystemEffectDescriptor *a1,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        __int64 a4,
        unsigned int a5,
        int a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // rax
  const struct _GUID *v15; // rcx
  unsigned int v16; // r9d
  struct _GUID *v17; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v18[2]; // [rsp+40h] [rbp-40h]
  struct _GUID *v19; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v20[2]; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v23 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    a1,
    a2,
    (struct CAudioSignalProcessingModeArray *)&v23,
    (struct CAudioSignalProcessingModeArray *)&v21);
  v19 = 0LL;
  *(_QWORD *)v20 = 0LL;
  v17 = 0LL;
  *(_QWORD *)v18 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists(a1, a3, a4, a5, &v19, &v17, -2LL);
  if ( (int)v24 > 0 )
  {
    v10 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v18[0], v17, 0, 0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v13 = 393LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v10);
      goto LABEL_5;
    }
  }
  if ( (int)v22 > 0 )
  {
    if ( a6 == 1 && (v14 = *((_QWORD *)a1 + 2)) != 0 )
    {
      v15 = *(const struct _GUID **)(v14 + 56);
      v16 = *(_DWORD *)(v14 + 64);
    }
    else
    {
      v15 = 0LL;
      v16 = 0;
    }
    v10 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v20[0], v19, v16, v15);
    v11 = v10;
    if ( v10 < 0 )
    {
      v13 = 400LL;
      goto LABEL_13;
    }
  }
  v11 = 0;
LABEL_5:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v17);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v19);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v23);
  return v11;
}
