/*
 * XREFs of ?NextTopWindow@FindNextTopWindow@@YAPEAUtagWND@@PEBU2@0W4FindOption@1@@Z @ 0x1C013A314
 * Callers:
 *     _lambda_7d69e9e2d209dda7a4a46854671474a0_::operator() @ 0x1C013A26C (_lambda_7d69e9e2d209dda7a4a46854671474a0_--operator().c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C0221034 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 *     xxxMenuWindowProc @ 0x1C0226F00 (xxxMenuWindowProc.c)
 * Callees:
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetWindowCloakState @ 0x1C006A29C (GetWindowCloakState.c)
 *     _GetDesktopWindow @ 0x1C006C4B0 (_GetDesktopWindow.c)
 *     _anonymous_namespace_::NTW_GetNextTop @ 0x1C013A478 (_anonymous_namespace_--NTW_GetNextTop.c)
 *     _anonymous_namespace_::GNT_NextTopScan @ 0x1C013A4CC (_anonymous_namespace_--GNT_NextTopScan.c)
 *     _anonymous_namespace_::CheckTopLevelOnly @ 0x1C013A540 (_anonymous_namespace_--CheckTopLevelOnly.c)
 *     SkipWindowOnMonitor @ 0x1C013A570 (SkipWindowOnMonitor.c)
 */

_QWORD *__fastcall FindNextTopWindow::NextTopWindow(__int64 a1, __int64 a2, char a3)
{
  _QWORD *v6; // rbx
  char v7; // si
  __int64 v8; // rbp
  _QWORD *v9; // rdi
  char *v10; // rdx
  _QWORD *v11; // r14
  __int64 DesktopWindow; // rax
  __int64 v13; // rdx
  bool v14; // zf
  __int64 NextTop; // rax
  _QWORD *v17; // rsi
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
    v9 = (_QWORD *)v8;
    v14 = v8 == 0;
    goto LABEL_12;
  }
  v8 = anonymous_namespace_::CheckTopLevelOnly(a1);
  v9 = (_QWORD *)v8;
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
          if ( (_QWORD *)v18 == v9 && v17 )
            break;
          v17 = (_QWORD *)v18;
        }
        while ( v18 );
        v9 = v17;
        v7 = v20;
      }
      else
      {
        v9 = (_QWORD *)anonymous_namespace_::NTW_GetNextTop(gptiCurrent, v9);
      }
      if ( v9 == (_QWORD *)v8 )
        break;
      if ( v9 == (_QWORD *)TopScan )
      {
        if ( v7 )
          break;
        v7 = 1;
        v20 = 1;
      }
      if ( !v9 )
        break;
      GetDesktopWindow(v8);
      DesktopWindow = GetDesktopWindow((__int64)v9);
      if ( v13 != DesktopWindow )
        break;
      v14 = v11 == v9;
LABEL_12:
      if ( v14 )
        break;
      if ( v9 != (_QWORD *)a2 )
      {
        v10 = (char *)v9[5];
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
