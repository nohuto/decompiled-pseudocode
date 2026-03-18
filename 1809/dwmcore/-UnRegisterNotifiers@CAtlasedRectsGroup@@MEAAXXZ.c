/*
 * XREFs of ?UnRegisterNotifiers@CAtlasedRectsGroup@@MEAAXXZ @ 0x1800A00D0
 * Callers:
 *     ??1CAtlasedRectsGroup@@MEAA@XZ @ 0x18009FED0 (--1CAtlasedRectsGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@Z @ 0x1800A0148 (-ProcessUpdate@CAtlasedRectsGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ATLASEDRECTSGROUP@@PEBXI@.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18005B390 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ??$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z @ 0x1800A0118 (--$UnRegisterNotifier@PEAVCImageSource@@@CResource@@QEAAXAEAPEAVCImageSource@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CAtlasedRectsGroup::UnRegisterNotifiers(CAtlasedRectsGroup *this)
{
  struct CResource **v2; // rdx

  CResource::UnRegisterNotifier<CImageSource *>(this, (char *)this + 56);
  v2 = (struct CResource **)*((_QWORD *)this + 9);
  if ( v2 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v2, *((_DWORD *)this + 16));
    WPF::ProcessHeapImpl::Free(*((void **)this + 9));
    *((_QWORD *)this + 9) = 0LL;
    *((_DWORD *)this + 16) = 0;
  }
}
