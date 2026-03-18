/*
 * XREFs of ACPIQueryCacheCoherencyAttribute @ 0x1C0096E00
 * Callers:
 *     ACPIBusIrpDeviceEnumerated @ 0x1C00966F0 (ACPIBusIrpDeviceEnumerated.c)
 * Callees:
 *     ACPIInternalSetFlags @ 0x1C00023BC (ACPIInternalSetFlags.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIFreeDataBuffs @ 0x1C001D1E4 (AMLIFreeDataBuffs.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIQueryCacheCoherencyAttribute(ULONG_PTR BugCheckParameter2)
{
  signed __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *v4; // rax
  int v5; // edi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v10[2]; // [rsp+30h] [rbp-38h] BYREF
  unsigned __int16 v11; // [rsp+32h] [rbp-36h]
  char v12; // [rsp+40h] [rbp-28h]

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
  v5 = AMLIEvalNameSpaceObject((unsigned __int64 *)v4, v10, 0, 0LL);
  if ( v5 >= 0 )
  {
    if ( v11 != 1 )
      KeBugCheckEx(0xA5u, 8uLL, BugCheckParameter2, *(_QWORD *)(BugCheckParameter2 + 712), v11);
    if ( (v12 & 1) != 0 )
    {
      *(_DWORD *)(BugCheckParameter2 + 892) = 2;
    }
    else
    {
      *(_DWORD *)(BugCheckParameter2 + 892) = 3;
      KeReportCacheIncoherentDevice();
    }
    AMLIFreeDataBuffs((__int64)v10, v7, v8, v9);
  }
  return (unsigned int)v5;
}
