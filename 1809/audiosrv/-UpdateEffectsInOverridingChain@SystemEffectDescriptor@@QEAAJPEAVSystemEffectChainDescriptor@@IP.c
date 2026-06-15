/*
 * XREFs of ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180052EA8
 * Callers:
 *     _lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_::operator() @ 0x180052DA8 (_lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_--operator().c)
 *     _lambda_0004505bc0d239ceb97d539ab355086f_::operator() @ 0x180107B24 (_lambda_0004505bc0d239ceb97d539ab355086f_--operator().c)
 *     _lambda_bf1bae6b7e2166dc9e61c759e3ea5164_::operator() @ 0x180108154 (_lambda_bf1bae6b7e2166dc9e61c759e3ea5164_--operator().c)
 * Callees:
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x18004DD9C (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x18004E378 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x18004E99C (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        SystemEffectDescriptor *a1,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v13; // rdx
  __int64 v14; // rax
  const struct _GUID *v15; // rcx
  unsigned int v16; // r9d
  int v17; // [rsp+20h] [rbp-60h]
  struct _GUID *v18; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v19[2]; // [rsp+40h] [rbp-40h]
  struct _GUID *v20; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v21[2]; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    a1,
    a2,
    (struct CAudioSignalProcessingModeArray *)&v24,
    (struct CAudioSignalProcessingModeArray *)&v22);
  v20 = 0LL;
  *(_QWORD *)v21 = 0LL;
  v18 = 0LL;
  *(_QWORD *)v19 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists((__int64)a1, a3, a4, a5, (__int64)&v20, (__int64)&v18);
  if ( (int)v25 > 0 )
  {
    v10 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v19[0], v18, 0, 0LL);
    v11 = v10;
    if ( v10 < 0 )
    {
      v13 = 393LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v13,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v10,
        v17);
      goto LABEL_5;
    }
  }
  if ( (int)v23 > 0 )
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
    v10 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v21[0], v20, v16, v15);
    v11 = v10;
    if ( v10 < 0 )
    {
      v13 = 400LL;
      goto LABEL_13;
    }
  }
  v11 = 0;
LABEL_5:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v18);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v20);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v22);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v24);
  return v11;
}
