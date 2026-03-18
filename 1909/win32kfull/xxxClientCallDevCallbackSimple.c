/*
 * XREFs of xxxClientCallDevCallbackSimple @ 0x1C021DB1C
 * Callers:
 *     EditionInputExtensibilityCallout @ 0x1C01F1AB0 (EditionInputExtensibilityCallout.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall xxxClientCallDevCallbackSimple(__int64 a1, __int64 a2)
{
  __int64 *v4; // rcx
  __int64 v5; // rdx
  ULONG64 v6; // rcx
  __int64 v7; // xmm0_8
  int v9; // [rsp+30h] [rbp-128h] BYREF
  _QWORD v10[5]; // [rsp+38h] [rbp-120h] BYREF
  _OWORD v11[14]; // [rsp+60h] [rbp-F8h] BYREF

  memset(v11, 0, 0xD8uLL);
  *((_QWORD *)&v11[2] + 1) = a1;
  v11[3] = *(_OWORD *)a2;
  v11[4] = *(_OWORD *)(a2 + 16);
  v11[5] = *(_OWORD *)(a2 + 32);
  v11[6] = *(_OWORD *)(a2 + 48);
  v11[7] = *(_OWORD *)(a2 + 64);
  v11[8] = *(_OWORD *)(a2 + 80);
  v11[9] = *(_OWORD *)(a2 + 96);
  v11[10] = *(_OWORD *)(a2 + 112);
  v11[11] = *(_OWORD *)(a2 + 128);
  v11[12] = *(_OWORD *)(a2 + 144);
  *(_QWORD *)&v11[13] = *(_QWORD *)(a2 + 160);
  EtwTraceBeginCallback(122LL);
  LODWORD(a1) = KeUserModeCallback(122LL, v11, 216LL, v10, &v9);
  EtwTraceEndCallback(122LL);
  if ( (int)a1 < 0 || v9 != 24 )
    return 0LL;
  v4 = (__int64 *)v10[0];
  if ( (unsigned __int64)(v10[0] + 8LL) < v10[0] || v10[0] + 8LL > MmUserProbeAddress )
    v4 = (__int64 *)MmUserProbeAddress;
  v5 = *v4;
  v10[1] = *v4;
  if ( *(_DWORD *)(a2 + 4) == 1 )
  {
    v6 = *(_QWORD *)(v10[0] + 16LL);
    if ( v6 + 24 < v6 || v6 + 24 > MmUserProbeAddress )
      v6 = MmUserProbeAddress;
    v7 = *(_QWORD *)(v6 + 16);
    *(_OWORD *)(a2 + 56) = *(_OWORD *)v6;
    *(_QWORD *)(a2 + 72) = v7;
  }
  return (unsigned int)v5;
}
