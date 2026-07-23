/*
 * XREFs of EtwpUpdatePmcCounters @ 0x1408BD100
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     EtwpAllocatePmcData @ 0x1408BBCC8 (EtwpAllocatePmcData.c)
 */

__int64 __fastcall EtwpUpdatePmcCounters(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r12d
  __int64 result; // rax
  __int64 v8; // r14
  __int64 i; // rdx
  unsigned int v10; // r15d
  unsigned int j; // edi
  __int64 k; // rsi
  signed __int32 v13[22]; // [rsp+0h] [rbp-58h] BYREF

  v6 = KeNumberProcessors_0;
  if ( a3 - 1 > 7 || *(_DWORD *)(a1 + 316) == 1 )
    return 3221225485LL;
  if ( *(_QWORD *)(a1 + 1000) || (result = EtwpAllocatePmcData(a1), !(_DWORD)result) )
  {
    v8 = *(_QWORD *)(a1 + 1000);
    if ( *(_DWORD *)(v8 + 44) )
    {
      return 3221226243LL;
    }
    else
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v13[12] = i;
        if ( (unsigned int)i >= a3 )
          break;
        *(_DWORD *)(v8 + 4 * i) = *(_DWORD *)(a2 + 4 * i);
      }
      v10 = 0;
      for ( j = 0; j < v6; ++j )
      {
        v10 = ((__int64 (__fastcall *)(_QWORD, __int64, _QWORD, __int64))off_1403FF510[0])(
                j,
                v8,
                a3,
                v8 + 8 * (j + 6LL));
        if ( v10 )
          break;
      }
      if ( v10 )
      {
        for ( k = 0LL; (unsigned int)k < j; k = (unsigned int)(k + 1) )
        {
          ((void (__fastcall *)(_QWORD))off_1403FF520[0])(*(_QWORD *)(v8 + 8 * k + 48));
          *(_QWORD *)(v8 + 8 * k + 48) = 0LL;
        }
      }
      else
      {
        *(_DWORD *)(v8 + 44) = a3;
        _InterlockedOr(v13, 0);
        _InterlockedOr((volatile signed __int32 *)(a1 + 832), 0x800u);
      }
      return v10;
    }
  }
  return result;
}
