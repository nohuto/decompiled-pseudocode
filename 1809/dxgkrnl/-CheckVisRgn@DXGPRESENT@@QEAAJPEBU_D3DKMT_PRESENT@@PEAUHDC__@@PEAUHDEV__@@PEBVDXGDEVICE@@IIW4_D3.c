/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C013CF90
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0107E40 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C00106CC (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C0010884 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C001112C (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C00132A8 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001B8C8 (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0022E60 (_guard_dispatch_icall_nop.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C00CE3BC (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C01233FC (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C013C990 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C01C3844 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C02233A8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C022472C (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
 */

__int64 __fastcall DXGPRESENT::CheckVisRgn(
        DXGPRESENT *this,
        const struct _D3DKMT_PRESENT *a2,
        HDC a3,
        HDEV a4,
        const struct DXGDEVICE *a5,
        unsigned int a6,
        unsigned int a7,
        enum _D3DDDIFORMAT a8,
        int a9)
{
  unsigned int v13; // esi
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  int v25; // eax
  __int64 v26; // rdx
  _DWORD *v27; // rcx
  __int64 v28; // rsi
  char v29; // r15
  unsigned int v30; // ebx
  __int64 v31; // rcx
  unsigned int v32; // edx
  __int64 v33; // rcx
  unsigned int v34; // r9d
  unsigned int v35; // r8d
  __int64 v36; // rdx
  __int64 v37; // rcx
  int v38; // ecx
  int v39; // esi
  __int64 v40; // r13
  signed int v41; // ebx
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // r8d
  __int64 v45; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v48; // rbx
  unsigned int v49; // esi
  __int64 v50; // rbx
  __int64 v51; // rax
  HDC v52; // r15
  __int64 v53; // rcx
  __int64 v54; // rbx
  __int64 v55; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  int v57; // edx
  int v58; // edx
  unsigned int v59; // eax
  __int64 v60; // rcx
  __int64 v61; // rsi
  PVOID v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rcx
  unsigned int v65; // r15d
  __int16 v66; // ax
  __int64 v68; // rax
  __int64 v69; // rax
  __int64 v70; // rax
  const struct tagRECT *v71; // rax
  __int64 v72; // rax
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v77; // rsi
  __int64 v78; // rax
  unsigned int v79; // ebx
  signed int v80; // r11d
  __int64 v81; // rsi
  unsigned int *v82; // r8
  unsigned int v83; // eax
  int v84; // eax
  unsigned int v85; // eax
  signed int v86; // r9d
  int v87; // r10d
  int v88; // eax
  __int64 v89; // rax
  _QWORD *v90; // rax
  _QWORD *v91; // rax
  _QWORD *v92; // rax
  const struct tagRECT *ContentRect; // rax
  _QWORD *v94; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v95; // ecx
  __int64 v96; // rax
  __int64 v97; // rax
  __int64 v98; // rax
  _QWORD *v99; // rax
  int v100; // [rsp+30h] [rbp-58h]
  int v101; // [rsp+34h] [rbp-54h]
  signed int v102; // [rsp+38h] [rbp-50h]
  int v103; // [rsp+3Ch] [rbp-4Ch]
  int v104; // [rsp+40h] [rbp-48h] BYREF
  int v105; // [rsp+44h] [rbp-44h] BYREF
  __int64 v106; // [rsp+48h] [rbp-40h]
  unsigned int v109; // [rsp+B0h] [rbp+28h]

  v13 = 0;
  v14 = *((_QWORD *)a5 + 5);
  v15 = *((_QWORD *)a5 + 216);
  v106 = v15;
  v16 = *(_QWORD *)(v14 + 104);
  if ( !(*(unsigned int (**)(void))(v16 + 208))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v68 = WdLogNewEntry5_WdEvent(v18, v17);
    *(_QWORD *)(v68 + 24) = -1071775737LL;
    WdLogEvent5_WdEvent(v68);
    return 3223191559LL;
  }
  v101 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v16 + 224))(&v104, 0LL, 0LL);
  v21 = (*(__int64 (__fastcall **)(int *))(v16 + 312))(&v105);
  if ( !v101 || (v15 = 0LL, v106 = 0LL, v104) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v15 )
    {
      *((_DWORD *)this + 1) |= 3u;
      *((_QWORD *)this + 6) = a2->hWindow;
      v69 = WdLogNewEntry5_WdEvent(v20, v19);
      *(_QWORD *)(v69 + 24) = -1071775737LL;
      WdLogEvent5_WdEvent(v69);
      return 3223191559LL;
    }
    *((_DWORD *)this + 1) &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v16 + 72))(a3, (char *)this + 24) )
      {
        v72 = WdLogNewEntry5_WdWarning(v23, v22, v24);
        *(_QWORD *)(v72 + 24) = this;
        *(_QWORD *)(v72 + 32) = a2->hWindow;
        WdLogEvent5_WdWarning(v72);
        return 3221225485LL;
      }
      v25 = (*(__int64 (__fastcall **)(HDC, char *))(v16 + 320))(a3, (char *)this + 40);
      v27 = (_DWORD *)((char *)this + 24);
      if ( v25 )
      {
LABEL_8:
        if ( *v27 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
        {
          *((_DWORD *)this + 1) |= 3u;
          v99 = (_QWORD *)WdLogNewEntry5_WdEvent(v27, v26);
          v99[3] = -1071775738LL;
          v99[4] = this;
          v99[5] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v99);
          return 3223191558LL;
        }
        if ( (*((_BYTE *)a5 + 1749) & 1) == 0 )
          *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2)
                                                                                             + 520LL)
                                                                                 + 8LL)
                                                                     + 528LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 528LL));
        if ( (!v15 || !v21 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v15 + 2520), a2->VidPnSourceId))
          && (a2->Flags.Value & 0x10000) == 0 )
        {
          if ( !v101 || !v21 || v105 )
          {
            *((_DWORD *)this + 1) |= 0x10u;
            *((_QWORD *)this + 6) = a2->hWindow;
            v73 = WdLogNewEntry5_WdEvent(v27, v26);
            *(_QWORD *)(v73 + 24) = a5;
            WdLogEvent5_WdEvent(v73);
            return 0LL;
          }
          return 3223192386LL;
        }
        if ( !v15 )
          goto LABEL_127;
        v28 = *(_QWORD *)(v15 + 2520);
        v29 = 0;
        v30 = 0;
        if ( *(_DWORD *)(v28 + 80) )
        {
          while ( 1 )
          {
            v31 = *(_QWORD *)(v28 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v31 + 160)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v31 + 144)) )
            {
              v74 = WdLogNewEntry5_WdAssertion(v31);
              *(_QWORD *)(v74 + 24) = 5549LL;
              WdLogEvent5_WdAssertion(v74);
            }
            v32 = *(_DWORD *)(v28 + 80);
            if ( v30 < v32
              || (v75 = WdLogNewEntry5_WdAssertion(v31),
                  *(_QWORD *)(v75 + 24) = 5550LL,
                  WdLogEvent5_WdAssertion(v75),
                  v32 = *(_DWORD *)(v28 + 80),
                  v30 < v32) )
            {
              if ( a5 == *(const struct DXGDEVICE **)(3760LL * v30 + *(_QWORD *)(v28 + 112) + 688) )
                break;
            }
            if ( ++v30 >= v32 )
            {
              v28 = *(_QWORD *)(v15 + 2520);
              goto LABEL_23;
            }
          }
          v13 = 0;
          goto LABEL_127;
        }
LABEL_23:
        v33 = *(_QWORD *)(v28 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v33 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v33 + 144));
        v34 = *(_DWORD *)(v28 + 80);
        v35 = 0;
        if ( v34 )
        {
          v36 = *(_QWORD *)(v28 + 112);
          while ( 1 )
          {
            v37 = 3760LL * v35;
            if ( *(_QWORD *)(v37 + v36 + 688) )
            {
              if ( *(_DWORD *)(v37 + v36 + 696) == 1 )
                break;
            }
            if ( ++v35 >= v34 )
              goto LABEL_30;
          }
          v29 = 1;
        }
LABEL_30:
        v38 = *((_DWORD *)this + 10);
        v39 = v38 + *((_DWORD *)this + 6);
        v40 = *(_QWORD *)(v15 + 2520);
        v41 = v38 + *((_DWORD *)this + 8);
        v42 = *((_DWORD *)this + 11);
        v43 = (unsigned int)(v42 + *((_DWORD *)this + 7));
        v44 = v42 + *((_DWORD *)this + 9);
        v45 = *(_QWORD *)(v40 + 16);
        v103 = v39;
        v102 = v41;
        v109 = v43;
        v100 = v44;
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v45 + 160) )
        {
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v45 + 144));
          v43 = v109;
          v44 = v100;
        }
        if ( v39 != v41 && (_DWORD)v43 != v44 )
        {
          CurrentProcess = PsGetCurrentProcess(v45, v43);
          ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
          v48 = ProcessDxgProcess;
          if ( ProcessDxgProcess )
          {
            if ( (*(_BYTE *)(ProcessDxgProcess + 323) & 4) != 0 )
            {
              ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
              v77 = ThreadProperty;
              if ( ThreadProperty )
              {
                ObfDereferenceObject(ThreadProperty);
                v48 = *v77;
              }
            }
          }
          if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v48 + 104) + 224LL))(0LL, 0LL, 0LL) )
          {
            v45 = *(unsigned int *)(v40 + 80);
            v49 = 0;
            if ( !(_DWORD)v45 )
            {
LABEL_91:
              v13 = 0;
              v79 = 0;
              if ( !(_DWORD)v45 )
              {
LABEL_119:
                if ( (a2->Flags.Value & 0x100) == 0 && a9 )
                {
                  v91 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v43);
                  v91[3] = 261LL;
                  v91[4] = this;
                  v91[5] = a2->hSource;
                  v91[6] = a2->Flags.Value;
                  v91[7] = a2->VidPnSourceId;
                  WdLogEvent5_WdEvent(v91);
                  return 261LL;
                }
                v15 = v106;
LABEL_44:
                if ( v29 )
                {
                  if ( (a2->Flags.Value & 0x10000) != 0 )
                    goto LABEL_46;
                  if ( !v101 )
                  {
                    v92 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v43);
                    v92[3] = -1071774910LL;
                    v92[4] = this;
                    v92[5] = a2->hSource;
                    v92[6] = a2->Flags.Value;
                    v92[7] = a2->VidPnSourceId;
                    WdLogEvent5_WdEvent(v92);
                    return 3223192386LL;
                  }
                }
LABEL_127:
                if ( (a2->Flags.Value & 0x10000) == 0 )
                {
                  v52 = a3;
                  if ( !a2->hWindow )
                  {
LABEL_133:
                    if ( (a2->Flags.Value & 0x100) != 0 )
                    {
                      ContentRect = ADAPTER_DISPLAY::GetContentRect(*(DXGADAPTER ***)(v15 + 2520), a2->VidPnSourceId);
                      v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v16 + 80))(
                              (unsigned int)ContentRect->left,
                              (unsigned int)ContentRect->top,
                              (unsigned int)ContentRect->right,
                              (unsigned int)ContentRect->bottom);
                      goto LABEL_52;
                    }
LABEL_48:
                    v54 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v16 + 80))(0LL, 0LL, 0LL, 0LL);
                    if ( v54 )
                    {
                      v55 = (a2->Flags.Value & 0x10000) != 0 ? 5LL : 4LL;
                      if ( (*(unsigned int (__fastcall **)(HDC, __int64, __int64))(v16 + 88))(v52, v54, v55) == -1 )
                      {
                        (*(void (__fastcall **)(__int64))(v16 + 128))(v54);
                        goto LABEL_137;
                      }
                    }
LABEL_52:
                    if ( v54 )
                    {
                      Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                      v57 = *((_DWORD *)this + 1);
                      if ( (*(_DWORD *)&Value & 0x10000) != 0 )
                      {
                        if ( a2->hDestination )
                          v58 = v57 & 0xFFFFFFEF;
                        else
                          v58 = v57 | 0x10;
                      }
                      else if ( (v57 & 0x20) != 0 )
                      {
                        v58 = v57 | 0x10;
                      }
                      else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 308LL) & 0x10) != 0
                             && (*(_BYTE *)&Value & 3) != 0 )
                      {
                        v58 = v57 | 0x10;
                      }
                      else
                      {
                        v58 = *((_DWORD *)this + 1) ^ (*((_DWORD *)this + 1) ^ (16
                                                                              * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v16 + 136))(
                                                                                  v15,
                                                                                  a4,
                                                                                  a2->hWindow,
                                                                                  v54))) & 0x10;
                      }
                      *((_DWORD *)this + 1) = v58;
                      if ( (v58 & 0x10) != 0
                        && (a2->Flags.Value & 0x100) != 0
                        && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v15 + 2520), a5, a2->VidPnSourceId)
                        && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(
                                         *(DXGADAPTER ***)(v15 + 2520),
                                         a2->VidPnSourceId)
                           + 2) == 41 )
                      {
                        if ( (v95 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                              (*(_BYTE *)&v95 & 1) != 0)
                          && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                          || (*(_BYTE *)&v95 & 2) != 0 && !a2->hWindow )
                        {
                          *((_DWORD *)this + 1) &= ~0x10u;
                        }
                      }
                      if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
                        goto LABEL_66;
                      v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v16 + 112))(v54, 0LL, 0LL);
                      v61 = v59;
                      if ( v59 )
                      {
                        operator delete[](*((void **)this + 2));
                        v62 = operator new((unsigned int)v61, 0x4B677844u, PagedPool);
                        *((_QWORD *)this + 2) = v62;
                        if ( v62 )
                        {
                          v65 = (*(__int64 (__fastcall **)(__int64, _QWORD, PVOID))(v16 + 112))(
                                  v54,
                                  (unsigned int)v61,
                                  v62);
                          if ( v65 > (unsigned int)v61 )
                          {
                            v98 = WdLogNewEntry5_WdAssertion(v64);
                            *(_QWORD *)(v98 + 24) = 10267LL;
                            WdLogEvent5_WdAssertion(v98);
                          }
                          *((_DWORD *)this + 1) |= 2u;
                          if ( (a2->Flags.Value & 0x10000) != 0 )
                          {
                            v66 = (*(__int64 (__fastcall **)(HWND))(v16 + 384))(a2->hWindow);
                            v13 = 0;
                          }
                          else
                          {
                            v13 = 0;
                            v66 = 0;
                          }
                          *((_WORD *)this + 214) = v66;
                          if ( v65 <= 0x20 )
                          {
                            if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                              (*(void (__fastcall **)(HDC, char *))(v16 + 248))(a3, (char *)this + 128);
                          }
                          else
                          {
                            v13 = DXGPRESENT::CombineRectList((const struct tagRECT *)this, a2, a3, a5, a6, a7);
                          }
LABEL_66:
                          (*(void (__fastcall **)(__int64))(v16 + 128))(v54);
                          *((_QWORD *)this + 6) = a2->hWindow;
                          return v13;
                        }
                        v97 = WdLogNewEntry5_WdLowResource(v63);
                        *(_QWORD *)(v97 + 24) = this;
                        *(_QWORD *)(v97 + 32) = v61;
                        WdLogEvent5_WdLowResource(v97);
                      }
                      else
                      {
                        v96 = WdLogNewEntry5_WdError(v60);
                        *(_QWORD *)(v96 + 24) = this;
                        *(_QWORD *)(v96 + 32) = v54;
                        WdLogEvent5_WdError(v96);
                      }
                      (*(void (__fastcall **)(__int64))(v16 + 128))(v54);
                      return 3221225495LL;
                    }
LABEL_137:
                    v94 = (_QWORD *)WdLogNewEntry5_WdLowResource(v53);
                    v94[3] = this;
                    v94[4] = a2->hWindow;
                    v94[5] = v52;
                    v94[6] = a4;
                    v94[7] = a2->Flags.Value;
                    WdLogEvent5_WdLowResource(v94);
                    return 3221225495LL;
                  }
                  if ( (*(unsigned int (__fastcall **)(HDC))(v16 + 56))(a3)
                    && (!v15 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v15 + 2520), a5)) )
                  {
                    *((_DWORD *)this + 1) |= 0x10u;
                    *((_QWORD *)this + 6) = a2->hWindow;
                    return 0LL;
                  }
LABEL_47:
                  if ( a2->hWindow )
                    goto LABEL_48;
                  goto LABEL_133;
                }
LABEL_46:
                v52 = a3;
                goto LABEL_47;
              }
              while ( 1 )
              {
                if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v40, v79)
                  || !DmmIsTargetNonStandard(
                        *(struct DXGADAPTER **)(v40 + 16),
                        *(unsigned int *)(3760LL * v79 + *(_QWORD *)(v40 + 112) + 1068)) )
                {
                  v80 = v102;
                  v45 = (unsigned int)v102;
                  v81 = 3760LL * v79;
                  v82 = (unsigned int *)(v81 + *(_QWORD *)(v40 + 112));
                  v83 = v82[159];
                  v43 = v82[157];
                  if ( v102 >= (int)v83 )
                    v45 = v83;
                  v84 = v103;
                  if ( v103 <= (int)v43 )
                    v84 = v82[157];
                  if ( v84 < (int)v45 )
                  {
                    v85 = v82[158];
                    v86 = v109;
                    v45 = v109;
                    v43 = v82[160];
                    v87 = v100;
                    if ( (int)v109 <= (int)v85 )
                      v45 = v85;
                    v88 = v100;
                    if ( v100 >= (int)v43 )
                      v88 = v82[160];
                    if ( (int)v45 < v88 )
                    {
                      if ( !v82[174] )
                      {
                        if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v40, v79) )
                          goto LABEL_42;
                        v86 = v109;
                        v87 = v100;
                        v80 = v102;
                      }
                      v89 = *(_QWORD *)(v40 + 112);
                      v45 = (unsigned int)v103;
                      if ( v103 >= *(_DWORD *)(v81 + v89 + 628)
                        && v80 <= *(_DWORD *)(v81 + v89 + 636)
                        && v86 >= *(_DWORD *)(v81 + v89 + 632)
                        && v87 <= *(_DWORD *)(v81 + v89 + 640) )
                      {
                        break;
                      }
                    }
                  }
                }
                if ( ++v79 >= *(_DWORD *)(v40 + 80) )
                {
                  v13 = 0;
                  goto LABEL_119;
                }
              }
              v15 = v106;
              if ( (*((_DWORD *)a5 + 82) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v106 + 2520)))
                && !DXGDEVICE::AllowLegacyPresent(a5, v43) )
              {
                *((_DWORD *)this + 1) |= 3u;
                *((_QWORD *)this + 6) = a2->hWindow;
                v90 = (_QWORD *)WdLogNewEntry5_WdEvent(v45, v43);
                v90[3] = -1071775738LL;
                v90[4] = this;
                v90[5] = a2->hSource;
                v90[6] = a2->Flags.Value;
                v90[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v90);
                if ( !*((_DWORD *)a5 + 82) && v29 )
                  *((_DWORD *)this + 1) |= 0x80u;
                return 3223191558LL;
              }
LABEL_43:
              v13 = 0;
              goto LABEL_44;
            }
            while ( 1 )
            {
              v50 = 3760LL * v49;
              v51 = *(_QWORD *)(v40 + 112);
              if ( *(_DWORD *)(v51 + v50 + 696) == 1 )
              {
                if ( v49 >= (unsigned int)v45 )
                {
                  v78 = WdLogNewEntry5_WdAssertion(v45);
                  *(_QWORD *)(v78 + 24) = 5587LL;
                  WdLogEvent5_WdAssertion(v78);
                  v51 = *(_QWORD *)(v40 + 112);
                }
                if ( *(_BYTE *)(v51 + v50 + 720) )
                  break;
              }
              v45 = *(unsigned int *)(v40 + 80);
              if ( ++v49 >= (unsigned int)v45 )
                goto LABEL_91;
            }
          }
        }
LABEL_42:
        v15 = v106;
        goto LABEL_43;
      }
    }
    else
    {
      if ( !v15 || v15 != *((_QWORD *)a5 + 216) )
      {
        v70 = WdLogNewEntry5_WdAssertion(v20);
        *(_QWORD *)(v70 + 24) = 9939LL;
        WdLogEvent5_WdAssertion(v70);
      }
      v71 = ADAPTER_DISPLAY::GetContentRect(*(DXGADAPTER ***)(v15 + 2520), a2->VidPnSourceId);
      v27 = (_DWORD *)((char *)this + 24);
      *(struct tagRECT *)((char *)this + 24) = *v71;
    }
    *((_QWORD *)this + 5) = 0LL;
    goto LABEL_8;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  return 3223191558LL;
}
