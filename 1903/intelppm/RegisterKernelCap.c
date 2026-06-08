/*
 * XREFs of RegisterKernelCap @ 0x1C00340A0
 * Callers:
 *     PccCapWorker @ 0x1C0010300 (PccCapWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00041B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004370 (_guard_dispatch_icall_nop.c)
 *     CalculatePercentageCap @ 0x1C002422C (CalculatePercentageCap.c)
 *     PepTranslateLimitReason @ 0x1C00382A4 (PepTranslateLimitReason.c)
 */

__int64 __fastcall RegisterKernelCap(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // r11
  int v3; // ebx
  unsigned int v4; // edx
  __int64 v5; // rcx
  bool v6; // zf
  int v7; // eax
  int v8; // eax
  _DWORD v10[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 1184);
  v2 = a1;
  v3 = 2;
  if ( v1 )
  {
    v3 = PepTranslateLimitReason(*(unsigned int *)(v1 + 24), *(unsigned int *)(v1 + 32));
  }
  else if ( *(_QWORD *)(a1 + 232) || *(_QWORD *)(a1 + 240) )
  {
    v4 = *(_DWORD *)(a1 + 724);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 216);
    if ( !v5 )
      return 0LL;
    v4 = CalculatePercentageCap(*(_QWORD *)(v5 + 24), *(_DWORD *)(v2 + 448), *(_DWORD *)(v2 + 496));
  }
  v11 = 0LL;
  v6 = *(_BYTE *)(v2 + 78) == 0;
  v10[0] = 62;
  if ( v6 )
  {
    v7 = *(_DWORD *)(v2 + 56);
  }
  else
  {
    v7 = *(_DWORD *)(v2 + 80);
    BYTE4(v11) = 1;
  }
  v10[1] = v7;
  v10[3] = *(_DWORD *)(v2 + 720);
  v8 = v11;
  if ( v4 < 0x64 )
    v8 = v3;
  v10[2] = v4;
  LODWORD(v11) = v8;
  ((void (__fastcall *)(_DWORD *))qword_1C001B5B8)(v10);
  return 0LL;
}
