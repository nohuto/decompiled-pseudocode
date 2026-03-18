/*
 * XREFs of ?GetSwapChainTransformForDirtyRects@CVisual@@KA_NPEAVISwapChainContent@@PEAVCMILMatrix@@@Z @ 0x18001A914
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18002A100 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180075DB0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ @ 0x1800A1078 (-GetRenderingRealizationNoRef@CCompositionSurfaceInfo@@QEAAPEAVCBitmapRealization@@XZ.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CVisual::GetSwapChainTransformForDirtyRects(struct ISwapChainContent *a1, struct CMILMatrix *a2)
{
  char v4; // bl
  char v5; // al
  __int64 v6; // r9
  CCompositionSurfaceInfo *v8; // rax
  struct CBitmapRealization *RenderingRealizationNoRef; // rax
  int (__fastcall ***v10)(struct CBitmapRealization *, GUID *, __int64 *); // rcx
  int (__fastcall **v11)(struct CBitmapRealization *, GUID *, __int64 *); // rax
  _BYTE *v12; // rdx
  __int64 v13; // [rsp+40h] [rbp-48h] BYREF
  char v14[16]; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v15[16]; // [rsp+58h] [rbp-30h] BYREF
  char v16[16]; // [rsp+68h] [rbp-20h] BYREF

  v4 = 0;
  v5 = (*(__int64 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a1 + 152LL))(a1);
  v6 = *(_QWORD *)a1;
  if ( !v5 )
    return (*(__int64 (__fastcall **)(struct ISwapChainContent *, struct CMILMatrix *, _QWORD))(v6 + 64))(a1, a2, 0LL);
  v8 = (CCompositionSurfaceInfo *)(*(__int64 (__fastcall **)(struct ISwapChainContent *))(v6 + 208))(a1);
  if ( v8 )
  {
    RenderingRealizationNoRef = CCompositionSurfaceInfo::GetRenderingRealizationNoRef(v8);
    v10 = (int (__fastcall ***)(struct CBitmapRealization *, GUID *, __int64 *))((char *)RenderingRealizationNoRef + 144);
    if ( !RenderingRealizationNoRef )
      v10 = 0LL;
    if ( v10 )
    {
      v11 = *v10;
      v13 = 0LL;
      if ( (*v11)((struct CBitmapRealization *)v10, &GUID_51e2a1f0_4a0d_4788_800f_3cee7a2512a6, &v13) >= 0 )
      {
        v12 = v15;
        LOBYTE(v12) = 1;
        v4 = (*(__int64 (__fastcall **)(__int64, _BYTE *, struct CMILMatrix *, char *, _BYTE *, char *))(*(_QWORD *)v13 + 24LL))(
               v13,
               v12,
               a2,
               v16,
               v15,
               v14);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
    }
  }
  return v4;
}
