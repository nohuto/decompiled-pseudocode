/*
 * XREFs of ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002EAD0
 * Callers:
 *     ?QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D62E0 (-QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D62F0 (-QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6300 (-QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6310 (-QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6320 (-QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6330 (-QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D6340 (-QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCallback@@VFtmBase@23@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18002F590 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00UIAppSizeConstraintsCal.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x180127714 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CWin32ApplicationView::QueryInterface(
        CWin32ApplicationView *this,
        const struct _GUID *a2,
        void **a3)
{
  void **v3; // r11
  CWin32ApplicationView *v4; // r10
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v13; // r9
  __int64 v14; // rcx
  _QWORD *v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  _QWORD *v18; // r11
  int CanCastTo; // ebx
  __int64 v20; // rcx
  __int64 v21; // r8
  _DWORD *v22; // r9
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r9

  *a3 = 0LL;
  v3 = a3;
  v4 = this;
  if ( *(_OWORD *)a2 != *(_OWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3 )
  {
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046, a3, a2)
      || (unsigned int)InlineIsEqualGUID(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, v9, v10) )
    {
      *v9 = v11;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      return 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v12, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v9, v13) )
      {
        *v15 = v17;
        CanCastTo = 0;
      }
      else
      {
        if ( (unsigned int)InlineIsEqualGUID(v14, &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1, v17 + 8, v16) )
        {
          *v18 = v21;
          CanCastTo = 0;
        }
        else if ( (unsigned int)InlineIsEqualGUID(v20, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02, v21 + 8, v22) )
        {
          *v18 = v24;
          CanCastTo = 0;
        }
        else if ( *v22 == 480212245
               && v22[1] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data2
               && v22[2] == *(_DWORD *)GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4
               && v22[3] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4[4] )
        {
          CanCastTo = 0;
          *v18 = v24 + 8;
        }
        else
        {
          CanCastTo = -2147467262;
        }
        if ( CanCastTo == -2147467262 )
        {
          if ( (unsigned int)InlineIsEqualGUID(v22, &GUID_00000038_0000_0000_c000_000000000046, v23 + 144, v22) )
          {
            *v18 = v26;
            CanCastTo = 0;
LABEL_30:
            (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 8LL))(*v18);
            return (unsigned int)CanCastTo;
          }
          if ( (unsigned int)InlineIsEqualGUID(v25, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, v26 + 8, v27) )
          {
            *v18 = v28;
            CanCastTo = 0;
          }
          else
          {
            CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IAppSizeConstraintsCallback,Microsoft::WRL::FtmBase>::CanCastTo(
                          v28 + 8,
                          v29,
                          v18);
          }
        }
      }
      if ( CanCastTo >= 0 )
        goto LABEL_30;
    }
    return (unsigned int)CanCastTo;
  }
  v5 = *((_QWORD *)this + 26);
  while ( v5 >= 0 )
  {
    if ( (_DWORD)v5 == 0x7FFFFFFF )
      goto LABEL_8;
    v6 = v5;
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)this + 26, v5 + 1, v5);
    if ( v6 == v5 )
    {
      *a3 = this;
      return 0LL;
    }
  }
  Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details::StrongReference *)(2 * v5 + 16));
LABEL_8:
  *v3 = v4;
  return 0LL;
}
