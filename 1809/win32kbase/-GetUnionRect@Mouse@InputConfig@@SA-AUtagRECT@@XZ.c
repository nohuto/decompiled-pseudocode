/*
 * XREFs of ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C003D2D0
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C0030698 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C003BFA0 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C003CA34 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C003D07C (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 */

struct tagRECT *__fastcall InputConfig::Mouse::GetUnionRect(struct tagRECT *__return_ptr retstr, struct CEResource *a2)
{
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  _BYTE v5[16]; // [rsp+28h] [rbp-10h] BYREF

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v4, a2);
  v4 = *((_QWORD *)gpInputConfig + 3);
  *retstr = *(struct tagRECT *)(v4 + 24);
  CEResourceLockExclusive::~CEResourceLockExclusive((CEResourceLockExclusive *)v5);
  return retstr;
}
