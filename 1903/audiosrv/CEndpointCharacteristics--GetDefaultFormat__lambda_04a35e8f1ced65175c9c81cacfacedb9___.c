/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180114B44
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180017BB0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 * Callees:
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180004FAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180005344 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180005874 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800183D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___ @ 0x180114014 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___.c)
 *     _lambda_04a35e8f1ced65175c9c81cacfacedb9_::operator() @ 0x180115754 (_lambda_04a35e8f1ced65175c9c81cacfacedb9_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1801186D8 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        __int128 *a4,
        struct tWAVEFORMATEX **a5)
{
  int OffloadDeviceFormat; // ebx
  int ComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9; // eax
  __int128 v10; // xmm1
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13[2]; // [rsp+40h] [rbp-20h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  if ( a2 )
  {
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    if ( OffloadDeviceFormat >= 0 )
      lambda_04a35e8f1ced65175c9c81cacfacedb9_::operator()(a4, *a5);
  }
  else
  {
    if ( (*(int (__fastcall **)(_QWORD *, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 5) + 40LL))(
           *((_QWORD **)a1 + 5),
           &PKEY_AudioEngine_OEMFormat,
           &pvar) >= 0
      && pvar.vt == 65
      && IsValidWfxBlob(&pvar)
      && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0
      && (unsigned __int8)lambda_04a35e8f1ced65175c9c81cacfacedb9_::operator()(a4, pvar.bstrblobVal.pData) )
    {
      ComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = CloneWaveFormat(
                                                                         (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                                         a5);
    }
    else
    {
      v10 = a4[1];
      v13[0] = *a4;
      v13[1] = v10;
      ComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9 = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9___(
                                                                         (__int64)a1,
                                                                         a3,
                                                                         v13,
                                                                         a5);
    }
    OffloadDeviceFormat = ComputedDefaultFormat__lambda_04a35e8f1ced65175c9c81cacfacedb9;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetDefaultFormat", 0x18BAu, OffloadDeviceFormat);
  return (unsigned int)OffloadDeviceFormat;
}
