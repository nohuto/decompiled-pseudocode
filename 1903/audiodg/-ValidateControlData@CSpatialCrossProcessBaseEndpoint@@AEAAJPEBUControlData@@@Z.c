/*
 * XREFs of ?ValidateControlData@CSpatialCrossProcessBaseEndpoint@@AEAAJPEBUControlData@@@Z @ 0x14005D3D4
 * Callers:
 *     ?GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z @ 0x14005BFBC (-GetGrantedDynamicObjectCount@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI@Z.c)
 *     ?GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z @ 0x14005C328 (-GetObjectsAvailableForProcessing@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAI0@Z.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z @ 0x14005CC34 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAUICrossProcessMemory@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140017DA0 (_guard_dispatch_icall_nop.c)
 *     ?SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x14005AC88 (-SpatialCPTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CSpatialCrossProcessBaseEndpoint::ValidateControlData(
        CSpatialCrossProcessBaseEndpoint *this,
        const struct ControlData *a2)
{
  unsigned int v2; // ebx
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  if ( !a2 )
  {
    v2 = -2147467261;
LABEL_8:
    SpatialCPTraceLoggingErrorHelper("CSpatialCrossProcessBaseEndpoint::ValidateControlData", 582, v2);
    v5 = 1;
    (**((void (__fastcall ***)(char *, __int64, int *))this + 94))((char *)this + 752, 2LL, &v5);
    return v2;
  }
  if ( *(_DWORD *)a2 != 806
    || *((_DWORD *)a2 + 1) != 1396785988
    || !(*((_DWORD *)a2 + 130) + *((_DWORD *)a2 + 131))
    || *((_DWORD *)a2 + 132) < 0x340u )
  {
    v2 = -2005139387;
    goto LABEL_8;
  }
  return v2;
}
