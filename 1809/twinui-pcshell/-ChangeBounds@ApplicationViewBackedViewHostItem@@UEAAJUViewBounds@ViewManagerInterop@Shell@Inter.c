/*
 * XREFs of ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C2560
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1801BC168 (--0-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801BFF84 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProvid.c)
 *     ??1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ @ 0x1801C2258 (--1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAAXIUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801C3728 (-StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QE.c)
 *     ?get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x1801C4ED0 (-get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::ChangeBounds(float *a1, int *a2)
{
  int CompositionId; // eax
  unsigned int LastError; // ebx
  unsigned int v6; // esi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  const char *v12; // r9
  unsigned int v13[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v14[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v15[40]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  CompositionId = ApplicationViewBackedViewHostItem::get_CompositionId((ApplicationViewBackedViewHostItem *)a1, v13);
  LastError = 0;
  v6 = CompositionId;
  if ( CompositionId >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v15,
      (__int64)"ApplicationViewBackedViewHostItem_ChangeBounds");
    v8 = *(_OWORD *)a2;
    v9 = *((_OWORD *)a2 + 1);
    v15[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::`vftable';
    v14[0] = v8;
    v10 = *((_OWORD *)a2 + 2);
    v14[1] = v9;
    v11 = *((_OWORD *)a2 + 3);
    v14[2] = v10;
    v14[3] = v11;
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::StartActivity(v15, v13[0], v14);
    if ( SetWindowPos((HWND)(int)v13[0], 0LL, 0, 0, *a2, a2[1], 0x504u) )
    {
      a1[37] = (float)*a2;
      a1[38] = (float)a2[1];
      wil::ActivityBase<HolographicPositionerProvider,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v15);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x147,
                    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
                    v12);
    }
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::~ApplicationViewBackedViewHostItem_ChangeBounds((HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds *)v15);
    return LastError;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)CompositionId);
    return v6;
  }
}
