/*
 * XREFs of PdcpPortReleaseResources @ 0x1C0109B0C
 * Callers:
 *     PdcPortClose @ 0x1C0109968 (PdcPortClose.c)
 *     PdcPortOpen @ 0x1C01099B0 (PdcPortOpen.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 */

void __fastcall PdcpPortReleaseResources(_QWORD *P)
{
  __int64 v2; // rdi
  void (__fastcall *v3)(__int64, _DWORD *, __int64); // rax
  _DWORD v4[202]; // [rsp+20h] [rbp-328h] BYREF

  *(_DWORD *)P = 0;
  v2 = P[3];
  if ( v2 )
  {
    memset(v4, 0, 0x320uLL);
    v4[14] = *((_DWORD *)P + 4);
    v4[15] = *((_DWORD *)P + 5);
    v3 = (void (__fastcall *)(__int64, _DWORD *, __int64))P[4];
    v4[10] = 1;
    v3(v2, v4, 800LL);
  }
  ExFreePoolWithTag(P, 0);
}
