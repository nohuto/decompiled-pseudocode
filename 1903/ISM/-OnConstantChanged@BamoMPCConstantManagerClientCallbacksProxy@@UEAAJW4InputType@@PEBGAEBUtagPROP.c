/*
 * XREFs of ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxy@@UEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x180111DA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxyImpl@BamoImpl@@QEAAJW4InputType@@PEBGAEBUtagPROPVARIANT@@2@Z @ 0x180111E14 (-OnConstantChanged@BamoMPCConstantManagerClientCallbacksProxyImpl@BamoImpl@@QEAAJW4InputType@@PE.c)
 */

__int64 __fastcall BamoMPCConstantManagerClientCallbacksProxy::OnConstantChanged(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  __int64 v6; // rbx
  Microsoft::BamoImpl::BamoImplObject *v10; // [rsp+40h] [rbp+8h] BYREF

  v6 = a1;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v10,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*(_QWORD *)(a1 + 24) + 24LL));
  LODWORD(v6) = BamoImpl::BamoMPCConstantManagerClientCallbacksProxyImpl::OnConstantChanged(v6 + 8, a2, a3, a4, a5);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v10);
  return (unsigned int)v6;
}
