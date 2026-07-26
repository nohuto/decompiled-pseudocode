/*
 * XREFs of NdisLWMDeregisterMiniportDriver @ 0x1C00F1620
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_ @ 0x1C00260B0 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z @ 0x1C00F0F44 (-ndisInternalDeregisterMiniportDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisLWMDeregisterMiniportDriver(_NDIS_M_DRIVER_BLOCK *this)
{
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x80u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids, (__int64)this);
  if ( SLOBYTE(this->Flags) >= 0 )
    ndisBugCheckEx(0x29uLL, 1uLL, (ULONG_PTR)this, 0LL);
  ndisInternalDeregisterMiniportDriver(this);
  ExFreePoolWithTag(this, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_(0x81u, &WPP_50d53b6be4163c1258975c6e797e4b92_Traceguids);
}
