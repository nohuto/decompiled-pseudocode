/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport3DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXIPEAPEAU_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FBCE0
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C01FC17C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 *     memset @ 0x1C00231C0 (memset.c)
 *     ?DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3@@@Z @ 0x1C01C8ED4 (-DdiCheckMultiPlaneOverlaySupport3@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPP.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C01FB4D8 (-AllocateElements@-$PagedPoolZeroedArray@PEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOUR.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@I@Z @ 0x1C01FB6F0 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2@@$02@@QEAA.c)
 *     ?AllocateElements@?$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@$00@@QEAAPEAU_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@@I@Z @ 0x1C01FB774 (-AllocateElements@-$PagedPoolZeroedArray@U_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE@.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport3DDI(
        unsigned int a1,
        unsigned __int64 a2,
        void **a3,
        unsigned int a4,
        struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **a5,
        struct ADAPTER_DISPLAY *a6,
        int *a7,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a8)
{
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v8; // r12
  struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _BYTE *PoolWithTag; // rbx
  DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **v14; // rbx
  _QWORD *v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  char *v22; // r13
  _QWORD *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *v26; // r15
  DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _QWORD *v31; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v34; // r9
  char *v35; // r8
  signed __int64 v36; // r10
  signed __int64 v37; // r14
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *v38; // r11
  struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **v39; // r9
  D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *p_PostComposition; // r8
  __int64 v41; // r11
  __int64 v42; // rdx
  UINT Value; // ecx
  const GUID *v44; // r8
  int v45; // eax
  unsigned int v47; // [rsp+20h] [rbp-E0h]
  PVOID P; // [rsp+28h] [rbp-D8h] BYREF
  char v49; // [rsp+30h] [rbp-D0h] BYREF
  int v50; // [rsp+38h] [rbp-C8h]
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v51; // [rsp+40h] [rbp-C0h]
  void **v52; // [rsp+48h] [rbp-B8h]
  ADAPTER_DISPLAY *v53; // [rsp+50h] [rbp-B0h]
  int *v54; // [rsp+58h] [rbp-A8h]
  struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *v55; // [rsp+60h] [rbp-A0h]
  PVOID v56; // [rsp+68h] [rbp-98h]
  _BYTE v57[24]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v58; // [rsp+88h] [rbp-78h]
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3 v59; // [rsp+90h] [rbp-70h] BYREF
  PVOID v60; // [rsp+B8h] [rbp-48h] BYREF
  char v61; // [rsp+C0h] [rbp-40h] BYREF
  int v62; // [rsp+ECh] [rbp-14h]
  PVOID v63; // [rsp+F0h] [rbp-10h] BYREF
  char v64; // [rsp+F8h] [rbp-8h] BYREF
  int v65; // [rsp+230h] [rbp+130h]

  v8 = 0LL;
  v10 = a8;
  v11 = a1;
  v53 = a6;
  v12 = a4;
  v52 = a3;
  v51 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  *a7 = 0;
  a8->Value = 0;
  v47 = a1;
  v54 = a7;
  v55 = (struct DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO::$3235B0AF7BF3D9B607A1C4FD103E9694::$7E5D53739D5A0755634D9029F4E2827E *)a8;
  v56 = 0LL;
  v58 = 0;
  if ( a1 <= 3 )
  {
    PoolWithTag = v57;
    v56 = v57;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / a1 < 8 )
    {
LABEL_7:
      v15 = (_QWORD *)WdLogNewEntry5_WdWarning(v10, a2, a3);
      v15[3] = a1;
      v16 = -1073741801;
      v15[4] = -1073741801LL;
      v15[5] = PsGetCurrentProcess(v18, v17);
      WdLogEvent5_WdWarning(v15);
      goto LABEL_39;
    }
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * a1, 0x4B677844u);
    v56 = PoolWithTag;
  }
  v58 = a1;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 8LL * a1);
  v14 = (DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2 **)v56;
  if ( !v56 )
    goto LABEL_7;
  v63 = 0LL;
  v65 = 0;
  v22 = (char *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2,3>::AllocateElements(&v63, a1);
  if ( v22 )
  {
    v60 = 0LL;
    v26 = 0LL;
    v62 = 0;
    P = 0LL;
    v50 = 0;
    if ( !(_DWORD)v12
      || (v26 = (struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE,1>::AllocateElements(
                                                                                    &v60,
                                                                                    v12),
          v27 = (DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)PagedPoolZeroedArray<_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE *,1>::AllocateElements(
                                                                           &P,
                                                                           v12),
          v8 = v27,
          v26)
      && v27 )
    {
      if ( a1 )
      {
        v34 = v51;
        v35 = v22 + 12;
        v36 = (char *)v14 - (char *)v51;
        v37 = (char *)v52 - (char *)v51;
        do
        {
          *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v34 + v36) = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 *)v22;
          v38 = *v34;
          *(_QWORD *)(v35 - 12) = *(struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)((char *)v34 + v37);
          *((_DWORD *)v35 - 1) = v38->VidPnSourceId;
          *(_DWORD *)v35 = v38->LayerIndex;
          *(RECT *)(v35 + 8) = v38->pPlaneAttributes->SrcRect;
          *(RECT *)(v35 + 24) = v38->pPlaneAttributes->DstRect;
          *(RECT *)(v35 + 40) = v38->pPlaneAttributes->ClipRect;
          *((_DWORD *)v35 + 14) = v38->pPlaneAttributes->Rotation;
          *((_DWORD *)v35 + 16) = v38->pPlaneAttributes->ColorSpace;
          *((_DWORD *)v35 + 1) ^= (*((_DWORD *)v35 + 1) ^ v38->pPlaneAttributes->Flags) & 1;
          *((_DWORD *)v35 + 1) ^= ((unsigned __int8)*((_DWORD *)v35 + 1) ^ (unsigned __int8)v38->pPlaneAttributes->Flags) & 2;
          *((_DWORD *)v35 + 15) ^= (*((_DWORD *)v35 + 15) ^ v38->pPlaneAttributes->Blend) & 1;
          if ( v38->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_BILINEAR )
          {
            *((_DWORD *)v35 + 17) = 1;
          }
          else if ( v38->pPlaneAttributes->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
          {
            *((_DWORD *)v35 + 17) = 2;
          }
          v22 += 104;
          ++v34;
          *((_DWORD *)v35 + 18) = v38->pPlaneAttributes->SDRWhiteLevel;
          v35 += 104;
          --v11;
        }
        while ( v11 );
        a1 = v47;
      }
      if ( (_DWORD)v12 )
      {
        v39 = a5;
        p_PostComposition = &v26->PostComposition;
        v41 = v12;
        do
        {
          *(struct _D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE **)((char *)v39 + (char *)v8 - (char *)a5) = v26++;
          v42 = (__int64)*v39++;
          Value = p_PostComposition->Flags.Value;
          p_PostComposition[-1].Rotation = *(_DWORD *)v42;
          p_PostComposition->SrcRect = *(RECT *)(v42 + 8);
          p_PostComposition->DstRect = *(RECT *)(v42 + 24);
          p_PostComposition->Rotation = *(_DWORD *)(v42 + 40);
          p_PostComposition->Flags.Value ^= (*(_DWORD *)(v42 + 4) ^ Value) & 1;
          p_PostComposition->Flags.Value ^= (*(_DWORD *)(v42 + 4) ^ p_PostComposition->Flags.Value) & 2;
          p_PostComposition = (D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION *)((char *)p_PostComposition + 44);
          --v41;
        }
        while ( v41 );
      }
      memset(&v59, 0, sizeof(v59));
      v59.PlaneCount = a1;
      v59.ppPlanes = v14;
      v59.PostCompositionCount = v12;
      v59.ppPostComposition = v8;
      v45 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport3(v53, &v59, v44);
      if ( v45 >= 0 )
      {
        *v54 = v59.Supported;
        *v55 = v59.ReturnInfo.0;
      }
      v16 = v45;
    }
    else
    {
      v16 = -1073741801;
      v31 = (_QWORD *)WdLogNewEntry5_WdWarning(v29, v28, v30);
      v31[3] = v12;
      v31[4] = -1073741801LL;
      v31[5] = PsGetCurrentProcess(v33, v32);
      WdLogEvent5_WdWarning(v31);
    }
    if ( P != &v49 && P )
      ExFreePoolWithTag(P, 0);
    P = 0LL;
    v50 = 0;
    if ( v60 != &v61 && v60 )
      ExFreePoolWithTag(v60, 0);
    v60 = 0LL;
    v62 = 0;
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdWarning(v20, v19, v21);
    v23[3] = a1;
    v16 = -1073741801;
    v23[4] = -1073741801LL;
    v23[5] = PsGetCurrentProcess(v25, v24);
    WdLogEvent5_WdWarning(v23);
  }
  if ( v63 != &v64 && v63 )
    ExFreePoolWithTag(v63, 0);
  v63 = 0LL;
  v65 = 0;
LABEL_39:
  if ( v56 != v57 && v56 )
    ExFreePoolWithTag(v56, 0);
  return v16;
}
