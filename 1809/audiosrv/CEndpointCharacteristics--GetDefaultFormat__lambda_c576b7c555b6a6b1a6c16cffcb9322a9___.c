/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x1800669C0
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x180066AA0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800352F0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___ @ 0x1800664F0 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___.c)
 *     _lambda_c576b7c555b6a6b1a6c16cffcb9322a9_::operator() @ 0x180066BA0 (_lambda_c576b7c555b6a6b1a6c16cffcb9322a9_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800CF24C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18010C51C (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180110954 (-LogEPCError@@YAXPEBDHJ@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4,
        struct tWAVEFORMATEX **a5)
{
  __int64 v7; // rdx
  unsigned int ComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9; // eax
  __int64 v9; // xmm1_8
  unsigned int v10; // ebx
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**(_QWORD **)(a1 + 40) + 40LL))(
         *(_QWORD *)(a1 + 40),
         &PKEY_AudioEngine_OEMFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && (unsigned int)IsValidWfxBlob(&pvar)
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0
    && (unsigned __int8)lambda_c576b7c555b6a6b1a6c16cffcb9322a9_::operator()(a4, pvar.bstrblobVal.pData) )
  {
    ComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9 = CloneWaveFormat(
                                                                       (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                                       a5);
  }
  else
  {
    v9 = *((_QWORD *)a4 + 2);
    v13 = *a4;
    v14 = v9;
    ComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9 = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9___(
                                                                       a1,
                                                                       v7,
                                                                       (__int64)&v13,
                                                                       a5);
  }
  v10 = ComputedDefaultFormat__lambda_c576b7c555b6a6b1a6c16cffcb9322a9;
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetDefaultFormat", 6207, v10);
  return v10;
}
