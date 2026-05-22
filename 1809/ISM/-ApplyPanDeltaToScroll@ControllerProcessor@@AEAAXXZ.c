/*
 * XREFs of ?ApplyPanDeltaToScroll@ControllerProcessor@@AEAAXXZ @ 0x180035DBC
 * Callers:
 *     ?SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@Windows@@@Z @ 0x1800351D4 (-SendGamepadAsPointerAndManipulation@ControllerProcessor@@AEAAJPEAUGamepadReading@Input@Gaming@W.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180034F24 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     ?BuildMouseInputInfo@ControllerProcessor@@AEAA?AULegacyInputInfo@@K@Z @ 0x1800350B0 (-BuildMouseInputInfo@ControllerProcessor@@AEAA-AULegacyInputInfo@@K@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
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
  _DWORD v9[131]; // [rsp+20h] [rbp-678h] BYREF
  __int16 v10; // [rsp+22Ch] [rbp-46Ch]
  __int16 v11; // [rsp+22Eh] [rbp-46Ah]
  wil::details::in1diag3 *retaddr; // [rsp+698h] [rbp+0h]

  v1 = *((float *)this + 463);
  if ( v1 != 0.0 || *((float *)this + 464) != 0.0 )
  {
    v3 = *((float *)this + 464);
    v4 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v1) & _xmm);
    v5 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v3) & _xmm);
    if ( v4 <= v5 )
      v6 = (int)v3;
    else
      LOWORD(v6) = -(__int16)(int)v1;
    ControllerProcessor::BuildMouseInputInfo((__int64)this, v9, 0);
    v7 = 2048;
    v11 = v6;
    if ( v4 <= v5 )
      v7 = 1024;
    v10 = v7;
    v8 = ControllerProcessor::SendMouseInputInfo(this, (struct LegacyInputInfo *)v9);
    if ( v8 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x688,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v8);
      JUMPOUT(0x180035ED7LL);
    }
    *((_DWORD *)this + 463) = 0;
    *((_DWORD *)this + 464) = 0;
  }
}
