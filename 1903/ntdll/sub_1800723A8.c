/*
 * XREFs of sub_1800723A8 @ 0x1800723A8
 * Callers:
 *     sub_180022F1C @ 0x180022F1C (sub_180022F1C.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 *     RtlImageNtHeaderEx @ 0x18001CB40 (RtlImageNtHeaderEx.c)
 *     sub_180072460 @ 0x180072460 (sub_180072460.c)
 *     sub_1800D559C @ 0x1800D559C (sub_1800D559C.c)
 */

__int64 __fastcall sub_1800723A8(__int64 a1)
{
  __int64 v1; // rsi
  int v3; // eax
  __int64 v4; // rbx
  int v6; // eax
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = sub_18001C4DC(*(_QWORD *)(v1 + 48), 1, 1u, &v7, &v8);
  v4 = v8;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v1 == qword_180164FC8 && ((*((_QWORD *)&xmmword_18017A370 + 1) >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3, *(_QWORD *)(v1 + 48), 0LL, &v8);
    if ( ((unsigned __int8)sub_180072460(v8 + 144, 8LL) || (unsigned __int8)sub_180072460(v4, v7))
      && (int)sub_1800D559C(a1) >= 0 )
    {
      v6 = sub_18001C4DC(*(_QWORD *)(a1 + 184), 1, 1u, &v7, &v8);
      v4 = v8;
      if ( v6 < 0 )
        return 0LL;
    }
  }
  return v4;
}
