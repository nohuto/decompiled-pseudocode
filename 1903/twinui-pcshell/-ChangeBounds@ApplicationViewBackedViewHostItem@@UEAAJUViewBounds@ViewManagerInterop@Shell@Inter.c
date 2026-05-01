/*
 * XREFs of ?ChangeBounds@ApplicationViewBackedViewHostItem@@UEAAJUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18021A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18020BA10 (--0-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?Stop@?$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180213920 (-Stop@-$ActivityBase@VHolographicPositionerProvider@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsPr.c)
 *     ??1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ @ 0x18021A074 (--1ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QEAAXIUViewBounds@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18021B75C (-StartActivity@ApplicationViewBackedViewHostItem_ChangeBounds@HolographicPositionerTelemetry@@QE.c)
 *     ?get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z @ 0x18021D260 (-get_CompositionId@ApplicationViewBackedViewHostItem@@UEAAJPEAI@Z.c)
 */

__int64 __fastcall ApplicationViewBackedViewHostItem::ChangeBounds(float *a1, __int128 *a2)
{
  int CompositionId; // eax
  unsigned int LastError; // ebx
  unsigned int v6; // edi
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  int cy; // edi
  int v13; // r14d
  const char *v14; // r9
  unsigned int v15[4]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v17[40]; // [rsp+90h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]

  CompositionId = ApplicationViewBackedViewHostItem::get_CompositionId((ApplicationViewBackedViewHostItem *)a1, v15);
  LastError = 0;
  v6 = CompositionId;
  if ( CompositionId >= 0 )
  {
    wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
      (struct wil::details::IFailureCallback *)v17,
      (__int64)"ApplicationViewBackedViewHostItem_ChangeBounds");
    v8 = *a2;
    v9 = a2[1];
    v17[0] = &HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::`vftable';
    v16[0] = v8;
    v10 = a2[2];
    v16[1] = v9;
    v11 = a2[3];
    v16[2] = v10;
    v16[3] = v11;
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::StartActivity(v17, v15[0], v16);
    cy = *((_DWORD *)a2 + 1);
    v13 = *(_DWORD *)a2;
    if ( SetWindowPos((HWND)(int)v15[0], 0LL, 0, 0, v13, cy, 0x504u) )
    {
      a1[59] = (float)v13;
      a1[60] = (float)cy;
      wil::ActivityBase<HolographicPositionerProvider,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v17);
    }
    else
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x14E,
                    (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
                    v14);
    }
    HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds::~ApplicationViewBackedViewHostItem_ChangeBounds((HolographicPositionerTelemetry::ApplicationViewBackedViewHostItem_ChangeBounds *)v17);
    return LastError;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"pcshell\\twinui\\holographicpositioner\\lib\\applicationviewbackedviewhostitem.cpp",
      (const char *)(unsigned int)CompositionId);
    return v6;
  }
}
