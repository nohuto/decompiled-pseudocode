/*
 * XREFs of EtwpCCSwapFlush @ 0x140147688
 * Callers:
 *     EtwpCCSwapTrace @ 0x140147330 (EtwpCCSwapTrace.c)
 * Callees:
 *     EtwpOpenLogger @ 0x14008C5A4 (EtwpOpenLogger.c)
 *     EtwpLogKernelEvent @ 0x1400C2B10 (EtwpLogKernelEvent.c)
 *     EtwpCloseLogger @ 0x14014779C (EtwpCloseLogger.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
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
  __int64 v11; // r8
  _BYTE v12[8]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD *v13; // [rsp+38h] [rbp-20h] BYREF
  int v14; // [rsp+40h] [rbp-18h]
  int v15; // [rsp+44h] [rbp-14h]

  v12[0] = 0;
  v13 = a1 + 4;
  v3 = *a1 - 16;
  v15 = 0;
  v14 = v3;
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
        result = EtwpOpenLogger(v10, EtwpHostSiloState, 0, v12);
        if ( result )
        {
          if ( *(_DWORD *)(result + 216) == a2 )
            EtwpLogKernelEvent((__int64)&v13, EtwpHostSiloState, v10, 1u, 0x525u, 0x202u);
          LOBYTE(v11) = v12[0];
          result = EtwpCloseLogger(v10, EtwpHostSiloState, v11);
        }
      }
    }
  }
  return result;
}
