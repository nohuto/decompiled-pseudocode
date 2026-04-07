/*
 * XREFs of ?_RemoveVisuals@CProjectionBorderManager@@AEAAXAEAV?$DynArray@PEAVCProjectionBorderVisual@@$0A@@@@Z @ 0x180089D2C
 * Callers:
 *     ?UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ @ 0x18003C770 (-UpdateCaptureControllerPropertiesFromDisplays@CProjectionBorderManager@@UEAAJXZ.c)
 *     ?StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800883F0 (-StopDisplayCapture@CProjectionBorderManager@@UEAAJAEBUDWM_CAPTURE_TOKEN@@@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180011CF0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180021F50 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180033B00 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180036620 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CProjectionBorderManager::_RemoveVisuals(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  CBaseObject *v4; // rsi
  __int64 v5; // rcx
  struct _RTL_CRITICAL_SECTION *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a2 + 24); i = (unsigned int)(i + 1) )
  {
    v4 = *(CBaseObject **)(*(_QWORD *)a2 + 8 * i);
    if ( v4 )
    {
      v5 = *((_QWORD *)v4 + 3);
      if ( v5 )
        VisualCollection::Remove((VisualCollection *)(v5 + 32), *(struct CVisual **)(*(_QWORD *)a2 + 8 * i));
      CBaseObject::Release(v4);
    }
  }
  *(_DWORD *)(a2 + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize(a2, 8u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v6);
}
