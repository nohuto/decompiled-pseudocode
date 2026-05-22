/*
 * XREFs of ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800C6ABC
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800C6F70 (-DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _CxxThrowException_0 @ 0x18002CA9A (_CxxThrowException_0.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002F894 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F694 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?GetIsCoreWindow@LegacyInputSinkData@@QEBA_NXZ @ 0x18006702C (-GetIsCoreWindow@LegacyInputSinkData@@QEBA_NXZ.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x1800670B0 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?ToCompositionInputType@@YA?AW4CompositionInputType@@W4InputType@@@Z @ 0x1800C554C (-ToCompositionInputType@@YA-AW4CompositionInputType@@W4InputType@@@Z.c)
 */

__int64 __fastcall DWMInputTarget::AddDwmInputRoutingData(
        DWMInputTarget *this,
        struct InputInfo *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v4; // rax
  LegacyInputSinkData *v6; // rbx
  unsigned int v7; // eax
  _OWORD *Transform; // rax
  _BYTE v10[64]; // [rsp+40h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v4 = *((_QWORD *)this + 15);
  if ( !v4 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      542LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
    __debugbreak();
  }
  if ( !*(_BYTE *)(v4 + 384) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      544LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      a4);
    __debugbreak();
  }
  v6 = (LegacyInputSinkData *)(v4 + 32);
  v7 = ToCompositionInputType(*(_DWORD *)a2);
  *((_QWORD *)a2 + 9) = LegacyInputSinkData::GetCompositionInputQueue(v6, v7)[1];
  Transform = LegacyInputSinkData::GetTransform(v6, v10);
  *(_OWORD *)((char *)a2 + 140) = *Transform;
  *(_OWORD *)((char *)a2 + 156) = Transform[1];
  *(_OWORD *)((char *)a2 + 172) = Transform[2];
  *(_OWORD *)((char *)a2 + 188) = Transform[3];
  *((_DWORD *)a2 + 20) = LegacyInputSinkData::GetIsCoreWindow(v6);
  return 0LL;
}
