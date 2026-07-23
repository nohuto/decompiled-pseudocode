/*
 * XREFs of EtwTraceFreezeThawProcess @ 0x1408B8680
 * Callers:
 *     PsFreezeProcess @ 0x140589E24 (PsFreezeProcess.c)
 *     PsThawProcess @ 0x14067F4C4 (PsThawProcess.c)
 * Callees:
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     EtwTraceKernelEvent @ 0x1400F3790 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 */

void __fastcall EtwTraceFreezeThawProcess(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rdx
  int v4; // [rsp+30h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+38h] [rbp-30h] BYREF
  __int64 v6; // [rsp+48h] [rbp-20h]
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]

  v4 = *(_DWORD *)(a1 + 736);
  v5.Ptr = (ULONGLONG)&v4;
  v5.Reserved = 0;
  v5.Size = 4;
  v6 = a1 + 776;
  v8 = 0;
  v7 = 8;
  if ( EtwpHostSiloState != -4516 && (*(_DWORD *)(EtwpHostSiloState + 4524) & 2) != 0 )
  {
    v3 = (const EVENT_DESCRIPTOR *)&ProcessFreezeEvent;
    if ( !a2 )
      v3 = &ProcessThawEvent;
    EtwWrite(EtwpPsProvRegHandle, v3, 0LL, 2u, &v5);
  }
  EtwTraceKernelEvent((__int64)&v5, 1u, 0x40000002u, 805 - (a2 != 0), 0x501902u);
}
