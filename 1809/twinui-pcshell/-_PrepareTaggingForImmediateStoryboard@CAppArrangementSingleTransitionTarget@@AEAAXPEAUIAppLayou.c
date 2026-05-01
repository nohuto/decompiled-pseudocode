/*
 * XREFs of ?_PrepareTaggingForImmediateStoryboard@CAppArrangementSingleTransitionTarget@@AEAAXPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@@Z @ 0x180329F9C
 * Callers:
 *     ?PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationItem@@PEAUITemporaryAppVisual@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x180329350 (-PrepareTaggingInfoForApp@CAppArrangementSingleTransitionTarget@@UEAAJPEAUIAppLayoutOperationIte.c)
 * Callees:
 *     ?IsBiDiLocale@@YAHK@Z @ 0x180016A64 (-IsBiDiLocale@@YAHK@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z @ 0x1801301B0 (-Equals@Guid@Platform@@QEAA_NAEBU_GUID@@@Z.c)
 *     ?MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z @ 0x1803268F4 (-MatchRectAspectRatio@@YAXPEAUtagRECT@@PEBU1@@Z.c)
 *     ?_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z @ 0x180329C00 (-_GetDwmTargetFlag@CAppTransitionTargetBase@@IEAAKQEAUHWND__@@_NK@Z.c)
 *     ?_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ @ 0x180329D90 (-_IsDragVisual@CAppArrangementSingleTransitionTarget@@AEBA_NXZ.c)
 *     s_ComputeDragVisualDestinationRect @ 0x18032A53C (s_ComputeDragVisualDestinationRect.c)
 *     s_GetAlignedRectsForApp @ 0x18032A5BC (s_GetAlignedRectsForApp.c)
 */

void __fastcall CAppArrangementSingleTransitionTarget::_PrepareTaggingForImmediateStoryboard(
        CAppArrangementSingleTransitionTarget *this,
        struct IAppLayoutOperationItem *a2,
        struct ITemporaryAppVisual *a3)
{
  int v6; // r15d
  int *v7; // rsi
  unsigned int v8; // edi
  struct tagRECT *v9; // rdx
  struct tagRECT v10; // xmm0
  int v11; // ecx
  int v12; // eax
  CAppTransitionTargetBase *v13; // rcx
  __int128 v14; // xmm1
  const struct tagRECT *v15; // rdx
  const struct tagRECT *v16; // r8
  int v17; // edx
  bool v18; // r15
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  bool v21; // zf
  int v22; // eax
  char v23; // dl
  LANGID ThreadUILanguage; // ax
  bool v25; // al
  int v26; // eax
  int v27; // eax
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int64 v30; // rax
  unsigned __int8 v31; // r14
  __int64 v32; // rcx
  __int64 v33; // r12
  struct tagRECT *v34; // rsi
  HMONITOR v35; // r15
  HMONITOR v36; // rax
  struct tagRECT v37; // xmm0
  int v38; // r9d
  char v39; // [rsp+30h] [rbp-40h] BYREF
  char v40[15]; // [rsp+31h] [rbp-3Fh] BYREF
  struct tagRECT v41; // [rsp+40h] [rbp-30h] BYREF
  __int64 v42; // [rsp+50h] [rbp-20h] BYREF
  struct tagRECT rcDst; // [rsp+58h] [rbp-18h] BYREF

  v42 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
  if ( (*(int (__fastcall **)(struct IAppLayoutOperationItem *, GUID *, __int64 *))(*(_QWORD *)a2 + 32LL))(
         a2,
         &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
         &v42) >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 96LL))(a2);
    v7 = (int *)((char *)this + 72);
    v8 = 696614912;
    v9 = (struct tagRECT *)((char *)this + 88);
    v10 = *(struct tagRECT *)((char *)this + 172);
    *(struct tagRECT *)((char *)this + 72) = v10;
    if ( a3 )
      v10 = *(struct tagRECT *)((char *)this + 236);
    v11 = *((_DWORD *)this + 19);
    v12 = *v7;
    *v9 = v10;
    *((_DWORD *)this + 21) -= v11;
    *((_DWORD *)this + 19) -= v11;
    *v7 = 0;
    *((_DWORD *)this + 20) -= v12;
    MatchRectAspectRatio((struct tagRECT *)((char *)this + 72), v9);
    if ( v6 == 7 )
    {
      *((_DWORD *)this + 10) = 71;
      v8 = 697663488;
      goto LABEL_73;
    }
    if ( v6 == 8 )
    {
      v31 = 1;
    }
    else
    {
      if ( v6 != 9 )
      {
        if ( v6 == 2 )
        {
          v27 = 45;
        }
        else
        {
          if ( v6 != 10 )
          {
            if ( *((_DWORD *)this + 68) == 6 )
            {
              v14 = *(_OWORD *)((char *)this + 188);
              v15 = (const struct tagRECT *)((char *)this + 120);
              *((_DWORD *)this + 10) = 44;
              *(_OWORD *)((char *)this + 120) = v14;
LABEL_15:
              *(_OWORD *)((char *)this + 104) = *(_OWORD *)v7;
              MatchRectAspectRatio((struct tagRECT *)((char *)this + 104), v15);
              goto LABEL_73;
            }
            if ( CAppArrangementSingleTransitionTarget::_IsDragVisual(this)
              && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
              *((_DWORD *)this + 10) = 35;
              s_ComputeDragVisualDestinationRect((char *)this + 188, (char *)this + 88, (char *)this + 120);
              v15 = v16;
              goto LABEL_15;
            }
            if ( (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
              && (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
              v18 = Platform::Guid::Equals(
                      (CAppArrangementSingleTransitionTarget *)((char *)this + 172),
                      (const struct _GUID *)((char *)this + 188))
                 || a3;
              v39 = 1;
              v40[0] = 1;
              s_GetAlignedRectsForApp(
                (_DWORD)this + 172,
                v17,
                (_DWORD)this + 104,
                (_DWORD)this + 120,
                (__int64)&v39,
                (__int64)v40);
              if ( !v39 )
                v8 = 696549376;
              if ( !v40[0] )
                v8 &= ~0x8000u;
              if ( v18 )
              {
                v19 = *(_OWORD *)((char *)this + 120);
                v20 = *(_OWORD *)((char *)this + 104);
                *((_DWORD *)this + 10) = 28;
                *(_OWORD *)((char *)this + 88) = v19;
                *(_OWORD *)v7 = v20;
                if ( Platform::Guid::Equals(
                       (CAppArrangementSingleTransitionTarget *)((char *)this + 172),
                       (const struct _GUID *)((char *)this + 188)) )
                {
                  v8 = v8 & 0xDFDFFFFF | 0x200000;
                }
              }
              else
              {
                *((_DWORD *)this + 10) = 23;
              }
              goto LABEL_73;
            }
            if ( !(*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 80LL))(a2)
              || (*(unsigned int (__fastcall **)(struct IAppLayoutOperationItem *))(*(_QWORD *)a2 + 88LL))(a2) )
            {
LABEL_73:
              *((_DWORD *)this + 11) = CAppTransitionTargetBase::_GetDwmTargetFlag(v13, *((HWND *)this + 7), 0, v8);
              goto LABEL_74;
            }
            v21 = *((_DWORD *)this + 68) == 1;
            *(_QWORD *)&rcDst.left = 0LL;
            *(_QWORD *)&rcDst.right = 0LL;
            if ( v21 && !IntersectRect(&rcDst, (const RECT *)((char *)this + 88), (const RECT *)((char *)this + 136)) )
            {
              *((_DWORD *)this + 10) = 43;
              v8 = 671449088;
              SetRectEmpty((LPRECT)((char *)this + 72));
              SetRectEmpty((LPRECT)((char *)this + 88));
              SetRectEmpty((LPRECT)((char *)this + 104));
              SetRectEmpty((LPRECT)((char *)this + 120));
              goto LABEL_73;
            }
            if ( (unsigned int)(v6 - 3) <= 1 || (*((_BYTE *)this + 160) & 0x18) != 0 )
            {
              v23 = 1;
              if ( (*((_DWORD *)this + 40) & 1) != 0 )
              {
                *((_DWORD *)this + 10) = 7;
                goto LABEL_44;
              }
              v22 = (2 * (*((_DWORD *)this + 40) & 4)) | 0x17;
            }
            else
            {
              v22 = 20;
              v23 = 0;
              if ( *((_DWORD *)this + 39) == 3 )
                v22 = 28;
            }
            *((_DWORD *)this + 10) = v22;
LABEL_44:
            *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)this + 88);
            if ( !v23 )
              goto LABEL_53;
            ThreadUILanguage = GetThreadUILanguage();
            v25 = (unsigned int)IsBiDiLocale(ThreadUILanguage) != 0;
            if ( v6 != 3 )
            {
              if ( v6 == 4 )
                goto LABEL_51;
              v8 = 696516608;
            }
            if ( (unsigned int)(v6 - 3) <= 1 || !v25 )
            {
              v26 = *((_DWORD *)this + 22) + *((_DWORD *)this + 34) - *((_DWORD *)this + 24);
LABEL_52:
              *((_DWORD *)this + 30) = v26;
              *((_DWORD *)this + 32) = *((_DWORD *)this + 30) + *((_DWORD *)this + 24) - *((_DWORD *)this + 22);
LABEL_53:
              *(_OWORD *)((char *)this + 104) = *(_OWORD *)v7;
              MatchRectAspectRatio((struct tagRECT *)((char *)this + 104), (const struct tagRECT *)((char *)this + 120));
              if ( *((_DWORD *)this + 68) )
                v8 &= ~0x20000000u;
              goto LABEL_73;
            }
LABEL_51:
            v26 = *((_DWORD *)this + 36);
            goto LABEL_52;
          }
          v27 = 84;
        }
        v28 = *(_OWORD *)v7;
        *((_DWORD *)this + 10) = v27;
        v29 = *(_OWORD *)((char *)this + 88);
        v30 = *((_QWORD *)this + 35);
        *(_OWORD *)((char *)this + 104) = v28;
        *(_OWORD *)((char *)this + 120) = v29;
        if ( v30 )
        {
          *((_QWORD *)this + 8) = v30;
          *((_DWORD *)this + 12) = 0x4000;
        }
        goto LABEL_73;
      }
      v31 = 0;
    }
    v32 = *((_QWORD *)this + 7);
    v33 = v31 ^ 1u;
    v8 = (v31 << 20) + 696614912;
    *((_DWORD *)this + 10) = v33 + 72;
    if ( !(unsigned int)GetWindowMinimizeRect(v32, &rcDst) || IsRectEmpty(&rcDst) )
    {
      if ( v6 == 8 )
        *((_DWORD *)this + 10) = 71;
      else
        *((_DWORD *)this + 10) = 4095;
    }
    else
    {
      *(_OWORD *)((char *)this + 104) = *(_OWORD *)v7;
      v34 = (struct tagRECT *)((char *)this + 188);
      v35 = MonitorFromRect(&rcDst, 0);
      v36 = MonitorFromRect((LPCRECT)((char *)this + 188), 0);
      if ( v31 || v36 && v36 == v35 )
      {
        v38 = (int)(float)((float)(rcDst.right - rcDst.left) * 0.60000002);
        v41.top = rcDst.top - v38 * (rcDst.bottom - rcDst.top) / (rcDst.right - rcDst.left);
        v41.left = (int)(float)((float)((float)v38 * 0.30000001) + (float)rcDst.left);
        v41.right = v41.left + v38;
        v41.bottom = rcDst.top;
        MatchRectAspectRatio(&v41, (const struct tagRECT *)((char *)this + 16 * v33 + 172));
        v37 = v41;
        if ( !v31 )
        {
          *(struct tagRECT *)((char *)this + 88) = v41;
          v37 = *v34;
        }
      }
      else
      {
        v37 = *v34;
        *((_DWORD *)this + 10) = 74;
        *(struct tagRECT *)((char *)this + 88) = v37;
      }
      *(struct tagRECT *)((char *)this + 120) = v37;
    }
    goto LABEL_73;
  }
LABEL_74:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v42);
}
