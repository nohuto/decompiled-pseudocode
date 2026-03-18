/*
 * XREFs of ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C003D314
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001A108 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 */

struct _LUID __fastcall InputConfig::Mouse::GetInputSpaceId(__int64 a1, struct CEResource *a2)
{
  __int64 v2; // rbx
  __int64 *v4; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v5[16]; // [rsp+28h] [rbp-10h] BYREF

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v4, a2);
  v4 = (__int64 *)*((_QWORD *)gpInputConfig + 3);
  v2 = *v4;
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v5);
  return (struct _LUID)v2;
}
