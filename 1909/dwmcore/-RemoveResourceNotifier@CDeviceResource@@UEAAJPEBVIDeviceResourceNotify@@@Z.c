/*
 * XREFs of ?RemoveResourceNotifier@CDeviceResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004F764
 * Callers:
 *     ?RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180020600 (-RemoveResourceNotifier@CBitmapRealization@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z @ 0x18004F854 (-Remove@-$DynArray@PEAVIDeviceResourceNotify@@$0A@@@QEAAHAEBQEAVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CDeviceResource::RemoveResourceNotifier(
        CDeviceResource *this,
        const struct IDeviceResourceNotify *a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  const struct IDeviceResourceNotify *v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = a2;
  v2 = 0;
  if ( !(unsigned int)DynArray<IDeviceResourceNotify *,0>::Remove((char *)this + 8, &v5) )
  {
    v2 = -2147467259;
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, -2147467259, 0x36u, 0LL);
  }
  return v2;
}
