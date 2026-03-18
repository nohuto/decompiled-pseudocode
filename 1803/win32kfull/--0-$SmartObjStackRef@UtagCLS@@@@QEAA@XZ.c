/*
 * XREFs of ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0138FD0
 * Callers:
 *     _GetClassInfoEx @ 0x1C0018304 (_GetClassInfoEx.c)
 *     InternalRegisterClassEx @ 0x1C001B870 (InternalRegisterClassEx.c)
 *     xxxCreateWindowEx @ 0x1C0030FEC (xxxCreateWindowEx.c)
 * Callees:
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1C0030C48 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(_QWORD *a1)
{
  SmartObjStackRefBase<tagCLS>::Init(a1, 0LL);
  return a1;
}
