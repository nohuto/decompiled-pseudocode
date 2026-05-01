/*
 * XREFs of ?StartDrag@CDragVisualAcc@@UEAAXXZ @ 0x18037AC40
 * Callers:
 *     <none>
 * Callees:
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180315794 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ @ 0x18037ADD0 (-_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::StartDrag(CDragVisualAcc *this)
{
  bool v2; // zf
  const unsigned __int16 *v3; // rcx
  __int128 v4; // xmm0
  IRecordInfo *v5; // xmm1_8
  VARIANTARG pvarg; // [rsp+20h] [rbp-60h] BYREF
  VARIANT newValue; // [rsp+40h] [rbp-40h] BYREF
  VARIANT oldValue; // [rsp+60h] [rbp-20h] BYREF

  if ( !*((_BYTE *)this + 20) )
  {
    v2 = *((_DWORD *)this + 6) == 6;
    *((_BYTE *)this + 20) = 1;
    if ( v2 )
    {
      v3 = &word_180411F30;
      if ( *((_QWORD *)this + 10) )
        v3 = (const unsigned __int16 *)*((_QWORD *)this + 10);
      if ( (int)InitVariantFromString(v3, &pvarg) >= 0 )
      {
        *(_OWORD *)&newValue.vt = *(_OWORD *)&pvarg.vt;
        v4 = *(_OWORD *)((char *)this + 56);
        newValue.pRecInfo = pvarg.pRecInfo;
        v5 = (IRecordInfo *)*((_QWORD *)this + 9);
        *(_OWORD *)&oldValue.vt = v4;
        oldValue.pRecInfo = v5;
        UiaRaiseAutomationPropertyChangedEvent((IRawElementProviderSimple *)this - 4, 30005, &oldValue, &newValue);
        VariantClear(&pvarg);
      }
    }
    CDragVisualAcc::_DismissPlaceModeButtons((IRawElementProviderSimple *)this - 4);
    UiaRaiseAutomationEvent((IRawElementProviderSimple *)this - 4, 20026);
  }
}
