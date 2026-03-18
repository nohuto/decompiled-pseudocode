/*
 * XREFs of ?RemoveNotify@@YAXPEAPEAUtagNOTIFY@@@Z @ 0x1C0020C7C
 * Callers:
 *     xxxProcessNotifyWinEvent @ 0x1C001F1B4 (xxxProcessNotifyWinEvent.c)
 *     DestroyNotify @ 0x1C00D8D68 (DestroyNotify.c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveNotify(struct tagNOTIFY ***a1)
{
  struct tagNOTIFY **v1; // rbx
  struct tagNOTIFY *v2; // rax

  v1 = *a1;
  v2 = **a1;
  *a1 = (struct tagNOTIFY **)v2;
  if ( !v2 )
    gpLastPendingNotify = (unsigned __int64)a1 & ((unsigned __int128)-(__int128)(unsigned __int64)gpPendingNotifies >> 64);
  if ( !*((_DWORD *)v1 + 4) )
    HMAssignmentUnlock(v1 + 1);
  if ( v1 == (struct tagNOTIFY **)&qword_1C032AC40 )
    dword_1C0326B30 = 0;
  else
    Win32FreePool(v1);
}
