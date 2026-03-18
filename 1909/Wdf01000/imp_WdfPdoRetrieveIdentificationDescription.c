/*
 * XREFs of imp_WdfPdoRetrieveIdentificationDescription @ 0x1C0001010
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C000BDA0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     memmove @ 0x1C001B400 (memmove.c)
 *     WPP_IFR_SF_sq @ 0x1C003A214 (WPP_IFR_SF_sq.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C005B850 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoRetrieveIdentificationDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  __int64 v5; // rdi
  _FX_DRIVER_GLOBALS *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  size_t v10; // r8
  void (__fastcall *v11)(unsigned __int64, const void *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // r9
  const void *v12; // rdx
  __int16 v13; // ax
  unsigned __int64 v14; // rcx
  void *retaddr; // [rsp+58h] [rbp+0h]
  void *PPObject; // [rsp+60h] [rbp+8h] BYREF

  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, Device, 0x1002u, &PPObject);
  v5 = *((_QWORD *)PPObject + 81);
  v6 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)PPObject + 2);
  if ( v5 && *(_WORD *)(v5 + 8) == 4354 )
  {
    result = 0LL;
  }
  else
  {
    WPP_IFR_SF_sq(
      v6,
      2u,
      0x12u,
      0xAu,
      WPP_FxDevicePdoAPI_cpp_Traceguids,
      "imp_WdfPdoRetrieveIdentificationDescription",
      Device);
    result = 3221225485LL;
  }
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(v6, retaddr);
  if ( (int)result >= 0 )
  {
    v8 = *(_QWORD *)(v5 + 1624);
    if ( v8
      && (v9 = *(_QWORD *)(v8 + 72), !*(_BYTE *)(v9 + 309))
      && (v10 = *(unsigned int *)(v9 + 176), (_DWORD)v10 == IdentificationDescription->IdentificationDescriptionSize) )
    {
      v11 = *(void (__fastcall **)(unsigned __int64, const void *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *))(v9 + 200);
      v12 = *(const void **)(v8 + 24);
      if ( v11 )
      {
        v13 = *(_WORD *)(v9 + 10);
        v14 = v9 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v13 )
          v14 = 0LL;
        v11(v14, v12, IdentificationDescription);
      }
      else
      {
        memmove(IdentificationDescription, v12, v10);
      }
      return 0LL;
    }
    else
    {
      return 3221225488LL;
    }
  }
  return result;
}
