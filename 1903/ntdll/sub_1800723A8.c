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

PIMAGE_NT_HEADERS __fastcall sub_1800723A8(__int64 a1)
{
  __int64 v1; // rsi
  NTSTATUS v3; // eax
  PIMAGE_NT_HEADERS v4; // rbx
  NTSTATUS v6; // eax
  DWORD v7; // [rsp+50h] [rbp+8h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(_QWORD *)(a1 + 56);
  v3 = sub_18001C4DC(*(_QWORD *)(v1 + 48), 1, 1u, &v7, &OutHeaders);
  v4 = OutHeaders;
  if ( v3 < 0 )
    v4 = 0LL;
  if ( v1 == qword_180164FC8 && ((LdrSystemDllInitBlock.MitigationOptionsMap.Map[1] >> 44) & 3) == 1 )
  {
    RtlImageNtHeaderEx(3u, *(PVOID *)(v1 + 48), 0LL, &OutHeaders);
    if ( ((unsigned __int8)sub_180072460(&OutHeaders->OptionalHeader.DataDirectory[1], 8LL)
       || (unsigned __int8)sub_180072460(v4, v7))
      && (int)sub_1800D559C(a1) >= 0 )
    {
      v6 = sub_18001C4DC(*(_QWORD *)(a1 + 184), 1, 1u, &v7, &OutHeaders);
      v4 = OutHeaders;
      if ( v6 < 0 )
        return 0LL;
    }
  }
  return v4;
}
