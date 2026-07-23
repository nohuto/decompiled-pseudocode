/*
 * XREFs of EtwSendTraceBuffer @ 0x14030E860
 * Callers:
 *     <none>
 * Callees:
 *     KeInsertQueueDpc @ 0x140062190 (KeInsertQueueDpc.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 *     KeGetEffectiveIrql @ 0x1400CABB0 (KeGetEffectiveIrql.c)
 *     PsGetCurrentServerSiloGlobals @ 0x140109DC0 (PsGetCurrentServerSiloGlobals.c)
 *     EtwpOpenLogger @ 0x140113820 (EtwpOpenLogger.c)
 *     EtwpCloseLogger @ 0x1401138CC (EtwpCloseLogger.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EtwSendTraceBuffer(unsigned __int16 a1, signed __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned int v6; // r14d
  unsigned int v9; // esi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // ecx
  bool v14; // zf
  signed __int64 v15; // rcx
  char v16; // [rsp+50h] [rbp+8h] BYREF

  v6 = a1;
  v9 = 0;
  if ( (unsigned int)a1 >= *(_DWORD *)(*((_QWORD *)PsGetCurrentServerSiloGlobals() + 108) + 16LL) )
    return 3221225480LL;
  v11 = EtwpOpenLogger(v6, EtwpHostSiloState, 0LL, &v16);
  v12 = v11;
  if ( !v11 )
    return 3221226134LL;
  if ( *(_DWORD *)(v11 + 336) )
  {
    if ( (*(_DWORD *)(v11 + 12) & 0x40000) != 0 )
    {
      if ( a3 )
        _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 256), a3);
      v13 = *(_DWORD *)(a2 + 48);
      *(_DWORD *)(a2 + 4) = v13;
      v14 = (*(_BYTE *)(a2 + 52) & 0x20) == 0;
      *(_DWORD *)(a2 + 8) = *(_DWORD *)a2 + v13;
      *(_DWORD *)(a2 + 44) = 3;
      *(_WORD *)(a2 + 54) = 5;
      if ( v14 )
        *(_WORD *)(a2 + 40) = *(unsigned __int8 *)(a2 + 40);
      *(_QWORD *)(a2 + 64) = a5;
      *(_QWORD *)(a2 + 56) = a4;
      *(_QWORD *)(a2 + 16) = (*(__int64 (**)(void))(v11 + 40))();
      do
      {
        v15 = *(_QWORD *)(v12 + 144);
        *(_QWORD *)(a2 + 32) = v15;
      }
      while ( v15 != _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 144), a2, v15) );
      if ( !v15 )
      {
        if ( KeGetEffectiveIrql() > 2u )
        {
          if ( !_interlockedbittestandset((volatile signed __int32 *)(v12 + 836), 8u) )
            KeInsertQueueDpc((PRKDPC)(v12 + 584), 0LL, 0LL);
        }
        else
        {
          KeSetEvent((PRKEVENT)(v12 + 496), 0, 0);
        }
      }
    }
    else
    {
      v9 = -1073741816;
    }
  }
  else
  {
    v9 = -1073741054;
  }
  EtwpCloseLogger(v6, EtwpHostSiloState, v16);
  return v9;
}
