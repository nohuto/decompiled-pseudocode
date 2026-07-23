/*
 * XREFs of EtwpCCSwapFlush @ 0x14017D004
 * Callers:
 *     EtwpCCSwapTrace @ 0x14017CCA0 (EtwpCCSwapTrace.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x1400C7110 (EtwpLogKernelEvent.c)
 *     EtwpOpenLogger @ 0x140113820 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x1401138CC (EtwpCloseLogger.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpCCSwapFlush(_DWORD *a1, int a2)
{
  int v3; // eax
  __int64 result; // rax
  unsigned int v5; // ebx
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned int v10; // edi
  char v11[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v12; // [rsp+38h] [rbp-20h] BYREF
  int v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+44h] [rbp-14h]

  v12 = a1 + 4;
  v3 = *a1 - 16;
  v14 = 0;
  v13 = v3;
  result = EtwpHostSiloState;
  v5 = *(_DWORD *)(EtwpHostSiloState + 4224);
  while ( _BitScanForward(&v7, v5) )
  {
    v5 &= v5 - 1;
    v8 = v7;
    result = 32LL * v7;
    v9 = result + EtwpHostSiloState + 4260;
    if ( v9 )
    {
      result = *(unsigned int *)(v9 + 4);
      if ( (result & 4) != 0 && (result & 0x100) != 0 )
      {
        v10 = *(unsigned __int8 *)(EtwpHostSiloState + 2 * v8 + 4208);
        result = EtwpOpenLogger(v10, EtwpHostSiloState, 0LL, v11);
        if ( result )
        {
          if ( *(_DWORD *)(result + 216) == a2 )
            EtwpLogKernelEvent((__int64)&v12, EtwpHostSiloState, v10, 1u, 0x525u, 0x202u);
          result = (__int64)EtwpCloseLogger(v10, EtwpHostSiloState, v11[0]);
        }
      }
    }
  }
  return result;
}
