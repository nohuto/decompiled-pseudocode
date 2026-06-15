/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180106DD4
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180034EA0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1801062A4 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     _lambda_068f763f677867854f08eaa5008b23ee_::operator() @ 0x180107C2C (_lambda_068f763f677867854f08eaa5008b23ee_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x18010AD60 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180110954 (-LogEPCError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        __int128 *a4,
        struct tWAVEFORMATEX **a5)
{
  int OffloadDeviceFormat; // ebx
  int ComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee; // eax
  __int128 v10; // xmm1
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13[2]; // [rsp+40h] [rbp-20h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  if ( a2 )
  {
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    if ( OffloadDeviceFormat >= 0 )
      lambda_068f763f677867854f08eaa5008b23ee_::operator()(a4, *a5);
  }
  else
  {
    if ( (*(int (__fastcall **)(_QWORD *, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 5) + 40LL))(
           *((_QWORD **)a1 + 5),
           &PKEY_AudioEngine_OEMFormat,
           &pvar) >= 0
      && pvar.vt == 65
      && (unsigned int)IsValidWfxBlob(&pvar)
      && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0
      && (unsigned __int8)lambda_068f763f677867854f08eaa5008b23ee_::operator()(a4, pvar.bstrblobVal.pData) )
    {
      ComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CloneWaveFormat(
                                                                         (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                                         a5);
    }
    else
    {
      v10 = a4[1];
      v13[0] = *a4;
      v13[1] = v10;
      ComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                                         (__int64)a1,
                                                                         a3,
                                                                         v13,
                                                                         a5);
    }
    OffloadDeviceFormat = ComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetDefaultFormat", 6207, OffloadDeviceFormat);
  return (unsigned int)OffloadDeviceFormat;
}
