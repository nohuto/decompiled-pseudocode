/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x180003450
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003474 @ 0x180003474 (sub_180003474.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  char v6; // [rsp+28h] [rbp-10h]

  v6 = 1;
  return sub_180003474(a1, a2, a3, a4, a5, v6);
}
