/*
 * XREFs of MiTrimWorkingSetTail @ 0x14011C720
 * Callers:
 *     MiTrimPte @ 0x140087BC0 (MiTrimPte.c)
 * Callees:
 *     MiTrimmedEnough @ 0x140087DC8 (MiTrimmedEnough.c)
 *     MiTrimWorkingSetBuildup @ 0x14011C788 (MiTrimWorkingSetBuildup.c)
 *     MiProcessVmAccessedInfo @ 0x1402B382C (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x1402B38F0 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiTrimWorkingSetTail(__int64 a1)
{
  __int64 v1; // rsi
  __int64 i; // rbx
  _DWORD *v4; // rdx
  __int64 v6; // r8
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 24);
  for ( i = *(_QWORD *)(a1 + 168); ; MiProcessVmAccessedInfo(a1, *(_QWORD *)(i + 240), MiTrimWorkingSetEPTCallback, i) )
  {
    MiTrimWorkingSetBuildup(a1, i);
    if ( (*(_DWORD *)i & 0x80u) != 0 )
    {
      v6 = *(_QWORD *)(i + 16) - *(_QWORD *)(i + 24);
      *(_QWORD *)(v1 + 8) += v6;
      *(_QWORD *)(i + 24) = *(_QWORD *)(i + 16);
      v7 = *(_QWORD *)(*(_QWORD *)(qword_14043B808 + 8LL * *(unsigned __int16 *)(v1 + 174)) + 7024LL);
      *(_QWORD *)(v7 + 8LL * (*(_DWORD *)i & 0xF) + 2592) += v6;
    }
    v4 = *(_DWORD **)(i + 240);
    if ( !v4 || !*v4 || !(unsigned int)MiQueryEPTAccessedState(a1, v4, 0LL) )
      break;
  }
  if ( (*(_DWORD *)i & 0x800) != 0 && MiTrimmedEnough(v1, i) )
    return 4LL;
  else
    return 0LL;
}
