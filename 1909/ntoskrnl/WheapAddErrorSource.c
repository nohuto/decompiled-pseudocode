/*
 * XREFs of WheapAddErrorSource @ 0x14018B8B8
 * Callers:
 *     WheaAddErrorSource @ 0x1409190B0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x140A03950 (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140067990 (KeSetEvent.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_1404F27F8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 124) = dword_1404F27E0;
  v3 = (__int64 *)qword_1404F27F0;
  if ( *(__int64 **)qword_1404F27F0 != &qword_1404F27E8 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_1404F27E8;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_1404F27F0 = a2;
  _InterlockedIncrement(&dword_1404F27DC);
  _InterlockedIncrement(&dword_1404F27E0);
  return KeSetEvent(&stru_1404F27F8, 0, 0);
}
