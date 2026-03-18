/*
 * XREFs of ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0249F94
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C024A648 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C000E208 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00DEA1C (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C0122420 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01C4114 (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
 */

__int64 __fastcall DXGCONTEXT::DisplayOnlyPresent(
        DXGCONTEXT *this,
        struct _D3DKMT_PRESENT *a2,
        struct DXGALLOCATION *a3,
        unsigned int a4,
        struct _DXGKARG_PRESENT *a5,
        struct COREDEVICEACCESS *a6)
{
  bool v6; // zf
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax
  const GUID *v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // r15
  _QWORD *v21; // rax
  D3DDDIFORMAT Format; // eax
  int v23; // r15d
  __int64 v24; // rcx
  __int64 v25; // r8
  _QWORD *v26; // rax
  struct _DXGKARG_DESCRIBEALLOCATION v27; // [rsp+40h] [rbp-79h] BYREF
  __int128 v28; // [rsp+70h] [rbp-49h]
  struct tagRECT v29; // [rsp+A8h] [rbp-11h] BYREF

  v6 = (a2->Flags.Value & 0x10000000) == 0;
  *(_QWORD *)&v29.left = 0LL;
  *(_QWORD *)&v29.right = 0LL;
  if ( v6 )
  {
    v11 = *(unsigned int *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v11 & 0x10) != 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdEvent(this, v11);
      v12[3] = -1071775482LL;
      v12[4] = this;
      v12[5] = a3;
      WdLogEvent5_WdEvent(v12);
      return 3223191814LL;
    }
    v28 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                       *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
                       ((unsigned int)v11 >> 6) & 0xF);
    memset(&v27, 0, sizeof(v27));
    v27.Rotation = -1;
    v14 = *((_QWORD *)a3 + 6);
    v27.Flags.Value = 1;
    v15 = *(void **)(v14 + 16);
    v16 = *((_QWORD *)this + 2);
    v27.hAllocation = v15;
    v18 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 2528LL),
            &v27,
            v17);
    v20 = v18;
    if ( v18 < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v21[3] = v20;
      v21[4] = this;
      v21[5] = *((unsigned int *)a3 + 4);
      v21[6] = a3;
      v21[7] = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v21);
      return 3221225485LL;
    }
    if ( *(_QWORD *)&v27.Width != (_QWORD)v28 )
      goto LABEL_19;
    v19 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v27.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v27.Format;
    if ( DWORD2(v28) != 21 )
      v19 = DWORD2(v28);
    if ( Format != (_DWORD)v19 )
    {
LABEL_19:
      v26 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v27.Width);
      v26[3] = -1071775482LL;
      v26[4] = this;
      v26[5] = a3;
      WdLogEvent5_WdEvent(v26);
      return 3223191557LL;
    }
    v29.right = v27.Width;
    v29.bottom = v27.Height;
  }
  v23 = ADAPTER_DISPLAY::PresentDisplayOnly(
          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2520LL),
          this,
          a4,
          a2,
          a5,
          a6,
          &v29);
  if ( v23 >= 0 && (a2->Flags.Value & 4) != 0 )
  {
    v24 = *((_QWORD *)this + 2);
    v25 = *(_QWORD *)(v24 + 1728);
    if ( v25 == *(_QWORD *)(*(_QWORD *)(v24 + 16) + 16LL) )
    {
      ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v25 + 2520), a4);
      v24 = *((_QWORD *)this + 2);
    }
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v24, a4, a3, 0, 1u);
  }
  return (unsigned int)v23;
}
