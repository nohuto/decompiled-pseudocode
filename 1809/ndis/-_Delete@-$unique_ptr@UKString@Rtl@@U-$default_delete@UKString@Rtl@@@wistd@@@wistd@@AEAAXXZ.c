/*
 * XREFs of ?_Delete@?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@AEAAXXZ @ 0x1C0009A00
 * Callers:
 *     netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___ @ 0x1C00B31A4 (netsetupEnumerateObjectIds__lambda_07fad1521ccbf9dcf92f4e848ce013d0___.c)
 * Callees:
 *     <none>
 */

void __fastcall wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::_Delete(void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    ExFreePoolWithTag(v1, 0x7274534Bu);
}
