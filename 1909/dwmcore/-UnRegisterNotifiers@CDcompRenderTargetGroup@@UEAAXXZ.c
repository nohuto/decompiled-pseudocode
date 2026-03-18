/*
 * XREFs of ?UnRegisterNotifiers@CDcompRenderTargetGroup@@UEAAXXZ @ 0x1800AE730
 * Callers:
 *     ?ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGETGROUP@@PEBXI@Z @ 0x1800AE670 (-ProcessUpdate@CDcompRenderTargetGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DCOMPRENDERTARGET.c)
 *     ??1CDcompRenderTargetGroup@@MEAA@XZ @ 0x1800AE76C (--1CDcompRenderTargetGroup@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z @ 0x1800BBEBC (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@_K@Z.c)
 */

void __fastcall CDcompRenderTargetGroup::UnRegisterNotifiers(CDcompRenderTargetGroup *this)
{
  struct CResource **v1; // rdx

  v1 = (struct CResource **)*((_QWORD *)this + 8);
  if ( v1 )
  {
    CResource::UnRegisterNNotifiersInternal(this, v1, *((unsigned int *)this + 14));
    operator delete(*((void **)this + 8));
    *((_QWORD *)this + 8) = 0LL;
    *((_DWORD *)this + 14) = 0;
  }
}
