/*
 * XREFs of GreCreateCompatibleDC @ 0x1C001DD10
 * Callers:
 *     NtGdiCreateCompatibleDC @ 0x1C001D930 (NtGdiCreateCompatibleDC.c)
 *     InitUserScreen @ 0x1C0098FE4 (InitUserScreen.c)
 * Callees:
 *     GreCreateDisplayDC @ 0x1C001D950 (GreCreateDisplayDC.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0028C60 (UserSessionSwitchLeaveCrit.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0029F00 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreSetLayout @ 0x1C0076940 (GreSetLayout.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00F6B8C (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

HDC __fastcall GreCreateCompatibleDC(HDC a1)
{
  HDC v1; // rbx
  HDC DisplayDC; // rax
  __int64 v3; // rax
  unsigned int v4; // r8d
  __int64 v6; // rcx
  _QWORD v7[6]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD v8[7]; // [rsp+50h] [rbp-38h] BYREF
  int v9; // [rsp+90h] [rbp+8h] BYREF

  v1 = 0LL;
  if ( a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v7, a1);
    if ( v7[0] )
    {
      DisplayDC = GreCreateDisplayDC(*(_QWORD *)(v7[0] + 48LL), 1u, 0);
      v1 = DisplayDC;
      if ( DisplayDC )
      {
        DCOBJ::DCOBJ((DCOBJ *)v8, DisplayDC);
        v3 = v7[0];
        if ( v8[0] && (*(_DWORD *)(v7[0] + 520LL) & 1) != 0 )
        {
          DC::vSetDpiScaling(v8[0], *(_QWORD *)(v7[0] + 524LL));
          v3 = v7[0];
        }
        v4 = *(_DWORD *)(*(_QWORD *)(v3 + 976) + 108LL);
        if ( (v4 & 7) != 0 )
          GreSetLayout(v1, -1, v4);
        DCOBJ::~DCOBJ((DCOBJ *)v8);
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v7);
  }
  else
  {
    ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v9);
    v1 = GreCreateDisplayDC(*(_QWORD *)(gpDispInfo + 40), 1u, 0);
    if ( !v9 )
      UserSessionSwitchLeaveCrit(v6);
  }
  return v1;
}
