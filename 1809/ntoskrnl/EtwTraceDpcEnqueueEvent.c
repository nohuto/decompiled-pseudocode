/*
 * XREFs of EtwTraceDpcEnqueueEvent @ 0x14030FEE8
 * Callers:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwTraceDpcEnqueueEvent(
        __int64 a1,
        void (__fastcall *a2)(struct _KDPC *Dpc, PVOID DeferredContext, unsigned int *SystemArgument1, PVOID SystemArgument2),
        int a3,
        int a4,
        int a5,
        char a6)
{
  __int64 v6; // [rsp+30h] [rbp-30h] BYREF
  int v7; // [rsp+38h] [rbp-28h]
  int v8; // [rsp+3Ch] [rbp-24h]
  int v9; // [rsp+40h] [rbp-20h]
  char v10; // [rsp+44h] [rbp-1Ch]
  __int16 v11; // [rsp+45h] [rbp-1Bh]
  char v12; // [rsp+47h] [rbp-19h]
  __int64 *v13; // [rsp+48h] [rbp-18h] BYREF
  int v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+54h] [rbp-Ch]

  if ( a2 != EtwpStackWalkDpc )
  {
    v15 = 0;
    v9 = a5;
    v10 = a6;
    v11 = 0;
    v12 = 0;
    v6 = a1;
    v7 = a3;
    v8 = a4;
    v13 = &v6;
    v14 = 24;
    EtwTraceKernelEvent((__int64)&v13, 1u, 0x20040000u, 0xF64u, 0x501E02u);
  }
}
