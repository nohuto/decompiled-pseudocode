/*
 * XREFs of WheapAddErrorSource @ 0x14018AF28
 * Callers:
 *     WheaAddErrorSource @ 0x140919650 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140A03434 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FDD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067720 (KeSetEvent.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_1404F2AB8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_1404F2AA0;
  v3 = (__int64 *)qword_1404F2AB0;
  if ( *(__int64 **)qword_1404F2AB0 != &qword_1404F2AA8 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_1404F2AA8;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_1404F2AB0 = a2;
  _InterlockedIncrement(&dword_1404F2A9C);
  _InterlockedIncrement(&dword_1404F2AA0);
  return KeSetEvent(&stru_1404F2AB8, 0, 0);
}
