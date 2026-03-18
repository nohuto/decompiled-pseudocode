/*
 * XREFs of PopFinalizeWakeInfo @ 0x140729B14
 * Callers:
 *     PopTimeoutWakeTracking @ 0x140168984 (PopTimeoutWakeTracking.c)
 *     PopHandleWakeSources @ 0x140596234 (PopHandleWakeSources.c)
 * Callees:
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

LONG __fastcall PopFinalizeWakeInfo(__int64 a1)
{
  LONG result; // eax
  __int64 **v3; // rdi
  __int64 *i; // rbx
  void *v5; // rcx
  void *v6; // rcx

  result = KeSetEvent(&PopWakeSourceAvailable, 0, 0);
  v3 = (__int64 **)(a1 + 24);
  for ( i = *v3; i != (__int64 *)v3; i = (__int64 *)*i )
  {
    if ( !*((_DWORD *)i + 4) )
    {
      v5 = (void *)i[6];
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0x206D654Du);
        result = 0;
        i[5] = 0LL;
        i[6] = 0LL;
      }
      v6 = (void *)i[8];
      if ( v6 )
      {
        ExFreePoolWithTag(v6, 0x206D654Du);
        result = 0;
        i[7] = 0LL;
        i[8] = 0LL;
      }
    }
  }
  return result;
}
