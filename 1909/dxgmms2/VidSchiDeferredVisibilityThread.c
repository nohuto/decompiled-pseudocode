/*
 * XREFs of VidSchiDeferredVisibilityThread @ 0x1C002E2F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0018600 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiDeferredVisibilityThread(__int64 a1)
{
  __int64 v2; // r8
  unsigned int v3; // esi
  __int64 v4; // rdi
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r14
  _QWORD *v9; // rax
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]

  DxgCoreInterface[14](a1, 3LL);
  if ( *(_DWORD *)(a1 + 176) == 1 )
  {
    v3 = 0;
    v4 = *(_QWORD *)(*(_QWORD *)(a1 + 2560) + 528LL);
    _InterlockedExchange((volatile __int32 *)(v4 + 1856), 0);
    if ( *(_DWORD *)(v4 + 40) )
    {
      do
      {
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(v4 + 8LL * v3 + 2576) + 66432LL), 0, 3) == 3 )
        {
          LOBYTE(v2) = 1;
          LOBYTE(v11) = 0;
          v5 = ((__int64 (__fastcall *)(_QWORD, _QWORD, __int64, __int64, int))DxgCoreInterface[29])(
                 *(_QWORD *)(a1 + 2552),
                 v3,
                 v2,
                 0x2000LL,
                 v11);
          v8 = v5;
          if ( v5 < 0 )
          {
            v9 = (_QWORD *)WdLogNewEntry5_WdAssertion(v7, v6);
            v9[3] = v3;
            v9[4] = a1;
            v9[5] = v8;
            WdLogEvent5_WdAssertion(v9);
          }
        }
        ++v3;
      }
      while ( v3 < *(_DWORD *)(v4 + 40) );
    }
  }
  DxgCoreInterface[15](a1, 3LL);
  result = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 24), 0xFFFFFFFFFFFFFFFFuLL);
  if ( result == 1 )
    return ((__int64 (__fastcall *)(_QWORD, __int64))DxgCoreInterface[4])(*(_QWORD *)(a1 + 16), a1);
  return result;
}
