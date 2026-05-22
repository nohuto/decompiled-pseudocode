/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x18008FE40
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x180090620 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x180090680 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003640 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000AC0C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x180020D5C (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180020EC8 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ @ 0x180021358 (-GetLegacyInputSinkData@InputSite@@QEBAAEBVLegacyInputSinkData@@XZ.c)
 *     ?ApplyInverseTransformToPoint@@YAJAEAUtagINPUT_TRANSFORM@@UtagPOINT@@PEAU2@@Z @ 0x18008EF94 (-ApplyInverseTransformToPoint@@YAJAEAUtagINPUT_TRANSFORM@@UtagPOINT@@PEAU2@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x18008F360 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x18008F544 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800902AC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x18010540C (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18012C150 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  int v4; // ebx
  __int64 v5; // rdx
  const char *v7; // r9
  int v8; // eax
  InputSite *v9; // rcx
  const struct LegacyInputSinkData *LegacyInputSinkData; // rbx
  int v11; // eax
  int v12; // eax
  const struct std::nothrow_t *v13; // rdx
  const struct std::nothrow_t *v14; // rdx
  int v15; // [rsp+30h] [rbp-88h] BYREF
  int v16; // [rsp+38h] [rbp-80h] BYREF
  void *v17; // [rsp+40h] [rbp-78h]
  __int64 v18; // [rsp+48h] [rbp-70h]
  _BYTE v19[64]; // [rsp+50h] [rbp-68h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]

  v18 = -2LL;
  if ( !a2 )
  {
    v4 = -2147024809;
    v5 = 275LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v4);
    return (unsigned int)v4;
  }
  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 5) + 40LL))((char *)this + 40, &v15);
  if ( (v15 & *(_DWORD *)a2) == 0 && v15 )
    return 2147549443LL;
  InputTraceLogging::ISM::DeliverInput(a2);
  v8 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x3B) != 0 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v4 = DWMInputTarget::AddDwmInputRoutingData(this, a2);
      if ( v4 < 0 )
      {
        v5 = 297LL;
        goto LABEL_3;
      }
      v8 = *(_DWORD *)a2;
    }
    else
    {
      *((_QWORD *)a2 + 49) = 1065353216LL;
      *((_QWORD *)a2 + 50) = 0LL;
      *((_DWORD *)a2 + 102) = 0;
      *(_QWORD *)((char *)a2 + 412) = 1065353216LL;
      *(_QWORD *)((char *)a2 + 420) = 0LL;
      *((_DWORD *)a2 + 107) = 0;
      *((_QWORD *)a2 + 54) = 1065353216LL;
      *((_QWORD *)a2 + 55) = 0LL;
      *((_DWORD *)a2 + 112) = 0;
      *((_DWORD *)a2 + 113) = 1065353216;
    }
  }
  if ( v8 == 0x4000 )
  {
    v9 = (InputSite *)*((_QWORD *)this + 15);
    if ( v9 )
    {
      if ( !*((_BYTE *)v9 + 384) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x14A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          v7);
        JUMPOUT(0x1800900CALL);
      }
      LegacyInputSinkData = InputSite::GetLegacyInputSinkData(v9);
      *((_QWORD *)a2 + 4) = LegacyInputSinkData::GetCompositionInputQueue(LegacyInputSinkData, 1u)[1];
      LegacyInputSinkData::GetTransform(LegacyInputSinkData, v19);
      if ( *((_BYTE *)a2 + 60) )
      {
        v11 = ApplyInverseTransformToPoint(
                (struct tagINPUT_TRANSFORM *)v19,
                *(struct tagPOINT *)((char *)a2 + 44),
                (struct tagPOINT *)((char *)a2 + 52));
        if ( v11 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x15B,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
            (const char *)(unsigned int)v11);
      }
      if ( *((_BYTE *)a2 + 80) )
      {
        v12 = ApplyInverseTransformToPoint(
                (struct tagINPUT_TRANSFORM *)v19,
                *(struct tagPOINT *)((char *)a2 + 64),
                (struct tagPOINT *)a2 + 9);
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x162,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
            (const char *)(unsigned int)v12);
      }
    }
  }
  InputEventPayloadBuffer::InputEventPayloadBuffer(&v16, 4LL, a2);
  v4 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                        + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 80,
         v17,
         v16);
  InputETW::InputTarget::DeliverInputReport(a2);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x172,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)(unsigned int)v4);
    if ( v17 )
      operator delete(v17, v14);
    return (unsigned int)v4;
  }
  if ( v17 )
    operator delete(v17, v13);
  return 0LL;
}
