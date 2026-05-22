/*
 * XREFs of ?SetScaleOverride@BamoSystemCursorControllerPrincipal@@UEAAXM@Z @ 0x180094620
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 *     ?UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoStubImpl@2Microsoft@@@Z @ 0x180095044 (-UpdateScaleOverrideRemoteCache@BamoSystemCursorControllerPrincipalImpl@BamoImpl@@AEAAXPEAVBamoS.c)
 */

void __fastcall BamoSystemCursorControllerPrincipal::SetScaleOverride(
        struct Microsoft::BamoImpl::ConnectionIndirector **this,
        float a2)
{
  char *v2; // rdi
  __int64 v3; // rbx
  volatile signed __int32 *v4; // [rsp+40h] [rbp+8h] BYREF

  v2 = (char *)(this + 1);
  Microsoft::BamoImpl::InternalLock::InternalLock(&v4, this[3]);
  v3 = *((_QWORD *)v2 + 4);
  *((float *)v2 + 10) = a2;
  while ( v3 )
  {
    if ( *(_BYTE *)(v3 + 32) )
      BamoImpl::BamoSystemCursorControllerPrincipalImpl::UpdateScaleOverrideRemoteCache(
        (BamoImpl::BamoSystemCursorControllerPrincipalImpl *)v2,
        (struct Microsoft::BamoImpl::BamoStubImpl *)v3);
    v3 = *(_QWORD *)(v3 + 48);
  }
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v4);
}
