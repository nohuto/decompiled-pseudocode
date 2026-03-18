/*
 * XREFs of WbReAlloc @ 0x1406AF464
 * Callers:
 *     sub_1405C9C50 @ 0x1405C9C50 (sub_1405C9C50.c)
 *     WbAddLookupEntryEx @ 0x1406AF3A0 (WbAddLookupEntryEx.c)
 * Callees:
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     WbAlloc @ 0x1405CA590 (WbAlloc.c)
 */

__int64 __fastcall WbReAlloc(PVOID P, size_t Size, SIZE_T NumberOfBytes, _QWORD *a4)
{
  unsigned int v4; // ebp
  unsigned int v7; // esi
  int v8; // eax
  PVOID v9; // rbx
  unsigned int v10; // r15d
  PVOID Pa[5]; // [rsp+20h] [rbp-28h] BYREF

  Pa[0] = 0LL;
  v4 = Size;
  v7 = NumberOfBytes;
  v8 = WbAlloc((unsigned int)NumberOfBytes, Pa);
  v9 = Pa[0];
  v10 = v8;
  if ( v8 >= 0 )
  {
    if ( P )
    {
      if ( v4 )
      {
        if ( v7 >= v4 )
          v7 = v4;
        memmove(Pa[0], P, v7);
      }
      ExFreePoolWithTag(P, 0x42524157u);
    }
    if ( a4 )
    {
      *a4 = v9;
      v9 = 0LL;
    }
  }
  if ( v9 )
    ExFreePoolWithTag(v9, 0x42524157u);
  return v10;
}
