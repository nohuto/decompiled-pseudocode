/*
 * XREFs of EvtResetActionWorkItem @ 0x1C00837D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall EvtResetActionWorkItem(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rsi
  unsigned int v4; // eax
  __int64 v5; // rdx
  _BYTE v7[56]; // [rsp+30h] [rbp-48h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0064068);
  v2 = *(_DWORD *)(v1 + 8);
  v3 = *(_QWORD *)v1;
  if ( !v2 )
  {
    memset(v7, 0, sizeof(v7));
    *(_DWORD *)v7 = 24;
    *(_QWORD *)&v7[8] = FunctionLevelResetCompletion;
    *(_QWORD *)&v7[16] = v7;
    KeInitializeEvent((PRKEVENT)&v7[24], SynchronizationEvent, 0);
  }
  v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(v3 + 32))(*(_QWORD *)(v3 + 8), v2, 0LL, 0LL);
  v5 = v4;
  if ( !v2 && v4 == 259 )
  {
    KeWaitForSingleObject(&v7[24], Executive, 0, 0, 0LL);
    v5 = *(unsigned int *)&v7[48];
  }
  return (*(__int64 (__fastcall **)(_QWORD, __int64))(v1 + 24))(*(_QWORD *)(v1 + 16), v5);
}
