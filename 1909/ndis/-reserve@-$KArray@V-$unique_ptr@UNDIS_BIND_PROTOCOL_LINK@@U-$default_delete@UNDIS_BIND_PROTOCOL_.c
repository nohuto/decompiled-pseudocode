/*
 * XREFs of ?reserve@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K@Z @ 0x1C0105600
 * Callers:
 *     ?UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C0101EBC (-UpdateProtocols@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UND.c)
 *     ?grow@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAA_N_K@Z @ 0x1C010224C (-grow@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LIN.c)
 *     KRegKey::QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7ebe082982c952___ @ 0x1C0109DF8 (KRegKey--QueryValueMultisz__lambda_85acd3deb7e2b285fd367942132eb91d___lambda_e719d81758cdea2b5e7.c)
 * Callees:
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C0116DC8 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0127284 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

char __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::reserve(
        unsigned int *a1,
        unsigned __int64 a2)
{
  unsigned int v2; // edi
  _QWORD *PoolWithTag; // r14
  unsigned int v5; // edx
  __int64 i; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  void *v9; // rcx
  __int64 v10; // rsi
  __int64 v11; // rax
  NDIS_BIND_LINK_BASE *v12; // rbp
  volatile signed __int32 *Miniport; // rcx

  v2 = a2;
  if ( *a1 >= a2 )
    return 1;
  if ( a2 < 0xFFFFFFFF && is_mul_ok(8uLL, a2) )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8 * a2, 0x7272414Bu);
    if ( PoolWithTag )
    {
      v5 = a1[1];
      for ( i = 0LL; (unsigned int)i < v5; v5 = a1[1] )
      {
        v7 = *((_QWORD *)a1 + 1);
        v8 = *(_QWORD *)(v7 + 8 * i);
        *(_QWORD *)(v7 + 8 * i) = 0LL;
        PoolWithTag[i] = v8;
        i = (unsigned int)(i + 1);
      }
      v9 = (void *)*((_QWORD *)a1 + 1);
      if ( v9 )
      {
        v10 = 0LL;
        if ( v5 )
        {
          do
          {
            v11 = *((_QWORD *)a1 + 1);
            v12 = *(NDIS_BIND_LINK_BASE **)(v11 + 8 * v10);
            *(_QWORD *)(v11 + 8 * v10) = 0LL;
            if ( v12 )
            {
              Miniport = (volatile signed __int32 *)v12[1].BindState.Miniport;
              if ( Miniport )
              {
                if ( !_InterlockedDecrement(Miniport + 12) )
                  KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
              }
              NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v12);
              ExFreePoolWithTag(v12, 0x4C745042u);
            }
            v10 = (unsigned int)(v10 + 1);
          }
          while ( (unsigned int)v10 < a1[1] );
          v9 = (void *)*((_QWORD *)a1 + 1);
        }
        ExFreePoolWithTag(v9, 0x7272414Bu);
      }
      *a1 = v2;
      *((_QWORD *)a1 + 1) = PoolWithTag;
      return 1;
    }
  }
  return 0;
}
