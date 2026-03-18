/*
 * XREFs of ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02A3428
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C005A330 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02A31B8 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C000E408 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C004EF64 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C009EB00 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall METAREGION::bTrimMoveWithRegion(METAREGION *this, struct REGION *a2, int a3)
{
  unsigned int v5; // ebx
  int v7; // ecx
  _DWORD *v8; // rax
  _DWORD *v10; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v11[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-48h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-38h] BYREF
  struct REGION *v14; // [rsp+58h] [rbp-28h] BYREF
  struct _POINTL v15; // [rsp+60h] [rbp-20h] BYREF
  _DWORD v16[4]; // [rsp+68h] [rbp-18h] BYREF

  v10 = (_DWORD *)*((_QWORD *)this + 4);
  v14 = a2;
  v5 = 1;
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v13);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v12);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v12);
  RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v11);
  RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)v11);
  if ( !v13[0]
    || !v12[0]
    || !v11[0]
    || !RGNOBJ::bCopy((RGNOBJ *)v11, (struct RGNOBJ *)&v10)
    || !RGNOBJ::bOffset((RGNOBJ *)v11, (struct _POINTL *)this + 3) )
  {
    goto LABEL_14;
  }
  if ( !(a3
       ? RGNOBJ::bCopy((RGNOBJ *)v13, (struct RGNOBJ *)&v10)
       : RGNOBJ::iCombine((RGNOBJ *)v13, (struct RGNOBJ *)&v10, (struct RGNOBJ *)&v14, 4)) )
    goto LABEL_14;
  if ( !RGNOBJ::iCombine((RGNOBJ *)v12, (struct RGNOBJ *)v11, (struct RGNOBJ *)&v14, 4) )
    goto LABEL_14;
  v15.x = -*((_DWORD *)this + 6);
  v15.y = -*((_DWORD *)this + 7);
  if ( !RGNOBJ::bOffset((RGNOBJ *)v12, &v15)
    || (v7 = RGNOBJ::iCombine((RGNOBJ *)&v10, (struct RGNOBJ *)v13, (struct RGNOBJ *)v12, 1)) == 0
    || (v8 = v10, *((_QWORD *)this + 4) = v10, v7 == 1)
    || (v16[0] = v8[22], v16[1] = v8[23], v16[2] = v8[24], v16[3] = v8[25], ERECTL::bEmpty((ERECTL *)v16)) )
  {
LABEL_14:
    METAREGION::vClearMoveData(this, 1);
    v5 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v13);
  return v5;
}
