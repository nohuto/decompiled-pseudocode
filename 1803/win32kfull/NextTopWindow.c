/*
 * XREFs of NextTopWindow @ 0x1C002DCFC
 * Callers:
 *     xxxActivateWindow @ 0x1C006D170 (xxxActivateWindow.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C01E3C2C (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C01E96E0 (xxxMenuWindowProc.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C002E65C (_GetDesktopWindow.c)
 *     ?NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z @ 0x1C003069C (-NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z.c)
 *     ?GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C00306E0 (-GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     GetWindowCloakState @ 0x1C0074700 (GetWindowCloakState.c)
 *     SkipWindowOnMonitor @ 0x1C00FB434 (SkipWindowOnMonitor.c)
 *     ?CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0104AA4 (-CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall NextTopWindow(struct tagTHREADINFO *a1, __int64 a2, struct tagWND *a3, char a4)
{
  int v7; // r15d
  struct tagWND *v8; // rdx
  struct tagWND *v9; // r8
  struct tagWND *v10; // r10
  struct tagWND *TopScan; // r12
  struct tagWND *v12; // rdi
  struct tagWND *v13; // rbx
  char *v14; // rdx
  __int64 DesktopWindow; // rax
  struct tagWND *v16; // r11
  __int64 v17; // rdx
  struct tagWND *v19; // rax
  struct tagWND *v20; // r10
  struct tagWND *NextTop; // rax

  v7 = 0;
  TopScan = GNT_NextTopScan(a1, 0LL, 0LL);
  if ( v10 )
  {
    v12 = CheckTopLevelOnly(v10);
    v13 = v12;
    if ( v12 )
    {
      a3 = CheckTopLevelOnly(a3);
      while ( 1 )
      {
        if ( (a4 & 1) != 0 )
        {
          v20 = 0LL;
          do
          {
            NextTop = NTW_GetNextTop(a1, v20);
            if ( NextTop == v13 && v20 )
              break;
            v20 = NextTop;
          }
          while ( NextTop );
          v13 = v20;
        }
        else
        {
          v13 = NTW_GetNextTop(a1, v13);
        }
        if ( v13 == v12 )
          break;
        if ( v13 == TopScan )
        {
          if ( v7 )
            return 0LL;
          v7 = 1;
        }
        if ( !v13 )
          break;
        GetDesktopWindow(v12);
        DesktopWindow = GetDesktopWindow(v13);
        if ( v17 != DesktopWindow || v16 == v13 )
          break;
LABEL_12:
        if ( v13 != a3 )
        {
          v14 = (char *)*((_QWORD *)v13 + 5);
          if ( (v14[31] & 0x18) == 0x10
            && ((unsigned __int8)~((unsigned __int8)v14[31] >> 5) & (unsigned __int8)~((unsigned __int8)v14[27] >> 3) & 1) != 0
            && ((a4 & 2) == 0 || v14[24] >= 0)
            && !(unsigned int)GetWindowCloakState(v13)
            && ((a4 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(v13)) )
          {
            return v13;
          }
        }
      }
    }
  }
  else
  {
    v19 = GNT_NextTopScan(a1, v8, v9);
    v12 = CheckTopLevelOnly(v19);
    v13 = v12;
    if ( v12 )
      goto LABEL_12;
  }
  return 0LL;
}
