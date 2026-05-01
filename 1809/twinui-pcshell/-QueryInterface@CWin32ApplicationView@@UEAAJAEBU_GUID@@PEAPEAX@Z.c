/*
 * XREFs of ?QueryInterface@CWin32ApplicationView@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038EB0
 * Callers:
 *     ?QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D4B0 (-QueryInterface@CWin32ApplicationView@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D4C0 (-QueryInterface@CWin32ApplicationView@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D4D0 (-QueryInterface@CWin32ApplicationView@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D4E0 (-QueryInterface@CWin32ApplicationView@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D4F0 (-QueryInterface@CWin32ApplicationView@@WJI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D500 (-QueryInterface@CWin32ApplicationView@@WKA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D510 (-QueryInterface@CWin32ApplicationView@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800390B0 (InlineIsEqualGUID.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800392D0 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1800E6514 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 */

__int64 __fastcall CWin32ApplicationView::QueryInterface(
        CWin32ApplicationView *this,
        const struct _GUID *a2,
        void **a3)
{
  void **v3; // r10
  CWin32ApplicationView *v4; // r11
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 v8; // rcx
  _QWORD *v9; // r8
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // r8
  void **v14; // r10
  __int64 v15; // r11
  int CanCastTo; // ebx
  __int64 v17; // rcx
  void *v18; // r8
  _DWORD *v19; // r9
  __int64 v20; // r8
  __int64 v21; // rcx
  void *v22; // r11
  __int64 v23; // rcx
  void *v24; // r11
  const struct _GUID *v25; // r9
  __int64 v26; // r11

  *a3 = 0LL;
  v3 = a3;
  v4 = this;
  if ( *(_OWORD *)a2 != *(_OWORD *)&GUID_7f1f1216_7a0c_41c2_8dbc_8a7c2d1d11e3 )
  {
    *a3 = 0LL;
    if ( (unsigned int)InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
      || (unsigned int)InlineIsEqualGUID(v8, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
    {
      *v9 = v10;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      return 0LL;
    }
    if ( (unsigned int)InlineIsEqualGUID(v11, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513) )
    {
      *v13 = v15;
      CanCastTo = 0;
    }
    else
    {
      if ( (unsigned int)InlineIsEqualGUID(v12, &GUID_7f25223a_79ad_4e72_a39a_6a194dd604c1) )
      {
        *v14 = v18;
        CanCastTo = 0;
      }
      else if ( (unsigned int)InlineIsEqualGUID(v17, &GUID_979cde28_2164_437c_b963_55e5d4ac1d02) )
      {
        *v14 = (void *)v20;
        CanCastTo = 0;
      }
      else if ( *v19 == 480212245
             && v19[1] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data2
             && v19[2] == *(_DWORD *)GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4
             && v19[3] == *(_DWORD *)&GUID_1c9f7515_0917_4bde_9997_aa2108d4c4c0.Data4[4] )
      {
        CanCastTo = 0;
        *v14 = (void *)(v20 + 8);
      }
      else
      {
        CanCastTo = -2147467262;
      }
      if ( CanCastTo == -2147467262 )
      {
        if ( (unsigned int)InlineIsEqualGUID(v19, &GUID_00000038_0000_0000_c000_000000000046) )
        {
          *v14 = v22;
          CanCastTo = 0;
          goto LABEL_33;
        }
        if ( (unsigned int)InlineIsEqualGUID(v21, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3) )
        {
          *v14 = v24;
          CanCastTo = 0;
        }
        else if ( (unsigned int)InlineIsEqualGUID(v23, &GUID_dcf504eb_598b_4411_ac89_cf48aba70af1) )
        {
          *v14 = (void *)v26;
          CanCastTo = 0;
        }
        else
        {
          CanCastTo = Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v26 + 8), v25, v14);
          if ( CanCastTo == -2147467262 )
            CanCastTo = -2147467262;
        }
      }
    }
    if ( CanCastTo < 0 )
      return (unsigned int)CanCastTo;
LABEL_33:
    (*(void (__fastcall **)(void *))(*(_QWORD *)*v14 + 8LL))(*v14);
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
