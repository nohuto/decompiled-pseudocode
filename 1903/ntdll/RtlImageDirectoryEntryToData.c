/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x18007EBE0
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     sub_18001C4DC @ 0x18001C4DC (sub_18001C4DC.c)
 */

__int64 __fastcall RtlImageDirectoryEntryToData(unsigned __int64 a1, char a2, unsigned __int16 a3, _DWORD *a4)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v7[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = sub_18001C4DC(a1, a2, a3, a4, v7);
  v5 = v7[0];
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
