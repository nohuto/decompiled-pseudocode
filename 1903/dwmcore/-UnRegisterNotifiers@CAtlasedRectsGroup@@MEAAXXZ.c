/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x18002AE80
 * Callers:
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x180029DD0 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x180029E28 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ATLASEDRECTSGROUP@@PEB.c)
 * Callees:
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x18002AEC8 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800B9D7C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

void __fastcall CAtlasedRectsGroup::UnRegisterNotifiers(CAtlasedRectsGroup *this)
{
  struct CResource **v2; // rdx

  CResource::UnRegisterNotifier<CImageSource *>(this, (char *)this + 56);
  v2 = (struct CResource **)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v2, *((unsigned int *)this + 16));
    operator delete(*((void **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
    *((_DWORD *)this + 16) = 0;
  }
}
