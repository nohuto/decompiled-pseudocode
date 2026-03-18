/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C0041730
 * Callers:
 *     _lambda_f932728a1b975e70479b80d5b5444ac1_::operator() @ 0x1C000B78C (_lambda_f932728a1b975e70479b80d5b5444ac1_--operator().c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0209B00 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C020F6B0 (xxxMenuWindowProc.c)
 * Callees:
 *     SkipWindowOnMonitor @ 0x1C000B5C4 (SkipWindowOnMonitor.c)
 *     GetWindowCloakState @ 0x1C002BE10 (GetWindowCloakState.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     _GetDesktopWindow @ 0x1C0043A0C (_GetDesktopWindow.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x1C00F603C (_anonymous_namespace_--NTW_GetNextTop.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1C00F6090 (_anonymous_namespace_--GNT_NextTopScan.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x1C0125320 (_anonymous_namespace_--CheckTopLevelOnly.c)
 */

__int64 __fastcall FindNextTopWindow::NextTopWindow(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rbx
  char v7; // si
  __int64 v8; // rbp
  __int64 v9; // rdi
  char *v10; // rdx
  __int64 v11; // r14
  __int64 DesktopWindow; // rax
  __int64 v13; // rdx
  bool v14; // zf
  __int64 NextTop; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  _BYTE v19[72]; // [rsp+20h] [rbp-48h] BYREF
  char v20; // [rsp+70h] [rbp+8h]
  __int64 TopScan; // [rsp+88h] [rbp+20h]

  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v19);
  v6 = 0LL;
  v20 = 0;
  v7 = 0;
  TopScan = anonymous_namespace_::GNT_NextTopScan(gptiCurrent, 0LL, 0LL);
  if ( !a1 )
  {
    NextTop = anonymous_namespace_::NTW_GetNextTop(gptiCurrent, 0LL);
    v8 = anonymous_namespace_::CheckTopLevelOnly(NextTop);
    v9 = v8;
    v14 = v8 == 0;
    goto LABEL_12;
  }
  v8 = anonymous_namespace_::CheckTopLevelOnly(a1);
  v9 = v8;
  if ( v8 )
  {
    a2 = anonymous_namespace_::CheckTopLevelOnly(a2);
    while ( 1 )
    {
      v11 = v9;
      if ( (a3 & 1) != 0 )
      {
        v17 = 0LL;
        do
        {
          v18 = anonymous_namespace_::NTW_GetNextTop(gptiCurrent, v17);
          if ( v18 == v9 && v17 )
            break;
          v17 = v18;
        }
        while ( v18 );
        v9 = v17;
        v7 = v20;
      }
      else
      {
        v9 = anonymous_namespace_::NTW_GetNextTop(gptiCurrent, v9);
      }
      if ( v9 == v8 )
        break;
      if ( v9 == TopScan )
      {
        if ( v7 )
          break;
        v7 = 1;
        v20 = 1;
      }
      if ( !v9 )
        break;
      GetDesktopWindow(v8);
      DesktopWindow = GetDesktopWindow(v9);
      if ( v13 != DesktopWindow )
        break;
      v14 = v11 == v9;
LABEL_12:
      if ( v14 )
        break;
      if ( v9 != a2 )
      {
        v10 = *(char **)(v9 + 40);
        if ( (v10[31] & 0x18) == 0x10
          && ((unsigned __int8)~((unsigned __int8)v10[31] >> 5) & (unsigned __int8)~((unsigned __int8)v10[27] >> 3) & 1) != 0
          && ((a3 & 2) == 0 || v10[24] >= 0)
          && !(unsigned int)GetWindowCloakState(v9)
          && ((a3 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor(v9)) )
        {
          v6 = v9;
          break;
        }
      }
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v19);
  return v6;
}
