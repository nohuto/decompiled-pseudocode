/*
 * XREFs of HDXDrvEscape @ 0x1C00C3C10
 * Callers:
 *     DrvEscapeRemoteDrivers @ 0x1C00D4BB0 (DrvEscapeRemoteDrivers.c)
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0031ED0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C00C3568 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C00C3708 (--1SEMOBJEX@@QEAA@XZ.c)
 */

__int64 __fastcall HDXDrvEscape(__int64 a1, HSEMAPHORE a2, __int64 a3, HSEMAPHORE a4)
{
  unsigned int v4; // esi
  unsigned int v6; // r14d
  unsigned int v8; // edi
  int v9; // r8d
  __int64 (__fastcall *v10)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD); // rax
  __int64 v11; // rdx
  int v12; // r8d
  struct _ERESOURCE *v13; // rcx
  __int64 v14; // rcx
  unsigned int v16; // [rsp+20h] [rbp-E8h]
  HSEMAPHORE v17; // [rsp+28h] [rbp-E0h]
  unsigned int v18; // [rsp+30h] [rbp-D8h]
  _BYTE v19[96]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v20; // [rsp+110h] [rbp+8h] BYREF

  v20 = a1;
  v4 = (unsigned int)a4;
  v6 = (unsigned int)a2;
  if ( a1 && (v8 = 1, (*(_DWORD *)(a1 + 40) & 1) != 0) )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v19,
      a2,
      a3,
      a4,
      v16,
      v17,
      v18,
      *(HSEMAPHORE *)(a1 + 56),
      4u,
      (HSEMAPHORE)ghsemSprite,
      5u,
      ghsemHT,
      6u);
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), 11);
    PDEVOBJ::vSync(
      (PDEVOBJ *)&v20,
      (struct _SURFOBJ *)((*(_QWORD *)(a1 + 2544) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(a1 + 2544) >> 64)),
      0LL,
      0);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64, _DWORD, _QWORD))(a1 + 2872);
    if ( v10 )
      v8 = v10(*(_QWORD *)(a1 + 2544) + 24LL, v6, v4, a3, 0, 0LL);
    EtwTraceGreLockReleaseSemaphore((__int64)L"po.hsemDevLock()", *(_QWORD *)(a1 + 48), v9);
    v13 = *(struct _ERESOURCE **)(a1 + 48);
    if ( v13 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v13);
      PsLeavePriorityRegion(v14);
    }
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v19, v11, v12);
  }
  else
  {
    return 0;
  }
  return v8;
}
