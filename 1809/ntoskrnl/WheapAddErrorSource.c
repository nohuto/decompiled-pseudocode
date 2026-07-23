/*
 * XREFs of WheapAddErrorSource @ 0x14017D31C
 * Callers:
 *     WheaAddErrorSource @ 0x1408DCB40 (WheaAddErrorSource.c)
 *     WheapInitializeErrorSourceTable @ 0x1409AFE9C (WheapInitializeErrorSourceTable.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1400C2A40 (KeSetEvent.c)
 */

LONG __fastcall WheapAddErrorSource(__int64 a1, __int64 a2)
{
  __int64 *v3; // rax

  KeWaitForSingleObject(&stru_1404C7578, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 117) = dword_1404C7564;
  v3 = (__int64 *)qword_1404C7570;
  if ( *(__int64 **)qword_1404C7570 != &qword_1404C7568 )
    __fastfail(3u);
  *(_QWORD *)a2 = &qword_1404C7568;
  *(_QWORD *)(a2 + 8) = v3;
  *v3 = a2;
  qword_1404C7570 = a2;
  _InterlockedIncrement(&dword_1404C7564);
  return KeSetEvent(&stru_1404C7578, 0, 0);
}
