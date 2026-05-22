/*
 * XREFs of ?SetResult@BamoAsyncResult_string_Proxy@@UEAAJPEBG@Z @ 0x180114B10
 * Callers:
 *     <none>
 * Callees:
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180023AC8 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180023F84 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ?SetResult@BamoAsyncResult_string_ProxyImpl@BamoImpl@@QEAAJPEBG@Z @ 0x180114B60 (-SetResult@BamoAsyncResult_string_ProxyImpl@BamoImpl@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall BamoAsyncResult_string_Proxy::SetResult(
        BamoAsyncResult_string_Proxy *this,
        const unsigned __int16 *a2)
{
  BamoAsyncResult_string_Proxy *v3; // rbx
  Microsoft::BamoImpl::BamoImplObject *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(
    &v5,
    *(struct Microsoft::BamoImpl::ConnectionIndirector **)(*((_QWORD *)this + 3) + 24LL));
  LODWORD(v3) = BamoImpl::BamoAsyncResult_string_ProxyImpl::SetResult(
                  (BamoAsyncResult_string_Proxy *)((char *)v3 + 8),
                  a2);
  Microsoft::BamoImpl::InternalLock::~InternalLock((volatile signed __int32 **)&v5);
  return (unsigned int)v3;
}
