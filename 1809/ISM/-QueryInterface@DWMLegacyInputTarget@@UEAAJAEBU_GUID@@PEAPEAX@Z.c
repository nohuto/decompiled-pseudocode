/*
 * XREFs of ?QueryInterface@DWMLegacyInputTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800908C0
 * Callers:
 *     ?QueryInterface@DWMLegacyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090A30 (-QueryInterface@DWMLegacyInputTarget@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMLegacyInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090A50 (-QueryInterface@DWMLegacyInputTarget@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@DWMLegacyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180090A80 (-QueryInterface@DWMLegacyInputTarget@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DWMLegacyInputTarget::QueryInterface(
        DWMLegacyInputTarget *this,
        const struct _GUID *a2,
        DWMLegacyInputTarget **a3)
{
  DWMLegacyInputTarget *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwmlegacyinputtarget.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_a4e70d2d_6b93_4143_b95b_67efd0ccda59.Data4 )
  {
    (*(void (__fastcall **)(DWMLegacyInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMLegacyInputTarget *)((char *)v4 + 16);
LABEL_15:
    *a3 = v4;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_9586ac30_9ca0_43dc_8c1c_f977b92a1fd3.Data4 )
  {
    (*(void (__fastcall **)(DWMLegacyInputTarget *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_15;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_893a3ef5_5847_4e8c_ac18_49e5cc560a78.Data4 )
  {
    (*(void (__fastcall **)(DWMLegacyInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMLegacyInputTarget *)((char *)v4 + 8);
    goto LABEL_15;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(DWMLegacyInputTarget *))(*(_QWORD *)this + 8LL))(this);
    v4 = (DWMLegacyInputTarget *)((char *)v4 + 24);
    goto LABEL_15;
  }
  return 2147500034LL;
}
