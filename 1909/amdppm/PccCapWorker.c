/*
 * XREFs of PccCapWorker @ 0x1C000DB30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000DFB0 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C0027978 (ProcLibCapChange.c)
 *     RegisterKernelCap @ 0x1C002A380 (RegisterKernelCap.c)
 */

void __fastcall PccCapWorker(PDEVICE_OBJECT DeviceObject, PVOID Context)
{
  __int64 v2; // rdi
  unsigned int *v3; // rbx
  unsigned int v4; // esi
  char v5; // bl

  do
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C0013958);
    v2 = qword_1C0013468;
    LOBYTE(word_1C001396C) = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C0013958);
    do
    {
      v3 = *(unsigned int **)(v2 - 8);
      v4 = *(_DWORD *)(v2 + 40);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C0013418,
        0LL);
      if ( v4 != v3[181] )
      {
        ProcLibCapChange(v3, v3[112], v3[124], v4);
        RegisterKernelCap(v3);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C0013418);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
        WdfDriverGlobals,
        qword_1C0013958);
      v2 = *(_QWORD *)v2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
        WdfDriverGlobals,
        qword_1C0013958);
    }
    while ( (__int64 *)v2 != &qword_1C0013468 );
    v5 = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C0013958);
    if ( !(_BYTE)word_1C001396C )
    {
      word_1C001396C = 0;
      v5 = 0;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C0013958);
  }
  while ( v5 );
}
