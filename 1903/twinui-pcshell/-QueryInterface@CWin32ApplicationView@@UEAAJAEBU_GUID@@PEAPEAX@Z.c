/*
 * XREFs of ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025500
 * Callers:
 *     ?QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3430 (-QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3440 (-QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3450 (-QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3460 (-QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3470 (-QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3480 (-QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3490 (-QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800256A0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800261F0 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCal.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWin32ApplicationView::QueryInterface(
        CWin32ApplicationView *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // r8
  __int64 v6; // r9
  __int64 v7; // r10
  __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // rcx
  _QWORD *v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  _QWORD *v14; // r11
  __int64 v15; // rcx
  __int64 v16; // r8
  _DWORD *v17; // r9
  __int64 v18; // r10
  __int64 v19; // r8
  int CanCastTo; // ebx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // r9
  signed __int64 v27; // rax
  signed __int64 v28; // rtt

  *a3 = 0LL;
  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3.Data4;
  if ( v3 )
  {
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3, a2)
      || (unsigned int)InlineIsEqualGUID(v4, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v5, v6) )
    {
      *v5 = v7;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
      return 0;
    }
    if ( (unsigned int)InlineIsEqualGUID(v8, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v5, v9) )
    {
      *v11 = v13;
      CanCastTo = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1, v13 + 8, v12) )
      {
        *v14 = v16;
        CanCastTo = 0;
      }
      else if ( (unsigned int)InlineIsEqualGUID(v15, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, v16 + 8, v17) )
      {
        *v14 = v19;
        CanCastTo = 0;
      }
      else if ( *v17 == 480212245
             && v17[1] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data2
             && v17[2] == *(_DWORD *)GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4
             && v17[3] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4[4] )
      {
        CanCastTo = 0;
        *v14 = v19 + 8;
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo == -2147467262 )
      {
        if ( (unsigned int)InlineIsEqualGUID(v17, &GUID_00000038_0000_0000_c000_000000000046, v18 + 144, v17) )
        {
          *v14 = v22;
          CanCastTo = 0;
          goto LABEL_16;
        }
        if ( (unsigned int)InlineIsEqualGUID(v21, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v22 + 8, v23) )
        {
          *v14 = v24;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
                        v24 + 8,
                        v25,
                        v14);
        }
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_16:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v14 + 8LL))(*v14);
    return (unsigned int)CanCastTo;
  }
  v27 = *((_QWORD *)this + 26);
  while ( v27 >= 0 )
  {
    v28 = v27;
    v27 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v27 + 1, v27);
    if ( v28 == v27 )
      goto LABEL_31;
  }
  _InterlockedIncrement((volatile signed __int32 *)(2 * v27 + 16));
LABEL_31:
  *a3 = this;
  return 0LL;
}
