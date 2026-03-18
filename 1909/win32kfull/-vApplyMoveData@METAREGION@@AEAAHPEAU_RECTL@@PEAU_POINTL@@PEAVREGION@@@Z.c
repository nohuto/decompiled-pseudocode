/*
 * XREFs of ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02B9F38
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C00B6680 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C008C9BC (-vDeleteREGION@REGION@@QEAAXXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C008C9F0 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C00A3D1C (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00CF1C8 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02B9940 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 *     ?vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02B9DD8 (-vAddRectToMoveRegionHelper@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 */

__int64 __fastcall METAREGION::vApplyMoveData(
        METAREGION *this,
        struct _RECTL *a2,
        struct _POINTL *a3,
        struct REGION *a4)
{
  REGION *v4; // rsi
  unsigned int v8; // edi
  struct _POINTL *v9; // r15
  REGION *v10; // rcx
  REGION *v11; // rcx
  REGION *v12; // rcx
  int v13; // eax
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  struct _POINTL v16; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v20[4]; // [rsp+60h] [rbp-20h] BYREF

  v4 = a4;
  v8 = 1;
  if ( !a2 || !a3 || !*((_DWORD *)this + 10) )
  {
    *((_QWORD *)this + 2) = a4;
    v4 = 0LL;
    METAREGION::vAddRectToMoveRegionHelper(this, a2);
    *((struct _POINTL *)this + 3) = *a3;
    v13 = 1;
    *((_DWORD *)this + 10) = 1;
    goto LABEL_26;
  }
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v18);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v18);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v17);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v17);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v15);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v15);
  if ( v18[0] && v17[0] && v15[0] )
  {
    v16 = (struct _POINTL)*((_QWORD *)this + 4);
    if ( !RGNOBJ::bCopy((RGNOBJ *)v17, (struct RGNOBJ *)&v16)
      || (v9 = (struct _POINTL *)((char *)this + 24), !RGNOBJ::bOffset((RGNOBJ *)v17, (struct _POINTL *)this + 3)) )
    {
      METAREGION::vClearMoveData(this, 1);
LABEL_9:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
      return v8;
    }
    RGNOBJ::vSet((RGNOBJ *)v18, a2);
    if ( RGNOBJ::iCombine((RGNOBJ *)v15, (struct RGNOBJ *)v18, (struct RGNOBJ *)v17, 1) )
    {
      v20[0] = *(_DWORD *)(v15[0] + 88LL);
      v20[1] = *(_DWORD *)(v15[0] + 92LL);
      v20[2] = *(_DWORD *)(v15[0] + 96LL);
      v20[3] = *(_DWORD *)(v15[0] + 100LL);
      if ( ERECTL::bEmpty((ERECTL *)v20) )
      {
        v10 = (REGION *)*((_QWORD *)this + 4);
        if ( v10 )
        {
          REGION::vDeleteREGION(v10);
          *((_QWORD *)this + 4) = 0LL;
        }
        v11 = (REGION *)*((_QWORD *)this + 1);
        if ( v11 )
        {
          REGION::vDeleteREGION(v11);
          *((_QWORD *)this + 1) = 0LL;
        }
        METAREGION::vAddRectToMoveRegionHelper(this, a2);
        v12 = (REGION *)*((_QWORD *)this + 2);
        *v9 = *a3;
        if ( v12 )
          REGION::vDeleteREGION(v12);
        *((_QWORD *)this + 2) = v4;
        v4 = 0LL;
        goto LABEL_24;
      }
      v19 = *((_QWORD *)this + 4);
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v20);
      RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v20);
      v16.x = -v9->x;
      v16.y = -*((_DWORD *)this + 7);
      RGNOBJ::bOffset((RGNOBJ *)v15, &v16);
      if ( !RGNOBJ::iCombine((RGNOBJ *)v20, (struct RGNOBJ *)v15, (struct RGNOBJ *)&v19, 1) )
      {
        METAREGION::vClearMoveData(this, 1);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
        goto LABEL_9;
      }
      RGNOBJ::vSwap((RGNOBJ *)&v19, (struct RGNOBJ *)v20);
      *((_QWORD *)this + 4) = v19;
      v9->x += a3->x;
      *((_DWORD *)this + 7) += a3->y;
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v20);
    }
    else
    {
      METAREGION::vClearMoveData(this, 1);
      v8 = 0;
    }
  }
LABEL_24:
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v15);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v17);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v18);
  v13 = *((_DWORD *)this + 10);
LABEL_26:
  if ( v13 )
    v8 = METAREGION::bIntersectMoveWithDirty(this, a2);
  if ( v4 )
    REGION::vDeleteREGION(v4);
  return v8;
}
