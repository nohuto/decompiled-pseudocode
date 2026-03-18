/*
 * XREFs of ?HitTestTreeWalkResult@DWM@InputTraceLogging@@SAXKW4DIT_HITTESTATTRIBUTES@@QEAXQEAUHWND__@@1PEBVCInteraction@@@Z @ 0x1800868EC
 * Callers:
 *     ?HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z @ 0x180086418 (-HitTestPoint@CHitTestContext@@QEAAJAEBUHitTestPointRequest@1@AEAUHitTestPointResult@1@@Z.c)
 * Callees:
 *     ?TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z @ 0x180016B38 (-TraceInteractionConfiguration@GestureTargeting@InputTraceLogging@@SAXPEBVCInteraction@@@Z.c)
 *     _TlgCreateSz @ 0x180033404 (_TlgCreateSz.c)
 *     ?get@?$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z @ 0x180086A80 (-get@-$static_lazy@VInputTraceLogging@@@details@wil@@QEAAPEAVInputTraceLogging@@P6AXXZ@Z.c)
 *     _TlgWrite @ 0x1800A5240 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800A762C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x18015A2B8 (_TlgCreateWsz.c)
 *     ?InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022D9B8 (-InteractionDefaultToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 *     ?InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z @ 0x18022DA04 (-InteractionInputSink@InputTraceLogging@@CAPEAXPEBVCInteraction@@@Z.c)
 *     ?InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z @ 0x18022DA20 (-InteractionProcessId@InputTraceLogging@@CAKPEBVCInteraction@@@Z.c)
 *     ?InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z @ 0x18022DA4C (-InteractionSourceTypeToString@InputTraceLogging@@CAPEBDPEBVCInteraction@@@Z.c)
 */

void __fastcall InputTraceLogging::DWM::HitTestTreeWalkResult(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        char a5,
        struct CInteraction *a6)
{
  struct CInteraction *v6; // rbx
  int v9; // edi
  __int64 v10; // rax
  const struct _TlgProvider_t *v11; // rsi
  int v12; // edi
  int v13; // edi
  int v14; // edi
  int v15; // edi
  int v16; // edi
  const CHAR *v17; // rdx
  const WCHAR *v18; // rdx
  const WCHAR *v19; // r10
  const WCHAR *v20; // rdx
  const WCHAR *v21; // r10
  const WCHAR *v22; // rdx
  const WCHAR *v23; // r10
  const WCHAR *v24; // rdx
  const WCHAR *v25; // r10
  const WCHAR *v26; // rdx
  const WCHAR *v27; // r10
  const WCHAR *v28; // rdx
  const WCHAR *v29; // r10
  const WCHAR *v30; // rdx
  const WCHAR *v31; // r10
  const WCHAR *v32; // rdx
  const WCHAR *v33; // r10
  const WCHAR *v34; // rdx
  __int64 v35; // r11
  char *v36; // rax
  const CHAR *v37; // rax
  const CHAR *v38; // rax
  int v39; // eax
  __int64 v40; // r11
  const struct CInteraction *v41; // rcx
  unsigned __int8 v42; // al
  bool v43; // al
  int v44; // eax
  int v45; // [rsp+38h] [rbp-D0h] BYREF
  int v46; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v47; // [rsp+40h] [rbp-C8h] BYREF
  int v48; // [rsp+44h] [rbp-C4h] BYREF
  BOOL v49; // [rsp+48h] [rbp-C0h] BYREF
  int v50; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v51; // [rsp+50h] [rbp-B8h] BYREF
  struct CInteraction *v52; // [rsp+58h] [rbp-B0h] BYREF
  char *v53; // [rsp+60h] [rbp-A8h] BYREF
  void *v54; // [rsp+68h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+98h] [rbp-70h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v57; // [rsp+A8h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v58; // [rsp+B8h] [rbp-50h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v59; // [rsp+C8h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v61; // [rsp+E8h] [rbp-20h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v62; // [rsp+F8h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v63; // [rsp+108h] [rbp+0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v64; // [rsp+118h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v65; // [rsp+128h] [rbp+20h] BYREF
  int *v66; // [rsp+138h] [rbp+30h]
  __int64 v67; // [rsp+140h] [rbp+38h]
  __int64 *v68; // [rsp+148h] [rbp+40h]
  __int64 v69; // [rsp+150h] [rbp+48h]
  __int64 *v70; // [rsp+158h] [rbp+50h]
  __int64 v71; // [rsp+160h] [rbp+58h]
  char *v72; // [rsp+168h] [rbp+60h]
  __int64 v73; // [rsp+170h] [rbp+68h]
  struct CInteraction **v74; // [rsp+178h] [rbp+70h]
  __int64 v75; // [rsp+180h] [rbp+78h]
  char **v76; // [rsp+188h] [rbp+80h]
  __int64 v77; // [rsp+190h] [rbp+88h]
  struct _EVENT_DATA_DESCRIPTOR v78; // [rsp+198h] [rbp+90h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v79; // [rsp+1A8h] [rbp+A0h] BYREF
  int *v80; // [rsp+1B8h] [rbp+B0h]
  __int64 v81; // [rsp+1C0h] [rbp+B8h]
  void **v82; // [rsp+1C8h] [rbp+C0h]
  __int64 v83; // [rsp+1D0h] [rbp+C8h]
  unsigned int *v84; // [rsp+1D8h] [rbp+D0h]
  __int64 v85; // [rsp+1E0h] [rbp+D8h]
  int *v86; // [rsp+1E8h] [rbp+E0h]
  __int64 v87; // [rsp+1F0h] [rbp+E8h]
  BOOL *v88; // [rsp+1F8h] [rbp+F0h]
  __int64 v89; // [rsp+200h] [rbp+F8h]
  int *v90; // [rsp+208h] [rbp+100h]
  __int64 v91; // [rsp+210h] [rbp+108h]
  __int64 v92; // [rsp+268h] [rbp+160h] BYREF

  v92 = a3;
  v6 = a6;
  v9 = a1;
  v10 = wil::details::static_lazy<InputTraceLogging>::get(
          a1,
          lambda_a8e7baa2fca040c17c3e795f3590cb07_::_lambda_invoker_cdecl_);
  v11 = *(const struct _TlgProvider_t **)(v10 + 8);
  if ( *(_DWORD *)v11 > 4u && TlgKeywordOn(*(TraceLoggingHProvider *)(v10 + 8), 2uLL) )
  {
    if ( v9 )
    {
      v12 = v9 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          v14 = v13 - 1;
          if ( v14 )
          {
            v15 = v14 - 1;
            if ( v15 )
            {
              v16 = v15 - 1;
              if ( v16 )
              {
                if ( v16 == 1 )
                  v17 = "DropTarget";
                else
                  v17 = "UNKNOWN";
              }
              else
              {
                v17 = "Touchpad";
              }
            }
            else
            {
              v17 = "Mouse";
            }
          }
          else
          {
            v17 = "Pen";
          }
        }
        else
        {
          v17 = "Touch";
        }
      }
      else
      {
        v17 = "Pointer";
      }
    }
    else
    {
      v17 = "ComputeLuid";
    }
    TlgCreateSz(&pDesc, v17);
    v18 = L"MouseWheel";
    if ( (a2 & 1) == 0 )
      v18 = &pwsz;
    TlgCreateWsz(&v57, v18);
    v20 = L"WheelIncreasing";
    if ( (a2 & 2) == 0 )
      v20 = v19;
    TlgCreateWsz(&v58, v20);
    v22 = L"WheelHorizontal";
    if ( (a2 & 4) == 0 )
      v22 = v21;
    TlgCreateWsz(&v59, v22);
    v24 = L"ButtonDown";
    if ( (a2 & 8) == 0 )
      v24 = v23;
    TlgCreateWsz(&v60, v24);
    v26 = L"TouchTargeting";
    if ( (a2 & 0x10) == 0 )
      v26 = v25;
    TlgCreateWsz(&v61, v26);
    v28 = L"NoHoverPointer";
    if ( (a2 & 0x20) == 0 )
      v28 = v27;
    TlgCreateWsz(&v62, v28);
    v30 = L"BarrelButtonDown";
    if ( (a2 & 0x40) == 0 )
      v30 = v29;
    TlgCreateWsz(&v63, v30);
    v32 = L"EraserDown";
    if ( (a2 & 0x80u) == 0 )
      v32 = v31;
    TlgCreateWsz(&v64, v32);
    v34 = L"ControlDown";
    if ( (a2 & 0x100) == 0 )
      v34 = v33;
    TlgCreateWsz(&v65, v34);
    v45 = a2;
    v66 = &v45;
    v68 = &v92;
    v70 = &v51;
    v72 = &a5;
    v74 = &v52;
    v36 = (char *)v6 + 8;
    v67 = 4LL;
    v69 = v35;
    v51 = a4;
    v71 = v35;
    v73 = v35;
    v52 = v6;
    v75 = v35;
    if ( !v6 )
      v36 = 0LL;
    v53 = v36;
    v77 = v35;
    v76 = &v53;
    v37 = InputTraceLogging::InteractionSourceTypeToString(v6);
    TlgCreateSz(&v78, v37);
    v38 = InputTraceLogging::InteractionDefaultToString(v6);
    TlgCreateSz(&v79, v38);
    if ( v6 )
      v39 = *((_DWORD *)v6 + 424);
    else
      v39 = 0;
    v46 = v39;
    v81 = 4LL;
    v80 = &v46;
    v54 = InputTraceLogging::InteractionInputSink(v6);
    v82 = &v54;
    v83 = v40;
    v47 = InputTraceLogging::InteractionProcessId(v41);
    v84 = &v47;
    v85 = 4LL;
    if ( v6 )
      v42 = *((_BYTE *)v6 + 184) & 1;
    else
      v42 = 0;
    v48 = v42;
    v86 = &v48;
    v87 = 4LL;
    if ( v6 )
      v43 = (*((_BYTE *)v6 + 184) & 4) != 0;
    else
      v43 = 0;
    v49 = v43;
    v88 = &v49;
    v44 = 0;
    v89 = 4LL;
    if ( v6 )
      LOBYTE(v44) = *((_QWORD *)v6 + 34) != 0LL;
    v50 = v44;
    v90 = &v50;
    v91 = 4LL;
    TlgWrite(v11, &unk_1802DDB96, 0LL, 0LL, 0x1Au, &pData);
  }
  if ( v6 )
    InputTraceLogging::GestureTargeting::TraceInteractionConfiguration(v6);
}
