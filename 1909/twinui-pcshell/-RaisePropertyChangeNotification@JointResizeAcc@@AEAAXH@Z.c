/*
 * XREFs of ?RaisePropertyChangeNotification@JointResizeAcc@@AEAAXH@Z @ 0x1803F1378
 * Callers:
 *     ?UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z @ 0x1803F16E0 (-UpdateDrag@JointResizeAcc@@UEAAXPEAUIApplicationView@@0@Z.c)
 * Callees:
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x180395684 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 */

void __fastcall JointResizeAcc::RaisePropertyChangeNotification(IRawElementProviderSimple *pProvider, PROPERTYID id)
{
  const WCHAR *v4; // rcx
  int inited; // eax
  const unsigned __int16 *lpVtbl; // rcx
  __int128 v7; // xmm0
  struct IRawElementProviderSimpleVtbl *v8; // xmm1_8
  VARIANT pvar; // [rsp+20h] [rbp-60h] BYREF
  VARIANT newValue; // [rsp+40h] [rbp-40h] BYREF
  VARIANT oldValue; // [rsp+60h] [rbp-20h] BYREF
  PCWSTR prgsz; // [rsp+A0h] [rbp+20h] BYREF

  pvar.vt = 0;
  if ( id == 30139 )
  {
    lpVtbl = &szAgent;
    if ( pProvider[12].lpVtbl )
      lpVtbl = (const unsigned __int16 *)pProvider[12].lpVtbl;
    inited = InitVariantFromString(lpVtbl, &pvar);
  }
  else
  {
    if ( id != 30140 )
      goto LABEL_11;
    v4 = &szAgent;
    if ( pProvider[12].lpVtbl )
      v4 = (const WCHAR *)pProvider[12].lpVtbl;
    prgsz = v4;
    inited = InitVariantFromStringArray(&prgsz, 1u, &pvar);
  }
  if ( inited >= 0 )
  {
    *(_OWORD *)&newValue.vt = *(_OWORD *)&pvar.vt;
    v7 = *(_OWORD *)&pProvider[6].lpVtbl;
    newValue.pRecInfo = pvar.pRecInfo;
    v8 = pProvider[8].lpVtbl;
    *(_OWORD *)&oldValue.vt = v7;
    oldValue.pRecInfo = (IRecordInfo *)v8;
    UiaRaiseAutomationPropertyChangedEvent(pProvider, id, &oldValue, &newValue);
  }
LABEL_11:
  VariantClear(&pvar);
}
