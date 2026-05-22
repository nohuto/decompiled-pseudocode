/*
 * XREFs of ?QueryInterface@OneCoreUAPInputHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800049F0
 * Callers:
 *     ?QueryInterface@OneCoreUAPInputHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005750 (-QueryInterface@OneCoreUAPInputHost@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180005790 (-QueryInterface@OneCoreUAPInputHost@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall OneCoreUAPInputHost::QueryInterface(
        OneCoreUAPInputHost *this,
        const struct _GUID *a2,
        OneCoreUAPInputHost **a3)
{
  OneCoreUAPInputHost *v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = this;
  if ( !a3 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xCC,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\onecoreuap\\lib\\onecoreuapinputhost.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
    v4 = (OneCoreUAPInputHost *)((char *)v4 + 16);
LABEL_12:
    *a3 = v4;
    return 0LL;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_1a9a7e32_5db5_45d7_98af_3d18ba629953.Data4 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
    goto LABEL_12;
  }
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data1
    && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_18f2e21a_ceea_4596_9fd8_326464016a35.Data4 )
  {
    (*(void (__fastcall **)(OneCoreUAPInputHost *))(*(_QWORD *)this + 8LL))(this);
    v4 = (OneCoreUAPInputHost *)((char *)v4 + 8);
    goto LABEL_12;
  }
  return 2147500034LL;
}
