/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00B6680
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C0010634 (GreTransferSpriteStateToDwmState.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C0031E64 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00B5AA0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026B5C4 (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C026B8C0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C026C22C (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008C9BC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C008C9F0 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00F8648 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02B9BB0 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02B9F38 (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C02BA25C (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  unsigned int *v7; // rsi
  int v9; // r12d
  int v12; // esi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r15
  _QWORD *v20; // rsi
  bool v21; // zf
  int v22; // eax
  __int64 v23; // rcx
  struct REGION *v24; // rcx
  __int64 v25; // rcx
  LONG v26; // ecx
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // eax
  REGION *v30; // rcx
  __int64 v31; // [rsp+38h] [rbp-89h] BYREF
  int v32; // [rsp+40h] [rbp-81h]
  _QWORD v33[2]; // [rsp+48h] [rbp-79h] BYREF
  unsigned int *v34; // [rsp+58h] [rbp-69h]
  __int64 v35; // [rsp+60h] [rbp-61h] BYREF
  __int64 v36; // [rsp+68h] [rbp-59h] BYREF
  int v37; // [rsp+70h] [rbp-51h]
  __int64 v38; // [rsp+78h] [rbp-49h] BYREF
  int v39; // [rsp+80h] [rbp-41h]
  __int64 v40; // [rsp+88h] [rbp-39h] BYREF
  __int64 v41; // [rsp+90h] [rbp-31h] BYREF
  int v42; // [rsp+98h] [rbp-29h]
  struct _RECTL v43; // [rsp+A0h] [rbp-21h] BYREF
  unsigned __int128 v44; // [rsp+B0h] [rbp-11h] BYREF

  v7 = a5;
  v9 = 0;
  v34 = a5;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
    v21 = DWORD2(v44) == 1;
    *((_QWORD *)a2 + 16) = v44;
    if ( v21 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
    v27 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = v44;
    EtwTraceLifetimeAccum(v27, 1LL);
    v9 = 1;
    if ( DWORD2(v44) == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v33[0] = *((_QWORD *)a2 + 16);
    RGNOBJ::vSet((RGNOBJ *)v33);
    if ( *((_QWORD *)a2 + 10) )
    {
      v35 = *((_QWORD *)a2 + 10);
      RGNOBJ::vSet((RGNOBJ *)&v35);
      EtwTraceLifetimeAccum(*(_QWORD *)a2, 1LL);
    }
  }
  v40 = *((_QWORD *)a2 + 16);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v36);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v36);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v38);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v38);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v41);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v41);
  if ( v40 && v36 && v38 && v41 )
  {
    v12 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v36, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 )
      goto LABEL_105;
    if ( !a3 )
      goto LABEL_105;
    LOBYTE(v13) = 1;
    v14 = HmgShareLockEx(a3, v13, 0LL);
    v15 = v14;
    if ( !v14 )
      goto LABEL_105;
    if ( (*(_DWORD *)(v14 + 36) & 1) != 0 )
    {
      v16 = *(_QWORD *)(v14 + 1152);
      if ( !v16
        || (*(_DWORD *)(v14 + 40) & 2) == 0
        || (v21 = (unsigned int)DC::bDpiScaledSurface((DC *)v14) == 0, v17 = v16, v21) )
      {
        v17 = *(_QWORD *)(v15 + 1136);
      }
      if ( v17 )
      {
        if ( !v16 || (*(_DWORD *)(v15 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v15) )
          v18 = *(_QWORD *)(v15 + 1136);
      }
      else if ( !*(_QWORD *)(v15 + 1144)
             || (*(_DWORD *)(v15 + 40) & 2) == 0
             || !(unsigned int)DC::bDpiScaledSurface((DC *)v15) )
      {
        v18 = *(_QWORD *)(v15 + 1128);
      }
      v35 = v18;
      if ( v18 )
      {
        if ( RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v35, (struct RGNOBJ *)&v36, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v38, (struct RGNOBJ *)&v36);
          v12 = 1;
        }
        else
        {
          RGNOBJ::vSet((RGNOBJ *)&v38);
        }
      }
    }
    v19 = *(_QWORD *)v15;
    LODWORD(v33[0]) = 0;
    HmgDecrementShareReferenceCountEx(v15, v33);
    if ( LODWORD(v33[0]) )
      bDeleteDCInternalEx(v19, 0LL);
    if ( !v12 )
    {
LABEL_105:
      if ( !a1 )
        goto LABEL_74;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
      v43.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      v26 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      *(_QWORD *)&v43.left = 0LL;
      v43.bottom = v26;
      if ( v31 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v31, &v43);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v36, (struct RGNOBJ *)&v31, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v38, (struct RGNOBJ *)&v36);
          v12 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
      if ( !v12 )
LABEL_74:
        RGNOBJ::vSet((RGNOBJ *)&v36);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v38, (struct RGNOBJ *)&v40, (struct RGNOBJ *)&v36, BYTE2(gafjRgnOp)) )
      goto LABEL_28;
    RGNOBJ::vSwap((RGNOBJ *)&v38, (struct RGNOBJ *)&v40);
    v20 = (_QWORD *)((char *)a2 + 128);
    if ( a6 )
    {
      EtwTranslationUpdateOffset(*(_QWORD *)a2, (unsigned int)*((_QWORD *)a2 + 19), HIDWORD(*((_QWORD *)a2 + 19)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v28 = v40;
      v29 = METAREGION::vApplyMoveData(
              (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
              (struct _RECTL *)a2 + 7,
              (struct _POINTL *)a2 + 13,
              *((struct REGION **)a2 + 12));
      *v20 = v28;
      if ( v29 )
        METAREGION::vCalculateNoMoveDirty((struct SFMLOGICALSURFACE *)((char *)a2 + 128));
      goto LABEL_26;
    }
    EtwDirtyRectUpdate(
      *(_QWORD *)a2,
      (unsigned int)a4->left,
      (unsigned int)a4->top,
      (unsigned int)a4->right,
      a4->bottom);
    v21 = *((_DWORD *)a2 + 42) == 0;
    *v20 = v40;
    if ( v21 )
    {
LABEL_26:
      v22 = *((_DWORD *)a2 + 63);
      if ( (v22 & 2) == 0 )
      {
        *((_DWORD *)a2 + 63) = v22 | 2;
        *v34 |= 1u;
      }
LABEL_28:
      if ( *((_QWORD *)a2 + 10) )
      {
        v33[0] = *((_QWORD *)a2 + 10);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v41, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v36, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v41, (struct RGNOBJ *)v33);
          v23 = *(_QWORD *)a2;
          *((_QWORD *)a2 + 10) = v33[0];
          EtwTraceLifetimeAccum(v23, 1LL);
        }
        if ( !v9 && *(_DWORD *)(v33[0] + 84LL) != 1 && *(_DWORD *)(v33[0] + 80LL) <= 0xA0u )
        {
          v44 = 0uLL;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
          if ( v31 )
          {
            v24 = (struct REGION *)*((_QWORD *)a2 + 10);
            v44 = *(_OWORD *)(v33[0] + 88LL);
            if ( v24 && v24 != prgnDefault )
              FreeObject(v24, 4LL);
            RGNOBJ::vSet((RGNOBJ *)&v31, (struct _RECTL *)&v44);
            v25 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 10) = v31;
            EtwTraceLifetimeAccum(v25, 1LL);
          }
          if ( v32 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v31);
        }
      }
      v7 = v34;
      goto LABEL_42;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v43);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v43);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v33);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v33);
    v35 = *((_QWORD *)a2 + 20);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v31, (struct RGNOBJ *)&v35)
      && RGNOBJ::bOffset((RGNOBJ *)&v31, (struct _POINTL *)a2 + 19) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v43, a4);
      if ( !*(_QWORD *)&v43.left
        || !v31
        || !v33[0]
        || !RGNOBJ::iCombine((RGNOBJ *)v33, (struct RGNOBJ *)&v43, (struct RGNOBJ *)&v31, 1)
        || (v44 = *(_OWORD *)(v33[0] + 88LL), ERECTL::bEmpty((ERECTL *)&v44))
        || (unsigned int)METAREGION::bTrimMoveWithRegion(
                           (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
                           *(struct REGION **)&v43.left,
                           1) )
      {
LABEL_87:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v33);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v43);
        if ( !*((_DWORD *)a2 + 42) )
          goto LABEL_26;
        v33[0] = *v20;
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v43);
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v31);
        RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v31);
        v30 = (REGION *)*((_QWORD *)a2 + 17);
        v35 = *((_QWORD *)a2 + 20);
        if ( v30 )
        {
          REGION::vDeleteREGION(v30);
          *((_QWORD *)a2 + 17) = 0LL;
        }
        if ( RGNOBJ::bCopy((RGNOBJ *)&v31, (struct RGNOBJ *)&v35)
          && RGNOBJ::bOffset((RGNOBJ *)&v31, (struct _POINTL *)a2 + 19) )
        {
          RGNOBJ::vSet((RGNOBJ *)&v43);
          if ( v33[0]
            && v31
            && *(_QWORD *)&v43.left
            && RGNOBJ::iCombine((RGNOBJ *)&v43, (struct RGNOBJ *)v33, (struct RGNOBJ *)&v31, 4) )
          {
            *((_QWORD *)a2 + 17) = *(_QWORD *)&v43.left;
          }
          else
          {
            METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
          if ( v43.right != 1 )
            goto LABEL_26;
        }
        else
        {
          METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v31);
          if ( v43.right != 1 )
            goto LABEL_26;
        }
        RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v43);
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
    goto LABEL_87;
  }
LABEL_42:
  if ( (*((_DWORD *)a2 + 63) & 0x20) != 0 )
  {
    *v7 |= 2u;
    *((_DWORD *)a2 + 63) &= ~0x20u;
  }
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v41);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
  if ( v42 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v41);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v38);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
  if ( v39 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v38);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v36);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
  if ( v37 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
}
