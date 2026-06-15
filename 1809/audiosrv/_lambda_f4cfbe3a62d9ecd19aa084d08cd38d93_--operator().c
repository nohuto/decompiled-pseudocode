/*
 * XREFs of _lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_::operator() @ 0x180052DA8
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_f4cfbe3a62d9ecd19aa084d08cd38d93__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x180052D90 (std--_Func_impl_no_alloc__lambda_f4cfbe3a62d9ecd19aa084d08cd38d93__long_SystemEffec_ea_180052D90.c)
 * Callees:
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x1800312B0 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033B14 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18004F8E0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180052EA8 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ?GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ @ 0x180053C98 (-GetVirtualSurroundEffectMode@CEndpointCharacteristics@@QEAAIXZ.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator() @ 0x180107C78 (_lambda_759c10d6a679fdab43c4d5c1468c56ec_--operator().c)
 *     _lambda_fcdb45138a38d4e40f36b66b4947cbe9_::operator() @ 0x180108568 (_lambda_fcdb45138a38d4e40f36b66b4947cbe9_--operator().c)
 *     ?GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z @ 0x18010B730 (-GetSpatialRenderingMode@CEndpointCharacteristics@@QEAAXPEAI@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall lambda_f4cfbe3a62d9ecd19aa084d08cd38d93_::operator()(
        CEndpointCharacteristics **a1,
        __int64 a2,
        __int64 a3)
{
  unsigned int VirtualSurroundEffectMode; // edi
  int i; // r12d
  bool v8; // bl
  int v9; // eax
  __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // [rsp+20h] [rbp-50h]
  unsigned int v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v22[2]; // [rsp+48h] [rbp-28h] BYREF
  __int128 v23; // [rsp+58h] [rbp-18h] BYREF

  v22[1] = -2LL;
  VirtualSurroundEffectMode = CEndpointCharacteristics::GetVirtualSurroundEffectMode(*a1);
  if ( VirtualSurroundEffectMode )
  {
    if ( (unsigned int)CEndpointCharacteristics::HasHardwareAudioEngine(*a1) )
    {
      CEndpointCharacteristics::GetSpatialRenderingMode(*a1, &v19);
      if ( v19 != 1 && v19 - 3 > 3 )
        VirtualSurroundEffectMode = 0;
    }
  }
  for ( i = 0; i < *(_DWORD *)(a3 + 8); ++i )
  {
    v23 = *(_OWORD *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](a3, i);
    v8 = VirtualSurroundEffectMode != 0;
    if ( VirtualSurroundEffectMode == 2 )
    {
      v20 = 0LL;
      v22[0] = 0LL;
      pv = 0LL;
      v19 = 0;
      v8 = 1;
      if ( (int)lambda_fcdb45138a38d4e40f36b66b4947cbe9_::operator()(a1 + 1, a2, &v23, &v20, v22) >= 0 )
      {
        v11 = v22[0];
        if ( v22[0] )
        {
          if ( (*(int (__fastcall **)(_QWORD, LPVOID *, unsigned int *, _QWORD))(*(_QWORD *)v22[0] + 24LL))(
                 v22[0],
                 &pv,
                 &v19,
                 0LL) >= 0 )
          {
            v12 = 0;
            if ( v19 )
            {
              while ( 1 )
              {
                v11 = 2LL * v12;
                v13 = *((_QWORD *)pv + 2 * v12) - *(_QWORD *)&GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data1;
                if ( !v13 )
                  v13 = *((_QWORD *)pv + 2 * v12 + 1) - *(_QWORD *)GUID_6f64adc7_8211_11e2_8c70_2c27d7f001fa.Data4;
                if ( !v13 )
                  break;
                v14 = *((_QWORD *)pv + 2 * v12) - *(_QWORD *)&GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data1;
                if ( !v14 )
                  v14 = *((_QWORD *)pv + 2 * v12 + 1) - *(_QWORD *)GUID_6f64adc6_8211_11e2_8c70_2c27d7f001fa.Data4;
                if ( !v14 )
                  break;
                if ( ++v12 >= v19 )
                {
                  v8 = 1;
                  goto LABEL_24;
                }
              }
              v8 = 0;
            }
          }
        }
LABEL_24:
        if ( v8
          && v20
          && ((unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v11, v20, 48000LL, 6LL)
           || (unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v15, v20, 48000LL, 8LL)
           || (unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v16, v20, 44100LL, 6LL)
           || (unsigned __int8)lambda_759c10d6a679fdab43c4d5c1468c56ec_::operator()(v17, v20, 44100LL, 8LL)) )
        {
          v8 = 0;
        }
      }
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v22[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find((__int64 *)*a1 + 9, &v23);
    LODWORD(v18) = 1;
    SystemEffectDescriptor::UpdateEffectsInOverridingChain(
      a2,
      a3,
      v8,
      (unsigned __int64)&unk_1801B2620 & -(__int64)v8,
      v18,
      v9 != -1);
  }
  *(_DWORD *)(a3 + 16) = 28;
  return 0LL;
}
