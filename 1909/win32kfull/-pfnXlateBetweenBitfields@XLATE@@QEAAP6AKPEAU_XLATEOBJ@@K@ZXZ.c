/*
 * XREFs of ?pfnXlateBetweenBitfields@XLATE@@QEAAP6AKPEAU_XLATEOBJ@@K@ZXZ @ 0x1C014B360
 * Callers:
 *     ?vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C00CFDB0 (-vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C00D7BA0 (-vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x1C014B270 (-vTransparentCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C028BE20 (-vTransparentCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C028BFF0 (-vTransparentCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1C028C120 (-vTransparentCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C028C320 (-vTransparentCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1C028C410 (-vTransparentCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C028C6A0 (-vTransparentCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x1C028C7D0 (-vTransparentCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1C028C910 (-vTransparentCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C2820 (-vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C3120 (-vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1C02C3410 (-vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x1C02C38A0 (-vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
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
