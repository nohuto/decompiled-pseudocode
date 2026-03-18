/*
 * XREFs of McGenEventRegister @ 0x140001B30
 * Callers:
 *     WinMain @ 0x140001960 (WinMain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall McGenEventRegister(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( *a4 )
    return 0LL;
  else
    return EtwEventRegister(a1, McGenControlCallbackV2);
}
