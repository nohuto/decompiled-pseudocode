/*
 * XREFs of NtUserEnumDisplayDevices @ 0x1C0041A10
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00344B0 (UserSessionSwitchEnterCrit.c)
 *     DrvEnumDisplayDevices @ 0x1C0041AD0 (DrvEnumDisplayDevices.c)
 *     UpdateGraphicsDeviceList @ 0x1C0042224 (UpdateGraphicsDeviceList.c)
 */

__int64 __fastcall NtUserEnumDisplayDevices(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  _DWORD v19[6]; // [rsp+30h] [rbp-18h] BYREF

  v5 = a3;
  v6 = a2;
  v7 = a1;
  UserSessionSwitchEnterCrit(a1, a2, a3);
  if ( gbVideoInitialized )
  {
    UpdateGraphicsDeviceList(v19);
    if ( v19[0] )
    {
      gptiCurrent = 0LL;
      gbValidateHandleForIL = 0;
      EtwTraceReleaseUserCrit(v12, v11, v13);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      UserSessionSwitchEnterCrit(v17, v16, v18);
    }
    v14 = DrvEnumDisplayDevices(v7, *(_QWORD *)(*(_QWORD *)(gpDispInfo + 96) + 232LL), v6, v5, a4, 1);
  }
  else
  {
    v14 = -1073741823;
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  EtwTraceReleaseUserCrit(v9, v8, v10);
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return v14;
}
