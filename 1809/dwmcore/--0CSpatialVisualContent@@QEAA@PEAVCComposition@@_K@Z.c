/*
 * XREFs of ??0CSpatialVisualContent@@QEAA@PEAVCComposition@@_K@Z @ 0x1801DAD70
 * Callers:
 *     ?ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONID@@@Z @ 0x1801B2C08 (-ProcessSetCommonID@CSpatialVisual@@QEAAJPEAVCResourceTable@@PEBUMILCMD_SPATIALVISUAL_SETCOMMONI.c)
 * Callees:
 *     ?RegisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z @ 0x180156F58 (-RegisterSpatialListener@CSpatialResourceManager@@QEAAXPEAUISpatialNotificationListener@@@Z.c)
 */

CSpatialVisualContent *__fastcall CSpatialVisualContent::CSpatialVisualContent(
        CSpatialVisualContent *this,
        struct CComposition *a2,
        __int64 a3)
{
  CSpatialVisualContent *result; // rax

  *((_QWORD *)this + 2) = a2;
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *(_QWORD *)this = &CSpatialVisualContent::`vftable'{for `CContent'};
  *((_QWORD *)this + 7) = &CSpatialVisualContent::`vftable'{for `ISpatialNotificationListener'};
  *((_QWORD *)this + 8) = a3;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_DWORD *)this + 22) = 1056964608;
  *((_DWORD *)this + 23) = 1056964608;
  *((_DWORD *)this + 24) = 2;
  CSpatialResourceManager::RegisterSpatialListener(
    *(CSpatialResourceManager **)(*((_QWORD *)this + 2) + 136LL),
    (CSpatialVisualContent *)((char *)this + 56));
  result = this;
  *((_DWORD *)this + 22) = 1056964608;
  *((_DWORD *)this + 23) = 1056964608;
  *((_DWORD *)this + 24) = 2;
  return result;
}
