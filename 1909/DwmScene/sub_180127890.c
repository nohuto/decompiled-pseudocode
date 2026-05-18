/*
 * XREFs of sub_180127890 @ 0x180127890
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B10C @ 0x18000B10C (sub_18000B10C.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_180127890(__int64 a1, __int64 a2)
{
  _WORD *v3; // rcx
  __int64 v4; // rbx

  **(_BYTE **)(a2 + 112) = 1;
  v3 = *(_WORD **)(a2 + 96);
  v4 = *(_QWORD *)(a2 + 40);
  if ( v3 )
    sub_18000B10C(v3, *(_QWORD *)(a2 + 104), v4 + 24);
  *(_DWORD *)(a2 + 96) = *(_DWORD *)(v4 + 28);
  return &loc_18000C2B3;
}
