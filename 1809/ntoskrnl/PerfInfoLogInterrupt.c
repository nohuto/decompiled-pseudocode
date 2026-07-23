/*
 * XREFs of PerfInfoLogInterrupt @ 0x1400C82E0
 * Callers:
 *     KiScanInterruptObjectList @ 0x1401BD740 (KiScanInterruptObjectList.c)
 *     KiInterruptSubDispatch @ 0x1401BD920 (KiInterruptSubDispatch.c)
 *     KiInterruptSubDispatchNoLock @ 0x1401BDA70 (KiInterruptSubDispatchNoLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140299EF4 (KiInvokeInterruptServiceRoutine.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall PerfInfoLogInterrupt(__int64 a1, int a2, __int64 a3)
{
  unsigned __int16 v4; // si
  int v5; // r9d
  unsigned int v6; // ebx
  bool i; // zf
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // [rsp+30h] [rbp-48h] BYREF
  int v13; // [rsp+38h] [rbp-40h]
  int v14; // [rsp+3Ch] [rbp-3Ch]
  _QWORD v15[3]; // [rsp+40h] [rbp-38h] BYREF
  int v16; // [rsp+58h] [rbp-20h]
  int v17; // [rsp+5Ch] [rbp-1Ch]

  if ( *(_BYTE *)(a1 + 93) )
  {
    if ( *(_QWORD *)(a1 + 32) )
    {
      v12 = *(_QWORD *)(a1 + 32);
      v4 = 3890;
      v5 = 16;
      v14 = *(_DWORD *)(a1 + 40);
    }
    else
    {
      v4 = 3907;
      v12 = *(_QWORD *)(a1 + 24);
      v5 = 12;
    }
  }
  else
  {
    v4 = 3935;
    v12 = *(_QWORD *)(a1 + 24);
    v5 = 12;
  }
  v13 = a2;
  v15[2] = &v12;
  v16 = v5;
  v17 = 0;
  v6 = *(_DWORD *)(EtwpHostSiloState + 4224);
  for ( i = !_BitScanForward(&v8, v6); !i; i = !_BitScanForward(&v8, v6) )
  {
    v6 &= v6 - 1;
    v9 = v8;
    v10 = 32LL * v8 + EtwpHostSiloState + 4260;
    if ( v10 )
    {
      if ( (*(_DWORD *)(v10 + 4) & 0x4000) != 0 )
      {
        v11 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v9 + 4209) - 1LL;
        v15[1] = 8LL;
        v15[0] = a3 + 8 * v11;
        EtwpLogKernelEvent(
          (__int64)v15,
          EtwpHostSiloState,
          *(unsigned __int8 *)(EtwpHostSiloState + 2 * v9 + 4208),
          2u,
          v4,
          0x400A02u);
      }
    }
  }
}
