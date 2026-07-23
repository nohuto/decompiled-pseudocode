/*
 * XREFs of PsDeleteVsmEnclave @ 0x14088F298
 * Callers:
 *     MiDeleteEnclavePages @ 0x14085B328 (MiDeleteEnclavePages.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140091500 (ExfTryToWakePushLock.c)
 *     PsDereferenceVsmEnclave @ 0x14088F3E4 (PsDereferenceVsmEnclave.c)
 */

__int64 __fastcall PsDeleteVsmEnclave(__int64 a1, _QWORD *a2)
{
  volatile signed __int64 *v2; // rsi
  __int64 v5; // rbx
  unsigned __int64 v6; // r10
  _QWORD *i; // r8

  v2 = (volatile signed __int64 *)(a1 + 1832);
  ExAcquirePushLockExclusiveEx(a1 + 1832, 0LL);
  v5 = *(_QWORD *)(a1 + 1816);
  v6 = a2[1] & (-1LL << (*(_DWORD *)(v5 + 4) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(v5 + 8)
                     + 8
                     * ((HIBYTE(v6)
                       + 37
                       * (BYTE6(v6)
                        + 37
                        * (BYTE5(v6)
                         + 37
                         * (BYTE4(v6)
                          + 37
                          * ((((_DWORD)a2[1] & (unsigned int)(-1 << (*(_DWORD *)(v5 + 4) & 0x1F))) >> 24)
                           + 37
                           * ((unsigned __int8)(((_DWORD)a2[1] & (unsigned int)(-1 << (*(_DWORD *)(v5 + 4) & 0x1F))) >> 16)
                            + 37
                            * ((unsigned __int8)((unsigned __int16)(a2[1] & (-1 << (*(_DWORD *)(v5 + 4) & 0x1F))) >> 8)
                             + 37 * ((unsigned __int8)v6 + 11623883)))))))) & ((*(_DWORD *)(v5 + 4) >> 5) - 1)));
        (*i & 1) == 0;
        i = (_QWORD *)*i )
  {
    if ( (_QWORD *)*i == a2 )
    {
      *i = *a2;
      --*(_DWORD *)v5;
      *a2 |= 0x8000000000000002uLL;
      break;
    }
  }
  if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return PsDereferenceVsmEnclave(a2);
}
