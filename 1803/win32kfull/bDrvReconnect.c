/*
 * XREFs of bDrvReconnect @ 0x1C028E8D4
 * Callers:
 *     RemotePassthruDisable @ 0x1C01D6C90 (RemotePassthruDisable.c)
 *     xxxRemoteConsoleShadowStart @ 0x1C01D7170 (xxxRemoteConsoleShadowStart.c)
 * Callees:
 *     ??0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z @ 0x1C01383B0 (--0SEMOBJEX@@QEAA@PEAUHSEMAPHORE__@@K0K0K0K0K0K0K0K@Z.c)
 *     ??1SEMOBJEX@@QEAA@XZ @ 0x1C01384A8 (--1SEMOBJEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall bDrvReconnect(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  _QWORD *v7; // rcx
  __int64 (__fastcall *v8)(__int64, __int64); // rax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  void (__fastcall *v11)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  __int64 v13; // [rsp+98h] [rbp-19h] BYREF
  _BYTE v14[96]; // [rsp+A8h] [rbp-9h] BYREF
  _QWORD *v15; // [rsp+118h] [rbp+67h] BYREF

  v15 = (_QWORD *)a1;
  if ( a1 && (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    SEMOBJEX::SEMOBJEX(
      (SEMOBJEX *)v14,
      ghsemDynamicModeChange,
      1,
      ghsemGreLock,
      2u,
      ghsemDCVisRgn,
      3u,
      *(HSEMAPHORE *)(a1 + 56),
      4u,
      ghsemSprite,
      5u,
      ghsemHT,
      6u);
    GreAcquireSemaphore(v15[6]);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"po.hsemDevLock()", v15[6], 11LL);
    PDEVOBJ::vSync((PDEVOBJ *)&v15, (struct _SURFOBJ *)((v15[318] + 24LL) & -(__int64)(v15[318] != 0LL)), 0LL, 0);
    v7 = v15;
    v8 = (__int64 (__fastcall *)(__int64, __int64))v15[414];
    if ( v8 )
    {
      v9 = v8(a2, a3);
      if ( v9 )
        *(_DWORD *)(v15[223] + 60LL) = 2;
      v7 = v15;
    }
    else
    {
      v9 = 1;
    }
    if ( a4 == 1 )
    {
      v10 = v7[225];
      v13 = v10;
      if ( v9 == 1 && (*(_DWORD *)(v10 + 24) & 0x800) != 0 )
      {
        v11 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))v7[357];
        if ( v11 )
        {
          v11(v7[224], &v13, 0LL, 0LL, *(_DWORD *)(v10 + 28));
          v7 = v15;
        }
        else
        {
          v9 = 0;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"po.hsemDevLock()", v7[6]);
    GreReleaseSemaphoreInternal(v15[6]);
    SEMOBJEX::~SEMOBJEX((SEMOBJEX *)v14);
  }
  else
  {
    return 0;
  }
  return v9;
}
