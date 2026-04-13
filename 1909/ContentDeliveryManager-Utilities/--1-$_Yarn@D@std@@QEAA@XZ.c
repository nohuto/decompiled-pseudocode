/*
 * XREFs of ??1?$_Yarn@D@std@@QEAA@XZ @ 0x18002F7B0
 * Callers:
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$1 @ 0x1800CCDA5 (_std--_Locinfo--_Locinfo_--_1_--dtor$1.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$2 @ 0x1800CCDBB (_std--_Locinfo--_Locinfo_--_1_--dtor$2.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$3 @ 0x1800CCDD1 (_std--_Locinfo--_Locinfo_--_1_--dtor$3.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$4 @ 0x1800CCDE7 (_std--_Locinfo--_Locinfo_--_1_--dtor$4.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$5 @ 0x1800CCDFD (_std--_Locinfo--_Locinfo_--_1_--dtor$5.c)
 *     _std::_Locinfo::_Locinfo_::_1_::dtor$6 @ 0x1800CCE13 (_std--_Locinfo--_Locinfo_--_1_--dtor$6.c)
 *     _std::locale::_Locimp::_Locimp_::_1_::dtor$1 @ 0x1800D505B (_std--locale--_Locimp--_Locimp_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Yarn<char>::~_Yarn<char>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
    free(v2);
  *a1 = 0LL;
}
