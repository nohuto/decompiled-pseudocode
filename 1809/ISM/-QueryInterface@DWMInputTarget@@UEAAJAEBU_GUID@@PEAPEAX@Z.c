/*
 * XREFs of ?QueryInterface@DWMInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008FA10
 * Callers:
 *     ?QueryInterface@DWMInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800905C0 (-QueryInterface@DWMInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800905D0 (-QueryInterface@DWMInputTarget@@WDA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090630 (-QueryInterface@DWMInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090640 (-QueryInterface@DWMInputTarget@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090690 (-QueryInterface@DWMInputTarget@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800906E0 (-QueryInterface@DWMInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800906F0 (-QueryInterface@DWMInputTarget@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMInputTarget::QueryInterface(DWMInputTarget *this, const struct _GUID *a2, DWMInputTarget **a3)
{
  DWMInputTarget *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x78,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_05b38163_1229_4e7b_a0fc_5b47c4e7b631.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMInputTarget *)((char *)v4 + 8);
LABEL_27:
    *a3 = v4;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ce017166_b885_4259_a1c9_31032455b8b4.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_ce017166_b885_4259_a1c9_31032455b8b4.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMInputTarget *)((char *)v4 + 16);
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMInputTarget *)((char *)v4 + 24);
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMInputTarget *)((char *)v4 + 32);
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_93d6f9bd_cc36_424f_ac6f_03108f7cf72f.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMInputTarget *)((char *)v4 + 40);
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_6ca15b7f_63da_4e23_abb3_68f3d29d27ea.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMInputTarget *)((char *)v4 + 48);
    goto LABEL_27;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(DWMInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMInputTarget *)((char *)v4 + 56);
    goto LABEL_27;
  }
  return 2147500034LL;
}
