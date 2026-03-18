/*
 * XREFs of vDrvInvalidateRect @ 0x1C02B93AC
 * Callers:
 *     RemoteRedrawRectangle @ 0x1C020D198 (RemoteRedrawRectangle.c)
 * Callees:
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C016051C (--1SEMOBJEX@@QEAA@XZ.c)
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C01605F4 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vDrvInvalidateRect(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdx
  void (__fastcall *v4)(__int64); // rax
  _BYTE v5[104]; // [rsp+90h] [rbp-68h] BYREF
  _QWORD *v6; // [rsp+100h] [rbp+8h] BYREF

  if ( a1 )
  {
    v6 = (_QWORD *)a1;
    if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
    {
      SEMOBJEX::SEMOBJEX(
        (SEMOBJEX *)v5,
        ghsemDynamicModeChange,
        1,
        ghsemGreLock,
        2u,
        ghsemDCVisRgn,
        3u,
        *(HSEMAPHORE *)(a1 + 64),
        4u,
        ghsemSprite,
        5u,
        ghsemHT,
        6u);
      GreAcquireSemaphore(v6[6]);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v6[6], 11LL);
      PDEVOBJ::vSync((PDEVOBJ *)&v6, (struct _SURFOBJ *)((v6[319] + 24LL) & -(__int64)(v6[319] != 0LL)), 0LL, 0);
      v3 = v6;
      v4 = (void (__fastcall *)(__int64))v6[418];
      if ( v4 )
      {
        v4(a2);
        v3 = v6;
      }
      EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v3[6]);
      GreReleaseSemaphoreInternal(v6[6]);
      SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v5);
    }
  }
}
