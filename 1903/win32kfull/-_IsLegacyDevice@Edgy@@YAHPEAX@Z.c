/*
 * XREFs of ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01F7B6C
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01F713C (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01F7FCC (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00D0948 (HMValidateHandleNoSecure.c)
 *     _GetTouchValidationStatus @ 0x1C01E1108 (_GetTouchValidationStatus.c)
 *     ?_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z @ 0x1C01F7558 (-_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z.c)
 */

_BOOL8 __fastcall Edgy::_IsLegacyDevice(Edgy *this, const unsigned __int16 *a2, __int64 a3, unsigned int *a4)
{
  int v4; // eax
  BOOL v6; // ebx
  __int64 v7; // rax
  _BOOL8 result; // rax
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v4 = gForceLegacyMode;
  if ( !gForceLegacyMode )
  {
    v9 = 0;
    v6 = 1;
    if ( (unsigned int)Edgy::_GetDWordFromRegistry(this, a2, (unsigned __int16 *)&v9, a4) )
      v6 = v9 != 1;
    v4 = v6 + 1;
    gForceLegacyMode = v6 + 1;
  }
  result = 1;
  if ( v4 != 1 )
  {
    LOBYTE(a2) = 19;
    v7 = HMValidateHandleNoSecure((unsigned __int64)this, (__int64)a2, a3, (__int64)a4);
    if ( !v7 || (unsigned int)GetTouchValidationStatus(v7) == 1 )
      return 0;
  }
  return result;
}
