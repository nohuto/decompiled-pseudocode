/*
 * XREFs of ?GetInputSpaceId@Mouse@InputConfig@@SA?AU_LUID@@XZ @ 0x1C0067650
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z @ 0x1C002C8E8 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAI@Z.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00676A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 */

struct _LUID InputConfig::Mouse::GetInputSpaceId(void)
{
  __int64 v0; // rbx
  _BYTE v2[8]; // [rsp+20h] [rbp-18h] BYREF
  PERESOURCE *v3; // [rsp+28h] [rbp-10h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v2);
  v0 = **((_QWORD **)gpInputConfig + 3);
  ExReleaseResourceLite(*v3);
  KeLeaveCriticalRegion();
  return (struct _LUID)v0;
}
