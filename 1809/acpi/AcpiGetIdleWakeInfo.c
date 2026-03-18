/*
 * XREFs of AcpiGetIdleWakeInfo @ 0x1C00996A0
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C0016860 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0017BE0 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     AcpiGetD3ColdCapability @ 0x1C0098B30 (AcpiGetD3ColdCapability.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 result; // rax
  int v6; // ebx
  __int64 v7; // rbp
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int16 v13; // [rsp+22h] [rbp-46h]
  unsigned int v14; // [rsp+30h] [rbp-38h]

  if ( (unsigned int)(a2 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    return 3221226021LL;
  result = (__int64)AMLIGetNamedChild(*(__int64 **)(a1 + 712), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * a2 - 4]);
  v6 = 0;
  v7 = result;
  if ( result )
  {
    v8 = AMLIEvalNameSpaceObject((unsigned __int64 *)result, v12, 0, 0LL);
    AMLIDereferenceHandleEx(v7);
    if ( v8 >= 0 )
    {
      if ( v13 == 1 )
      {
        if ( v14 < 5 )
          v6 = v14 + 1;
        *a3 = v6;
        if ( v6 == 5 )
        {
          if ( (*(_DWORD *)(a1 + 952) & 0x800LL) == 0 )
            v6 = 4;
          *a3 = v6;
        }
      }
      else
      {
        v8 = -1073741436;
      }
      AMLIFreeDataBuffs((__int64)v12, v9, v10, v11);
    }
    return (unsigned int)v8;
  }
  else
  {
    if ( (*(_QWORD *)(a1 + 952) & 0x100000000LL) == 0 )
      return 3221226021LL;
    *a3 = 4;
  }
  return result;
}
