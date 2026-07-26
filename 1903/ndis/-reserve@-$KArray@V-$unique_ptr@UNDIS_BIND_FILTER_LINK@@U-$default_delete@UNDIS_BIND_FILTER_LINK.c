/*
 * XREFs of ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C010550C
 * Callers:
 *     _lambda_36d6f42f749579043faa114aff526cbd_::operator() @ 0x1C010268C (_lambda_36d6f42f749579043faa114aff526cbd_--operator().c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C01027C8 (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0108418 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00122E0 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::reserve(
        unsigned int *a1,
        unsigned __int64 a2)
{
  unsigned int v2; // esi
  unsigned int v4; // edi
  _QWORD *PoolWithTag; // r14
  unsigned int v6; // edx
  unsigned int i; // r8d
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  void *v11; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF )
  {
    v4 = 0;
    if ( is_mul_ok(8uLL, a2) )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
      if ( PoolWithTag )
      {
        v6 = a1[1];
        for ( i = 0; i < v6; v6 = a1[1] )
        {
          v8 = *((_QWORD *)a1 + 1);
          v9 = i++;
          v10 = *(_QWORD *)(v8 + 8 * v9);
          *(_QWORD *)(v8 + 8 * v9) = 0LL;
          PoolWithTag[v9] = v10;
        }
        v11 = (void *)*((_QWORD *)a1 + 1);
        if ( v11 )
        {
          if ( v6 )
          {
            do
              wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*((_QWORD *)a1 + 1) + 8LL * v4++));
            while ( v4 < a1[1] );
            v11 = (void *)*((_QWORD *)a1 + 1);
          }
          ExFreePoolWithTag(v11, 0x7272414Bu);
        }
        *a1 = v2;
        *((_QWORD *)a1 + 1) = PoolWithTag;
        return 1;
      }
    }
  }
  return 0;
}
