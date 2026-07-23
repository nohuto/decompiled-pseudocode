/*
 * XREFs of RtlInternEntryDereference @ 0x1406012A4
 * Callers:
 *     PopEtStringSet @ 0x1405FDCE8 (PopEtStringSet.c)
 *     PopEtAggregateKeyCleanup @ 0x1406011A4 (PopEtAggregateKeyCleanup.c)
 *     PopEtAppIdDereference @ 0x140601278 (PopEtAppIdDereference.c)
 *     PopEtEnergyContextSetState @ 0x14060564C (PopEtEnergyContextSetState.c)
 *     PoEnergyContextCleanup @ 0x1406088D0 (PoEnergyContextCleanup.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RtlInternEntryDereference(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rsi
  _QWORD *i; // rdx

  result = _InterlockedDecrement64((volatile signed __int64 *)(a2 + 16));
  if ( result <= 0 )
  {
    if ( result )
      __fastfail(0xEu);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 16LL))(a1, 0LL);
    v5 = *(_QWORD *)(a2 + 8) & (-1LL << (*(_DWORD *)(a1 + 4) & 0x1F));
    for ( i = (_QWORD *)(*(_QWORD *)(a1 + 8)
                       + 8
                       * ((HIBYTE(v5)
                         + 37
                         * (BYTE6(v5)
                          + 37
                          * (BYTE5(v5)
                           + 37
                           * (BYTE4(v5)
                            + 37
                            * (BYTE3(v5) + 37 * (BYTE2(v5) + 37 * (BYTE1(v5) + 37 * ((unsigned __int8)v5 + 11623883)))))))) & (unsigned int)((*(_DWORD *)(a1 + 4) >> 5) - 1)));
          (*i & 1) == 0;
          i = (_QWORD *)*i )
    {
      if ( *i == a2 )
      {
        *i = *(_QWORD *)a2;
        --*(_DWORD *)a1;
        *(_QWORD *)a2 |= 0x8000000000000002uLL;
        break;
      }
    }
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)(a1 + 16) + 24LL))(a1, 0LL);
    return (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 16) + 8LL))(a1, a2);
  }
  return result;
}
