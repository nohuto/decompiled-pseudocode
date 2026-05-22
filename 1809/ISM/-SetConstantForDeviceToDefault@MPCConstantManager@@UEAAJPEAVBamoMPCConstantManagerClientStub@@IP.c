/*
 * XREFs of ?SetConstantForDeviceToDefault@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@IPEBGPEAVBamoAsyncHRESULTProxy@@@Z @ 0x180048F10
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z @ 0x180048458 (-RemoveConstantFromDeviceId@MPCConstantManager@@QEAAXKPEBG@Z.c)
 */

__int64 __fastcall MPCConstantManager::SetConstantForDeviceToDefault(
        MPCConstantManager *this,
        struct BamoMPCConstantManagerClientStub *a2,
        unsigned int a3,
        unsigned __int16 *a4,
        struct BamoAsyncHRESULTProxy *a5)
{
  MPCConstantManager::RemoveConstantFromDeviceId(this, a3, a4);
  return (*(__int64 (__fastcall **)(char *, _QWORD))(*((_QWORD *)a5 + 1) + 24LL))((char *)a5 + 8, 0LL);
}
