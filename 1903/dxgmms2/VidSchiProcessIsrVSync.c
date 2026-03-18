/*
 * XREFs of VidSchiProcessIsrVSync @ 0x1C000BD80
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B460 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0018060 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018610 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqx @ 0x1C002647C (McTemplateK0pqx.c)
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C002B54C (-VidSchiProcessIsrVSyncMultiPlaneOverlay2@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 */

__int64 __fastcall VidSchiProcessIsrVSync(
        union _SLIST_HEADER *a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        __int64 a3,
        __int64 a4)
{
  bool v4; // r12
  UINT SubmissionFenceId; // edx
  unsigned int v9; // r13d
  unsigned int v10; // ebp
  __int64 v11; // rcx
  unsigned int v12; // r9d
  __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  LARGE_INTEGER v15; // rcx
  PSLIST_ENTRY v16; // rax
  __int64 v17; // rdx
  DXGK_INTERRUPT_TYPE InterruptType; // ecx
  PSLIST_ENTRY v19; // rdi
  unsigned int v20; // eax
  LARGE_INTEGER PhysicalAddress; // rax
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rax
  ULONGLONG Region; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 EngineOrdinal; // rcx
  ULONGLONG Alignment; // rax
  unsigned int v30; // r9d
  char v31; // r10
  char v32; // r11
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // rcx
  char *v34; // r8
  char *v35; // rdx
  int v36; // ecx
  int v37; // ecx
  unsigned int v38; // ecx
  unsigned int v39; // eax
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode; // eax
  char *v49; // r8
  int v50; // ecx
  int v51; // ecx
  unsigned int v52; // ecx
  unsigned int v53; // eax
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // ecx
  int v58; // eax
  int v59; // ecx
  int v60; // eax
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *v61; // r8
  int v62; // ecx
  int v63; // ecx
  unsigned int v64; // ecx
  unsigned int Rotation; // eax
  int v66; // eax
  int v67; // ecx
  int v68; // eax
  int v69; // ecx
  int v70; // eax
  int v71; // ecx
  int v72; // eax
  _QWORD *v73; // rax
  UINT v74; // [rsp+30h] [rbp-88h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp-80h] BYREF
  int v76; // [rsp+40h] [rbp-78h]
  LARGE_INTEGER v77; // [rsp+48h] [rbp-70h]
  __int64 v78; // [rsp+50h] [rbp-68h] BYREF
  __int64 v79; // [rsp+58h] [rbp-60h]
  __int64 v80; // [rsp+60h] [rbp-58h]
  int v81; // [rsp+68h] [rbp-50h]

  v4 = 0;
  v76 = a3;
  SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
  v77.QuadPart = 0LL;
  v74 = SubmissionFenceId;
  if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
    v4 = (a2->Flags.Value & 2) != 0;
  v9 = 0;
  v10 = 0;
  v11 = *(_QWORD *)(a1[1].Alignment + 2552);
  v12 = *(_DWORD *)(v11 + 80);
  if ( v12 )
  {
    a3 = *(_QWORD *)(v11 + 112);
    while ( *(_DWORD *)(3968LL * v10 + a3 + 1068) != SubmissionFenceId )
    {
      if ( ++v10 >= v12 )
        goto LABEL_33;
    }
    if ( v10 != -1 && v10 < *((_DWORD *)&a1[2].HeaderX64 + 2) )
    {
      _mm_lfence();
      v13 = *(&a1[161].Alignment + v10);
      if ( !v4 )
      {
        PerformanceFrequency.QuadPart = 0LL;
        LODWORD(v14) = 1;
        if ( _InterlockedExchange((volatile __int32 *)(v13 + 33224), 0) )
        {
          v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( !*(_QWORD *)(v13 + 33216) )
            *(union _LARGE_INTEGER *)(v13 + 33216) = PerformanceFrequency;
          v23 = _InterlockedCompareExchange64((volatile signed __int64 *)(v13 + 33240), 0LL, 0LL);
          v24 = v15.QuadPart - *(_QWORD *)(v13 + 33160);
          if ( v23 )
          {
            if ( v24 > v23 )
            {
              v14 = v24 / v23;
              if ( !(unsigned int)(v24 / v23) )
                goto LABEL_13;
            }
          }
        }
        else
        {
          v15 = KeQueryPerformanceCounter(&PerformanceFrequency);
          if ( !*(_QWORD *)(v13 + 33216) )
            *(union _LARGE_INTEGER *)(v13 + 33216) = PerformanceFrequency;
        }
        *(_QWORD *)(v13 + 33168) += (unsigned int)v14;
        *(LARGE_INTEGER *)(v13 + 33160) = v15;
        if ( *(_BYTE *)(v13 + 8) && !LOBYTE(a1[9].Alignment) )
        {
          Region = a1->Region;
          v78 = 0LL;
          v79 = 0LL;
          v80 = 0LL;
          v81 = 0;
          v26 = ((__int64 (__fastcall *)(ULONGLONG, _QWORD, _QWORD, __int64 *))DxgCoreInterface[60])(
                  Region,
                  0LL,
                  0LL,
                  &v78);
          v27 = 0LL;
          if ( v26 >= 0 )
            v27 = v79;
          *(_QWORD *)(v13 + 33176) = v27;
        }
      }
LABEL_13:
      v16 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v13 + 33648));
      if ( !v16 )
      {
LABEL_20:
        LOBYTE(SubmissionFenceId) = v74;
        goto LABEL_21;
      }
      InterruptType = a2->InterruptType;
      v19 = v16 - 1;
      *((_BYTE *)&v16[5].Next + 8) &= ~1u;
      LODWORD(v16->Next) = InterruptType;
      LODWORD(v16[5].Next) = v76;
      *((_DWORD *)&v16[4].Next + 3) = v74;
      v20 = HIDWORD(v16[5].Next) & 0xFFFFFC00;
      v19[3].Next = (struct _SLIST_ENTRY *)a1;
      HIDWORD(v19[6].Next) = v20;
      *((_DWORD *)&v19[5].Next + 2) = v10;
      if ( a2->InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
      {
        VidSchiProcessIsrVSyncMultiPlaneOverlay2(
          (struct _VIDSCH_GLOBAL *)a1,
          (struct _VIDSCH_PRESENT_INFO *)v13,
          a2,
          (struct _VIDSCH_VSYNC_COOKIE *)v19);
        goto LABEL_17;
      }
      if ( a2->InterruptType != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY )
      {
        HIDWORD(v19[6].Next) = v20 | 1;
        PhysicalAddress = a2->CrtcVsync.PhysicalAddress;
        v19[7].Next = (struct _SLIST_ENTRY *)PhysicalAddress.QuadPart;
        v77 = PhysicalAddress;
        goto LABEL_17;
      }
      EngineOrdinal = a2->DmaCompleted.EngineOrdinal;
      if ( (unsigned int)EngineOrdinal >= 0xA )
      {
        v73 = (_QWORD *)WdLogNewEntry5_WdAssertion(EngineOrdinal, v17);
        v73[3] = a1;
        v73[4] = a2->DmaCompleted.SubmissionFenceId;
        v73[5] = a2->DmaCompleted.EngineOrdinal;
        WdLogEvent5_WdAssertion(v73);
        goto LABEL_17;
      }
      Alignment = a1[1].Alignment;
      v30 = 0;
      v31 = *(_BYTE *)(Alignment + 2466);
      v32 = *(_BYTE *)(Alignment + 2467);
      if ( !(_DWORD)EngineOrdinal )
      {
LABEL_17:
        if ( !v4 )
        {
          v19[5].Next = *(struct _SLIST_ENTRY **)(v13 + 33168);
          *((_QWORD *)&v19[3].Next + 1) = *(_QWORD *)(v13 + 33160);
          v19[4].Next = *(struct _SLIST_ENTRY **)(v13 + 33176);
        }
        *((_QWORD *)&v19[4].Next + 1) = a4;
        ExpInterlockedPushEntrySList(a1 + 106, v19 + 2);
        goto LABEL_20;
      }
      while ( 1 )
      {
        pMultiPlaneOverlayVsyncInfo = a2->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
        if ( v31 )
        {
          v34 = (char *)pMultiPlaneOverlayVsyncInfo + 96 * v9;
          if ( *((_DWORD *)v34 + 1) )
          {
            HIDWORD(v19[6].Next) ^= ((unsigned __int16)HIDWORD(v19[6].Next) ^ (unsigned __int16)(HIDWORD(v19[6].Next) | (1 << *(_DWORD *)v34))) & 0x3FF;
            v35 = (char *)v19 + 40 * v30;
            *((_QWORD *)v35 + 14) = *((_QWORD *)v34 + 1);
            *((_WORD *)v35 + 60) = *((_WORD *)v34 + 10);
            v36 = *((_DWORD *)v35 + 36);
            *((_WORD *)v35 + 62) = *((_WORD *)v34 + 12);
            *((_WORD *)v35 + 61) = *((_WORD *)v34 + 14);
            *((_WORD *)v35 + 63) = *((_WORD *)v34 + 16);
            *((_WORD *)v35 + 64) = *((_WORD *)v34 + 18);
            *((_WORD *)v35 + 66) = *((_WORD *)v34 + 20);
            *((_WORD *)v35 + 65) = *((_WORD *)v34 + 22);
            *((_WORD *)v35 + 67) = *((_WORD *)v34 + 24);
            *((_WORD *)v35 + 68) = *((_WORD *)v34 + 18);
            *((_WORD *)v35 + 70) = *((_WORD *)v34 + 20);
            *((_WORD *)v35 + 69) = *((_WORD *)v34 + 22);
            *((_WORD *)v35 + 71) = *((_WORD *)v34 + 24);
            *((_DWORD *)v35 + 36) ^= (*((_DWORD *)v34 + 4) ^ v36) & 1;
            v37 = *((_DWORD *)v35 + 36) ^ ((unsigned __int8)*((_DWORD *)v35 + 36) ^ (unsigned __int8)*((_DWORD *)v34 + 4)) & 2;
            *((_DWORD *)v35 + 36) = v37;
            v38 = v37 & 0xFFFFFFE7;
            v39 = *((_DWORD *)v34 + 13);
            if ( v39 > 1 )
              v38 |= 8 * (((_BYTE)v39 - 1) & 3);
            *((_DWORD *)v35 + 36) = v38;
            v40 = v38 ^ ((unsigned __int8)v38 ^ (unsigned __int8)(4 * *((_DWORD *)v34 + 14))) & 4;
            *((_DWORD *)v35 + 36) = v40;
            v41 = v40 ^ ((unsigned __int8)v40 ^ (unsigned __int8)(32 * *((_DWORD *)v34 + 18))) & 0x60;
            *((_DWORD *)v35 + 36) = v41;
            v42 = v41 ^ ((unsigned __int8)v41 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v34 + 19) << 7)) & 0x80;
            *((_DWORD *)v35 + 36) = v42;
            v43 = v42 ^ ((unsigned __int16)v42 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v34 + 19) << 7)) & 0x100;
            *((_DWORD *)v35 + 36) = v43;
            v44 = v43 ^ ((unsigned __int16)v43 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v34 + 19) << 7)) & 0x200;
            *((_DWORD *)v35 + 36) = v44;
            v45 = v44 ^ ((unsigned __int16)v44 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v34 + 20) << 10)) & 0x1C00;
            *((_DWORD *)v35 + 36) = v45;
            v46 = v45 ^ ((unsigned __int16)v45 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v34 + 21) << 13)) & 0x2000;
            *((_DWORD *)v35 + 36) = v46;
            v47 = v46 ^ ((unsigned __int16)v46 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v34 + 22) << 14)) & 0x4000;
            *((_DWORD *)v35 + 36) = v47;
            StereoFlipMode = *((_DWORD *)v34 + 23);
LABEL_55:
            *((_DWORD *)v35 + 36) = v47 ^ (v47 ^ (StereoFlipMode << 15)) & 0x18000;
            ++v30;
          }
        }
        else if ( v32 )
        {
          v49 = (char *)pMultiPlaneOverlayVsyncInfo + 112 * v9;
          if ( *((_DWORD *)v49 + 1) )
          {
            HIDWORD(v19[6].Next) ^= ((unsigned __int16)HIDWORD(v19[6].Next) ^ (unsigned __int16)(HIDWORD(v19[6].Next) | (1 << *(_DWORD *)v49))) & 0x3FF;
            v35 = (char *)v19 + 40 * v30;
            *((_QWORD *)v35 + 14) = *((_QWORD *)v49 + 1);
            *((_WORD *)v35 + 60) = *((_WORD *)v49 + 10);
            v50 = *((_DWORD *)v35 + 36);
            *((_WORD *)v35 + 62) = *((_WORD *)v49 + 12);
            *((_WORD *)v35 + 61) = *((_WORD *)v49 + 14);
            *((_WORD *)v35 + 63) = *((_WORD *)v49 + 16);
            *((_WORD *)v35 + 64) = *((_WORD *)v49 + 18);
            *((_WORD *)v35 + 66) = *((_WORD *)v49 + 20);
            *((_WORD *)v35 + 65) = *((_WORD *)v49 + 22);
            *((_WORD *)v35 + 67) = *((_WORD *)v49 + 24);
            *((_WORD *)v35 + 68) = *((_WORD *)v49 + 26);
            *((_WORD *)v35 + 70) = *((_WORD *)v49 + 28);
            *((_WORD *)v35 + 69) = *((_WORD *)v49 + 30);
            *((_WORD *)v35 + 71) = *((_WORD *)v49 + 32);
            *((_DWORD *)v35 + 36) ^= (*((_DWORD *)v49 + 4) ^ v50) & 1;
            v51 = *((_DWORD *)v35 + 36) ^ (*((_DWORD *)v49 + 4) ^ *((_DWORD *)v35 + 36)) & 2;
            *((_DWORD *)v35 + 36) = v51;
            v52 = v51 & 0xFFFFFFE7;
            v53 = *((_DWORD *)v49 + 17);
            if ( v53 > 1 )
              v52 |= 8 * (((_BYTE)v53 - 1) & 3);
            *((_DWORD *)v35 + 36) = v52;
            v54 = v52 ^ ((unsigned __int8)v52 ^ (unsigned __int8)(4 * *((_DWORD *)v49 + 18))) & 4;
            *((_DWORD *)v35 + 36) = v54;
            v55 = v54 ^ ((unsigned __int8)v54 ^ (unsigned __int8)(32 * *((_DWORD *)v49 + 22))) & 0x60;
            *((_DWORD *)v35 + 36) = v55;
            v56 = v55 ^ ((unsigned __int8)v55 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v49 + 23) << 7)) & 0x80;
            *((_DWORD *)v35 + 36) = v56;
            v57 = v56 ^ ((unsigned __int16)v56 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v49 + 23) << 7)) & 0x100;
            *((_DWORD *)v35 + 36) = v57;
            v58 = v57 ^ ((unsigned __int16)v57 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v49 + 23) << 7)) & 0x200;
            *((_DWORD *)v35 + 36) = v58;
            v59 = v58 ^ ((unsigned __int16)v58 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v49 + 24) << 10)) & 0x1C00;
            *((_DWORD *)v35 + 36) = v59;
            v60 = v59 ^ ((unsigned __int16)v59 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v49 + 25) << 13)) & 0x2000;
            *((_DWORD *)v35 + 36) = v60;
            v47 = v60 ^ ((unsigned __int16)v60 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v49 + 26) << 14)) & 0x4000;
            *((_DWORD *)v35 + 36) = v47;
            StereoFlipMode = *((_DWORD *)v49 + 27);
            goto LABEL_55;
          }
        }
        else
        {
          v61 = &pMultiPlaneOverlayVsyncInfo[v9];
          if ( v61->Enabled )
          {
            HIDWORD(v19[6].Next) ^= ((unsigned __int16)HIDWORD(v19[6].Next) ^ (unsigned __int16)(HIDWORD(v19[6].Next) | (1 << v61->LayerIndex))) & 0x3FF;
            v35 = (char *)v19 + 40 * v30;
            *((_QWORD *)v35 + 14) = v61->PhysicalAddress.QuadPart;
            *((_WORD *)v35 + 60) = v61->PlaneAttributes.SrcRect.left;
            v62 = *((_DWORD *)v35 + 36);
            *((_WORD *)v35 + 62) = v61->PlaneAttributes.SrcRect.top;
            *((_WORD *)v35 + 61) = v61->PlaneAttributes.SrcRect.right;
            *((_WORD *)v35 + 63) = v61->PlaneAttributes.SrcRect.bottom;
            *((_WORD *)v35 + 64) = v61->PlaneAttributes.DstRect.left;
            *((_WORD *)v35 + 66) = v61->PlaneAttributes.DstRect.top;
            *((_WORD *)v35 + 65) = v61->PlaneAttributes.DstRect.right;
            *((_WORD *)v35 + 67) = v61->PlaneAttributes.DstRect.bottom;
            *((_WORD *)v35 + 68) = v61->PlaneAttributes.ClipRect.left;
            *((_WORD *)v35 + 70) = v61->PlaneAttributes.ClipRect.top;
            *((_WORD *)v35 + 69) = v61->PlaneAttributes.ClipRect.right;
            *((_WORD *)v35 + 71) = v61->PlaneAttributes.ClipRect.bottom;
            *((_DWORD *)v35 + 36) ^= (v61->PlaneAttributes.Flags.Value ^ v62) & 1;
            v63 = *((_DWORD *)v35 + 36) ^ (v61->PlaneAttributes.Flags.Value ^ *((_DWORD *)v35 + 36)) & 2;
            *((_DWORD *)v35 + 36) = v63;
            v64 = v63 & 0xFFFFFFE7;
            Rotation = v61->PlaneAttributes.Rotation;
            if ( Rotation > 1 )
              v64 |= 8 * (((_BYTE)Rotation - 1) & 3);
            *((_DWORD *)v35 + 36) = v64;
            v66 = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)(4 * v61->PlaneAttributes.Blend.Value)) & 4;
            *((_DWORD *)v35 + 36) = v66;
            v67 = v66 ^ ((unsigned __int8)v66 ^ (unsigned __int8)(32 * v61->PlaneAttributes.VideoFrameFormat)) & 0x60;
            *((_DWORD *)v35 + 36) = v67;
            v68 = v67 ^ ((unsigned __int8)v67 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)&v61->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x80;
            *((_DWORD *)v35 + 36) = v68;
            v69 = v68 ^ ((unsigned __int16)v68 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v61->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x100;
            *((_DWORD *)v35 + 36) = v69;
            v70 = v69 ^ ((unsigned __int16)v69 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v61->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x200;
            *((_DWORD *)v35 + 36) = v70;
            v71 = v70 ^ ((unsigned __int16)v70 ^ (unsigned __int16)((unsigned __int16)v61->PlaneAttributes.StereoFormat << 10)) & 0x1C00;
            *((_DWORD *)v35 + 36) = v71;
            v72 = v71 ^ ((unsigned __int16)v71 ^ (v61->PlaneAttributes.StereoLeftViewFrame0 << 13)) & 0x2000;
            *((_DWORD *)v35 + 36) = v72;
            v47 = v72 ^ ((unsigned __int16)v72 ^ (v61->PlaneAttributes.StereoBaseViewFrame0 << 14)) & 0x4000;
            *((_DWORD *)v35 + 36) = v47;
            StereoFlipMode = v61->PlaneAttributes.StereoFlipMode;
            goto LABEL_55;
          }
        }
        if ( ++v9 >= a2->DmaCompleted.EngineOrdinal )
          goto LABEL_17;
      }
    }
  }
  else
  {
LABEL_33:
    v10 = -1;
  }
LABEL_21:
  if ( bTracingEnabled )
  {
    if ( v4 )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0pqx(
          v77.LowPart,
          (unsigned int)&EventHSyncInterrupt,
          a3,
          a1[1].Alignment,
          SubmissionFenceId,
          v77.QuadPart);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      McTemplateK0pqx(v11, (unsigned int)&EventVSyncInterrupt, a3, a1[1].Alignment, SubmissionFenceId, v77.QuadPart);
    }
  }
  return v10;
}
