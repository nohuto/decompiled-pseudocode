/*
 * XREFs of ?GetUnionRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C00675F8
 * Callers:
 *     ?ProcessMouseInputData@CMouseProcessor@@AEAA?AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_INPUT_DATA@@PEBUtagUIPI_INFO_INT@@@Z @ 0x1C00321A8 (-ProcessMouseInputData@CMouseProcessor@@AEAA-AUtagPOINT@@PEAVMouseInputDataEx@1@U2@PEBU_MOUSE_IN.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXXZ @ 0x1C0065874 (-OnDisplayStateChange@CCursorClip@@QEAAXXZ.c)
 *     ?GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0066C18 (-GetMouseCoordinateRelative@CMouseProcessor@@AEAAXJJPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseC.c)
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C0066FA8 (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C00676A0 (--0CLockedInputSpace@@QEAA@XZ.c)
 */

struct tagRECT *__fastcall InputConfig::Mouse::GetUnionRect(struct tagRECT *__return_ptr retstr)
{
  struct _ERESOURCE *v2; // rcx
  _BYTE v4[8]; // [rsp+20h] [rbp-18h] BYREF
  struct _ERESOURCE **v5; // [rsp+28h] [rbp-10h]

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)v4);
  v2 = *v5;
  *retstr = *(struct tagRECT *)(*((_QWORD *)gpInputConfig + 3) + 24LL);
  ExReleaseResourceLite(v2);
  KeLeaveCriticalRegion();
  return retstr;
}
