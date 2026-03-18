/*
 * XREFs of EtwpClockSourceRunDown @ 0x1408FAE04
 * Callers:
 *     EtwpKernelTraceRundown @ 0x14070999C (EtwpKernelTraceRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400A2990 (EtwpLogKernelEvent.c)
 *     KeGetDynamicTickDisableReason @ 0x14013DC50 (KeGetDynamicTickDisableReason.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall EtwpClockSourceRunDown(__int64 a1, char a2)
{
  unsigned __int8 DynamicTickDisableReason; // al
  unsigned int v5; // r8d
  __int64 v6; // rdx
  __int64 v7; // [rsp+30h] [rbp-50h] BYREF
  int v8; // [rsp+38h] [rbp-48h]
  _DWORD v9[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 *v10; // [rsp+60h] [rbp-20h] BYREF
  int v11; // [rsp+68h] [rbp-18h]
  int v12; // [rsp+6Ch] [rbp-14h]

  memset(v9, 0, sizeof(v9));
  if ( a2 )
  {
    v8 = 0;
    ((void (__fastcall *)(_DWORD *))off_1404245B0[0])(v9);
    v7 = *(_QWORD *)&v9[1];
    DynamicTickDisableReason = KeGetDynamicTickDisableReason();
    v12 = 0;
    v5 = *(_DWORD *)a1;
    v6 = *(_QWORD *)(a1 + 1080);
    v10 = &v7;
    v8 = DynamicTickDisableReason;
    v11 = 12;
    EtwpLogKernelEvent((__int64)&v10, v6, v5, 1u, 0xF5Au, 0x401802u);
  }
}
