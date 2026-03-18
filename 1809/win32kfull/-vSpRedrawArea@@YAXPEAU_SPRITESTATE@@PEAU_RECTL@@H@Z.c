/*
 * XREFs of ?vSpRedrawArea@@YAXPEAU_SPRITESTATE@@PEAU_RECTL@@H@Z @ 0x1C0159774
 * Callers:
 *     ?bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPEAU_RECTL@@@Z @ 0x1C00100D0 (-bSpUpdateSprite@@YAHPEAVSPRITE@@PEAUHDC__@@PEAU_POINTL@@PEAUtagSIZE@@12KPEAU_BLENDFUNCTION@@KPE.c)
 *     ?vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z @ 0x1C0045DE4 (-vSpRedrawSpriteOverlapPresent@@YAXPEAUHDEV__@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0061588 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z @ 0x1C00958D4 (-bSpUpdatePosition@@YAHPEAVSPRITE@@PEAU_POINTL@@HH@Z.c)
 *     ?bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02643D0 (-bSpBltScreenToScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@.c)
 *     ?vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z @ 0x1C026700C (-vSpDeviceControlSprites@@YAXPEAUHDEV__@@PEAVEWNDOBJ@@K@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0269FD0 (vSpUnTearDownSprites.c)
 * Callees:
 *     ??1PUSHLOCKEX@@QEAA@XZ @ 0x1C000246C (--1PUSHLOCKEX@@QEAA@XZ.c)
 *     ?vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z @ 0x1C000B37C (-vSpDeleteSurface@@YAXPEAU_SURFOBJ@@@Z.c)
 *     ?INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z @ 0x1C00F4C00 (-INVOKEOFFCOPYBITS@@YAHPEAU_POINTL@@PEAU_SURFOBJ@@01PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@0@Z.c)
 *     ??1ENUMAREAS@@QEAA@XZ @ 0x1C00F52A0 (--1ENUMAREAS@@QEAA@XZ.c)
 *     ?bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z @ 0x1C00F52F8 (-bEnum@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@PEAU_RECTL@@@Z.c)
 *     ?vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z @ 0x1C00FBF0C (-vLock@NEEDDDILOCK@@QEAAXPEAU_SURFOBJ@@@Z.c)
 *     ?vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159A60 (-vSpWriteToScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C0159B74 (-bEnumLayers@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0159BC0 (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z @ 0x1C015A068 (-psoSpGetComposite@@YAPEAU_SURFOBJ@@PEAU_SPRITESTATE@@PEAU_RECTL@@PEAK@Z.c)
 *     ?bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z @ 0x1C015A190 (-bAdvanceToTopMostOpaqueLayer@ENUMAREAS@@QEAAHPEAPEAVSPRITE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?vLock@SINGLEREADERLOCK@@QEAAXXZ @ 0x1C0266288 (-vLock@SINGLEREADERLOCK@@QEAAXXZ.c)
 */

void __fastcall vSpRedrawArea(struct _SPRITESTATE *a1, struct _RECTL *a2, int a3)
{
  LONG left; // r14d
  LONG right; // r12d
  LONG top; // esi
  LONG bottom; // r15d
  int v10; // eax
  __int64 v11; // rdx
  __int64 i; // r8
  LONG v13; // ecx
  LONG v14; // eax
  __int64 v15; // rbx
  LONG v16; // ecx
  LONG v17; // eax
  int v18; // r14d
  struct _SURFOBJ *Composite; // rbx
  struct SPRITE *v20; // rsi
  struct _SURFOBJ *v21; // rdx
  ULONG StartingIndex; // [rsp+48h] [rbp-79h] BYREF
  struct SPRITE *v23; // [rsp+50h] [rbp-71h] BYREF
  struct _POINTL v24; // [rsp+58h] [rbp-69h] BYREF
  __int64 v25; // [rsp+60h] [rbp-61h] BYREF
  __int64 v26; // [rsp+68h] [rbp-59h] BYREF
  char *v27; // [rsp+70h] [rbp-51h] BYREF
  _DWORD v28[12]; // [rsp+78h] [rbp-49h] BYREF
  __int64 v29; // [rsp+A8h] [rbp-19h]
  __int64 v30; // [rsp+B0h] [rbp-11h]
  int v31; // [rsp+C8h] [rbp+7h]
  struct _SPRITESTATE *v32; // [rsp+D0h] [rbp+Fh]
  struct _RECTL v33; // [rsp+D8h] [rbp+17h] BYREF

  if ( (*(_DWORD *)(*(_QWORD *)a1 + 40LL) & 0x400) == 0 )
  {
    v32 = a1;
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)a1 + 15));
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", *((_QWORD *)a1 + 15));
    left = a2->left;
    right = a2->right;
    top = a2->top;
    bottom = a2->bottom;
    v10 = *((_DWORD *)a1 + 29);
    v28[0] = 0;
    v11 = *((_QWORD *)a1 + 17);
    v31 = v10;
    v28[5] = left;
    v28[1] = left;
    v28[7] = right;
    v28[3] = right;
    v28[6] = top;
    v28[2] = top;
    v28[8] = bottom;
    v28[4] = bottom;
    while ( *(_DWORD *)(v11 + 4) <= top )
      v11 += *(_QWORD *)(v11 + 8);
    for ( i = v11 + 24; *(_DWORD *)(i + 4) <= left; i += 16LL )
      ;
    v13 = *(_DWORD *)v11;
    v14 = top;
    v15 = *((_QWORD *)a1 + 140);
    v29 = v11;
    if ( v13 > top )
      v14 = v13;
    v30 = i;
    v16 = *(_DWORD *)(v11 + 4);
    v28[9] = v14;
    v17 = bottom;
    if ( v16 < bottom )
      v17 = v16;
    v28[10] = v17;
    while ( v15 )
    {
      if ( *(_DWORD *)(v15 + 80) < right
        && *(_DWORD *)(v15 + 84) < bottom
        && *(_DWORD *)(v15 + 88) > left
        && *(_DWORD *)(v15 + 92) > top )
      {
        SINGLEREADERLOCK::vLock((SINGLEREADERLOCK *)(v15 + 248));
      }
      v15 = *(_QWORD *)(v15 + 24);
    }
    do
    {
      v18 = ENUMAREAS::bEnum((ENUMAREAS *)v28, &v23, &v33);
      if ( v23 && (!(unsigned int)ENUMAREAS::bAdvanceToTopMostOpaqueLayer((ENUMAREAS *)v28, &v23) || a3) )
      {
        Composite = psoSpGetComposite(a1, &v33, &StartingIndex);
        if ( !Composite )
          break;
        v20 = v23;
        v24.x = -v33.left;
        v21 = (struct _SURFOBJ *)*((_QWORD *)v23 + 20);
        v24.y = -v33.top;
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v26, v21);
        NEEDDDILOCK::vLock((NEEDDDILOCK *)&v25, Composite);
        INVOKEOFFCOPYBITS(
          &v24,
          Composite,
          (struct _POINTL *)v20 + 21,
          *((struct _SURFOBJ **)v20 + 20),
          0LL,
          0LL,
          &v33,
          (struct _POINTL *)&v33);
        if ( v25 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v25 + 48));
          v25 = 0LL;
        }
        if ( v26 )
        {
          GreUnlockDisplayDevice(*(_QWORD *)(v26 + 48));
          v26 = 0LL;
        }
        while ( 1 )
        {
          vSpComposite(v20, &v24, Composite, &v33);
          if ( !(unsigned int)ENUMAREAS::bEnumLayers((ENUMAREAS *)v28, &v23) )
            break;
          v20 = v23;
        }
        vSpWriteToScreen(a1, &v24, Composite, &v33);
        if ( StartingIndex == -1 )
        {
          vSpDeleteSurface(Composite);
        }
        else
        {
          v27 = (char *)a1 + 688;
          if ( a1 != (struct _SPRITESTATE *)-688LL )
          {
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx((char *)a1 + 688, 0LL);
          }
          RtlClearBits((PRTL_BITMAP)((char *)a1 + 664), StartingIndex, 1u);
          PUSHLOCKEX::~PUSHLOCKEX((PUSHLOCKEX *)&v27);
        }
      }
    }
    while ( v18 );
    ENUMAREAS::~ENUMAREAS((ENUMAREAS *)v28);
  }
}
