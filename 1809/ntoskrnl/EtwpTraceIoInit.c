/*
 * XREFs of EtwpTraceIoInit @ 0x140311D70
 * Callers:
 *     <none>
 * Callees:
 *     PsGetThreadServerSilo @ 0x14007E5D0 (PsGetThreadServerSilo.c)
 *     EtwTraceSiloKernelEvent @ 0x1400891D0 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceIoInit(__int64 a1)
{
  char v2; // cl
  __int16 v3; // di
  __int64 v4; // rsi
  __int64 ThreadServerSilo; // rax
  int v6; // ecx
  __int64 v8; // [rsp+30h] [rbp-38h] BYREF
  int v9; // [rsp+38h] [rbp-30h]
  __int64 *v10; // [rsp+40h] [rbp-28h] BYREF
  int v11; // [rsp+48h] [rbp-20h]
  int v12; // [rsp+4Ch] [rbp-1Ch]

  v2 = **(_BYTE **)(a1 + 184);
  if ( v2 == 3 )
  {
    v3 = 268;
  }
  else
  {
    v3 = 271;
    if ( v2 != 9 )
      v3 = 269;
  }
  v4 = *(_QWORD *)(a1 + 152);
  if ( v4 )
  {
    ThreadServerSilo = PsGetThreadServerSilo(*(_QWORD *)(a1 + 152));
    v8 = a1;
    v6 = *(_DWORD *)(v4 + 1600);
  }
  else
  {
    ThreadServerSilo = 0LL;
    v8 = a1;
    v6 = -1;
  }
  v12 = 0;
  v9 = v6;
  v10 = &v8;
  v11 = 12;
  return EtwTraceSiloKernelEvent(ThreadServerSilo, (int)&v10, 1, 0x400u, v3, 22026499);
}
