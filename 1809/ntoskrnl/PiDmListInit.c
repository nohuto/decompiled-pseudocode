/*
 * XREFs of PiDmListInit @ 0x14072D8E0
 * Callers:
 *     PiDmInit @ 0x1409BE6F4 (PiDmInit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiDmEnumObjectsWithCallback @ 0x140597F5C (PiDmEnumObjectsWithCallback.c)
 */

__int64 __fastcall PiDmListInit(int a1)
{
  unsigned int v1; // ebx
  PVOID P; // [rsp+20h] [rbp-18h] BYREF
  int v4; // [rsp+28h] [rbp-10h]
  int v5; // [rsp+2Ch] [rbp-Ch]

  v4 = 0;
  P = 0LL;
  v5 = a1;
  v1 = PiDmEnumObjectsWithCallback(
         *((unsigned int *)&unk_140355A10 + 10 * a1),
         (__int64 (__fastcall *)(void *, __int64, _BYTE *))PiDmListInitEnumCallback,
         (__int64)&P);
  if ( P )
    ExFreePoolWithTag(P, 0x5A706E50u);
  return v1;
}
