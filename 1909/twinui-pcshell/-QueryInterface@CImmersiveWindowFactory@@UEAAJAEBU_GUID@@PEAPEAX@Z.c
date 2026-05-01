/*
 * XREFs of ?QueryInterface@CImmersiveWindowFactory@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800302C0
 * Callers:
 *     ?QueryInterface@CImmersiveWindowFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E4790 (-QueryInterface@CImmersiveWindowFactory@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E47A0 (-QueryInterface@CImmersiveWindowFactory@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E47B0 (-QueryInterface@CImmersiveWindowFactory@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E47C0 (-QueryInterface@CImmersiveWindowFactory@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CImmersiveWindowFactory@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E47D0 (-QueryInterface@CImmersiveWindowFactory@@WKI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18002ECA0 (InlineIsEqualGUID.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowFactory::QueryInterface(CImmersiveWindowFactory *this, struct _GUID *a2, void **a3)
{
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  _DWORD *v8; // r9
  __int64 v9; // r10
  int v10; // eax
  int v11; // ebx
  __int64 v12; // r10
  int v13; // r11d

  *a3 = 0LL;
  if ( InlineIsEqualGUID(a2, &GUID_00000000_0000_0000_c000_000000000046)
    || InlineIsEqualGUID(v3, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90) )
  {
    *v4 = v5;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    return 0;
  }
  if ( InlineIsEqualGUID(v6, &GUID_cd292360_2763_4085_8a9f_74b224a29175) )
  {
    *v7 = v9;
    v11 = 0;
    goto LABEL_16;
  }
  if ( *v8 == 3
    && v8[1] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data2
    && v8[2] == *(_DWORD *)GUID_00000003_0000_0000_c000_000000000046.Data4
    && v8[3] == *(_DWORD *)&GUID_00000003_0000_0000_c000_000000000046.Data4[4] )
  {
    *v7 = v9 + 8;
  }
  else
  {
    if ( *v8 != 24
      || v8[1] != *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data2
      || v8[2] != *(_DWORD *)GUID_00000018_0000_0000_c000_000000000046.Data4
      || v8[3] != *(_DWORD *)&GUID_00000018_0000_0000_c000_000000000046.Data4[4] )
    {
      v10 = -2147467262;
      goto LABEL_7;
    }
    *v7 = v9 + 48;
  }
  v10 = 0;
LABEL_7:
  if ( v10 == -2147467262 )
    v10 = -2147467262;
  if ( v10 < 0 )
  {
    if ( *v8 == 1612534243
      && v8[1] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data2
      && v8[2] == *(_DWORD *)GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4
      && v8[3] == *(_DWORD *)&GUID_601d51e3_801e_49c9_bbfa_fe29a662aead.Data4[4] )
    {
      *v7 = v9 + 72;
    }
    else
    {
      if ( *v8 != 142386596
        || v8[1] != *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data2
        || v8[2] != *(_DWORD *)GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4
        || v8[3] != *(_DWORD *)&GUID_087ca5a4_8cfc_4264_b39d_da2bb2583a11.Data4[4] )
      {
        v11 = -2147467262;
        goto LABEL_13;
      }
      *v7 = v9 + 80;
    }
  }
  v11 = 0;
LABEL_13:
  if ( v11 == -2147467262 )
  {
    if ( InlineIsEqualGUID(v8, &GUID_00000038_0000_0000_c000_000000000046) )
    {
      v11 = 0;
      *v7 = v12 + 168;
      goto LABEL_20;
    }
    v11 = v13;
  }
LABEL_16:
  if ( v11 >= 0 )
LABEL_20:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 8LL))(*v7);
  return (unsigned int)v11;
}
