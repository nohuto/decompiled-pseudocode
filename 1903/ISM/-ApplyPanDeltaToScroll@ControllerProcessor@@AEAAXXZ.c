/*
 * XREFs of ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x1800753C8
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x180077054 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AURawMouseInputInfo@@K@Z @ 0x180075824 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AURawMouseInputInfo@@K@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180077658 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

void __fastcall ControllerProcessor::ApplyPanDeltaToScroll(ControllerProcessor *this)
{
  float v1; // xmm2_4
  float v3; // xmm3_4
  float v4; // xmm6_4
  float v5; // xmm7_4
  int v6; // edi
  __int16 v7; // ax
  int v8; // eax
  _BYTE v9[100]; // [rsp+20h] [rbp-1E8h] BYREF
  __int16 v10; // [rsp+84h] [rbp-184h]
  __int16 v11; // [rsp+86h] [rbp-182h]
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  v1 = *((float *)this + 577);
  if ( v1 != 0.0 || *((float *)this + 578) != 0.0 )
  {
    v3 = *((float *)this + 578);
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm);
    if ( v4 <= v5 )
      v6 = (int)v3;
    else
      LOWORD(v6) = -(__int16)(int)v1;
    ControllerProcessor::BuildMouseInputInfo(this, v9, 0LL);
    v7 = 2048;
    v11 = v6;
    if ( v4 <= v5 )
      v7 = 1024;
    v10 = v7;
    v8 = ControllerProcessor::SendMouseInputInfo(this, (struct RawMouseInputInfo *)v9);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        1692LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v8);
      __debugbreak();
    }
    *((_DWORD *)this + 577) = 0;
    *((_DWORD *)this + 578) = 0;
  }
}
