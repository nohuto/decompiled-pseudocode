/*
 * XREFs of ?QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017AD0
 * Callers:
 *     ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180017A60 (-QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800387D0 (-QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800387E0 (-QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800387F0 (-QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038800 (-QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038810 (-QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038820 (-QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038830 (-QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038840 (-QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180038850 (-QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::QueryInterface(DWMInputRouter *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data4;
    if ( !v5 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v8 = 24LL;
      goto LABEL_12;
    }
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data4;
    if ( !v6 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v8 = 32LL;
      goto LABEL_12;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4;
    if ( !v7 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v8 = 40LL;
LABEL_12:
      *a3 = (char *)this + v8;
      return 0LL;
    }
    v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1 )
      v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data4;
    if ( !v10 )
      goto LABEL_16;
    v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1 )
      v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data4;
    if ( !v11 )
    {
LABEL_16:
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v8 = 16LL;
      goto LABEL_12;
    }
    v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data1 )
      v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data4;
    if ( !v12 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v8 = 56LL;
      goto LABEL_12;
    }
    v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data1 )
      v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data4;
    if ( !v13 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v8 = 8LL;
      goto LABEL_12;
    }
    v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data1 )
      v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data4;
    if ( !v14 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v8 = 48LL;
      goto LABEL_12;
    }
    v15 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data1 )
      v15 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data4;
    if ( !v15 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v8 = 64LL;
      goto LABEL_12;
    }
    v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v16 )
    {
      (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
      v8 = 72LL;
      goto LABEL_12;
    }
    return 2147500034LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x259,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
}
