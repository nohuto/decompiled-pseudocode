/*
 * XREFs of EtwTraceAutoBoostClearFloor @ 0x14032D13C
 * Callers:
 *     KiAbThreadRemoveBoosts @ 0x14003EE20 (KiAbThreadRemoveBoosts.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     ExpWorkerInitialization @ 0x140A164A4 (ExpWorkerInitialization.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14001D750 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostClearFloor(__int64 a1, __int64 a2, int a3)
{
  int v3; // eax
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  __int64 *v9; // [rsp+40h] [rbp-28h] BYREF
  int v10; // [rsp+48h] [rbp-20h]
  int v11; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_DWORD *)(a1 + 1616);
  v4 = *(_QWORD *)(a1 + 544);
  v6 = a2;
  v7 = v3;
  v9 = &v6;
  v11 = 0;
  v8 = a3;
  v10 = 16;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v4 + 1776), (int)&v9, 1, 0x20000200u, 1347, 5249538);
}
