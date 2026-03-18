/*
 * XREFs of WheapAddErrorSource @ 0x14017D1BC
 * Callers:
 *     WheaAddErrorSource @ 0x1408DB8A0 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x1409AEE9C (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2AE0 (KeSetEvent.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_1404C64B8, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 117) = dword_1404C64A4;
  v3 = (__int64 *)qword_1404C64B0;
  if ( *(__int64 **)qword_1404C64B0 != &qword_1404C64A8 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_1404C64A8;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_1404C64B0 = a2;
  _InterlockedIncrement(&dword_1404C64A4);
  return KeSetEvent(&stru_1404C64B8, 0, 0);
}
