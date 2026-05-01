/*
 * XREFs of ?Clone@CEnumerableObjectCollection@@UEAAJPEAPEAUIEnumObjects@@@Z @ 0x18010FFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEnumerableObjectCollection::Clone(CEnumerableObjectCollection *this, struct IEnumObjects **a2)
{
  return CEnumerableObjectCollection::Clone(
           (CEnumerableObjectCollection *)((char *)this - 8),
           &GUID_2c1c7e2e_2d0e_4059_831e_1e6f82335c2e,
           (void **)a2);
}
