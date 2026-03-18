/*
 * XREFs of EditionUpdateCursorOnMouseMove @ 0x1C006EDC0
 * Callers:
 *     <none>
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     PtInRect @ 0x1C006EFD8 (PtInRect.c)
 *     DwmAsyncTopLevelMouseLeave @ 0x1C01344AC (DwmAsyncTopLevelMouseLeave.c)
 */

__int64 __fastcall EditionUpdateCursorOnMouseMove(__int64 a1, __int64 a2)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  void *v7; // rax
  __int64 *v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h]

  if ( gspwndCursorNC
    && (unsigned int)IsToplevelWindowDesktopComposed(gspwndCursorNC)
    && (a1 != gspwndCursorNC || (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL, a2)) )
  {
    v7 = (void *)ReferenceDwmApiPort(v6, v5);
    DwmAsyncTopLevelMouseLeave(v7);
  }
  if ( (unsigned int)PtInRect(*(_QWORD *)(a1 + 40) + 104LL, a2) )
  {
    HMAssignmentUnlock(&gspwndCursorNC);
  }
  else
  {
    v8 = &gspwndCursorNC;
    v9 = a1;
    HMAssignmentLock(&v8);
  }
  v9 = a1;
  v8 = &gspwndCursor;
  return HMAssignmentLock(&v8);
}
