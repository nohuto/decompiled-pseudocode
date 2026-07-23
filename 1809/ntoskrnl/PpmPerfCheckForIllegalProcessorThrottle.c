/*
 * XREFs of PpmPerfCheckForIllegalProcessorThrottle @ 0x140119684
 * Callers:
 *     PpmCheckSnapAllDeliveredPerformance @ 0x14005B980 (PpmCheckSnapAllDeliveredPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PopDiagTraceIllegalProcessorThrottle @ 0x1402E197C (PopDiagTraceIllegalProcessorThrottle.c)
 */

void __fastcall PpmPerfCheckForIllegalProcessorThrottle(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  void (__fastcall *v4)(__int64 *); // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( PopProcessorThrottleLogInterval )
  {
    v2 = *(_QWORD *)(a1 + 24176);
    if ( v2 )
    {
      v3 = *(_QWORD *)(a1 + 24184);
      if ( v3 )
      {
        v4 = *(void (__fastcall **)(__int64 *))(v2 + 216);
        if ( v4 )
        {
          if ( *(_BYTE *)(a1 + 24048) )
          {
            v4(&v6);
            if ( *(_DWORD *)(v3 + 72) < *(_DWORD *)(v2 + 316) )
            {
              *(_BYTE *)(a1 + 24056) = 0;
            }
            else if ( *(_BYTE *)(a1 + 24056) )
            {
              if ( *(_QWORD *)(a1 + 24064) != v6 )
              {
                v5 = (unsigned int)++*(_DWORD *)(a1 + 24052);
                if ( !(*(_DWORD *)(a1 + 24052) % (unsigned int)PopProcessorThrottleLogInterval) || (_DWORD)v5 == 1 )
                {
                  LODWORD(v5) = KeGetPcr()->Prcb.Number;
                  PopDiagTraceIllegalProcessorThrottle(v5, v6, a1 + 24072);
                }
              }
            }
            else
            {
              *(_BYTE *)(a1 + 24056) = 1;
            }
            *(_QWORD *)(a1 + 24064) = v6;
          }
        }
      }
    }
  }
}
