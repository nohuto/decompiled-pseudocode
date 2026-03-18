/*
 * XREFs of ?CheckVisRgn@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAUHDC__@@PEAUHDEV__@@PEBVDXGDEVICE@@IIW4_D3DDDIFORMAT@@H@Z @ 0x1C014CA80
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C0105590 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1C0001908 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z @ 0x1C0003B14 (-IsVidPnSourceActive@ADAPTER_DISPLAY@@QEBAEI@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000C340 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z @ 0x1C000CC14 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@@Z.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x1C000CC68 (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     ?GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z @ 0x1C001C33C (-GetContentRect@ADAPTER_DISPLAY@@QEBAQEBUtagRECT@@I@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0024FA0 (_guard_dispatch_icall_nop.c)
 *     ?HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ @ 0x1C00C68C0 (-HasAnyVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEXZ.c)
 *     ?DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z @ 0x1C00D00E4 (-DmmIsTargetNonStandard@@YA_NPEAVDXGADAPTER@@I@Z.c)
 *     ?CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z @ 0x1C014CF90 (-CombineRectList@DXGPRESENT@@QEAAJPEBU_D3DKMT_PRESENT@@QEAUHDC__@@PEBVDXGDEVICE@@II@Z.c)
 *     ?IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z @ 0x1C01F2AB8 (-IsInVirtualMode@ADAPTER_DISPLAY@@QEAAEI@Z.c)
 *     ?AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z @ 0x1C0257AC8 (-AllowLegacyPresent@DXGDEVICE@@QEBAEI@Z.c)
 *     ?ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C0258F94 (-ComputeSrcDstRects@DXGPRESENT@@QEAAHPEBU_D3DKMT_PRESENT@@II@Z.c)
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
  __int64 v15; // r12
  __int64 v16; // r14
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  _DWORD *v25; // rcx
  __int64 v26; // rsi
  char v27; // r15
  unsigned int v28; // ebx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned int v33; // r9d
  unsigned int v34; // r8d
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // ecx
  unsigned int v38; // esi
  __int64 v39; // r12
  int v40; // ebx
  int v41; // ecx
  __int64 v42; // rdx
  unsigned int v43; // r8d
  __int64 v44; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessDxgProcess; // rax
  __int64 v47; // rdx
  __int64 v48; // rbx
  __int64 v49; // rax
  char v50; // al
  __int64 v51; // rbx
  __int64 v52; // rax
  HDC v53; // r15
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rbx
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // r8
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 Value; // r8d
  int v61; // edx
  int v62; // edx
  unsigned int v63; // eax
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // r8
  __int64 v67; // rsi
  PVOID v68; // rax
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  unsigned int v74; // r15d
  __int16 v75; // ax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  const struct tagRECT *v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rax
  __int64 *ThreadProperty; // rax
  __int64 *v86; // rsi
  __int64 v87; // rax
  unsigned int v88; // ebx
  int v89; // r11d
  __int64 v90; // rsi
  _DWORD *v91; // r8
  unsigned int v92; // eax
  int v93; // eax
  unsigned int v94; // eax
  int v95; // r10d
  signed int v96; // edx
  signed int v97; // r9d
  int v98; // eax
  __int64 v99; // rax
  _QWORD *v100; // rax
  _QWORD *v101; // rax
  _QWORD *v102; // rax
  const struct tagRECT *ContentRect; // rax
  _QWORD *v104; // rax
  struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0 v105; // ecx
  __int64 v106; // rax
  __int64 v107; // rax
  __int64 v108; // rax
  _QWORD *v109; // rax
  unsigned int v110; // [rsp+30h] [rbp-58h]
  int v111; // [rsp+34h] [rbp-54h]
  int v112; // [rsp+38h] [rbp-50h]
  unsigned int v113; // [rsp+3Ch] [rbp-4Ch]
  int v114; // [rsp+40h] [rbp-48h] BYREF
  int v115; // [rsp+44h] [rbp-44h] BYREF
  __int64 v116; // [rsp+48h] [rbp-40h]
  signed int v119; // [rsp+B0h] [rbp+28h]

  v13 = 0;
  v14 = *((_QWORD *)a5 + 5);
  v15 = *((_QWORD *)a5 + 216);
  v116 = v15;
  v16 = *(_QWORD *)(v14 + 96);
  if ( !(*(unsigned int (**)(void))(v16 + 208))() )
  {
    *((_DWORD *)this + 1) |= 3u;
    *((_QWORD *)this + 6) = a2->hWindow;
    v77 = WdLogNewEntry5_WdEvent(v17);
    *(_QWORD *)(v77 + 24) = -1071775737LL;
    WdLogEvent5_WdEvent(v77);
    return 3223191559LL;
  }
  v111 = (*(__int64 (__fastcall **)(int *, _QWORD, _QWORD))(v16 + 224))(&v114, 0LL, 0LL);
  v20 = (*(__int64 (__fastcall **)(int *))(v16 + 304))(&v115);
  if ( !v111 || (v15 = 0LL, v116 = 0LL, v114) )
  {
    if ( (a2->Flags.Value & 0x100) != 0 && !v15 )
    {
      *((_DWORD *)this + 1) |= 3u;
      *((_QWORD *)this + 6) = a2->hWindow;
      v78 = WdLogNewEntry5_WdEvent(v19);
      *(_QWORD *)(v78 + 24) = -1071775737LL;
      WdLogEvent5_WdEvent(v78);
      return 3223191559LL;
    }
    *((_DWORD *)this + 1) &= 0xFFFFFF7C;
    if ( a2->hWindow || (a2->Flags.Value & 0x100) == 0 )
    {
      if ( !(*(unsigned int (__fastcall **)(HDC, char *))(v16 + 72))(a3, (char *)this + 24) )
      {
        v81 = WdLogNewEntry5_WdWarning(v22, v21, v23);
        *(_QWORD *)(v81 + 24) = this;
        *(_QWORD *)(v81 + 32) = a2->hWindow;
        WdLogEvent5_WdWarning(v81);
        return 3221225485LL;
      }
      v24 = (*(__int64 (__fastcall **)(HDC, char *))(v16 + 312))(a3, (char *)this + 40);
      v25 = (_DWORD *)((char *)this + 24);
      if ( v24 )
      {
LABEL_8:
        if ( *v25 >= *((_DWORD *)this + 8) || *((_DWORD *)this + 7) >= *((_DWORD *)this + 9) )
        {
          *((_DWORD *)this + 1) |= 3u;
          v109 = (_QWORD *)WdLogNewEntry5_WdEvent(v25);
          v109[3] = -1071775738LL;
          v109[4] = this;
          v109[5] = a2->VidPnSourceId;
          WdLogEvent5_WdEvent(v109);
          return 3223191558LL;
        }
        if ( (*((_BYTE *)a5 + 1749) & 1) == 0 )
          *((_DWORD *)this + 16) = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2)
                                                                                             + 520LL)
                                                                                 + 8LL)
                                                                     + 528LL))(*(_QWORD *)(*((_QWORD *)a5 + 2) + 528LL));
        if ( (!v15 || !v20 && ADAPTER_DISPLAY::IsInVirtualMode(*(ADAPTER_DISPLAY **)(v15 + 2552), a2->VidPnSourceId))
          && (a2->Flags.Value & 0x10000) == 0 )
        {
          if ( !v111 || !v20 || v115 )
          {
            *((_DWORD *)this + 1) |= 0x10u;
            *((_QWORD *)this + 6) = a2->hWindow;
            v82 = WdLogNewEntry5_WdEvent(v25);
            *(_QWORD *)(v82 + 24) = a5;
            WdLogEvent5_WdEvent(v82);
            return 0LL;
          }
          return 3223192386LL;
        }
        if ( !v15 )
          goto LABEL_132;
        v26 = *(_QWORD *)(v15 + 2552);
        v27 = 0;
        v28 = 0;
        if ( *(_DWORD *)(v26 + 80) )
        {
          while ( 1 )
          {
            v29 = *(_QWORD *)(v26 + 16);
            if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v29 + 160)
              && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v29 + 144)) )
            {
              v83 = WdLogNewEntry5_WdAssertion(v29, v30);
              *(_QWORD *)(v83 + 24) = 5785LL;
              WdLogEvent5_WdAssertion(v83);
            }
            v31 = *(unsigned int *)(v26 + 80);
            if ( v28 < (unsigned int)v31
              || (v84 = WdLogNewEntry5_WdAssertion(v29, v31),
                  *(_QWORD *)(v84 + 24) = 5786LL,
                  WdLogEvent5_WdAssertion(v84),
                  LODWORD(v31) = *(_DWORD *)(v26 + 80),
                  v28 < (unsigned int)v31) )
            {
              if ( a5 == *(const struct DXGDEVICE **)(3968LL * v28 + *(_QWORD *)(v26 + 112) + 688) )
                break;
            }
            if ( ++v28 >= (unsigned int)v31 )
            {
              v26 = *(_QWORD *)(v15 + 2552);
              goto LABEL_23;
            }
          }
          v13 = 0;
          goto LABEL_132;
        }
LABEL_23:
        v32 = *(_QWORD *)(v26 + 16);
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v32 + 160) )
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v32 + 144));
        v33 = *(_DWORD *)(v26 + 80);
        v34 = 0;
        if ( v33 )
        {
          v35 = *(_QWORD *)(v26 + 112);
          while ( 1 )
          {
            v36 = 3968LL * v34;
            if ( *(_QWORD *)(v36 + v35 + 688) )
            {
              if ( *(_DWORD *)(v36 + v35 + 696) == 1 )
                break;
            }
            if ( ++v34 >= v33 )
              goto LABEL_30;
          }
          v27 = 1;
        }
LABEL_30:
        v37 = *((_DWORD *)this + 10);
        v38 = v37 + *((_DWORD *)this + 6);
        v39 = *(_QWORD *)(v15 + 2552);
        v40 = v37 + *((_DWORD *)this + 8);
        v41 = *((_DWORD *)this + 11);
        v42 = (unsigned int)(v41 + *((_DWORD *)this + 7));
        v43 = v41 + *((_DWORD *)this + 9);
        v44 = *(_QWORD *)(v39 + 16);
        v113 = v38;
        v112 = v40;
        v119 = v42;
        v110 = v43;
        if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v44 + 160) )
        {
          ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v44 + 144));
          v42 = (unsigned int)v119;
          v43 = v110;
        }
        if ( v38 == v40 || (_DWORD)v42 == v43 )
          goto LABEL_45;
        CurrentProcess = PsGetCurrentProcess(v44, v42);
        ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess);
        v48 = ProcessDxgProcess;
        if ( !ProcessDxgProcess || (*(_BYTE *)(ProcessDxgProcess + 299) & 4) != 0 )
        {
          ThreadProperty = (__int64 *)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
          v86 = ThreadProperty;
          if ( ThreadProperty )
          {
            ObfDereferenceObject(ThreadProperty);
            v48 = *v86;
          }
        }
        v49 = *(_QWORD *)(v48 + 96);
        if ( v49 )
        {
          v13 = 0;
          if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD))(v49 + 224))(0LL, 0LL, 0LL) )
          {
            v50 = 1;
LABEL_39:
            if ( !v50 )
            {
              v44 = *(unsigned int *)(v39 + 80);
              if ( (_DWORD)v44 )
              {
                while ( 1 )
                {
                  v51 = 3968LL * v13;
                  v52 = *(_QWORD *)(v39 + 112);
                  if ( *(_DWORD *)(v52 + v51 + 696) == 1 )
                  {
                    if ( v13 >= (unsigned int)v44 )
                    {
                      v87 = WdLogNewEntry5_WdAssertion(v44, v47);
                      *(_QWORD *)(v87 + 24) = 5823LL;
                      WdLogEvent5_WdAssertion(v87);
                      v52 = *(_QWORD *)(v39 + 112);
                    }
                    if ( *(_BYTE *)(v52 + v51 + 720) )
                      break;
                  }
                  v44 = *(unsigned int *)(v39 + 80);
                  if ( ++v13 >= (unsigned int)v44 )
                    goto LABEL_96;
                }
LABEL_45:
                v15 = v116;
LABEL_46:
                v13 = 0;
                goto LABEL_47;
              }
LABEL_96:
              v13 = 0;
              v88 = 0;
              if ( (_DWORD)v44 )
              {
                while ( 1 )
                {
                  if ( !ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v39, v88)
                    || !DmmIsTargetNonStandard(
                          *(struct DXGADAPTER **)(v39 + 16),
                          *(unsigned int *)(3968LL * v88 + *(_QWORD *)(v39 + 112) + 1068)) )
                  {
                    v44 = v113;
                    v89 = v112;
                    v90 = 3968LL * v88;
                    v91 = (_DWORD *)(v90 + *(_QWORD *)(v39 + 112));
                    v92 = v91[157];
                    if ( (int)v113 <= (int)v92 )
                      v44 = v92;
                    v93 = v112;
                    if ( v112 >= v91[159] )
                      v93 = v91[159];
                    if ( (int)v44 < v93 )
                    {
                      v94 = v91[160];
                      v95 = v110;
                      v44 = v110;
                      v96 = v91[158];
                      v97 = v119;
                      if ( (int)v110 >= (int)v94 )
                        v44 = v94;
                      v98 = v119;
                      if ( v119 <= v96 )
                        v98 = v91[158];
                      if ( v98 < (int)v44 )
                      {
                        if ( !v91[174] )
                        {
                          if ( ADAPTER_DISPLAY::IsVidPnSourceActive((ADAPTER_DISPLAY *)v39, v88) )
                            goto LABEL_45;
                          v97 = v119;
                          v95 = v110;
                          v89 = v112;
                        }
                        v99 = *(_QWORD *)(v39 + 112);
                        v44 = v113;
                        if ( (signed int)v113 >= *(_DWORD *)(v90 + v99 + 628)
                          && v89 <= *(_DWORD *)(v90 + v99 + 636)
                          && v97 >= *(_DWORD *)(v90 + v99 + 632)
                          && v95 <= *(_DWORD *)(v90 + v99 + 640) )
                        {
                          break;
                        }
                      }
                    }
                  }
                  if ( ++v88 >= *(_DWORD *)(v39 + 80) )
                  {
                    v13 = 0;
                    goto LABEL_124;
                  }
                }
                v15 = v116;
                if ( (*((_DWORD *)a5 + 82) || ADAPTER_DISPLAY::HasAnyVidPnSourceOwner(*(DXGADAPTER ***)(v116 + 2552)))
                  && !DXGDEVICE::AllowLegacyPresent(a5, v96) )
                {
                  *((_DWORD *)this + 1) |= 3u;
                  *((_QWORD *)this + 6) = a2->hWindow;
                  v100 = (_QWORD *)WdLogNewEntry5_WdEvent(v44);
                  v100[3] = -1071775738LL;
                  v100[4] = this;
                  v100[5] = a2->hSource;
                  v100[6] = a2->Flags.Value;
                  v100[7] = a2->VidPnSourceId;
                  WdLogEvent5_WdEvent(v100);
                  if ( !*((_DWORD *)a5 + 82) && v27 )
                    *((_DWORD *)this + 1) |= 0x80u;
                  return 3223191558LL;
                }
                goto LABEL_46;
              }
LABEL_124:
              if ( (a2->Flags.Value & 0x100) == 0 && a9 )
              {
                v101 = (_QWORD *)WdLogNewEntry5_WdEvent(v44);
                v101[3] = 261LL;
                v101[4] = this;
                v101[5] = a2->hSource;
                v101[6] = a2->Flags.Value;
                v101[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v101);
                return 261LL;
              }
            }
            v15 = v116;
LABEL_47:
            if ( v27 )
            {
              if ( (a2->Flags.Value & 0x10000) != 0 )
                goto LABEL_49;
              if ( !v111 )
              {
                v102 = (_QWORD *)WdLogNewEntry5_WdEvent(v44);
                v102[3] = -1071774910LL;
                v102[4] = this;
                v102[5] = a2->hSource;
                v102[6] = a2->Flags.Value;
                v102[7] = a2->VidPnSourceId;
                WdLogEvent5_WdEvent(v102);
                return 3223192386LL;
              }
            }
LABEL_132:
            if ( (a2->Flags.Value & 0x10000) == 0 )
            {
              v53 = a3;
              if ( !a2->hWindow )
              {
LABEL_138:
                if ( (a2->Flags.Value & 0x100) != 0 )
                {
                  ContentRect = ADAPTER_DISPLAY::GetContentRect(*(DXGADAPTER ***)(v15 + 2552), a2->VidPnSourceId);
                  v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v16 + 80))(
                          (unsigned int)ContentRect->left,
                          (unsigned int)ContentRect->top,
                          (unsigned int)ContentRect->right,
                          (unsigned int)ContentRect->bottom);
                  goto LABEL_55;
                }
LABEL_51:
                v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v16 + 80))(0LL, 0LL, 0LL, 0LL);
                if ( v56 )
                {
                  v59 = (a2->Flags.Value & 0x10000) != 0 ? 5LL : 4LL;
                  if ( (*(unsigned int (__fastcall **)(HDC, __int64, __int64))(v16 + 88))(v53, v56, v59) == -1 )
                  {
                    (*(void (__fastcall **)(__int64))(v16 + 128))(v56);
                    goto LABEL_142;
                  }
                }
LABEL_55:
                if ( v56 )
                {
                  Value = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value;
                  v61 = *((_DWORD *)this + 1);
                  if ( (*(_DWORD *)&Value & 0x10000) != 0 )
                  {
                    if ( a2->hDestination )
                      v62 = v61 & 0xFFFFFFEF;
                    else
                      v62 = v61 | 0x10;
                  }
                  else if ( (v61 & 0x20) != 0 )
                  {
                    v62 = v61 | 0x10;
                  }
                  else if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)a5 + 2) + 16LL) + 308LL) & 0x10) != 0
                         && (*(_BYTE *)&Value & 3) != 0 )
                  {
                    v62 = v61 | 0x10;
                  }
                  else
                  {
                    v62 = *((_DWORD *)this + 1) ^ (*((_DWORD *)this + 1) ^ (16
                                                                          * (*(__int64 (__fastcall **)(__int64, HDEV, HWND, __int64))(v16 + 136))(
                                                                              v15,
                                                                              a4,
                                                                              a2->hWindow,
                                                                              v56))) & 0x10;
                  }
                  *((_DWORD *)this + 1) = v62;
                  if ( (v62 & 0x10) != 0
                    && (a2->Flags.Value & 0x100) != 0
                    && ADAPTER_DISPLAY::IsVidPnSourceOwner(*(DXGADAPTER ***)(v15 + 2552), a5, a2->VidPnSourceId)
                    && *((_DWORD *)ADAPTER_DISPLAY::GetDisplayModeInfo(*(DXGADAPTER ***)(v15 + 2552), a2->VidPnSourceId)
                       + 2) == 41 )
                  {
                    if ( (v105 = (struct _D3DKMT_PRESENTFLAGS::$BA08BA2D655121A02C65791D10AFAA35::$9C41924AA1A34A6454565F13D6F625B0)a2->Flags.Value,
                          (*(_BYTE *)&v105 & 1) != 0)
                      && (a8 == D3DDDIFMT_P8 || a8 == D3DDDIFMT_A8)
                      || (*(_BYTE *)&v105 & 2) != 0 && !a2->hWindow )
                    {
                      *((_DWORD *)this + 1) &= ~0x10u;
                    }
                  }
                  if ( (*((_DWORD *)this + 1) & 0x10) != 0 )
                    goto LABEL_69;
                  v63 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v16 + 112))(v56, 0LL, 0LL);
                  v67 = v63;
                  if ( v63 )
                  {
                    operator delete[](*((void **)this + 2));
                    v68 = operator new[]((unsigned int)v67, 0x4B677844u, PagedPool);
                    *((_QWORD *)this + 2) = v68;
                    if ( v68 )
                    {
                      v74 = (*(__int64 (__fastcall **)(__int64, _QWORD, PVOID))(v16 + 112))(v56, (unsigned int)v67, v68);
                      if ( v74 > (unsigned int)v67 )
                      {
                        v108 = WdLogNewEntry5_WdAssertion(v73, v72);
                        *(_QWORD *)(v108 + 24) = 10427LL;
                        WdLogEvent5_WdAssertion(v108);
                      }
                      *((_DWORD *)this + 1) |= 2u;
                      if ( (a2->Flags.Value & 0x10000) != 0 )
                      {
                        v75 = (*(__int64 (__fastcall **)(HWND))(v16 + 376))(a2->hWindow);
                        v13 = 0;
                      }
                      else
                      {
                        v13 = 0;
                        v75 = 0;
                      }
                      *((_WORD *)this + 214) = v75;
                      if ( v74 <= 0x20 )
                      {
                        if ( (unsigned int)DXGPRESENT::ComputeSrcDstRects(this, a2, a6, a7) )
                          (*(void (__fastcall **)(HDC, char *))(v16 + 248))(a3, (char *)this + 128);
                      }
                      else
                      {
                        v13 = DXGPRESENT::CombineRectList(this, a2, a3, a5, a6, a7);
                      }
LABEL_69:
                      (*(void (__fastcall **)(__int64))(v16 + 128))(v56);
                      *((_QWORD *)this + 6) = a2->hWindow;
                      return v13;
                    }
                    v107 = WdLogNewEntry5_WdLowResource(v70, v69, 0LL, v71);
                    *(_QWORD *)(v107 + 24) = this;
                    *(_QWORD *)(v107 + 32) = v67;
                    WdLogEvent5_WdLowResource(v107);
                  }
                  else
                  {
                    v106 = WdLogNewEntry5_WdError(v65, v64, v66);
                    *(_QWORD *)(v106 + 24) = this;
                    *(_QWORD *)(v106 + 32) = v56;
                    WdLogEvent5_WdError(v106);
                  }
                  (*(void (__fastcall **)(__int64))(v16 + 128))(v56);
                  return 3221225495LL;
                }
LABEL_142:
                v104 = (_QWORD *)WdLogNewEntry5_WdLowResource(v55, v54, v57, v58);
                v104[3] = this;
                v104[4] = a2->hWindow;
                v104[5] = v53;
                v104[6] = a4;
                v104[7] = a2->Flags.Value;
                WdLogEvent5_WdLowResource(v104);
                return 3221225495LL;
              }
              if ( (*(unsigned int (__fastcall **)(HDC))(v16 + 56))(a3)
                && (!v15 || !ADAPTER_DISPLAY::IsVidPnSourceOwner(*(ADAPTER_DISPLAY **)(v15 + 2552), a5)) )
              {
                *((_DWORD *)this + 1) |= 0x10u;
                *((_QWORD *)this + 6) = a2->hWindow;
                return 0LL;
              }
LABEL_50:
              if ( a2->hWindow )
                goto LABEL_51;
              goto LABEL_138;
            }
LABEL_49:
            v53 = a3;
            goto LABEL_50;
          }
        }
        else
        {
          v13 = 0;
        }
        v50 = 0;
        goto LABEL_39;
      }
    }
    else
    {
      if ( !v15 || v15 != *((_QWORD *)a5 + 216) )
      {
        v79 = WdLogNewEntry5_WdAssertion(v19, v18);
        *(_QWORD *)(v79 + 24) = 10099LL;
        WdLogEvent5_WdAssertion(v79);
      }
      v80 = ADAPTER_DISPLAY::GetContentRect(*(DXGADAPTER ***)(v15 + 2552), a2->VidPnSourceId);
      v25 = (_DWORD *)((char *)this + 24);
      *(struct tagRECT *)((char *)this + 24) = *v80;
    }
    *((_QWORD *)this + 5) = 0LL;
    goto LABEL_8;
  }
  *((_DWORD *)this + 1) |= 3u;
  *((_QWORD *)this + 6) = a2->hWindow;
  return 3223191558LL;
}
