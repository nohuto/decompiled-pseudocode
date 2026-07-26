/*
 * XREFs of ?moveElements@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@AEAAXKKK@Z @ 0x1C00C32D4
 * Callers:
 *     ?insertAt@?$KArray@V?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@$00@Rtl@@QEAA_N_K$$QEAV?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@@Z @ 0x1C00C02F4 (-insertAt@-$KArray@V-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL.c)
 * Callees:
 *     ??_G?$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U?$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@wistd@@QEAAPEAXI@Z @ 0x1C00601B0 (--_G-$unique_ptr@UNDIS_BIND_PROTOCOL_LINK@@U-$default_delete@UNDIS_BIND_PROTOCOL_LINK@@@wistd@@@.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00ED8F0 (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 *     ??1NDIS_BIND_LINK_BASE@@QEAA@XZ @ 0x1C0106F14 (--1NDIS_BIND_LINK_BASE@@QEAA@XZ.c)
 */

void __fastcall Rtl::KArray<wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>,1>::moveElements(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 i; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r12
  NDIS_BIND_LINK_BASE *v15; // rbp
  __int64 v16; // rax
  NDIS_BIND_LINK_BASE *v17; // rdi
  volatile signed __int32 *Miniport; // rcx
  volatile signed __int32 *v19; // rcx
  unsigned int v20; // ebx
  unsigned int v21; // r15d
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned int v27; // r12d
  __int64 v28; // rdi
  __int64 v29; // r13
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdi
  __int64 v35; // rbx

  if ( a2 != a3 && a4 )
  {
    if ( a2 >= a3 )
    {
      v20 = a3;
      v21 = a2 - a3;
      if ( a3 < a2 )
      {
        v22 = 8LL * a3;
        do
        {
          v23 = *(_QWORD *)(a1 + 8);
          v24 = v20 + v21;
          v25 = v24;
          ++v20;
          v26 = *(_QWORD *)(v23 + 8 * v24);
          *(_QWORD *)(v23 + 8 * v25) = 0LL;
          *(_QWORD *)(v22 + v23) = v26;
          v22 += 8LL;
        }
        while ( v20 < a2 );
      }
      v27 = a3 + a4;
      if ( v20 < a3 + a4 )
      {
        v28 = 8LL * v20;
        v29 = v28;
        do
        {
          wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(v29 + *(_QWORD *)(a1 + 8)));
          v30 = *(_QWORD *)(a1 + 8);
          v31 = v20 + v21;
          v32 = v31;
          ++v20;
          v29 += 8LL;
          v33 = *(_QWORD *)(v30 + 8 * v31);
          *(_QWORD *)(v30 + 8 * v32) = 0LL;
          *(_QWORD *)(v28 + v30) = v33;
          v28 += 8LL;
        }
        while ( v20 < v27 );
      }
      if ( v20 < a2 + a4 )
      {
        v34 = 8LL * v20;
        v35 = a2 + a4 - v20;
        do
        {
          wistd::unique_ptr<NDIS_BIND_PROTOCOL_LINK,wistd::default_delete<NDIS_BIND_PROTOCOL_LINK>>::`scalar deleting destructor'((NDIS_BIND_LINK_BASE **)(v34 + *(_QWORD *)(a1 + 8)));
          v34 += 8LL;
          --v35;
        }
        while ( v35 );
      }
    }
    else
    {
      LODWORD(v8) = a3 + a4;
      v9 = a3 - a2;
      for ( i = a3 + a4 - 1; (unsigned int)i >= *(_DWORD *)(a1 + 4); i = (unsigned int)(i - 1) )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v8 = (unsigned int)v8 - v9 - 1;
        v12 = *(_QWORD *)(v11 + 8 * v8);
        *(_QWORD *)(v11 + 8 * v8) = 0LL;
        LODWORD(v8) = i;
        *(_QWORD *)(v11 + 8 * i) = v12;
      }
      if ( (unsigned int)v8 > a3 )
      {
        do
        {
          v13 = *(_QWORD *)(a1 + 8);
          v14 = (unsigned int)(v8 - 1);
          v15 = *(NDIS_BIND_LINK_BASE **)(v13 + 8 * v14);
          if ( v15 )
          {
            Miniport = (volatile signed __int32 *)v15[1].BindState.Miniport;
            if ( Miniport && _InterlockedExchangeAdd(Miniport + 12, 0xFFFFFFFF) == 1 )
              KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)Miniport);
            NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v15);
            ExFreePoolWithTag(v15, 0x4C745042u);
            v13 = *(_QWORD *)(a1 + 8);
          }
          v8 = (unsigned int)v8 - v9 - 1;
          v16 = *(_QWORD *)(v13 + 8 * v8);
          *(_QWORD *)(v13 + 8 * v8) = 0LL;
          LODWORD(v8) = v14;
          *(_QWORD *)(v13 + 8 * v14) = v16;
        }
        while ( (unsigned int)v14 > a3 );
      }
      while ( (unsigned int)v8 > a2 )
      {
        v8 = (unsigned int)(v8 - 1);
        v17 = *(NDIS_BIND_LINK_BASE **)(*(_QWORD *)(a1 + 8) + 8 * v8);
        if ( v17 )
        {
          v19 = (volatile signed __int32 *)v17[1].BindState.Miniport;
          if ( v19 )
          {
            if ( _InterlockedExchangeAdd(v19 + 12, 0xFFFFFFFF) == 1 )
              KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v19);
          }
          NDIS_BIND_LINK_BASE::~NDIS_BIND_LINK_BASE(v17);
          ExFreePoolWithTag(v17, 0x4C745042u);
        }
      }
    }
  }
}
