/*
 * XREFs of ?QueryInterface@DWMInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180088E80
 * Callers:
 *     ?QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006180 (-QueryInterface@MPCInputRouter@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DED0 (-QueryInterface@DWMInputRouter@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DEE0 (-QueryInterface@DWMInputRouter@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DEF0 (-QueryInterface@DWMInputRouter@@WEI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DF10 (-QueryInterface@DWMInputRouter@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DF20 (-QueryInterface@DWMInputRouter@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DF40 (-QueryInterface@DWMInputRouter@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DF50 (-QueryInterface@DWMInputRouter@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DF70 (-QueryInterface@DWMInputRouter@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008DF80 (-QueryInterface@DWMInputRouter@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputRouter::QueryInterface(DWMInputRouter *this, const struct _GUID *a2, void **a3)
{
  __int64 v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x215,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputrouter.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f61d2579_c998_4734_9f88_0b4bc8bcf062.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v6 = 24LL;
LABEL_32:
    *a3 = (char *)this + v6;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_adcbf490_e8c4_4bfa_8754_f40fc58292fc.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v6 = 32LL;
    goto LABEL_32;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_5b7fc71f_fd86_45ae_9cd7_c6f402bcd2e6.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v6 = 40LL;
    goto LABEL_32;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1
    && (*(_QWORD *)a2->Data4 == *(_QWORD *)GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data4
     || *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data1
     && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_2c69163a_7c54_4b7e_9bb0_9205dcbdf300.Data4) )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v6 = 16LL;
    goto LABEL_32;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f8f53ba5_0c4b_4f50_b518_3a16eb36ec00.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v6 = 56LL;
    goto LABEL_32;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_b694737b_3300_4bb1_8b67_44715c8db610.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v6 = 8LL;
    goto LABEL_32;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_b9402cea_5976_45e1_baa3_22754843b1af.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v6 = 48LL;
    goto LABEL_32;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_f8a5030e_f489_4cf1_9395_60d6eaf4b21f.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v6 = 64LL;
    goto LABEL_32;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(DWMInputRouter *))(*(_QWORD *)this + 8LL))(this);
    v6 = 72LL;
    goto LABEL_32;
  }
  return 2147500034LL;
}
