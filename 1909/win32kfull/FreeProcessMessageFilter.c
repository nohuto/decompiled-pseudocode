/*
 * XREFs of FreeProcessMessageFilter @ 0x1C00F0C50
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgLookupTableCleanUp@@YAXPEAPEAX@Z @ 0x1C00F0C7C (-MsgLookupTableCleanUp@@YAXPEAPEAX@Z.c)
 */

void __fastcall FreeProcessMessageFilter(__int64 a1)
{
  MsgLookupTableCleanUp(*(void ***)(a1 + 840));
  *(_QWORD *)(a1 + 840) = 0LL;
}
