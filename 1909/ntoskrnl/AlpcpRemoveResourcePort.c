/*
 * XREFs of AlpcpRemoveResourcePort @ 0x140660180
 * Callers:
 *     AlpcSecurityDestroyProcedure @ 0x14065FEC0 (AlpcSecurityDestroyProcedure.c)
 *     AlpcViewDestroyProcedure @ 0x14065FFA0 (AlpcViewDestroyProcedure.c)
 *     AlpcSectionDeleteProcedure @ 0x1406D90D0 (AlpcSectionDeleteProcedure.c)
 *     AlpcSectionDestroyProcedure @ 0x1406DBB40 (AlpcSectionDestroyProcedure.c)
 *     AlpcReserveDestroyProcedure @ 0x1406EB7E0 (AlpcReserveDestroyProcedure.c)
 *     AlpcpMapLegacyPortRemoteView @ 0x14071EC80 (AlpcpMapLegacyPortRemoteView.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C6390 (ExfTryToWakePushLock.c)
 */

char __fastcall AlpcpRemoveResourcePort(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rax
  _QWORD *v5; // rcx

  v2 = (volatile signed __int64 *)(a1 + 328);
  v3 = (_QWORD *)(a2 - 48);
  ExAcquirePushLockExclusiveEx(a1 + 328, 0LL);
  v4 = (_QWORD *)*v3;
  if ( (_QWORD *)*v3 != v3 )
  {
    if ( (_QWORD *)v4[1] != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    v4[1] = v5;
    v3[1] = v3;
    *v3 = v3;
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
