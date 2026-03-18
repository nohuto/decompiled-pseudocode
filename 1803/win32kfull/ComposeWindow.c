/*
 * XREFs of ComposeWindow @ 0x1C00C3B30
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C000A278 (zzzDecomposeDesktop.c)
 *     UpdateWindowMonitor @ 0x1C002DF20 (UpdateWindowMonitor.c)
 *     ComposeWindowIfNeeded @ 0x1C0075FC4 (ComposeWindowIfNeeded.c)
 *     xxxSwitchDesktop @ 0x1C00BFEDC (xxxSwitchDesktop.c)
 *     zzzComposeDesktop @ 0x1C00C0DD4 (zzzComposeDesktop.c)
 *     DecomposeWindowIfNeeded @ 0x1C00C3AB8 (DecomposeWindowIfNeeded.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C002AC50 (xxxInternalInvalidate.c)
 *     IsDesktopWindow @ 0x1C0076580 (IsDesktopWindow.c)
 *     UpdateWindowSpriteDPI @ 0x1C0077A60 (UpdateWindowSpriteDPI.c)
 *     _SetLayeredWindowAttributes @ 0x1C007B700 (_SetLayeredWindowAttributes.c)
 *     UnsetLayeredWindow @ 0x1C00C3C58 (UnsetLayeredWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C00C3FCC (DwmAsyncChildStyleChange.c)
 *     xxxSetLayeredWindow @ 0x1C00C433C (xxxSetLayeredWindow.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  int v4; // eax
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  void *v10; // rax
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // [rsp+40h] [rbp+18h] BYREF
  char v16; // [rsp+48h] [rbp+20h] BYREF

  v15 = 0LL;
  if ( (a2 & 1) != 0 )
  {
    LOBYTE(v4) = IsDesktopWindow((__int64)a1);
    if ( v4 && *((_QWORD *)a1 + 3) != grpdeskRitInput )
      return 0;
    v5 = *((_QWORD *)a1 + 5);
    if ( (*(_BYTE *)(v5 + 31) & 0x10) == 0 && (a2 & 8) == 0 )
      return (*(_BYTE *)(v5 + 26) & 8) == 0 ? 0x3E0001u : 0;
    if ( (*(_BYTE *)(v5 + 26) & 8) != 0 )
    {
      v14 = ValidateHmonitorNoRip(*(_QWORD *)(v5 + 256));
      UpdateWindowSpriteDPI(a1, v14);
      if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v15);
        xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v15);
      }
      return 0;
    }
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
    v6 = xxxSetLayeredWindow(a1);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
    if ( v6 >= 0 )
    {
      v6 = SetLayeredWindowAttributes(a1, 0, 0xFFu, 4 * (a2 & 4 | 1u));
      if ( v6 < 0 )
      {
        UnsetLayeredWindow(a1);
      }
      else
      {
        *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
        v10 = (void *)ReferenceDwmApiPort(v8, v7, v9);
        DwmAsyncChildStyleChange(v10);
      }
    }
  }
  else
  {
    v12 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v12 + 232) & 0x20) != 0 )
    {
      v13 = UnsetLayeredWindow(a1);
      v12 = *((_QWORD *)a1 + 5);
      v6 = v13;
    }
    else
    {
      v6 = 0;
    }
    *(_DWORD *)(v12 + 232) &= ~0x40u;
  }
  return (unsigned int)v6;
}
