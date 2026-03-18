/*
 * XREFs of ??4?$SmartObjStackRef@UtagMENU@@@@QEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C01D71B8
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00BFE30 (xxxCreateWindowEx.c)
 * Callees:
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C0106A24 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 */

_QWORD *__fastcall SmartObjStackRef<tagMENU>::operator=(_QWORD *a1, __int64 a2)
{
  a1[2] = 0LL;
  SmartObjStackRefBase<tagMENU>::operator=(a1, a2);
  return a1;
}
