/*
 * XREFs of ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C012491C
 * Callers:
 *     ?GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ @ 0x1C00F9838 (-GarbageCollectDeadBindings@BindStack@Ndis@@QEAAXXZ.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00FC220 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00122E0 (--_G-$unique_ptr@UNDIS_BIND_FILTER_LINK@@U-$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wist.c)
 */

NDIS_BIND_LINK_BASE **__fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>,1>::moveElements(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  unsigned int v8; // esi
  unsigned int v9; // r12d
  __int64 i; // r8
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rsi
  NDIS_BIND_LINK_BASE **result; // rax
  unsigned int v18; // ebx
  unsigned int v19; // esi
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // r12d
  __int64 v25; // r14
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  int v30; // ecx
  __int64 v31; // rdi
  __int64 v32; // rbx

  if ( a2 != a3 && a4 )
  {
    if ( a2 >= a3 )
    {
      v18 = a3;
      v19 = a2 - a3;
      if ( a3 < a2 )
      {
        v20 = 8LL * a3;
        do
        {
          v21 = *(_QWORD *)(a1 + 8);
          v22 = v18 + v19;
          v23 = v22;
          ++v18;
          result = *(NDIS_BIND_LINK_BASE ***)(v21 + 8 * v22);
          *(_QWORD *)(v21 + 8 * v23) = 0LL;
          *(_QWORD *)(v20 + v21) = result;
          v20 += 8LL;
        }
        while ( v18 < a2 );
      }
      v24 = a3 + a4;
      if ( v18 < a3 + a4 )
      {
        v25 = 8LL * v18;
        v26 = v25;
        do
        {
          wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(v26 + *(_QWORD *)(a1 + 8)));
          v27 = *(_QWORD *)(a1 + 8);
          v28 = v18 + v19;
          v29 = v28;
          ++v18;
          v26 += 8LL;
          result = *(NDIS_BIND_LINK_BASE ***)(v27 + 8 * v28);
          *(_QWORD *)(v27 + 8 * v29) = 0LL;
          *(_QWORD *)(v25 + v27) = result;
          v25 += 8LL;
        }
        while ( v18 < v24 );
      }
      v30 = a2 + a4;
      if ( v18 < a2 + a4 )
      {
        v31 = 8LL * v18;
        v32 = v30 - v18;
        do
        {
          result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(v31 + *(_QWORD *)(a1 + 8)));
          v31 += 8LL;
          --v32;
        }
        while ( v32 );
      }
    }
    else
    {
      v8 = a3 + a4;
      v9 = a3 - a2;
      for ( i = a3 + a4 - 1; (unsigned int)i >= *(_DWORD *)(a1 + 4); i = (unsigned int)(i - 1) )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = v8 - v9 - 1;
        v13 = *(_QWORD *)(v11 + 8 * v12);
        *(_QWORD *)(v11 + 8 * v12) = 0LL;
        v8 = i;
        *(_QWORD *)(v11 + 8 * i) = v13;
      }
      if ( v8 > a3 )
      {
        do
        {
          v14 = v8 - 1;
          wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8 * v14));
          v15 = *(_QWORD *)(a1 + 8);
          v16 = v8 - v9 - 1;
          result = *(NDIS_BIND_LINK_BASE ***)(v15 + 8 * v16);
          *(_QWORD *)(v15 + 8 * v16) = 0LL;
          v8 = v14;
          *(_QWORD *)(v15 + 8 * v14) = result;
        }
        while ( (unsigned int)v14 > a3 );
      }
      while ( v8 > a2 )
        result = wistd::unique_ptr<NDIS_BIND_FILTER_LINK,wistd::default_delete<NDIS_BIND_FILTER_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8LL * --v8));
    }
  }
  return result;
}
