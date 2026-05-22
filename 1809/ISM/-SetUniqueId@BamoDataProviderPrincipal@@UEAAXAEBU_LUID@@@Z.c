/*
 * XREFs of ?SetUniqueId@BamoDataProviderPrincipal@@UEAAXAEBU_LUID@@@Z @ 0x180098980
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?UpdateUniqueIdRemoteCache@BamoDataProviderPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x18009A29C (-UpdateUniqueIdRemoteCache@BamoDataProviderPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Micros.c)
 */

void __fastcall BamoDataProviderPrincipal::SetUniqueId(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        const struct _LUID *a2)
{
  char *v3; // rsi
  __int64 v4; // rbx
  volatile signed __int32 *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v5, this[3]);
  v4 = *((_QWORD *)v3 + 4);
  *((struct _LUID *)v3 + 5) = *a2;
  while ( v4 )
  {
    if ( *(_BYTE *)(v4 + 32) )
      BamoImpl::BamoDataProviderPrincipalImpl::UpdateUniqueIdRemoteCache(
        (BamoImpl::BamoDataProviderPrincipalImpl *)v3,
        (struct Microsoft::BamoImpl::BamoStubImpl *)v4);
    v4 = *(_QWORD *)(v4 + 48);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v5);
}
