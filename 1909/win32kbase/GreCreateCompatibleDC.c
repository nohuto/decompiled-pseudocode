/*
 * XREFs of GreCreateCompatibleDC @ 0x1C001AC50
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C001A110 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C00625FC (InitUserScreen.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x1C001A610 (GreCreateDisplayDC.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C001D060 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00290C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C002BE50 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreSetLayout @ 0x1C0087A50 (GreSetLayout.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C0120C64 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  int v2; // r9d
  HDC DisplayDC; // rax
  __int64 v4; // rdx
  unsigned int v5; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  __int64 v9; // [rsp+20h] [rbp-20h] BYREF
  int v10; // [rsp+28h] [rbp-18h]
  int v11; // [rsp+2Ch] [rbp-14h]
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  int v13; // [rsp+38h] [rbp-8h]
  int v14; // [rsp+3Ch] [rbp-4h]
  int v15; // [rsp+50h] [rbp+10h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    v9 = 0LL;
    v10 = 0;
    v11 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v9, a1);
    if ( v9 )
    {
      DisplayDC = (HDC)GreCreateDisplayDC(*(_QWORD *)(v9 + 48), 1u, 0LL, v2);
      v1 = DisplayDC;
      if ( DisplayDC )
      {
        v12 = 0LL;
        v13 = 0;
        v14 = 0;
        XDCOBJ::vLock((XDCOBJ *)&v12, DisplayDC);
        v4 = v9;
        if ( v12 && (*(_DWORD *)(v9 + 520) & 1) != 0 )
        {
          DC::vSetDpiScaling(v12, *(_QWORD *)(v9 + 524));
          v4 = v9;
        }
        v5 = *(_DWORD *)(*(_QWORD *)(v4 + 976) + 108LL);
        if ( (v5 & 7) != 0 )
          GreSetLayout(v1, -1, v5);
        XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v12);
      }
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)&v9);
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
    v1 = (HDC)GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 40), 1u, 0LL, v7);
    if ( !v15 )
      UserSessionSwitchLeaveCrit(v8);
  }
  return v1;
}
