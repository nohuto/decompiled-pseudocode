/*
 * XREFs of ?_ReadRegistryValue@MultitaskingViewConfigHelpers@@YAJPEAUHKEY__@@PEBGPEAK@Z @ 0x1802F97B4
 * Callers:
 *     ??$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z @ 0x1802F8838 (--$_ReadOptionalRegistryValue@M@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAM@Z.c)
 *     ??$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z @ 0x1802F8874 (--$_ReadOptionalRegistryValue@N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEAN@Z.c)
 *     ??$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z @ 0x1802F88B0 (--$_ReadOptionalRegistryValue@_N@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBGPEA_N@Z.c)
 *     ??$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEAJ@Z @ 0x1802F88E0 (--$_ReadOptionalRegistryValueWithPrefix@J@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@PEBG1PEA.c)
 *     ?_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z @ 0x1802F92CC (-_ReadFrameMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUFrameMetrics@@@Z.c)
 *     ?_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z @ 0x1802F94C0 (-_ReadGridMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUGridMetrics@@@Z.c)
 *     ?_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopNewButtonMetrics@@@Z @ 0x1802F95D0 (-_ReadNewVirtualDesktopButtonMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDe.c)
 *     ?_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetrics@@@Z @ 0x1802F9800 (-_ReadThumbnailSizeMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUThumbnailSizeMetric.c)
 *     ?_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetrics@@@Z @ 0x1802F999C (-_ReadVirtualDesktopMetrics@MultitaskingViewConfigHelpers@@YAXPEAUHKEY__@@AEAUVirtualDesktopMetr.c)
 * Callees:
 *     <none>
 */

LSTATUS __fastcall MultitaskingViewConfigHelpers::_ReadRegistryValue(
        MultitaskingViewConfigHelpers *this,
        const WCHAR *a2,
        unsigned __int16 *a3,
        unsigned int *a4)
{
  LSTATUS result; // eax
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  *(_DWORD *)a3 = 0;
  v5 = 4;
  result = RegGetValueW((HKEY)this, 0LL, a2, 0x10u, 0LL, a3, &v5);
  if ( result > 0 )
    return (unsigned __int16)result | 0x80070000;
  return result;
}
