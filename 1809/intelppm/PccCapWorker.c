/*
 * XREFs of PccCapWorker @ 0x1C000F6F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     ProcLibCapChange @ 0x1C0020310 (ProcLibCapChange.c)
 *     RegisterKernelCap @ 0x1C0031730 (RegisterKernelCap.c)
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
      qword_1C001A8C8);
    v2 = qword_1C001A3E8;
    LOBYTE(word_1C001A8DC) = 0;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C001A8C8);
    do
    {
      v3 = *(unsigned int **)(v2 - 8);
      v4 = *(_DWORD *)(v2 + 40);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C001A398,
        0LL);
      if ( v4 != v3[177] )
      {
        ProcLibCapChange(v3, v3[108], v3[120], v4);
        RegisterKernelCap(v3);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C001A398);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
        WdfDriverGlobals,
        qword_1C001A8C8);
      v2 = *(_QWORD *)v2;
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
        WdfDriverGlobals,
        qword_1C001A8C8);
    }
    while ( (__int64 *)v2 != &qword_1C001A3E8 );
    v5 = 1;
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2528))(
      WdfDriverGlobals,
      qword_1C001A8C8);
    if ( !(_BYTE)word_1C001A8DC )
    {
      word_1C001A8DC = 0;
      v5 = 0;
    }
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2536))(
      WdfDriverGlobals,
      qword_1C001A8C8);
  }
  while ( v5 );
}
