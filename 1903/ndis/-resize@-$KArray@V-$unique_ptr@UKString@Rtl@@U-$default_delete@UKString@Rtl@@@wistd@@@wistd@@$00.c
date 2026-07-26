/*
 * XREFs of ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01248A4
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d90de50bdb401e___ @ 0x1C01244D0 (KRegKey--QueryValueMultisz__lambda_c8f07734eb94a31c9886b9ad420b8d4d___lambda_90693e01559ab5daa9d.c)
 *     ?ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@@Z @ 0x1C0124710 (-ReadStringArray@NetSetupPropertyBag@@QEAAJAEBU_NETSETUPPROPKEY@@AEAV-$KArray@V-$unique_ptr@UKSt.c)
 * Callees:
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00C7230 (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 *     ?reserve@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01247AC (-reserve@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$0.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::resize(
        __int64 a1,
        unsigned __int64 a2)
{
  char result; // al
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rsi

  result = Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::reserve(
             (unsigned int *)a1,
             a2);
  if ( result )
  {
    v5 = *(unsigned int *)(a1 + 4);
    if ( v5 < a2 )
    {
      do
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v5++) = 0LL;
      while ( v5 < a2 );
      LODWORD(v5) = *(_DWORD *)(a1 + 4);
    }
    v6 = a2;
    if ( a2 < (unsigned int)v5 )
    {
      do
        wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'((void **)(*(_QWORD *)(a1 + 8) + 8 * v6++));
      while ( v6 < *(unsigned int *)(a1 + 4) );
    }
    *(_DWORD *)(a1 + 4) = a2;
    return 1;
  }
  return result;
}
