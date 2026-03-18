/*
 * XREFs of ?UnRegisterNotifiers@CGeometry2DGroup@@UEAAXXZ @ 0x180212950
 * Callers:
 *     ?ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z @ 0x180211CC8 (-ProcessUpdate@CGeometry2DGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_GEOMETRY2DGROUP@@PEBXI@Z.c)
 *     ??1CGeometry2DGroup@@MEAA@XZ @ 0x180212B28 (--1CGeometry2DGroup@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800B9D7C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

void __fastcall CGeometry2DGroup::UnRegisterNotifiers(CGeometry2DGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 13);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((unsigned int *)this + 24));
    operator delete(*((void **)this + 13));
    *((_QWORD *)this + 13) = 0LL;
    *((_DWORD *)this + 24) = 0;
  }
}
