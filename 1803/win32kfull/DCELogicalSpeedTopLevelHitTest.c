/*
 * XREFs of DCELogicalSpeedTopLevelHitTest @ 0x1C01AEC50
 * Callers:
 *     <none>
 * Callees:
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     IsWindowUnderActiveLockScreen @ 0x1C00749EC (IsWindowUnderActiveLockScreen.c)
 *     DCELayerHitTest @ 0x1C00FD40C (DCELayerHitTest.c)
 */

_QWORD *__fastcall DCELogicalSpeedTopLevelHitTest(unsigned __int64 *a1, unsigned int a2)
{
  __int64 v4; // rbx
  _QWORD *i; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 8LL) + 24LL);
  if ( !v4 )
    return 0LL;
  for ( i = *(_QWORD **)(v4 + 88); i; i = (_QWORD *)i[8] )
  {
    v12 = *a1;
    if ( (*(_BYTE *)(i[5] + 31LL) & 0x10) != 0
      && !(unsigned int)GetWindowCloakState(i)
      && !(unsigned int)IsWindowUnderActiveLockScreen((__int64)i) )
    {
      if ( (((unsigned __int16)(a2 >> 8) ^ (unsigned __int16)(*(_DWORD *)(i[5] + 288LL) >> 8)) & 0x1FF) != 0 )
      {
        LogicalToPhysicalDPIPoint(&v12, &v12, a2, 0LL);
        PhysicalToLogicalDPIPoint(&v12, &v12, *(unsigned int *)(i[5] + 288LL), 0LL);
      }
      v7 = i[19];
      if ( v7 )
      {
        if ( !(unsigned int)GrePtInRegion(v7, (unsigned int)v12, HIDWORD(v12)) )
          continue;
        v8 = i[5];
        v9 = v12;
      }
      else if ( !PtInRect((_DWORD *)(i[5] + 88LL), v12) )
      {
        continue;
      }
      v10 = *(_QWORD *)(v8 + 168);
      if ( v10 )
      {
        if ( !(unsigned int)GrePtInRegion(v10, (unsigned int)v9, HIDWORD(v12)) )
          continue;
        v9 = v12;
      }
      v11 = i[5];
      if ( (*(_BYTE *)(v11 + 26) & 8) == 0 || (*(_DWORD *)(v11 + 232) & 0x20) != 0 || DCELayerHitTest((__int64)i, v9) )
        return i;
    }
  }
  return i;
}
