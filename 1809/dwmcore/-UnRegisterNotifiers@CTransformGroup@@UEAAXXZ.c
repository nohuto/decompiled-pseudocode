/*
 * XREFs of ?UnRegisterNotifiers@CTransformGroup@@UEAAXXZ @ 0x18001CD80
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x18001CB30 (--1CTransformGroup@@MEAA@XZ.c)
 *     ?ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z @ 0x18001CC68 (-ProcessUpdate@CTransformGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_TRANSFORMGROUP@@PEBXI@Z.c)
 * Callees:
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18005B390 (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800BAE7C (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall CTransformGroup::UnRegisterNotifiers(CTransformGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 23);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((_DWORD *)this + 44));
    WPF::ProcessHeapImpl::Free(*((void **)this + 23));
    *((_QWORD *)this + 23) = 0LL;
    *((_DWORD *)this + 44) = 0;
  }
}
