/*
 * XREFs of ?TailButtonLongPressed@BamoPenEventsClientProxy@@UEAAJXZ @ 0x180033550
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?TailButtonLongPressed@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJXZ @ 0x180033590 (-TailButtonLongPressed@BamoPenEventsClientProxyImpl@BamoImpl@@QEAAJXZ.c)
 */

__int64 __fastcall BamoPenEventsClientProxy::TailButtonLongPressed(BamoPenEventsClientProxy *this)
{
  BamoPenEventsClientProxy *v1; // rbx
  Microsoft::BamoImpl::BamoImplObject *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v3,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v1) = BamoImpl::BamoPenEventsClientProxyImpl::TailButtonLongPressed((BamoPenEventsClientProxy *)((char *)v1 + 8));
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v3);
  return (unsigned int)v1;
}
