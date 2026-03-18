/*
 * XREFs of ACPIQueryCacheCoherencyAttribute @ 0x1C00936D4
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C0094D90 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C0001884 (ACPIInternalSetFlags.c)
 *     AMLIFreeDataBuffs @ 0x1C000A45C (AMLIFreeDataBuffs.c)
 *     AMLIEvalNameSpaceObject @ 0x1C00116EC (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNamedChild @ 0x1C0015140 (AMLIGetNamedChild.c)
 *     memset @ 0x1C0031D40 (memset.c)
 */

__int64 __fastcall ACPIQueryCacheCoherencyAttribute(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rax
  int v5; // edi
  _QWORD v7[7]; // [rsp+30h] [rbp-38h] BYREF

  memset(v7, 0, 0x28uLL);
  if ( (*(_QWORD *)(BugCheckParameter2 + 8) & 0x8000000000000LL) != 0 )
    return 0;
  v2 = ACPIInternalSetFlags((void *)(BugCheckParameter2 + 952), 0x1000000uLL);
  if ( (v2 & v3) != 0 )
    return 0;
  v4 = AMLIGetNamedChild(*(__int64 **)(BugCheckParameter2 + 712), 1094927199);
  if ( !v4 )
  {
    *(_DWORD *)(BugCheckParameter2 + 892) = 1;
    return 0;
  }
  v5 = AMLIEvalNameSpaceObject(v4, v7, 0, 0LL);
  if ( v5 >= 0 )
  {
    if ( WORD1(v7[0]) != 1 )
      KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 712), WORD1(v7[0]));
    if ( (v7[2] & 1) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 892) = 2;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 892) = 3;
      KeReportCacheIncoherentDevice();
    }
    AMLIFreeDataBuffs(v7);
  }
  return (unsigned int)v5;
}
