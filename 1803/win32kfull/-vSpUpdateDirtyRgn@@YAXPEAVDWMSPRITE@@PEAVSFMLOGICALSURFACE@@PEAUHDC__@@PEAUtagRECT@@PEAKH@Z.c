/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C008A2E0
 * Callers:
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C007D1FC (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C0089860 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C0110A0C (GreTransferSpriteStateToDwmState.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C023B354 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C023B688 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C023C0C4 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C007A080 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C008BCB4 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ?RestoreAttributes@XDCOBJ@@AEAAXXZ @ 0x1C008FCD0 (-RestoreAttributes@XDCOBJ@@AEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A524C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C00C7FE4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C00C8014 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C019711C (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C028FA2C (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C028FD28 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  int v10; // r15d
  int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rsi
  struct REGION **v19; // rsi
  bool v20; // zf
  int v21; // eax
  __int64 v22; // rcx
  struct REGION *v23; // rcx
  __int64 v24; // rcx
  LONG v25; // ecx
  __int64 v26; // rcx
  struct REGION *v27; // rdi
  int v28; // eax
  REGION *v29; // rcx
  __int64 v30; // [rsp+38h] [rbp-89h] BYREF
  __int64 v31; // [rsp+40h] [rbp-81h]
  struct REGION *v32[2]; // [rsp+48h] [rbp-79h] BYREF
  __int64 v33; // [rsp+58h] [rbp-69h] BYREF
  __int64 v34; // [rsp+60h] [rbp-61h] BYREF
  int v35; // [rsp+68h] [rbp-59h]
  __int64 v36; // [rsp+70h] [rbp-51h] BYREF
  int v37; // [rsp+78h] [rbp-49h]
  struct REGION *v38; // [rsp+80h] [rbp-41h] BYREF
  __int64 v39; // [rsp+88h] [rbp-39h] BYREF
  int v40; // [rsp+90h] [rbp-31h]
  struct _RECTL v41; // [rsp+98h] [rbp-29h] BYREF
  struct _RECTL v42; // [rsp+A8h] [rbp-19h] BYREF

  v10 = 0;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v42);
    v20 = v42.right == 1;
    *((_QWORD *)a2 + 16) = *(_QWORD *)&v42.left;
    if ( v20 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v42);
    v26 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = *(_QWORD *)&v42.left;
    EtwTraceLifetimeAccum(v26, 1LL);
    v10 = 1;
    if ( v42.right == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v42);
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v32[0] = *((struct REGION **)a2 + 16);
    RGNOBJ::vSet((RGNOBJ *)v32);
    if ( *((_QWORD *)a2 + 10) )
    {
      v33 = *((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v33);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v38 = (struct REGION *)*((_QWORD *)a2 + 16);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v34);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v34);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v39);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v39);
  if ( v38 && v34 && v36 && v39 )
  {
    v11 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v34, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 )
      goto LABEL_104;
    if ( !a3 )
      goto LABEL_104;
    LOBYTE(v12) = 1;
    v31 = 0LL;
    v13 = HmgShareLockEx(a3, v12, 0LL);
    v30 = v13;
    v14 = v13;
    if ( !v13 )
      goto LABEL_104;
    if ( (*(_DWORD *)(v13 + 36) & 1) != 0 )
    {
      v15 = *(_QWORD *)(v13 + 1560);
      if ( !v15
        || (*(_DWORD *)(v13 + 40) & 2) == 0
        || (v20 = (unsigned int)DC::bDpiScaledSurface((DC *)v13) == 0, v16 = v15, v20) )
      {
        v16 = *(_QWORD *)(v14 + 1544);
      }
      if ( v16 )
      {
        if ( !v15 || (*(_DWORD *)(v14 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v14) )
          v17 = *(_QWORD *)(v14 + 1544);
      }
      else if ( !*(_QWORD *)(v14 + 1552)
             || (*(_DWORD *)(v14 + 40) & 2) == 0
             || !(unsigned int)DC::bDpiScaledSurface((DC *)v14) )
      {
        v17 = *(_QWORD *)(v14 + 1536);
      }
      v33 = v17;
      if ( v17 )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v34, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v36, (struct RGNOBJ *)&v34);
          v11 = 1;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v36);
        }
      }
    }
    XDCOBJ::RestoreAttributes((XDCOBJ *)&v30);
    LODWORD(v32[0]) = 0;
    v18 = *(_QWORD *)v30;
    HmgDecrementShareReferenceCountEx(v30, v32);
    if ( LODWORD(v32[0]) )
      bDeleteDCInternalEx(v18, 0LL);
    if ( !v11 )
    {
LABEL_104:
      if ( !a1 )
        goto LABEL_73;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
      v41.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      v25 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      *(_QWORD *)&v41.left = 0LL;
      v41.bottom = v25;
      if ( v30 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v30, &v41);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v30, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v36, (struct RGNOBJ *)&v34);
          v11 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
      if ( !v11 )
LABEL_73:
        RGNOBJ::vSet((RGNOBJ *)&v34);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)&v38, (struct RGNOBJ *)&v34, BYTE2(gafjRgnOp)) )
      goto LABEL_28;
    RGNOBJ::vSwap((RGNOBJ *)&v36, (struct RGNOBJ *)&v38);
    v19 = (struct REGION **)((char *)a2 + 128);
    if ( a6 )
    {
      EtwTranslationUpdateOffset(*(_QWORD *)a2, (unsigned int)*((_QWORD *)a2 + 19), HIDWORD(*((_QWORD *)a2 + 19)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v27 = v38;
      v28 = METAREGION::vApplyMoveData(
              (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
              (struct _RECTL *)a2 + 7,
              (struct _POINTL *)a2 + 13,
              *((struct REGION **)a2 + 12));
      *v19 = v27;
      if ( v28 )
        METAREGION::vCalculateNoMoveDirty((struct SFMLOGICALSURFACE *)((char *)a2 + 128));
      goto LABEL_26;
    }
    EtwDirtyRectUpdate(
      *(_QWORD *)a2,
      (unsigned int)a4->left,
      (unsigned int)a4->top,
      (unsigned int)a4->right,
      a4->bottom);
    v20 = *((_DWORD *)a2 + 42) == 0;
    *v19 = v38;
    if ( v20 )
    {
LABEL_26:
      v21 = *((_DWORD *)a2 + 63);
      if ( (v21 & 2) == 0 )
      {
        *((_DWORD *)a2 + 63) = v21 | 2;
        *a5 |= 1u;
      }
LABEL_28:
      if ( *((_QWORD *)a2 + 10) )
      {
        v32[0] = *((struct REGION **)a2 + 10);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v39, (struct RGNOBJ *)v32, (struct RGNOBJ *)&v34, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v39, (struct RGNOBJ *)v32);
          v22 = *(_QWORD *)a2;
          *((struct REGION **)a2 + 10) = v32[0];
          EtwTraceLifetimeAccum(v22, 1LL);
        }
        if ( !v10 && *((_DWORD *)v32[0] + 21) != 1 && *((_DWORD *)v32[0] + 20) <= 0xA0u )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
          if ( v30 )
          {
            v23 = (struct REGION *)*((_QWORD *)a2 + 10);
            v42 = *(struct _RECTL *)((char *)v32[0] + 88);
            if ( v23 && v23 != prgnDefault )
              FreeObject(v23, 4LL);
            RGNOBJ::vSet((RGNOBJ *)&v30, &v42);
            v24 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 10) = v30;
            EtwTraceLifetimeAccum(v24, 1LL);
          }
          if ( (_DWORD)v31 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
        }
      }
      goto LABEL_41;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v32);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v32);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v41);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
    v33 = *((_QWORD *)a2 + 20);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v41, (struct RGNOBJ *)&v33)
      && RGNOBJ::bOffset((RGNOBJ *)&v41, (struct _POINTL *)a2 + 19) )
    {
      RGNOBJ::vSet((RGNOBJ *)v32, a4);
      if ( !v32[0]
        || !*(_QWORD *)&v41.left
        || !v30
        || !RGNOBJ::iCombine((RGNOBJ *)&v30, (struct RGNOBJ *)v32, (struct RGNOBJ *)&v41, 1)
        || (v42 = *(struct _RECTL *)(v30 + 88), (unsigned int)ERECTL::bEmpty((ERECTL *)&v42))
        || (unsigned int)METAREGION::bTrimMoveWithRegion((struct SFMLOGICALSURFACE *)((char *)a2 + 128), v32[0], 1) )
      {
LABEL_86:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v41);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v32);
        if ( !*((_DWORD *)a2 + 42) )
          goto LABEL_26;
        v32[0] = *v19;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
        v29 = (REGION *)*((_QWORD *)a2 + 17);
        v33 = *((_QWORD *)a2 + 20);
        if ( v29 )
        {
          REGION::vDeleteREGION(v29);
          *((_QWORD *)a2 + 17) = 0LL;
        }
        if ( RGNOBJ::bCopy((RGNOBJ *)&v30, (struct RGNOBJ *)&v33)
          && RGNOBJ::bOffset((RGNOBJ *)&v30, (struct _POINTL *)a2 + 19) )
        {
          RGNOBJ::vSet((RGNOBJ *)&v41);
          if ( v32[0]
            && v30
            && *(_QWORD *)&v41.left
            && RGNOBJ::iCombine((RGNOBJ *)&v41, (struct RGNOBJ *)v32, (struct RGNOBJ *)&v30, 4) )
          {
            *((_QWORD *)a2 + 17) = *(_QWORD *)&v41.left;
          }
          else
          {
            METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
          if ( v41.right != 1 )
            goto LABEL_26;
        }
        else
        {
          METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
          if ( v41.right != 1 )
            goto LABEL_26;
        }
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
        goto LABEL_26;
      }
      EtwLogicalSurfRemovedTranslationFromDirtyEvent(
        *((_QWORD *)a2 + 22),
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      EtwTraceMoveRegion(*((_QWORD *)a2 + 20), 0LL, 0LL, *((_QWORD *)a2 + 20));
    }
    METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
    goto LABEL_86;
  }
LABEL_41:
  if ( (*((_DWORD *)a2 + 63) & 0x20) != 0 )
  {
    *a5 |= 2u;
    *((_DWORD *)a2 + 63) &= ~0x20u;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v39);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
  if ( v40 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v39);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v36);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
  if ( v37 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v34);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
  if ( v35 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
}
