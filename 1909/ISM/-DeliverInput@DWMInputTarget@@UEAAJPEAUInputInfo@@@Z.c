/*
 * XREFs of ?DeliverInput@DWMInputTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1800C6D80
 * Callers:
 *     ?DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z @ 0x180038AB0 (-DeliverInput@DWMInputTarget@@WBI@EAAJPEAUInputInfo@@@Z.c)
 *     ?DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z @ 0x180038AC0 (-DeliverInput@DWMInputTarget@@WCA@EAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002C3E0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _CxxThrowException_0 @ 0x18002C71A (_CxxThrowException_0.c)
 *     ?GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInputType@@@Z @ 0x18002F574 (-GetCompositionInputQueue@LegacyInputSinkData@@QEBAAEBUCOMPOSITION_INPUT_QUEUE@@W4CompositionInp.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004F3F4 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetTransform@LegacyInputSinkData@@QEBA?AUtagINPUT_TRANSFORM@@XZ @ 0x180066E50 (-GetTransform@LegacyInputSinkData@@QEBA-AUtagINPUT_TRANSFORM@@XZ.c)
 *     ?AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z @ 0x1800C68CC (-AddDwmInputRoutingData@DWMInputTarget@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?ApplyInverseTransformToPoint@@YAJAEAUtagINPUT_TRANSFORM@@UtagPOINT@@PEAU2@@Z @ 0x1800C69FC (-ApplyInverseTransformToPoint@@YAJAEAUtagINPUT_TRANSFORM@@UtagPOINT@@PEAU2@@Z.c)
 *     ?DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z @ 0x1800C7028 (-DeliverInput@ISM@InputTraceLogging@@SAXPEBUInputInfo@@@Z.c)
 *     ?DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z @ 0x1800C7138 (-DeliverInputReport@InputTarget@InputETW@@SAXPEAUInputInfo@@@Z.c)
 *     ??0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z @ 0x180142B88 (--0InputEventPayloadBuffer@@QEAA@UInputEventPayloadHeader@@PEAUInputInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DWMInputTarget::DeliverInput(DWMInputTarget *this, struct InputInfo *a2)
{
  __int64 v5; // r8
  const char *v6; // r9
  int v7; // eax
  int v8; // eax
  unsigned int v9; // edi
  __int64 v10; // rax
  _QWORD *v11; // rdi
  int v12; // eax
  int v13; // eax
  const struct std::nothrow_t *v14; // rdx
  const struct std::nothrow_t *v15; // rdx
  int v16; // [rsp+38h] [rbp-39h] BYREF
  __int64 pExceptionObject; // [rsp+40h] [rbp-31h] BYREF
  void *v18[2]; // [rsp+48h] [rbp-29h]
  __int64 v19; // [rsp+58h] [rbp-19h]
  _BYTE v20[64]; // [rsp+68h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v19 = -2LL;
  (*(void (__fastcall **)(char *, int *))(*((_QWORD *)this + 5) + 40LL))((char *)this + 40, &v16);
  if ( (v16 & *(_DWORD *)a2) == 0 && v16 )
    return 2147549443LL;
  InputTraceLogging::ISM::DeliverInput(a2);
  v7 = *(_DWORD *)a2;
  if ( (*(_DWORD *)a2 & 0x3B) != 0 )
  {
    if ( *((_QWORD *)this + 15) )
    {
      v8 = DWMInputTarget::AddDwmInputRoutingData(this, a2, v5, v6);
      v9 = v8;
      if ( v8 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x127,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          (const char *)(unsigned int)v8);
        return v9;
      }
      v7 = *(_DWORD *)a2;
    }
    else
    {
      *(_QWORD *)((char *)a2 + 140) = 1065353216LL;
      *(_QWORD *)((char *)a2 + 148) = 0LL;
      *((_DWORD *)a2 + 39) = 0;
      *((_QWORD *)a2 + 20) = 1065353216LL;
      *((_QWORD *)a2 + 21) = 0LL;
      *((_DWORD *)a2 + 44) = 0;
      *(_QWORD *)((char *)a2 + 180) = 1065353216LL;
      *(_QWORD *)((char *)a2 + 188) = 0LL;
      *((_DWORD *)a2 + 49) = 0;
      *((_DWORD *)a2 + 50) = 1065353216;
    }
  }
  if ( v7 == 0x4000 )
  {
    v10 = *((_QWORD *)this + 15);
    if ( v10 )
    {
      if ( !*(_BYTE *)(v10 + 384) )
      {
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          337LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
          v6);
        __debugbreak();
      }
      v11 = (_QWORD *)(v10 + 32);
      *((_QWORD *)a2 + 4) = LegacyInputSinkData::GetCompositionInputQueue((_QWORD *)(v10 + 32), 1u)[1];
      LegacyInputSinkData::GetTransform(v11, v20);
      if ( *((_BYTE *)a2 + 60) )
      {
        v12 = ApplyInverseTransformToPoint(
                (struct tagINPUT_TRANSFORM *)v20,
                *(struct tagPOINT *)((char *)a2 + 44),
                (struct tagPOINT *)((char *)a2 + 52));
        if ( v12 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            354LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
            (const char *)(unsigned int)v12);
      }
      if ( *((_BYTE *)a2 + 80) )
      {
        v13 = ApplyInverseTransformToPoint(
                (struct tagINPUT_TRANSFORM *)v20,
                *(struct tagPOINT *)((char *)a2 + 64),
                (struct tagPOINT *)a2 + 9);
        if ( v13 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            361LL,
            (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
            (const char *)(unsigned int)v13);
      }
    }
  }
  InputEventPayloadBuffer::InputEventPayloadBuffer(&pExceptionObject, 4LL, a2);
  v9 = (*(__int64 (__fastcall **)(struct IInputDeliveryServer *, char *, void *, _QWORD))(*(_QWORD *)NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer
                                                                                        + 24LL))(
         NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer,
         (char *)this + 80,
         v18[0],
         (int)pExceptionObject);
  InputETW::InputTarget::DeliverInputReport(a2);
  if ( (v9 & 0x80000000) != 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x179,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\lib\\dwminputtarget.cpp",
      (const char *)v9);
    if ( v18[0] )
      operator delete(v18[0], v15);
    return v9;
  }
  if ( v18[0] )
    operator delete(v18[0], v14);
  return 0LL;
}
