/*
 * XREFs of ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C01176C8
 * Callers:
 *     ?vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C00B2EC0 (-vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C00B3020 (-vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C01172C0 (-vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0117400 (-vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02627B0 (-vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0262980 (-vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C0262AB0 (-vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0262CB0 (-vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0262DA0 (-vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0263030 (-vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C0263160 (-vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C02632A0 (-vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0298830 (-vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0299160 (-vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C0299450 (-vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 (__fastcall *__fastcall XLATE::pfnXlateBetweenBitfields(XLATE *this))(struct _XLATEOBJ *a1, unsigned int a2)
{
  __int64 (__fastcall *v1)(struct _XLATEOBJ *, unsigned int); // rdx
  int v2; // r8d
  int v3; // ecx

  v1 = iXlateBitfieldsToBitfields;
  v2 = *(_DWORD *)(*((_QWORD *)this + 6) + 24LL);
  v3 = *(_DWORD *)(*((_QWORD *)this + 5) + 24LL);
  if ( (v2 & 8) != 0 )
  {
    if ( (v3 & 0x400000) != 0 )
    {
      return iXlate565ToBGR;
    }
    else if ( (v3 & 0x200000) != 0 )
    {
      return iXlate555ToBGR;
    }
  }
  else if ( (v3 & 8) != 0 )
  {
    if ( (v2 & 0x400000) != 0 )
    {
      return iXlateBGRTo565;
    }
    else if ( (v2 & 0x200000) != 0 )
    {
      return iXlateBGRTo555;
    }
  }
  return v1;
}
