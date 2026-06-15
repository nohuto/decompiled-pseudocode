/*
 * XREFs of _lambda_8ad65360e5e34d857e07ad4180363f05_::operator() @ 0x180107E0C
 * Callers:
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x18004BCEC (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     _lambda_bf1bae6b7e2166dc9e61c759e3ea5164_::operator() @ 0x180108154 (_lambda_bf1bae6b7e2166dc9e61c759e3ea5164_--operator().c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18004EC60 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x18004FC98 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x180108944 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?RemoveAt@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z @ 0x18010CBDC (-RemoveAt@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHH@Z.c)
 */

__int64 __fastcall lambda_8ad65360e5e34d857e07ad4180363f05_::operator()(int *a1)
{
  __int64 v1; // r11
  __int64 v3; // rdi
  __int64 v4; // rdx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // r11
  __int64 *v8; // rsi
  unsigned int v9; // eax
  __int64 v10; // rdx
  unsigned int v11; // eax
  __int64 v12; // r11
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v3 + 4 * v1 + 48) )
  {
    v7 = 16 * v1;
    if ( *a1
      && (v8 = (__int64 *)(v7 + v3 + 72),
          (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                          v8,
                          &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1) )
    {
      if ( *a1 == 3 )
      {
        v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(v8, a1 + 1);
        if ( v9 != -1 && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v8, v9) )
        {
          if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                                *((_QWORD *)a1 + 3) + 8 * (3LL * *a1 + 175),
                                v10,
                                a1 + 1) )
          {
            v5 = -2147024882;
            v6 = 1850LL;
            goto LABEL_22;
          }
          goto LABEL_17;
        }
        v6 = 1848LL;
      }
      else
      {
        v6 = 1855LL;
      }
    }
    else
    {
      v11 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
              (__int64 *)(v7 + v3 + 72),
              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
      if ( v11 != -1
        && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAt(v12 + v3 + 72, v11) )
      {
        if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                              *((_QWORD *)a1 + 3) + 8 * (3LL * *a1 + 175),
                              v13,
                              &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
        {
          v5 = -2147024882;
          v6 = 1842LL;
          goto LABEL_22;
        }
        goto LABEL_17;
      }
      v6 = 1840LL;
    }
    v5 = -2147418113;
    goto LABEL_22;
  }
  *(_DWORD *)(v3 + 4 * v1 + 48) = 1;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(16LL * *a1 + *((_QWORD *)a1 + 3) + 72LL);
  if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                        *((_QWORD *)a1 + 3) + 8 * (3LL * *a1 + 175),
                        v4,
                        &GUID_00000000_0000_0000_0000_000000000000) )
  {
    v5 = -2147024882;
    v6 = 1833LL;
    goto LABEL_22;
  }
LABEL_17:
  if ( (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                       *((_QWORD *)a1 + 3) + 72LL + 16LL * *a1,
                       &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    *(_DWORD *)(*((_QWORD *)a1 + 3) + 4LL * *a1 + 1384) = 1;
    return 0LL;
  }
  v5 = -2147024882;
  v6 = 1859LL;
LABEL_22:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    v6,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)v5);
  return v5;
}
