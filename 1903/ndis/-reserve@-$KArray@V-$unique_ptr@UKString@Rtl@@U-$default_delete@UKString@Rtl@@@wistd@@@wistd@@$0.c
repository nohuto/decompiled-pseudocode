/*
 * XREFs of ?reserve@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01247AC
 * Callers:
 *     ?resize@?$KArray@V?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C01248A4 (-resize@-$KArray@V-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@$00.c)
 * Callees:
 *     ??_G?$unique_ptr@UKString@Rtl@@U?$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00C7230 (--_G-$unique_ptr@UKString@Rtl@@U-$default_delete@UKString@Rtl@@@wistd@@@wistd@@QEAAPEAXI@Z.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>,1>::reserve(
        unsigned int *a1,
        unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v5; // edi
  _QWORD *PoolWithTag; // r14
  unsigned int v7; // edx
  unsigned int i; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  void *v12; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v5 = 0;
    if ( is_mul_ok(8uLL, a2) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
      if ( PoolWithTag )
      {
        v7 = a1[1];
        for ( i = 0; i < v7; v7 = a1[1] )
        {
          v9 = *((_QWORD *)a1 + 1);
          v10 = i++;
          v11 = *(_QWORD *)(v9 + 8 * v10);
          *(_QWORD *)(v9 + 8 * v10) = 0LL;
          PoolWithTag[v10] = v11;
        }
        v12 = (void *)*((_QWORD *)a1 + 1);
        if ( v12 )
        {
          if ( v7 )
          {
            do
              wistd::unique_ptr<Rtl::KString,wistd::default_delete<Rtl::KString>>::`scalar deleting destructor'((void **)(*((_QWORD *)a1 + 1) + 8LL * v5++));
            while ( v5 < a1[1] );
            v12 = (void *)*((_QWORD *)a1 + 1);
          }
          ExFreePoolWithTag(v12, 0x7272414Bu);
        }
        *a1 = v2;
        *((_QWORD *)a1 + 1) = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
