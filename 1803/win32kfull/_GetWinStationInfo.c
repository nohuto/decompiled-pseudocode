/*
 * XREFs of _GetWinStationInfo @ 0x1C01D70C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetWinStationInfo(ULONG64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentProcessWow64Process; // rax
  __int64 v6; // rdx
  _BYTE *v7; // rdx

  CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(a1, a2, a3, a4);
  v6 = 0LL;
  if ( !CurrentProcessWow64Process )
    v6 = 3LL;
  if ( (v6 & a1) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (_BYTE *)a1;
  if ( a1 >= MmUserProbeAddress )
    v7 = (_BYTE *)MmUserProbeAddress;
  *v7 = *v7;
  v7[39] = v7[39];
  *(_OWORD *)a1 = gWinStationInfo;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)&gWinStationInfo + 1);
  *(_QWORD *)(a1 + 32) = *((_QWORD *)&gWinStationInfo + 4);
  return 1LL;
}
