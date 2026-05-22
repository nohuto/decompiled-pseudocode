/*
 * XREFs of ?Populate@MPCInputInfoHelper@@SAJPEAUILegacyPrivHandEventArgs@Internal@Spatial@Input@UI@Windows@@AEAUMPCInputInfo@@@Z @ 0x180056B2C
 * Callers:
 *     ?OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PEAUILegacyPrivHandEventArgs@34567@@Z @ 0x180058DA0 (-OnHandEventOccurred@SpectrumListener@@AEAAJPEAUIInputPriv@Internal@Spatial@Input@UI@Windows@@PE.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCInputInfoHelper::Populate(
        struct Windows::UI::Input::Spatial::Internal::ILegacyPrivHandEventArgs *a1,
        struct MPCInputInfo *a2)
{
  int v4; // eax
  int v5; // eax
  __int64 v6; // xmm0_8
  __int128 v7; // xmm1
  int v8; // eax
  int v9; // eax
  __int64 v10; // xmm0_8
  int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 result; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  _DWORD v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v18; // [rsp+28h] [rbp-D8h]
  int v19; // [rsp+30h] [rbp-D0h]
  int v20; // [rsp+34h] [rbp-CCh]
  __int64 v21; // [rsp+38h] [rbp-C8h]
  int v22; // [rsp+40h] [rbp-C0h]
  __int64 v23; // [rsp+44h] [rbp-BCh]
  int v24; // [rsp+4Ch] [rbp-B4h]
  int v25; // [rsp+50h] [rbp-B0h]
  int v26; // [rsp+54h] [rbp-ACh]
  int v27; // [rsp+58h] [rbp-A8h]
  __int128 v28; // [rsp+5Ch] [rbp-A4h]
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+7Ch] [rbp-84h]
  __int128 v31; // [rsp+80h] [rbp-80h]
  __int128 v32; // [rsp+90h] [rbp-70h]
  __int128 v33; // [rsp+A0h] [rbp-60h]
  __int128 v34; // [rsp+B0h] [rbp-50h]
  __int128 v35; // [rsp+C0h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]

  v4 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::ILegacyPrivHandEventArgs *, _DWORD *))(*(_QWORD *)a1 + 56LL))(
         a1,
         v17);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x22,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v5 = (*(__int64 (__fastcall **)(struct Windows::UI::Input::Spatial::Internal::ILegacyPrivHandEventArgs *, __int64 *))(*(_QWORD *)a1 + 64LL))(
         a1,
         &v29);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x23,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\mpc\\lib\\mpcinputinfohelper.cpp",
      (const char *)(unsigned int)v5);
    JUMPOUT(0x180056CD4LL);
  }
  v6 = v23;
  v7 = v33;
  *((_DWORD *)a2 + 172) = v26;
  v8 = v24;
  *((_QWORD *)a2 + 81) = v6;
  LODWORD(v6) = v25;
  *((_DWORD *)a2 + 164) = v8;
  *((_DWORD *)a2 + 173) = v27;
  *((_DWORD *)a2 + 170) = v17[1];
  v9 = v19;
  *((_DWORD *)a2 + 174) = v6;
  *(_OWORD *)((char *)a2 + 660) = v28;
  *((_QWORD *)a2 + 78) = v18;
  v10 = v21;
  *((_DWORD *)a2 + 158) = v9;
  *((_DWORD *)a2 + 171) = v20;
  v11 = v17[0];
  *(_QWORD *)((char *)a2 + 636) = v10;
  v12 = v31;
  *((_DWORD *)a2 + 169) = v11;
  *((_DWORD *)a2 + 161) = v22;
  v13 = v29;
  *(_OWORD *)((char *)a2 + 712) = v12;
  *((_QWORD *)a2 + 88) = v13;
  LODWORD(v13) = v30;
  *(_OWORD *)((char *)a2 + 728) = v32;
  *((_DWORD *)a2 + 204) = v13;
  result = 0LL;
  v15 = v34;
  *(_OWORD *)((char *)a2 + 744) = v7;
  v16 = v35;
  *(_OWORD *)((char *)a2 + 760) = v15;
  *(_OWORD *)((char *)a2 + 776) = v16;
  return result;
}
