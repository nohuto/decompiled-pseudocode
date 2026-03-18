/*
 * XREFs of ACPIFanLoop @ 0x1C000D298
 * Callers:
 *     ACPIFanPowerCallback @ 0x1C000D000 (ACPIFanPowerCallback.c)
 *     ACPIFanDeviceControl @ 0x1C000D120 (ACPIFanDeviceControl.c)
 *     ACPIFanEvent @ 0x1C0053500 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C00535C0 (ACPIFanFSTCallback.c)
 *     ACPIFanStopDevice @ 0x1C0053904 (ACPIFanStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C008ED70 (ACPIFanStartDevice.c)
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x1C000B920 (AMLIDereferenceHandleEx.c)
 *     ACPIFanCompletePendingIrps @ 0x1C000D45C (ACPIFanCompletePendingIrps.c)
 *     AMLIAsyncEvalObject @ 0x1C00140BC (AMLIAsyncEvalObject.c)
 *     memset @ 0x1C00310C0 (memset.c)
 *     ACPIFanFSTCallback @ 0x1C00535C0 (ACPIFanFSTCallback.c)
 */

void __fastcall ACPIFanLoop(__int64 a1, int a2, int a3)
{
  KSPIN_LOCK *v3; // r15
  KIRQL v7; // bp
  int v8; // ecx
  char v9; // r14
  int v10; // ecx
  int v11; // eax
  bool v12; // dl
  KIRQL v13; // al
  _QWORD *v14; // rcx
  _QWORD *v15; // rax
  __int64 v16; // rcx
  unsigned int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  _QWORD *v21; // rdx

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v8 = ~a2 & (a3 | *(_DWORD *)(a1 + 192));
  v9 = 1;
  *(_DWORD *)(a1 + 192) = v8;
  if ( v8 < 0 )
    goto LABEL_31;
  *(_DWORD *)(a1 + 192) = v8 | 0x80000000;
  while ( 1 )
  {
    if ( !v9 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(v3);
      v9 = 1;
    }
    v10 = *(_DWORD *)(a1 + 192);
    if ( (v10 & 0x40000000) != 0 )
      break;
    v11 = *(_DWORD *)(a1 + 192);
    if ( (v10 & 0x20000000) != 0 )
    {
      v12 = 0;
    }
    else
    {
      v11 = v10 | 0x10000000;
      *(_DWORD *)(a1 + 192) = v10 | 0x10000000;
      v12 = (v10 & 0x10000000) == 0;
    }
    if ( v12 )
    {
      v18 = *(_QWORD *)(a1 + 232);
      if ( v18 )
      {
        AMLIDereferenceHandleEx(v18);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      KeReleaseSpinLock(v3, v7);
      v9 = 0;
      if ( (*(_DWORD *)(a1 + 192) & 4) != 0 )
      {
        v7 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
        v20 = *(_QWORD *)(a1 + 200);
        if ( *(_QWORD *)(v20 + 8) != a1 + 200 || (v21 = *(_QWORD **)(a1 + 208), *v21 != a1 + 200) )
LABEL_30:
          __fastfail(3u);
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        KeReleaseSpinLock(&AcpiFanLock, v7);
      }
      LOBYTE(v19) = 1;
      ACPIFanCompletePendingIrps(a1, v19);
      KeSetEvent((PRKEVENT)(a1 + 296), 0, 0);
      break;
    }
    if ( (v11 & 4) != 0 )
    {
      if ( (v11 & 1) != 0 || (v11 |= 1u, *(_DWORD *)(a1 + 192) = v11, !*(_QWORD *)(a1 + 232)) )
      {
        if ( (v11 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 288);
          *(_DWORD *)(a1 + 192) = v11 | 2;
        }
        KeReleaseSpinLock(v3, v7);
        v9 = 0;
        if ( !(unsigned __int8)ACPIFanCompletePendingIrps(a1, 0LL) )
          break;
      }
      else
      {
        *(_DWORD *)(a1 + 192) = v11 | 0x40000000;
        KeReleaseSpinLock(v3, v7);
        v9 = 0;
        memset((void *)(a1 + 240), 0, 0x28uLL);
        v16 = *(_QWORD *)(a1 + 232);
        *(_WORD *)(a1 + 242) = 0;
        v17 = AMLIAsyncEvalObject(v16, a1 + 240, 0LL, 0LL, ACPIFanFSTCallback, a1);
        if ( v17 != 259 )
          ACPIFanFSTCallback(*(_QWORD *)(a1 + 232), v17, a1 + 240, a1);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 192) = v11 | 4;
      KeReleaseSpinLock(v3, v7);
      v9 = 0;
      v13 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
      v14 = (_QWORD *)qword_1C007FF98;
      v7 = v13;
      v15 = (_QWORD *)(a1 + 200);
      if ( *(__int64 **)qword_1C007FF98 != &AcpiFanList )
        goto LABEL_30;
      *(_QWORD *)(a1 + 208) = qword_1C007FF98;
      *v15 = &AcpiFanList;
      *v14 = v15;
      qword_1C007FF98 = a1 + 200;
      KeReleaseSpinLock(&AcpiFanLock, v7);
    }
  }
  *(_DWORD *)(a1 + 192) &= ~0x80000000;
  if ( v9 )
LABEL_31:
    KeReleaseSpinLock(v3, v7);
}
