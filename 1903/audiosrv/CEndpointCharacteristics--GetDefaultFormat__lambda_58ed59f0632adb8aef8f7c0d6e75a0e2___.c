/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x180114C5C
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x180114DA4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 * Callees:
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x180004FAC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x180005344 (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180005874 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800183D0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___ @ 0x180114570 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___.c)
 *     _lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator() @ 0x180115934 (_lambda_53c21122ac2ea0b62ae7643ed09637d7_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1801186D8 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  struct tWAVEFORMATEX **v8; // rsi
  int OffloadDeviceFormat; // ebx
  int ComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2; // eax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int128 v13; // xmm1
  struct tagPROPVARIANT pvar; // [rsp+28h] [rbp-21h] BYREF
  __int128 v16[4]; // [rsp+48h] [rbp-1h] BYREF
  __int64 v17; // [rsp+88h] [rbp+3Fh]
  char v18; // [rsp+B0h] [rbp+67h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  if ( a2 )
  {
    v8 = a5;
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    if ( OffloadDeviceFormat >= 0 )
      lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator()(a4, *v8, &v18);
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
      && (v18 = 0, lambda_53c21122ac2ea0b62ae7643ed09637d7_::operator()(a4, pvar.bstrblobVal.pData, &v18), v18) )
    {
      ComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 = CloneWaveFormat(
                                                                         (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                                         a5);
    }
    else
    {
      v11 = *(_OWORD *)(a4 + 16);
      v16[0] = *(_OWORD *)a4;
      v16[2] = *(_OWORD *)(a4 + 32);
      v12 = *(_QWORD *)(a4 + 64);
      v16[1] = v11;
      v13 = *(_OWORD *)(a4 + 48);
      v17 = v12;
      v16[3] = v13;
      ComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2 = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2___(
                                                                         (__int64)a1,
                                                                         a3,
                                                                         v16,
                                                                         a5);
    }
    OffloadDeviceFormat = ComputedDefaultFormat__lambda_58ed59f0632adb8aef8f7c0d6e75a0e2;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetDefaultFormat", 0x18BAu, OffloadDeviceFormat);
  return (unsigned int)OffloadDeviceFormat;
}
