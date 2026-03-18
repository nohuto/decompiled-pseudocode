/*
 * XREFs of ?DisplayOnlyPresent@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@PEAVDXGALLOCATION@@IPEAU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C027FBA0
 * Callers:
 *     ?PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEVICEACCESS@@PEAPEAV1@@Z @ 0x1C0280254 (-PresentMultiPlaneOverlay3@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@PEAVCOREDEV.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001908 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C00085A0 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 *     memset @ 0x1C0025300 (memset.c)
 *     ?DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C00F7F40 (-DisableOverlayPlanes@ADAPTER_DISPLAY@@QEAAXI@Z.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00FFBE0 (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 *     ?PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRESENT@@PEAVCOREDEVICEACCESS@@PEAUtagRECT@@@Z @ 0x1C01F301C (-PresentDisplayOnly@ADAPTER_DISPLAY@@QEAAJPEAVDXGCONTEXT@@IPEBU_D3DKMT_PRESENT@@PEBU_DXGKARG_PRE.c)
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
  unsigned int v11; // edx
  _QWORD *v12; // rax
  __int64 v14; // rax
  void *v15; // rcx
  __int64 v16; // rax
  const GUID *v17; // r8
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r15
  _QWORD *v23; // rax
  D3DDDIFORMAT Format; // eax
  int v25; // r15d
  __int64 v26; // r10
  __int64 v27; // r8
  _QWORD *v28; // rax
  struct _DXGKARG_DESCRIBEALLOCATION v29; // [rsp+40h] [rbp-79h] BYREF
  __int128 v30; // [rsp+70h] [rbp-49h]
  struct tagRECT v31; // [rsp+A8h] [rbp-11h] BYREF

  v6 = (a2->Flags.Value & 0x10000000) == 0;
  *(_QWORD *)&v31.left = 0LL;
  *(_QWORD *)&v31.right = 0LL;
  if ( v6 )
  {
    v11 = *(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL);
    if ( (v11 & 0x10) != 0 )
    {
      v12 = (_QWORD *)WdLogNewEntry5_WdEvent(this);
      v12[3] = -1071775482LL;
      v12[4] = this;
      v12[5] = a3;
      WdLogEvent5_WdEvent(v12);
      return 3223191814LL;
    }
    v30 = *(_OWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                       *(DXGADAPTER ***)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
                       (v11 >> 6) & 0xF);
    memset(&v29, 0, sizeof(v29));
    v29.Rotation = -1;
    v14 = *((_QWORD *)a3 + 6);
    v29.Flags.Value = 1;
    v15 = *(void **)(v14 + 16);
    v16 = *((_QWORD *)this + 2);
    v29.hAllocation = v15;
    v18 = ADAPTER_RENDER::DdiDescribeAllocation(
            *(ADAPTER_RENDER **)(*(_QWORD *)(*(_QWORD *)(v16 + 16) + 16LL) + 2560LL),
            &v29,
            v17);
    v22 = v18;
    if ( v18 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v20, v19, v21);
      v23[3] = v22;
      v23[4] = this;
      v23[5] = *((unsigned int *)a3 + 4);
      v23[6] = a3;
      v23[7] = (*(_DWORD *)(*((_QWORD *)a3 + 6) + 4LL) >> 6) & 0xF;
      WdLogEvent5_WdError(v23);
      return 3221225485LL;
    }
    if ( *(_QWORD *)&v29.Width != (_QWORD)v30 )
      goto LABEL_19;
    v20 = 22LL;
    Format = D3DDDIFMT_X8R8G8B8;
    if ( v29.Format != D3DDDIFMT_A8R8G8B8 )
      Format = v29.Format;
    if ( DWORD2(v30) != 21 )
      v20 = DWORD2(v30);
    if ( Format != (_DWORD)v20 )
    {
LABEL_19:
      v28 = (_QWORD *)WdLogNewEntry5_WdEvent(v20);
      v28[3] = -1071775482LL;
      v28[4] = this;
      v28[5] = a3;
      WdLogEvent5_WdEvent(v28);
      return 3223191557LL;
    }
    v31.right = v29.Width;
    v31.bottom = v29.Height;
  }
  v25 = ADAPTER_DISPLAY::PresentDisplayOnly(
          *(ADAPTER_DISPLAY **)(*(_QWORD *)(*((_QWORD *)this + 2) + 1728LL) + 2552LL),
          this,
          a4,
          a2,
          a5,
          a6,
          &v31);
  if ( v25 >= 0 && (a2->Flags.Value & 4) != 0 )
  {
    v26 = *((_QWORD *)this + 2);
    v27 = *(_QWORD *)(v26 + 1728);
    if ( v27 == *(_QWORD *)(*(_QWORD *)(v26 + 16) + 16LL) )
    {
      ADAPTER_DISPLAY::DisableOverlayPlanes(*(ADAPTER_DISPLAY **)(v27 + 2552), a4);
      v26 = *((_QWORD *)this + 2);
    }
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)v26, a4, a3, 0, 1u);
  }
  return (unsigned int)v25;
}
