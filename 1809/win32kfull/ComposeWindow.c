/*
 * XREFs of ComposeWindow @ 0x1C000D698
 * Callers:
 *     DecomposeWindowIfNeeded @ 0x1C000D61C (DecomposeWindowIfNeeded.c)
 *     UpdateWindowMonitor @ 0x1C00437C0 (UpdateWindowMonitor.c)
 *     ComposeWindowIfNeeded @ 0x1C007A504 (ComposeWindowIfNeeded.c)
 *     zzzComposeDesktop @ 0x1C00C8E7C (zzzComposeDesktop.c)
 *     zzzDecomposeDesktop @ 0x1C00CC674 (zzzDecomposeDesktop.c)
 *     xxxSwitchDesktop @ 0x1C00D513C (xxxSwitchDesktop.c)
 * Callees:
 *     UnsetLayeredWindow @ 0x1C000D7F8 (UnsetLayeredWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C000DBA0 (DwmAsyncChildStyleChange.c)
 *     xxxInternalInvalidate @ 0x1C0039F20 (xxxInternalInvalidate.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UpdateWindowSpriteDPI @ 0x1C0074A68 (UpdateWindowSpriteDPI.c)
 *     _SetLayeredWindowAttributes @ 0x1C0077A14 (_SetLayeredWindowAttributes.c)
 *     IsDesktopWindow @ 0x1C007A740 (IsDesktopWindow.c)
 *     xxxSetLayeredWindow @ 0x1C007BECC (xxxSetLayeredWindow.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // edi
  void *v6; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  char v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    if ( (unsigned int)IsDesktopWindow() && *((_QWORD *)a1 + 3) != grpdeskRitInput )
      return 0;
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v4 + 31) & 0x10) == 0 && (a2 & 8) == 0 )
      return (*(_BYTE *)(v4 + 26) & 8) == 0 ? 0x3E0001u : 0;
    if ( (*(_BYTE *)(v4 + 26) & 8) != 0 )
    {
      v10 = ValidateHmonitorNoRip(*(_QWORD *)(v4 + 256));
      UpdateWindowSpriteDPI(a1, v10);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
      }
      return 0;
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
    v5 = xxxSetLayeredWindow(a1);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
    if ( v5 >= 0 )
    {
      v5 = SetLayeredWindowAttributes(a1);
      if ( v5 < 0 )
      {
        UnsetLayeredWindow(a1);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
        v6 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v6);
      }
    }
  }
  else
  {
    v8 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v8 + 232) & 0x20) != 0 )
    {
      v9 = UnsetLayeredWindow(a1);
      v8 = *((_QWORD *)a1 + 5);
      v5 = v9;
    }
    else
    {
      v5 = 0;
    }
    *(_DWORD *)(v8 + 232) &= ~0x40u;
  }
  return (unsigned int)v5;
}
