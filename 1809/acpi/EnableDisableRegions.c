/*
 * XREFs of EnableDisableRegions @ 0x1C009A358
 * Callers:
 *     ACPIDetectFilterDevices @ 0x1C0018C64 (ACPIDetectFilterDevices.c)
 *     ACPIFilterRemoveNonPresentDevices @ 0x1C001A524 (ACPIFilterRemoveNonPresentDevices.c)
 *     ACPIFilterIrpRemoveDevice @ 0x1C002DAE0 (ACPIFilterIrpRemoveDevice.c)
 *     ACPIBusIrpRemoveDevice @ 0x1C004B990 (ACPIBusIrpRemoveDevice.c)
 *     ACPIBusIrpSurpriseRemoval @ 0x1C004BFA0 (ACPIBusIrpSurpriseRemoval.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
 *     ACPIBusIrpStartDeviceWorker @ 0x1C009FA60 (ACPIBusIrpStartDeviceWorker.c)
 *     ACPIBusIrpStopDevice @ 0x1C00AA300 (ACPIBusIrpStopDevice.c)
 *     ACPIFilterIrpStopDevice @ 0x1C00ABD90 (ACPIFilterIrpStopDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B954 (AMLIEvalNameSpaceObject.c)
 *     AMLIGetNSObjectType @ 0x1C000C844 (AMLIGetNSObjectType.c)
 *     AMLIGetFirstChild @ 0x1C00162A8 (AMLIGetFirstChild.c)
 *     AMLIIterateSiblingsNext @ 0x1C0017200 (AMLIIterateSiblingsNext.c)
 *     AMLIGetNamedChild @ 0x1C00207C0 (AMLIGetNamedChild.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     EnableDisableRegions @ 0x1C009A358 (EnableDisableRegions.c)
 *     IsNsobjPciBus @ 0x1C009A45C (IsNsobjPciBus.c)
 */

__int64 __fastcall EnableDisableRegions(__int64 *a1, char a2, char a3)
{
  unsigned int v6; // edi
  __int64 *v7; // rsi
  __int64 i; // rax
  volatile signed __int32 *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // eax
  _QWORD v14[10]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  v7 = AMLIGetNamedChild(a1, 1195725407);
  if ( v7 )
  {
    memset(v14, 0, sizeof(v14));
    WORD1(v14[0]) = 1;
    WORD1(v14[5]) = 1;
    v14[2] = 2LL;
    v14[7] = a2 != 0;
    v6 = AMLIEvalNameSpaceObject((unsigned __int64 *)v7, 0LL, 2, v14);
    AMLIDereferenceHandleEx((__int64)v7);
  }
  if ( (unsigned __int8)IsNsobjPciBus(a1) || a3 )
  {
    for ( i = (__int64)AMLIGetFirstChild(a1); ; i = AMLIIterateSiblingsNext(v10) )
    {
      v10 = (volatile signed __int32 *)i;
      if ( !i )
        break;
      if ( (unsigned int)AMLIGetNSObjectType(i) == 6 && !(unsigned __int8)IsNsobjPciBus(v11) )
      {
        LOBYTE(v12) = a2;
        v13 = EnableDisableRegions(v10, v12, 0LL);
        if ( v13 < 0 )
          v6 = v13;
      }
    }
  }
  return v6;
}
