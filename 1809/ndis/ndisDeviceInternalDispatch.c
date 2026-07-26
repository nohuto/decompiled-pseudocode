/*
 * XREFs of ndisDeviceInternalDispatch @ 0x1C0068FC4
 * Callers:
 *     NdisWdfDeviceInternalControlIrpHandler @ 0x1C0065250 (NdisWdfDeviceInternalControlIrpHandler.c)
 *     ndisDeviceInternalIrpDispatch @ 0x1C00690B0 (ndisDeviceInternalIrpDispatch.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     ndisDereferencePackage @ 0x1C00B6834 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisDummyHandler @ 0x1C00EE614 (ndisDummyHandler.c)
 */

__int64 __fastcall ndisDeviceInternalDispatch(__int64 a1, char *a2, _IRP *a3)
{
  unsigned int v3; // edi
  _DEVICE_OBJECT *v5; // rsi
  char v8; // r15

  v3 = 0;
  v5 = 0LL;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x35u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1, a3);
  ndisReferencePackage(&ndisPkgs);
  v8 = *a2;
  if ( *a2 == 17 )
    v5 = (_DEVICE_OBJECT *)*((_QWORD *)a2 + 484);
  else
    v3 = ndisDummyHandler(a1, a2, a3);
  if ( v8 == 17 && v5 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v3 = IofCallDriver(v5, a3);
  }
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(0x36u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, a1, a3);
  return v3;
}
