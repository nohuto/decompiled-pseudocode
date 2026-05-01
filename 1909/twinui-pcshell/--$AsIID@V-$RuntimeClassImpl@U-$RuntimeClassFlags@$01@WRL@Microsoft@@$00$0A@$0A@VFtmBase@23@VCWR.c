/*
 * XREFs of ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIRotationManagerSync@@UIShellRotationManager@@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIRotationManagerSync@@UIShellRotationManager@@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18000D42C
 * Callers:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@23@VCWRLObjectWithGITSite@@UIRotationManagerSync@@UIShellRotationManager@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000D420 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VFtmBase@2.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IRotationManagerSync,IShellRotationManager>>(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  _QWORD *v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  _QWORD *v10; // r8
  __int64 v11; // r9
  int v12; // ebx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r9
  _QWORD *v16; // r10
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // r10
  __int64 v22; // r9
  _QWORD *v23; // r10

  *a3 = 0LL;
  if ( !(unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3, a1) )
  {
    if ( (unsigned int)InlineIsEqualGUID(v3, &GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90, v4, v5) )
    {
      *v7 = v8;
      v12 = 0;
      v13 = v8;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v6, &GUID_00000003_0000_0000_c000_000000000046, v7, v8) )
      {
        *v10 = v11;
        v12 = 0;
        v13 = v11;
      }
      else
      {
        v12 = -2147467262;
        v13 = 0LL;
      }
      if ( v12 == -2147467262 )
      {
        if ( (unsigned int)InlineIsEqualGUID(v9, &GUID_fc4801a3_2ba9_11cf_a229_00aa003d7352, v13, v11 + 32) )
        {
          *v16 = v15;
          v12 = 0;
          v13 = v15;
        }
        else
        {
          v12 = -2147467262;
        }
        if ( v12 == -2147467262 )
        {
          if ( (unsigned int)InlineIsEqualGUID(v14, &GUID_f6bba08c_f8c6_470b_937a_5b2687c0ffee, v13, v15 + 40) )
          {
            *v20 = v19;
            v12 = 0;
            v13 = v19;
          }
          else if ( (unsigned int)InlineIsEqualGUID(v17, &GUID_6fdc29fe_42bd_4dc0_b783_b7854dcba425, v18, v19) )
          {
            v13 = v22 + 8;
            v12 = 0;
            *v23 = v22 + 8;
          }
          else
          {
            v12 = -2147467262;
          }
        }
      }
      if ( v12 < 0 )
        return (unsigned int)v12;
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    return (unsigned int)v12;
  }
  *v4 = v5;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  return 0LL;
}
