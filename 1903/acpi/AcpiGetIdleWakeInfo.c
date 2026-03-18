/*
 * XREFs of AcpiGetIdleWakeInfo @ 0x1C009EC90
 * Callers:
 *     ACPISystemPowerUpdateWakeCapabilitiesForPDOs @ 0x1C0027360 (ACPISystemPowerUpdateWakeCapabilitiesForPDOs.c)
 *     ACPISystemPowerUpdateWakeCapabilitiesForFilters @ 0x1C00274E8 (ACPISystemPowerUpdateWakeCapabilitiesForFilters.c)
 *     AcpiGetD3ColdCapability @ 0x1C009EA60 (AcpiGetD3ColdCapability.c)
 * Callees:
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall AcpiGetIdleWakeInfo(__int64 a1, int a2, int *a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  int v7; // ebx
  volatile signed __int32 *v8; // rbp
  int v9; // edi
  _QWORD v10[6]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2;
  memset(v10, 0, 0x28uLL);
  if ( (unsigned int)(v3 - 1) > 4 )
    return 3221225712LL;
  if ( (*(_DWORD *)(a1 + 8) & 0x10000) == 0 )
    return 3221226021LL;
  result = (__int64)AMLIGetNamedChild(*(__int64 **)(a1 + 712), *(_DWORD *)&aS0wS1wS2wS3wS4[4 * v3 - 4]);
  v7 = 0;
  v8 = (volatile signed __int32 *)result;
  if ( result )
  {
    v9 = AMLIEvalNameSpaceObject((__int64 *)result, v10, 0, 0LL);
    AMLIDereferenceHandleEx(v8);
    if ( v9 >= 0 )
    {
      if ( WORD1(v10[0]) == 1 )
      {
        if ( LODWORD(v10[2]) < 5 )
          v7 = LODWORD(v10[2]) + 1;
        *a3 = v7;
        if ( v7 == 5 )
        {
          if ( (*(_DWORD *)(a1 + 952) & 0x800LL) == 0 )
            v7 = 4;
          *a3 = v7;
        }
      }
      else
      {
        v9 = -1073741436;
      }
      AMLIFreeDataBuffs(v10);
    }
    return (unsigned int)v9;
  }
  else
  {
    if ( (*(_QWORD *)(a1 + 952) & 0x100000000LL) == 0 )
      return 3221226021LL;
    *a3 = 4;
  }
  return result;
}
