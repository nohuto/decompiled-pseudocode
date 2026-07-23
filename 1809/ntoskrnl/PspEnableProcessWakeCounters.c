/*
 * XREFs of PspEnableProcessWakeCounters @ 0x14088ACE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PspEnableProcessWakeCounters(__int64 a1)
{
  __int64 v1; // r8
  __int64 v3; // r9
  _QWORD *v4; // r10
  __int64 v5; // r11
  unsigned __int32 v6; // eax

  v1 = *(_QWORD *)(a1 + 944);
  if ( (*(_DWORD *)(v1 + 1304) & 0x1000) == 0 )
  {
    v3 = 0LL;
    v4 = (_QWORD *)(v1 + 888);
    v5 = 7LL;
    do
    {
      _m_prefetchw((const void *)(a1 + 4 * v3 + 2040));
      v6 = _InterlockedOr((volatile signed __int32 *)(a1 + 4 * v3++ + 2040), 0x80000000);
      *v4++ += v6;
      --v5;
    }
    while ( v5 );
    _m_prefetchw((const void *)(a1 + 2076));
    *(_QWORD *)(v1 + 944) += (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 2076), 0x80000000);
  }
  return 0LL;
}
