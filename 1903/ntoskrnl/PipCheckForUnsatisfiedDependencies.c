/*
 * XREFs of PipCheckForUnsatisfiedDependencies @ 0x140702CE4
 * Callers:
 *     PnpCheckForActiveDependencies @ 0x140702C8C (PnpCheckForActiveDependencies.c)
 *     PipAttemptDependentStart @ 0x14085E124 (PipAttemptDependentStart.c)
 * Callees:
 *     PiGetProviderList @ 0x140702D2C (PiGetProviderList.c)
 *     PiEnumerateProviderListEntry @ 0x14085DF9C (PiEnumerateProviderListEntry.c)
 *     PipIsProviderStarted @ 0x14085E384 (PipIsProviderStarted.c)
 */

char __fastcall PipCheckForUnsatisfiedDependencies(__int64 a1, unsigned __int8 a2)
{
  _QWORD **ProviderList; // rdi
  __int64 v4; // r11
  _QWORD *v5; // rbx
  __int64 v7; // rcx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  ProviderList = (_QWORD **)PiGetProviderList(*(_QWORD *)(a1 + 32));
  v5 = *ProviderList;
  if ( *ProviderList != ProviderList )
  {
    while ( 1 )
    {
      PiEnumerateProviderListEntry(v5, &v9, &v8);
      v5 = (_QWORD *)*v5;
      v7 = v9 ? *(_QWORD *)(*(_QWORD *)(v9 + 312) + 40LL) : v4;
      if ( !v9 || !v7 || (a2 & (unsigned __int8)v8 & 3) != 0 && !(unsigned __int8)PipIsProviderStarted(v7) )
        break;
      if ( v5 == ProviderList )
        return v4;
    }
    LOBYTE(v4) = 1;
  }
  return v4;
}
