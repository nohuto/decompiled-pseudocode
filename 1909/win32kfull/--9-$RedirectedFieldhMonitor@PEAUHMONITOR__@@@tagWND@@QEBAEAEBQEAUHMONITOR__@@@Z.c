/*
 * XREFs of ??9?$RedirectedFieldhMonitor@PEAUHMONITOR__@@@tagWND@@QEBAEAEBQEAUHMONITOR__@@@Z @ 0x1C0016EB0
 * Callers:
 *     xxxProcessSetWindowPosEvent @ 0x1C0108FB8 (xxxProcessSetWindowPosEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagWND::RedirectedFieldhMonitor<HMONITOR__ *>::operator!=(__int64 a1, _QWORD *a2)
{
  return *(_QWORD *)(*(_QWORD *)(a1 - 175) + 256LL) != *a2;
}
