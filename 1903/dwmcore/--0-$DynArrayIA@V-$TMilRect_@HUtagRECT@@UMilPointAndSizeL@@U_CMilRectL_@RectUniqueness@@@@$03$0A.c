/*
 * XREFs of ??0?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$03$0A@@@QEAA@XZ @ 0x1801C22F8
 * Callers:
 *     ?OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800D3DE0 (-OnChanged@CWindowNode@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Present@CHwCompSwapChainTarget@@UEAAJ_N@Z @ 0x1802401F0 (-Present@CHwCompSwapChainTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

__int64 __fastcall DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>::DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,4,0>(
        __int64 a1)
{
  char *v2; // rcx

  v2 = (char *)(a1 + 32);
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)a1 = v2;
  *(_QWORD *)(a1 + 8) = v2;
  *(_DWORD *)(a1 + 16) = 4;
  *(_DWORD *)(a1 + 20) = 4;
  `vector constructor iterator'(
    v2,
    16LL,
    4LL,
    (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
  return a1;
}
