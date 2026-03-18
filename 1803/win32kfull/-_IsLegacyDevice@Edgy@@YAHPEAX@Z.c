/*
 * XREFs of ?_IsLegacyDevice@Edgy@@YAHPEAX@Z @ 0x1C01BEC7C
 * Callers:
 *     ?_GetArcData@Edgy@@YA?AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01BE2DC (-_GetArcData@Edgy@@YA-AUtagARC_DATA@1@AEAUtagEDGY_DATA@@QEAX@Z.c)
 *     ?_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z @ 0x1C01BF134 (-_StoreLastUpDataAndPost@Edgy@@YAXAEAUtagEDGY_DATA@@QEAX@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00270B8 (HMValidateHandleNoSecure.c)
 *     _GetTouchValidationStatus @ 0x1C01AA538 (_GetTouchValidationStatus.c)
 *     ?_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z @ 0x1C01BE6B8 (-_GetDWordFromRegistry@Edgy@@YAHPEBG0PEAK@Z.c)
 */

__int64 __fastcall Edgy::_IsLegacyDevice(Edgy *this, const unsigned __int16 *a2, __int64 a3, unsigned int *a4)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  BOOL v7; // edi
  int v8; // [rsp+38h] [rbp+10h] BYREF

  result = gForceLegacyMode;
  v5 = 0;
  if ( !gForceLegacyMode )
  {
    v8 = 0;
    v7 = 1;
    if ( (unsigned int)Edgy::_GetDWordFromRegistry(this, a2, (unsigned __int16 *)&v8, a4) )
      v7 = v8 != 1;
    result = (unsigned int)(v7 + 1);
    gForceLegacyMode = v7 + 1;
  }
  if ( (_DWORD)result != 1 )
  {
    LOBYTE(a2) = 19;
    result = HMValidateHandleNoSecure((unsigned __int64)this, (__int64)a2);
    if ( result )
    {
      LOBYTE(v5) = (unsigned int)GetTouchValidationStatus(result) != 1;
      return v5;
    }
  }
  return result;
}
