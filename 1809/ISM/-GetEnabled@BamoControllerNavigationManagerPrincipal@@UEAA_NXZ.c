/*
 * XREFs of ?GetEnabled@BamoControllerNavigationManagerPrincipal@@UEAA_NXZ @ 0x180031C40
 * Callers:
 *     <none>
 * Callees:
 *     ??0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z @ 0x180010CE0 (--0InternalLock@BamoImpl@Microsoft@@QEAA@PEAVConnectionIndirector@12@@Z.c)
 *     ??1InternalLock@BamoImpl@Microsoft@@QEAA@XZ @ 0x180010D80 (--1InternalLock@BamoImpl@Microsoft@@QEAA@XZ.c)
 */

bool __fastcall BamoControllerNavigationManagerPrincipal::GetEnabled(
        struct Microsoft::BamoImpl::ConnectionIndirector **this)
{
  struct Microsoft::BamoImpl::ConnectionIndirector **v1; // rbx
  volatile signed __int32 *v3; // [rsp+30h] [rbp+8h] BYREF

  v1 = this;
  Microsoft::BamoImpl::InternalLock::InternalLock(&v3, this[3]);
  LOBYTE(v1) = *((_BYTE *)v1 + 48);
  Microsoft::BamoImpl::InternalLock::~InternalLock(&v3);
  return (char)v1;
}
