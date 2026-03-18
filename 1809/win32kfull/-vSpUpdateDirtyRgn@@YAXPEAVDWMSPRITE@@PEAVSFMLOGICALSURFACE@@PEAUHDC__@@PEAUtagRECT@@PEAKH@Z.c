/*
 * XREFs of ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C005A330
 * Callers:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C00596B0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 *     ?bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEAU_RECTL@@PEAVPALETTE@@PEAK4PEAPEAV3@@Z @ 0x1C007CF18 (-bSpDwmUpdateSpriteShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@PEA.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C00C83F0 (GreTransferSpriteStateToDwmState.c)
 *     ?SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z @ 0x1C025246C (-SpDdNotifyFullscreenSpriteUpdate@@YAJPEAUHDC__@@PEAX@Z.c)
 *     ?bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@PEAUtagSIZE@@PEAKPEAPEAV3@@Z @ 0x1C02527B0 (-bSpDwmUpdateDragRectShape@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUtagPOINT@@P.c)
 *     GreAddBitmapD3DDirtyRgn @ 0x1C0253244 (GreAddBitmapD3DDirtyRgn.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C000E3D4 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C000E408 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C00E3444 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ @ 0x1C015F030 (--0-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@QEAA@XZ.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02A3428 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02A37AC (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 *     ?vCalculateNoMoveDirty@METAREGION@@AEAAXXZ @ 0x1C02A3AD0 (-vCalculateNoMoveDirty@METAREGION@@AEAAXXZ.c)
 */

void __fastcall vSpUpdateDirtyRgn(
        struct DWMSPRITE *a1,
        struct SFMLOGICALSURFACE *a2,
        HDC a3,
        struct _RECTL *a4,
        unsigned int *a5,
        int a6)
{
  int v8; // r13d
  bool v11; // zf
  __int64 v12; // rcx
  int v13; // esi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r14
  LONG v21; // ecx
  struct REGION **v22; // rsi
  struct REGION *v23; // rbx
  int v24; // eax
  REGION *v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  struct REGION *v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C8h]
  struct REGION *v32; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v33; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+68h] [rbp-A0h]
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  __int64 v37; // [rsp+78h] [rbp-90h]
  struct REGION *v38; // [rsp+80h] [rbp-88h] BYREF
  __int64 v39; // [rsp+88h] [rbp-80h] BYREF
  int v40; // [rsp+90h] [rbp-78h]
  __int64 v41; // [rsp+98h] [rbp-70h]
  __int64 v42; // [rsp+A0h] [rbp-68h]
  _BYTE v43[32]; // [rsp+A8h] [rbp-60h] BYREF
  struct _RECTL v44; // [rsp+C8h] [rbp-40h] BYREF
  struct _RECTL v45; // [rsp+D8h] [rbp-30h] BYREF

  v8 = 0;
  if ( !*((_QWORD *)a2 + 16) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v45);
    v11 = v45.right == 1;
    *((_QWORD *)a2 + 16) = *(_QWORD *)&v45.left;
    if ( v11 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
  }
  if ( !*((_QWORD *)a2 + 10) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v45);
    v12 = *(_QWORD *)a2;
    *((_QWORD *)a2 + 10) = *(_QWORD *)&v45.left;
    EtwTraceLifetimeAccum(v12, 1LL);
    v8 = 1;
    if ( v45.right == 1 )
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v45);
  }
  if ( !*((_QWORD *)a2 + 23) )
  {
    v32 = (struct REGION *)*((_QWORD *)a2 + 16);
    RGNOBJ::vSet((RGNOBJ *)&v32);
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
    v13 = 0;
    RGNOBJ::vSet((RGNOBJ *)&v34, a4);
    if ( (*((_DWORD *)a2 + 63) & 1) == 0 || !a3 )
      goto LABEL_100;
    v41 = 0LL;
    v42 = 0LL;
    UnexpectedThreadTerminationHandler<DCOBJA>::UnexpectedThreadTerminationHandler<DCOBJA>(v43);
    LOBYTE(v14) = 1;
    v15 = HmgShareLockEx(a3, v14, 0LL);
    v41 = v15;
    v16 = v15;
    if ( v15 )
    {
      if ( (*(_DWORD *)(v15 + 36) & 1) != 0 )
      {
        v17 = *(_QWORD *)(v15 + 1176);
        if ( !v17
          || (*(_DWORD *)(v15 + 40) & 2) == 0
          || (v11 = (unsigned int)DC::bDpiScaledSurface((DC *)v15) == 0, v18 = v17, v11) )
        {
          v18 = *(_QWORD *)(v16 + 1160);
        }
        if ( v18 )
        {
          if ( !v17 || (*(_DWORD *)(v16 + 40) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface((DC *)v16) )
            v19 = *(_QWORD *)(v16 + 1160);
        }
        else if ( !*(_QWORD *)(v16 + 1168)
               || (*(_DWORD *)(v16 + 40) & 2) == 0
               || !(unsigned int)DC::bDpiScaledSurface((DC *)v16) )
        {
          v19 = *(_QWORD *)(v16 + 1152);
        }
        v33 = v19;
        if ( v19 )
        {
          if ( RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)&v33, (struct RGNOBJ *)&v34, BYTE1(gafjRgnOp)) )
          {
            RGNOBJ::vSwap((RGNOBJ *)&v36, (struct RGNOBJ *)&v34);
            v13 = 1;
          }
          else
          {
            RGNOBJ::vSet((RGNOBJ *)&v36);
          }
          v16 = v41;
        }
      }
      if ( v16 )
      {
        LODWORD(v32) = 0;
        v20 = *(_QWORD *)v16;
        HmgDecrementShareReferenceCountEx(v16, &v32);
        if ( (_DWORD)v32 )
          bDeleteDCInternalEx(v20, 0LL);
      }
    }
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v43);
    if ( !v13 )
    {
LABEL_100:
      if ( !a1 )
        goto LABEL_45;
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
      v44.right = *((_DWORD *)a1 + 16) - *((_DWORD *)a1 + 14);
      v21 = *((_DWORD *)a1 + 17) - *((_DWORD *)a1 + 15);
      *(_QWORD *)&v44.left = 0LL;
      v44.bottom = v21;
      if ( v30 )
      {
        RGNOBJ::vSet((RGNOBJ *)&v30, &v44);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)&v34, (struct RGNOBJ *)&v30, BYTE1(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v36, (struct RGNOBJ *)&v34);
          v13 = 1;
        }
      }
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
      if ( !v13 )
LABEL_45:
        RGNOBJ::vSet((RGNOBJ *)&v34);
    }
    if ( !RGNOBJ::bMerge((RGNOBJ *)&v36, (struct RGNOBJ *)&v38, (struct RGNOBJ *)&v34, BYTE2(gafjRgnOp)) )
      goto LABEL_77;
    RGNOBJ::vSwap((RGNOBJ *)&v36, (struct RGNOBJ *)&v38);
    v22 = (struct REGION **)((char *)a2 + 128);
    if ( a6 )
    {
      EtwTranslationUpdateOffset(*(_QWORD *)a2, (unsigned int)*((_QWORD *)a2 + 19), HIDWORD(*((_QWORD *)a2 + 19)));
      EtwTranslationUpdate(
        *(_QWORD *)a2,
        (unsigned int)a4->left,
        (unsigned int)a4->top,
        (unsigned int)a4->right,
        a4->bottom);
      v23 = v38;
      v24 = METAREGION::vApplyMoveData(
              (struct SFMLOGICALSURFACE *)((char *)a2 + 128),
              (struct _RECTL *)a2 + 7,
              (struct _POINTL *)a2 + 13,
              *((struct REGION **)a2 + 12));
      *v22 = v23;
      if ( v24 )
        METAREGION::vCalculateNoMoveDirty((struct SFMLOGICALSURFACE *)((char *)a2 + 128));
      goto LABEL_75;
    }
    EtwDirtyRectUpdate(
      *(_QWORD *)a2,
      (unsigned int)a4->left,
      (unsigned int)a4->top,
      (unsigned int)a4->right,
      a4->bottom);
    v11 = *((_DWORD *)a2 + 42) == 0;
    *v22 = v38;
    if ( v11 )
    {
LABEL_75:
      v26 = *((_DWORD *)a2 + 63);
      if ( (v26 & 2) == 0 )
      {
        *((_DWORD *)a2 + 63) = v26 | 2;
        *a5 |= 1u;
      }
LABEL_77:
      if ( *((_QWORD *)a2 + 10) )
      {
        v32 = (struct REGION *)*((_QWORD *)a2 + 10);
        if ( RGNOBJ::bMerge((RGNOBJ *)&v39, (struct RGNOBJ *)&v32, (struct RGNOBJ *)&v34, BYTE2(gafjRgnOp)) )
        {
          RGNOBJ::vSwap((RGNOBJ *)&v39, (struct RGNOBJ *)&v32);
          v27 = *(_QWORD *)a2;
          *((_QWORD *)a2 + 10) = v32;
          EtwTraceLifetimeAccum(v27, 1LL);
        }
        if ( !v8 && *((_DWORD *)v32 + 21) != 1 && *((_DWORD *)v32 + 20) <= 0xA0u )
        {
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
          if ( v30 )
          {
            v28 = (struct REGION *)*((_QWORD *)a2 + 10);
            v45 = *(struct _RECTL *)((char *)v32 + 88);
            if ( v28 && v28 != prgnDefault )
              FreeObject(v28, 4LL);
            RGNOBJ::vSet((RGNOBJ *)&v30, &v45);
            v29 = *(_QWORD *)a2;
            *((_QWORD *)a2 + 10) = v30;
            EtwTraceLifetimeAccum(v29, 1LL);
          }
          if ( (_DWORD)v31 == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v30);
        }
      }
      goto LABEL_90;
    }
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v32);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v32);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v44);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
    v33 = *((_QWORD *)a2 + 20);
    if ( RGNOBJ::bCopy((RGNOBJ *)&v44, (struct RGNOBJ *)&v33)
      && RGNOBJ::bOffset((RGNOBJ *)&v44, (struct _POINTL *)a2 + 19) )
    {
      RGNOBJ::vSet((RGNOBJ *)&v32, a4);
      if ( !v32
        || !*(_QWORD *)&v44.left
        || !v30
        || !RGNOBJ::iCombine((RGNOBJ *)&v30, (struct RGNOBJ *)&v32, (struct RGNOBJ *)&v44, 1)
        || (v45 = *(struct _RECTL *)(v30 + 88), ERECTL::bEmpty((ERECTL *)&v45))
        || (unsigned int)METAREGION::bTrimMoveWithRegion((struct SFMLOGICALSURFACE *)((char *)a2 + 128), v32, 1) )
      {
LABEL_61:
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v44);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v32);
        if ( *((_DWORD *)a2 + 42) )
        {
          v32 = *v22;
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v44);
          RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v30);
          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v30);
          v25 = (REGION *)*((_QWORD *)a2 + 17);
          v33 = *((_QWORD *)a2 + 20);
          if ( v25 )
          {
            REGION::vDeleteREGION(v25);
            *((_QWORD *)a2 + 17) = 0LL;
          }
          if ( RGNOBJ::bCopy((RGNOBJ *)&v30, (struct RGNOBJ *)&v33)
            && RGNOBJ::bOffset((RGNOBJ *)&v30, (struct _POINTL *)a2 + 19) )
          {
            RGNOBJ::vSet((RGNOBJ *)&v44);
            if ( v32
              && v30
              && *(_QWORD *)&v44.left
              && RGNOBJ::iCombine((RGNOBJ *)&v44, (struct RGNOBJ *)&v32, (struct RGNOBJ *)&v30, 4) )
            {
              *((_QWORD *)a2 + 17) = *(_QWORD *)&v44.left;
            }
            else
            {
              METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
              RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
            }
          }
          else
          {
            METAREGION::vClearMoveData((struct SFMLOGICALSURFACE *)((char *)a2 + 128), 1);
          }
          RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v30);
          if ( v44.right == 1 )
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v44);
        }
        goto LABEL_75;
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
    goto LABEL_61;
  }
LABEL_90:
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
  if ( (_DWORD)v37 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v36);
  RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v34);
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
  if ( (_DWORD)v35 == 1 )
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v34);
}
