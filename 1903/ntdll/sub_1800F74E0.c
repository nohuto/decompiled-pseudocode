/*
 * XREFs of sub_1800F74E0 @ 0x1800F74E0
 * Callers:
 *     sub_18008CA30 @ 0x18008CA30 (sub_18008CA30.c)
 * Callees:
 *     sub_18001AE58 @ 0x18001AE58 (sub_18001AE58.c)
 *     sub_180055288 @ 0x180055288 (sub_180055288.c)
 *     sub_18005532C @ 0x18005532C (sub_18005532C.c)
 *     sub_1800A17F0 @ 0x1800A17F0 (sub_1800A17F0.c)
 *     sub_1800F74B0 @ 0x1800F74B0 (sub_1800F74B0.c)
 *     sub_1800F7544 @ 0x1800F7544 (sub_1800F7544.c)
 */

NTSTATUS __fastcall sub_1800F74E0(void *a1)
{
  NTSTATUS result; // eax

  if ( byte_18017A29A && sub_1800F74B0(a1) )
    return sub_180055288((__int64)a1, 1u);
  if ( !sub_18001AE58() || !sub_18005532C(a1) || (result = sub_1800F7544(a1), result < 0) )
    sub_1800A17F0(0xAu);
  return result;
}
