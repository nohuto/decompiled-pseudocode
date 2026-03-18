/*
 * XREFs of ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02A31B8
 * Callers:
 *     ?vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z @ 0x1C02A37AC (-vApplyMoveData@METAREGION@@AEAAHPEAU_RECTL@@PEAU_POINTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C000E408 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z @ 0x1C02A3130 (-TraceMoveRemovedMoveRegions@METAREGION@@AEAAXPEAU_RECTL@@@Z.c)
 *     ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02A3428 (-bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z.c)
 */

__int64 __fastcall METAREGION::bIntersectMoveWithDirty(METAREGION *this, struct _RECTL *a2)
{
  unsigned int v2; // ebx
  struct REGION *v5; // rsi
  int v6; // eax
  _QWORD v8[2]; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-29h] BYREF
  _QWORD v10[2]; // [rsp+40h] [rbp-19h] BYREF
  _QWORD v11[2]; // [rsp+50h] [rbp-9h] BYREF
  __int64 v12; // [rsp+60h] [rbp+7h] BYREF
  struct REGION *v13; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+70h] [rbp+17h] BYREF
  __int64 v15; // [rsp+78h] [rbp+1Fh]

  v2 = 1;
  if ( *((_DWORD *)this + 10) == 1 && (*((_QWORD *)this + 1) || *(_QWORD *)this) )
  {
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v11);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v11);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v8);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v8);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v10);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v10);
    RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v9);
    RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v9);
    v12 = *((_QWORD *)this + 4);
    if ( !v8[0] || !v10[0] || !v9[0] )
      goto LABEL_21;
    v5 = (struct REGION *)*((_QWORD *)this + 1);
    if ( !v5 )
      v5 = *(struct REGION **)this;
    v13 = v5;
    v15 = 0LL;
    v14 = 0LL;
    RGNOBJ::vSet((RGNOBJ *)v10);
    if ( RGNOBJ::iCombine((RGNOBJ *)v8, (struct RGNOBJ *)&v12, (struct RGNOBJ *)v10, 2)
      && RGNOBJ::bOffset((RGNOBJ *)v8, (struct _POINTL *)this + 3)
      && v12
      && v8[0]
      && v9[0]
      && v11[0]
      && RGNOBJ::iCombine((RGNOBJ *)v11, (struct RGNOBJ *)&v12, (struct RGNOBJ *)v8, 2)
      && (v6 = RGNOBJ::iCombine((RGNOBJ *)v9, (struct RGNOBJ *)v11, (struct RGNOBJ *)&v13, 1)) != 0 )
    {
      if ( v6 != 1 )
      {
        v14 = *(_QWORD *)(v9[0] + 88LL);
        v15 = *(_QWORD *)(v9[0] + 96LL);
        if ( !ERECTL::bEmpty((ERECTL *)&v14) )
        {
          v2 = METAREGION::bTrimMoveWithRegion(this, v5, 0);
          if ( !v2 )
            METAREGION::TraceMoveRemovedMoveRegions(this, a2);
        }
      }
    }
    else
    {
LABEL_21:
      METAREGION::vClearMoveData(this, 1);
      v2 = 0;
    }
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v9);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v8);
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
  }
  return v2;
}
