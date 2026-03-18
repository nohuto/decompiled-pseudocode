/*
 * XREFs of GetMouseHitTestContext @ 0x1C0055864
 * Callers:
 *     ?HitTest@CSpatialProcessor@@QEAA?AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@Z @ 0x1C001B3D8 (-HitTest@CSpatialProcessor@@QEAA-AVCInputDest@@KW4DIT_HITTESTATTRIBUTES@@UtagPOINT@@_KKPEAHPEAI@.c)
 * Callees:
 *     ??0CLockedOutputConfig@@QEAA@XZ @ 0x1C00558B0 (--0CLockedOutputConfig@@QEAA@XZ.c)
 */

void __fastcall GetMouseHitTestContext(struct _SINGLE_LIST_ENTRY **a1)
{
  bool v2; // zf
  _BYTE v3[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v4; // [rsp+28h] [rbp-20h]
  char v5; // [rsp+30h] [rbp-18h]

  CLockedOutputConfig::CLockedOutputConfig((CLockedOutputConfig *)v3);
  v2 = v5 == 0;
  *a1 = gpInputConfig[4].Next->Next;
  if ( v2 )
  {
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
  }
}
