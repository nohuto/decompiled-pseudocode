/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x1C00747C0
 * Callers:
 *     <none>
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C002DEDC (IsToplevelWindowDesktopComposed.c)
 *     PtInRect @ 0x1C00749C4 (PtInRect.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C0112B34 (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  void *v8; // rax
  __int64 *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+28h] [rbp-10h]

  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (a1 != gspwndCursorNC || (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL, a2)) )
  {
    v8 = (void *)ReferenceDwmApiPort(v6, v5, v7);
    DwmAsyncTopLevelMouseLeave(v8);
  }
  if ( (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL, a2) )
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  else
  {
    v9 = &gspwndCursorNC;
    v10 = a1;
    HMAssignmentLock(&v9);
  }
  v10 = a1;
  v9 = &gspwndCursor;
  return HMAssignmentLock(&v9);
}
