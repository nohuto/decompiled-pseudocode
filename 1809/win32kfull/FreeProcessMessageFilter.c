/*
 * XREFs of FreeProcessMessageFilter @ 0x1C010D7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C010D7EC (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeProcessMessageFilter(__int64 a1)
{
  MsgLookupTableCleanUp(*(void ***)(a1 + 848));
  *(_QWORD *)(a1 + 848) = 0LL;
}
