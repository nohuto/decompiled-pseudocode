/*
 * XREFs of EditionHandleMitSignal @ 0x1C00EE260
 * Callers:
 *     <none>
 * Callees:
 *     xxxComputeInputSinkInfo @ 0x1C00060E8 (xxxComputeInputSinkInfo.c)
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C01FD7CC (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 */

void __fastcall EditionHandleMitSignal(HANDLE a1)
{
  int v1; // ecx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9

  if ( a1 == ghDITEvent )
  {
    while ( 1 )
    {
      v1 = gdwDITWakeReason & ~(gdwDITWakeReason - 1);
      if ( !v1 )
        break;
      _InterlockedAnd(&gdwDITWakeReason, ~v1);
      switch ( v1 )
      {
        case 1:
          ProcessMouseEvent();
          break;
        case 2:
          EnterCrit(0LL, 1LL);
          xxxComputeInputSinkInfo();
          UserSessionSwitchLeaveCrit(v3, v2, v4, v5);
          break;
        case 4:
          if ( (gInertiaMTInfo & 1) != 0 )
            xxxRouteSyntheticTouchpadToMT(dword_1C032C09C, stru_1C032C0A0, stru_1C032C0A8, qword_1C032C0B0);
          break;
        case 8:
        case 16:
          ExecuteMarshaledPnpRequest();
          break;
        case 32:
          ExecuteMarshaledInterceptRequest();
          break;
      }
    }
  }
}
