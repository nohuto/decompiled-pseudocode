/*
 * XREFs of ?MonitorCoordComp@@YAHPEBX0@Z @ 0x1C01F6E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorCoordComp(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r11
  __int64 v4; // r10
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rax

  v2 = (_QWORD *)a1[2];
  v3 = (_QWORD *)a2[2];
  v4 = v2[35];
  if ( !v4 )
  {
    LODWORD(v4) = *(_DWORD *)(v2[5] + 28LL) + (*(_DWORD *)(v2[5] + 36LL) - *(_DWORD *)(v2[5] + 28LL)) / 2;
    v2[35] = (int)v4;
  }
  v5 = v2[36];
  if ( !v5 )
  {
    LODWORD(v5) = *(_DWORD *)(v2[5] + 32LL) + (*(_DWORD *)(v2[5] + 40LL) - *(_DWORD *)(v2[5] + 32LL)) / 2;
    v2[36] = (int)v5;
  }
  v6 = v3[35];
  if ( !v6 )
  {
    LODWORD(v6) = *(_DWORD *)(v3[5] + 28LL) + (*(_DWORD *)(v3[5] + 36LL) - *(_DWORD *)(v3[5] + 28LL)) / 2;
    v3[35] = (int)v6;
  }
  v7 = v3[36];
  if ( !v7 )
  {
    LODWORD(v7) = *(_DWORD *)(v3[5] + 32LL) + (*(_DWORD *)(v3[5] + 40LL) - *(_DWORD *)(v3[5] + 32LL)) / 2;
    v3[36] = (int)v7;
  }
  if ( (int)v4 >= (int)v6 )
  {
    if ( (_DWORD)v4 != (_DWORD)v6 )
      return 1LL;
    if ( (int)v5 >= (int)v7 )
      return (_DWORD)v5 != (_DWORD)v7;
  }
  return 0xFFFFFFFFLL;
}
