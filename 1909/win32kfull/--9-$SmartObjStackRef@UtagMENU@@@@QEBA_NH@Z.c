/*
 * XREFs of ??9?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C011A8A0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0061510 (xxxCreateWindowEx.c)
 *     xxxRealDefWindowProc @ 0x1C00A9FB8 (xxxRealDefWindowProc.c)
 * Callees:
 *     ??8?$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z @ 0x1C0061278 (--8-$SmartObjStackRef@UtagMENU@@@@QEBA_NH@Z.c)
 */

bool __fastcall SmartObjStackRef<tagMENU>::operator!=(__int64 a1)
{
  return !SmartObjStackRef<tagMENU>::operator==(a1);
}
