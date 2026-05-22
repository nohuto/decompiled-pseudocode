/*
 * XREFs of ?OnRunStateChanged@EdgyControllerClientProxy@@MEAAJXZ @ 0x1800275A0
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall EdgyControllerClientProxy::OnRunStateChanged(EdgyControllerClientProxy *this)
{
  unsigned int v2; // ebx
  volatile signed __int32 *v4; // [rsp+30h] [rbp+8h] BYREF

  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v4,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 4) + 24LL));
  v2 = *((_DWORD *)this + 19);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v4);
  return Edges::OnControllerRunStateChanged(*((_QWORD *)this + 14) + 72LL, this, v2);
}
