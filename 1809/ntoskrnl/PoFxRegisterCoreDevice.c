/*
 * XREFs of PoFxRegisterCoreDevice @ 0x140726B50
 * Callers:
 *     PoFxRegisterDebugger @ 0x1409E033C (PoFxRegisterDebugger.c)
 * Callees:
 *     PopFxInsertDevice @ 0x140179D68 (PopFxInsertDevice.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PopFxRegisterDeviceWorker @ 0x140725C58 (PopFxRegisterDeviceWorker.c)
 *     PopFxConvertV1Components @ 0x140726994 (PopFxConvertV1Components.c)
 */

__int64 __fastcall PoFxRegisterCoreDevice(const UNICODE_STRING *a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  char *v4; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  _QWORD v12[10]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD *v13; // [rsp+C0h] [rbp+8h] BYREF

  v3 = 0LL;
  v4 = 0LL;
  v13 = 0LL;
  if ( a1 && *(_DWORD *)a2 == 1 && *(_QWORD *)(a2 + 24) )
  {
    v4 = PopFxConvertV1Components(a2 + 48, *(_DWORD *)(a2 + 4));
    if ( !v4 )
    {
      v10 = -1073741670;
      goto LABEL_9;
    }
    memset(v12, 0, 0x48uLL);
    v12[0] = *(_QWORD *)(a2 + 8);
    v12[1] = *(_QWORD *)(a2 + 16);
    v12[2] = *(_QWORD *)(a2 + 32);
    v12[6] = *(_QWORD *)(a2 + 24);
    v10 = PopFxRegisterDeviceWorker(
            0LL,
            a1,
            (__int64)v12,
            (__int64)v4,
            *(_DWORD *)(a2 + 4),
            *(_QWORD *)(a2 + 40),
            0,
            0LL,
            (ULONG_PTR *)&v13);
    if ( v10 >= 0 )
    {
      v3 = v13;
      PopFxInsertDevice(v9, v8, v13);
      v10 = 0;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4D584650u);
LABEL_9:
  *a3 = v3;
  return (unsigned int)v10;
}
