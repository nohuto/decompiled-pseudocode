/*
 * XREFs of ACPIFanLoop @ 0x1C0007938
 * Callers:
 *     ACPIFanPowerCallback @ 0x1C0007680 (ACPIFanPowerCallback.c)
 *     ACPIFanDeviceControl @ 0x1C00077B0 (ACPIFanDeviceControl.c)
 *     ACPIFanEvent @ 0x1C0054EF0 (ACPIFanEvent.c)
 *     ACPIFanFSTCallback @ 0x1C0054FC0 (ACPIFanFSTCallback.c)
 *     ACPIFanStopDevice @ 0x1C0055364 (ACPIFanStopDevice.c)
 *     ACPIFanStartDevice @ 0x1C0091220 (ACPIFanStartDevice.c)
 * Callees:
 *     ACPIFanCompletePendingIrps @ 0x1C0007AF8 (ACPIFanCompletePendingIrps.c)
 *     AMLIAsyncEvalObject @ 0x1C000E3CC (AMLIAsyncEvalObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C001145C (AMLIDereferenceHandleEx.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIFanFSTCallback @ 0x1C0054FC0 (ACPIFanFSTCallback.c)
 */

void __fastcall ACPIFanLoop(__int64 a1, int a2, int a3)
{
  KSPIN_LOCK *v3; // r15
  int v6; // edi
  KIRQL v7; // bp
  bool v8; // sf
  int v9; // ecx
  char v10; // r14
  int v11; // ecx
  int v12; // eax
  bool v13; // dl
  KIRQL v14; // al
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  bool v17; // zf
  unsigned int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  _QWORD *v22; // rdx

  v3 = (KSPIN_LOCK *)(a1 + 184);
  v6 = ~a2;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 184));
  v8 = (v6 & (a3 | *(_DWORD *)(a1 + 192))) < 0;
  v9 = v6 & (a3 | *(_DWORD *)(a1 + 192));
  v10 = 1;
  *(_DWORD *)(a1 + 192) = v9;
  if ( v8 )
    goto LABEL_31;
  *(_DWORD *)(a1 + 192) = v9 | 0x80000000;
  while ( 1 )
  {
    if ( !v10 )
    {
      v7 = KeAcquireSpinLockRaiseToDpc(v3);
      v10 = 1;
    }
    v11 = *(_DWORD *)(a1 + 192);
    if ( (v11 & 0x40000000) != 0 )
      break;
    v12 = *(_DWORD *)(a1 + 192);
    if ( (v11 & 0x20000000) != 0 )
    {
      v13 = 0;
    }
    else
    {
      v12 = v11 | 0x10000000;
      *(_DWORD *)(a1 + 192) = v11 | 0x10000000;
      v13 = (v11 & 0x10000000) == 0;
    }
    if ( v13 )
    {
      v19 = *(_QWORD *)(a1 + 232);
      if ( v19 )
      {
        AMLIDereferenceHandleEx(v19);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      KeReleaseSpinLock(v3, v7);
      v10 = 0;
      if ( (*(_DWORD *)(a1 + 192) & 4) != 0 )
      {
        v7 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
        v21 = *(_QWORD *)(a1 + 200);
        if ( *(_QWORD *)(v21 + 8) != a1 + 200 || (v22 = *(_QWORD **)(a1 + 208), *v22 != a1 + 200) )
LABEL_30:
          __fastfail(3u);
        *v22 = v21;
        *(_QWORD *)(v21 + 8) = v22;
        KeReleaseSpinLock(&AcpiFanLock, v7);
      }
      LOBYTE(v20) = 1;
      ACPIFanCompletePendingIrps(a1, v20);
      KeSetEvent((PRKEVENT)(a1 + 296), 0, 0);
      break;
    }
    if ( (v12 & 4) != 0 )
    {
      if ( (v12 & 1) != 0 || (v12 |= 1u, v17 = *(_QWORD *)(a1 + 232) == 0LL, *(_DWORD *)(a1 + 192) = v12, v17) )
      {
        if ( (v12 & 2) == 0 )
        {
          ++*(_DWORD *)(a1 + 288);
          *(_DWORD *)(a1 + 192) = v12 | 2;
        }
        KeReleaseSpinLock(v3, v7);
        v10 = 0;
        if ( !(unsigned __int8)ACPIFanCompletePendingIrps(a1, 0LL) )
          break;
      }
      else
      {
        *(_DWORD *)(a1 + 192) = v12 | 0x40000000;
        KeReleaseSpinLock(v3, v7);
        v10 = 0;
        memset((void *)(a1 + 240), 0, 0x28uLL);
        v18 = AMLIAsyncEvalObject(*(_QWORD *)(a1 + 232), a1 + 240, 0LL, 0LL, ACPIFanFSTCallback, a1);
        if ( v18 != 259 )
          ACPIFanFSTCallback(*(_QWORD *)(a1 + 232), v18, a1 + 240, a1);
      }
    }
    else
    {
      *(_DWORD *)(a1 + 192) = v12 | 4;
      KeReleaseSpinLock(v3, v7);
      v10 = 0;
      v14 = KeAcquireSpinLockRaiseToDpc(&AcpiFanLock);
      v15 = (_QWORD *)qword_1C0081F98;
      v7 = v14;
      v16 = (_QWORD *)(a1 + 200);
      if ( *(__int64 **)qword_1C0081F98 != &AcpiFanList )
        goto LABEL_30;
      *(_QWORD *)(a1 + 208) = qword_1C0081F98;
      *v16 = &AcpiFanList;
      *v15 = v16;
      qword_1C0081F98 = a1 + 200;
      KeReleaseSpinLock(&AcpiFanLock, v7);
    }
  }
  *(_DWORD *)(a1 + 192) &= ~0x80000000;
  if ( v10 )
LABEL_31:
    KeReleaseSpinLock(v3, v7);
}
