/*
 * XREFs of PopDiagSnapActiveActivity @ 0x140167CAC
 * Callers:
 *     PopTraceThermalZoneActiveActivity @ 0x1401675B4 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestActiveActivity @ 0x140167A2C (PopTraceThermalRequestActiveActivity.c)
 * Callees:
 *     <none>
 */

char __fastcall PopDiagSnapActiveActivity(__int64 a1, _DWORD *a2, _BYTE *a3, __int64 a4)
{
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  char result; // al

  for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(a1 + 1); i = (unsigned int)(i + 1) )
  {
    v7 = *(_QWORD *)(a1 + 8 * i + 440);
    v8 = *(_QWORD *)(a1 + 8 * i + 360);
    *(_QWORD *)(a1 + 8 * i + 360) = v7;
    *(_DWORD *)(a4 + 4 * i) = (v8 - v7) / 0x989680uLL;
  }
  v9 = *(_QWORD *)(a1 + 528);
  result = *(_BYTE *)(a1 + 1);
  *a2 = (*(_QWORD *)(a1 + 520) - v9) / 0x989680uLL;
  *(_QWORD *)(a1 + 520) = v9;
  *a3 = result;
  return result;
}
