/*
 * XREFs of ??$UpdateActiveConfig@UDwmMousewheelInteractionConfigurationPrimitive@@@GestureTargeting@InputTraceLogging@@SAXAEBUDwmMousewheelInteractionConfigurationPrimitive@@@Z @ 0x18022EF28
 * Callers:
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x180233748 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 * Callees:
 *     _TlgCreateSz @ 0x180033404 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180086A80 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

char __fastcall InputTraceLogging::GestureTargeting::UpdateActiveConfig<DwmMousewheelInteractionConfigurationPrimitive>(
        __int64 a1)
{
  _QWORD *v2; // rax
  const CHAR *v3; // rdx
  const CHAR *v4; // r9
  const CHAR *v5; // rdx
  const CHAR *v6; // r9
  unsigned __int8 v7; // r11
  const CHAR *v8; // rdx
  const CHAR *v9; // r9
  const CHAR *v10; // rdx
  const CHAR *v11; // r9
  const CHAR *v12; // rdx
  const CHAR *v13; // r9
  const CHAR *v14; // rdx
  const CHAR *v15; // r9
  const CHAR *v16; // rdx
  const CHAR *v17; // r9
  const CHAR *v18; // rdx
  const CHAR *v19; // r9
  const CHAR *v20; // rdx
  const CHAR *v21; // r9
  const CHAR *v22; // rdx
  const CHAR *v23; // r9
  const CHAR *v24; // rdx
  const CHAR *v25; // r9
  const CHAR *v26; // rdx
  const CHAR *v27; // r9
  const CHAR *v28; // rdx
  const CHAR *v29; // r9
  const CHAR *v30; // rdx
  int v31; // r11d
  TraceLoggingHProvider v32; // r10
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-D0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+50h] [rbp-B0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v36; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+70h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v38; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v39; // [rsp+90h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40; // [rsp+A0h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v41; // [rsp+B0h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v42; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v44; // [rsp+E0h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v46; // [rsp+100h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v47; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v48; // [rsp+120h] [rbp+20h] BYREF
  __int64 v49; // [rsp+130h] [rbp+30h]
  int v50; // [rsp+138h] [rbp+38h]
  int v51; // [rsp+13Ch] [rbp+3Ch]
  __int64 v52; // [rsp+140h] [rbp+40h]
  int v53; // [rsp+148h] [rbp+48h]
  int v54; // [rsp+14Ch] [rbp+4Ch]

  v2 = wil::details::static_lazy<InputTraceLogging>::get(
         a1,
         (void (__cdecl *)())lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  if ( *(_DWORD *)v2[1] > 4u )
  {
    LOBYTE(v2) = TlgKeywordOn((TraceLoggingHProvider)v2[1], 0x800uLL);
    if ( (_BYTE)v2 )
    {
      v3 = "PanX+";
      if ( (*(_BYTE *)(a1 + 8) & 1) == 0 )
        v3 = byte_1802B2AA6;
      TlgCreateSz(&pDesc, v3);
      v5 = "PanX-";
      if ( (*(_BYTE *)(a1 + 8) & 2) == 0 )
        v5 = v4;
      TlgCreateSz(&v36, v5);
      v8 = "PanY+";
      if ( (v7 & *(_BYTE *)(a1 + 8)) == 0 )
        v8 = v6;
      TlgCreateSz(&v37, v8);
      v10 = "PanY-";
      if ( (*(_BYTE *)(a1 + 8) & 8) == 0 )
        v10 = v9;
      TlgCreateSz(&v38, v10);
      v12 = "Zoom+";
      if ( (*(_BYTE *)(a1 + 8) & 0x10) == 0 )
        v12 = v11;
      TlgCreateSz(&v39, v12);
      v14 = "Zoom-";
      if ( (*(_BYTE *)(a1 + 8) & 0x20) == 0 )
        v14 = v13;
      TlgCreateSz(&v40, v14);
      v16 = "Tap";
      if ( (*(_BYTE *)(a1 + 8) & 0x40) == 0 )
        v16 = v15;
      TlgCreateSz(&v41, v16);
      v18 = "Hold";
      if ( *(char *)(a1 + 8) >= 0 )
        v18 = v17;
      TlgCreateSz(&v42, v18);
      v20 = "Button";
      if ( (*(_DWORD *)(a1 + 8) & 0x100) == 0 )
        v20 = v19;
      TlgCreateSz(&v43, v20);
      v22 = "Eraser";
      if ( (*(_DWORD *)(a1 + 8) & 0x200) == 0 )
        v22 = v21;
      TlgCreateSz(&v44, v22);
      v24 = "Hover";
      if ( (*(_DWORD *)(a1 + 8) & 0x400) == 0 )
        v24 = v23;
      TlgCreateSz(&v45, v24);
      v26 = "Wheel";
      if ( (*(_DWORD *)(a1 + 8) & 0x8000) == 0 )
        v26 = v25;
      TlgCreateSz(&v46, v26);
      v28 = "DisableGestures";
      if ( (*(_DWORD *)(a1 + 8) & 0x10000000) == 0 )
        v28 = v27;
      TlgCreateSz(&v47, v28);
      v30 = "StopInertia";
      if ( (*(_DWORD *)(a1 + 8) & 0x20000000) == 0 )
        v30 = v29;
      TlgCreateSz(&v48, v30);
      v51 = 0;
      v54 = 0;
      v52 = a1 + 4;
      v49 = a1;
      v50 = v31;
      v53 = v31;
      LOBYTE(v2) = TlgWrite(v32, &unk_1802DDF7B, 0LL, 0LL, 0x12u, &pData);
    }
  }
  return (char)v2;
}
