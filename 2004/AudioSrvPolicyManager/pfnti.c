/*
 * XREFs of pfnti @ 0x1800118E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010E60 @ 0x180010E60 (sub_180010E60.c)
 */

void __fastcall pfnti(PTP_CALLBACK_INSTANCE Instance, char *Context, PTP_TIMER Timer)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  v3 = (struct _RTL_CRITICAL_SECTION *)(Context + 224);
  EnterCriticalSection((LPCRITICAL_SECTION)(Context + 224));
  *((_DWORD *)Context + 68) = 0;
  LeaveCriticalSection(v3);
  sub_180010E60((__int64)Context);
  sub_1800110E4((__int64)Context);
}
