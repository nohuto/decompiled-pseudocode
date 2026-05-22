/*
 * XREFs of ?DoesClientHaveRequiredCapablity@@YA_NPEBVBamoInputObserverClientProxy@@PEBG@Z @ 0x1800683C8
 * Callers:
 *     ?RegisterObserverClient@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800685C0 (-RegisterObserverClient@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@.c)
 *     ?SuppressInput@?$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoInputObserverClientProxy@@@Z @ 0x1800686F0 (-SuppressInput@-$CBaseInputObserverServer@$0M@@@UEAAJPEAVBamoInputObserverManagerStub@@PEAVBamoI.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z @ 0x1800E961C (-CheckProcessCapability@CallerIdentity@@YAJKPEBGPEA_N@Z.c)
 */

bool __fastcall DoesClientHaveRequiredCapablity(const struct BamoInputObserverClientProxy *a1, unsigned __int16 *a2)
{
  __int64 v3; // rax
  bool *v4; // r9
  unsigned __int16 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)a1 + 4) + 16LL) + 8LL))(*(_QWORD *)(*((_QWORD *)a1 + 4) + 16LL));
  LOBYTE(v6) = 0;
  return (int)CallerIdentity::CheckProcessCapability(*(_DWORD *)(v3 + 32), a2, &v6, v4) >= 0 && (_BYTE)v6;
}
