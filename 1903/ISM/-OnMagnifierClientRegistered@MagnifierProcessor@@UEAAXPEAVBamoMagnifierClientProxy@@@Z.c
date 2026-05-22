/*
 * XREFs of ?OnMagnifierClientRegistered@MagnifierProcessor@@UEAAXPEAVBamoMagnifierClientProxy@@@Z @ 0x180105840
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180002978 (-InternalAddRef@-$ComPtr@VBamoDragSourceClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x18006C1EC (-InternalRelease@-$ComPtr@VBamoCustomCursorControllerClientProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall MagnifierProcessor::OnMagnifierClientRegistered(
        MagnifierProcessor *this,
        struct BamoMagnifierClientProxy *a2)
{
  __int64 (__fastcall ***v4)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  if ( *((struct BamoMagnifierClientProxy **)this + 2) != a2 )
  {
    v4 = (__int64 (__fastcall ***)(_QWORD))a2;
    Microsoft::WRL::ComPtr<BamoDragSourceClientProxy>::InternalAddRef(&v4);
    v4 = (__int64 (__fastcall ***)(_QWORD))*((_QWORD *)this + 2);
    *((_QWORD *)this + 2) = a2;
    Microsoft::WRL::ComPtr<BamoCustomCursorControllerClientProxy>::InternalRelease((__int64 *)&v4);
  }
}
