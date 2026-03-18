/*
 * XREFs of ?GetPrimaryRect@Mouse@InputConfig@@SA?AUtagRECT@@XZ @ 0x1C0153778
 * Callers:
 *     ?GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouseCoordinateOptions@@@Z @ 0x1C003D07C (-GetMouseCoordinateAbsolute@CMouseProcessor@@AEAAXJJKPEAUtagPOINT@@PEAU_SUBPIXELS@@_K2W4GetMouse.c)
 * Callees:
 *     ??0CLockedInputSpace@@QEAA@XZ @ 0x1C003CF5C (--0CLockedInputSpace@@QEAA@XZ.c)
 *     ??1CEResourceLockExclusive@@QEAA@XZ @ 0x1C00AD1D4 (--1CEResourceLockExclusive@@QEAA@XZ.c)
 */

struct tagRECT *__fastcall InputConfig::Mouse::GetPrimaryRect(
        struct tagRECT *__return_ptr retstr,
        struct CEResource *a2)
{
  struct tagRECT *v4; // [rsp+20h] [rbp-18h] BYREF
  PERESOURCE *v5; // [rsp+28h] [rbp-10h] BYREF

  CLockedInputSpace::CLockedInputSpace((CLockedInputSpace *)&v4, a2);
  v4 = (struct tagRECT *)*((_QWORD *)gpInputConfig + 3);
  *retstr = v4[38];
  CEResourceLockExclusive::~CEResourceLockExclusive(&v5);
  return retstr;
}
