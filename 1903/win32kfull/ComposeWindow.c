/*
 * XREFs of ComposeWindow @ 0x1C0045458
 * Callers:
 *     ComposeWindowIfNeeded @ 0x1C0022350 (ComposeWindowIfNeeded.c)
 *     DecomposeWindowIfNeeded @ 0x1C0044C58 (DecomposeWindowIfNeeded.c)
 *     xxxSwitchDesktop @ 0x1C0081EE8 (xxxSwitchDesktop.c)
 *     zzzComposeDesktop @ 0x1C00836A0 (zzzComposeDesktop.c)
 *     UpdateWindowMonitor @ 0x1C00C7360 (UpdateWindowMonitor.c)
 *     zzzDecomposeDesktop @ 0x1C015E4AC (zzzDecomposeDesktop.c)
 * Callees:
 *     IsDesktopWindow @ 0x1C002477C (IsDesktopWindow.c)
 *     UpdateWindowSpriteDPI @ 0x1C00295F8 (UpdateWindowSpriteDPI.c)
 *     _SetLayeredWindowAttributes @ 0x1C002BD00 (_SetLayeredWindowAttributes.c)
 *     UnsetLayeredWindow @ 0x1C0044CD4 (UnsetLayeredWindow.c)
 *     DwmAsyncChildStyleChange @ 0x1C004507C (DwmAsyncChildStyleChange.c)
 *     xxxSetLayeredWindow @ 0x1C0048844 (xxxSetLayeredWindow.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     xxxInternalInvalidate @ 0x1C00C3B70 (xxxInternalInvalidate.c)
 */

__int64 __fastcall ComposeWindow(struct tagWND *a1, char a2)
{
  __int64 v4; // rcx
  int v5; // edi
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  void *v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // [rsp+40h] [rbp+18h] BYREF
  char v17; // [rsp+48h] [rbp+20h] BYREF

  v16 = 0LL;
  if ( (a2 & 1) == 0 )
  {
    v4 = *((_QWORD *)a1 + 5);
    if ( (*(_DWORD *)(v4 + 232) & 0x20) != 0 )
    {
      v14 = UnsetLayeredWindow(a1, (a2 & 0x10 | 8u) >> 3);
      v4 = *((_QWORD *)a1 + 5);
      v5 = v14;
    }
    else
    {
      v5 = 0;
    }
    *(_DWORD *)(v4 + 232) &= ~0x40u;
    return (unsigned int)v5;
  }
  LOBYTE(v7) = IsDesktopWindow((__int64)a1);
  if ( v7 && *((_QWORD *)a1 + 3) != grpdeskRitInput )
    return 0;
  v8 = *((_QWORD *)a1 + 5);
  if ( (*(_BYTE *)(v8 + 31) & 0x10) == 0 && (a2 & 8) == 0 )
    return (*(_BYTE *)(v8 + 26) & 8) == 0 ? 0x3E0001u : 0;
  if ( (*(_BYTE *)(v8 + 26) & 8) != 0 )
  {
    v15 = ValidateHmonitorNoRip(*(_QWORD *)(v8 + 256));
    UpdateWindowSpriteDPI(a1, v15);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 27LL) & 0x20) == 0 )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v16);
      xxxInternalInvalidate(a1, (HRGN)1, 0x485u);
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v16);
    }
    return 0;
  }
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v17);
  v5 = xxxSetLayeredWindow(a1);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v17);
  if ( v5 >= 0 )
  {
    v5 = SetLayeredWindowAttributes(a1, 0, 0xFFu, 4 * (a2 & 4 | 1u));
    if ( v5 < 0 )
    {
      UnsetLayeredWindow(a1, 3);
    }
    else
    {
      *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL) |= 0x20u;
      v12 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 232LL);
      v13 = (void *)ReferenceDwmApiPort(v10, v9, v11);
      DwmAsyncChildStyleChange(v13, *(_QWORD *)a1, -268435456, v12);
    }
  }
  return (unsigned int)v5;
}
