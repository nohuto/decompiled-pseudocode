/*
 * XREFs of ??_GContextMenuRenderingData@@QEAAPEAXI@Z @ 0x180316EF4
 * Callers:
 *     ?ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z @ 0x180317880 (-ShowContextMenu@SwitchItemThumbnailElement@@IEAAJAEBVContextMenuArgs@@@Z.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1803B5E4C (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagMENUITEMINFOW@@PEBGPEAUtagPOINT@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@PEAUContextMenuRenderingData@@W4ImmersiveContextMenuOptions@@PEAPEAU7@@Z @ 0x1803B67A4 (-_GetRenderingDataForMenuItem@ImmersiveContextMenuHelper@@YAJW4ScaleType@DPIToPPIHelpers@@UtagME.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002D674 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180084E20 (--3@YAXPEAX@Z.c)
 */

ContextMenuRenderingData *__fastcall ContextMenuRenderingData::`scalar deleting destructor'(
        ContextMenuRenderingData *this)
{
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this);
  operator delete(this);
  return this;
}
