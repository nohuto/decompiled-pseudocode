/*
 * XREFs of ?moveElements@?$KArray@ULwfBindProperties@@$00@Rtl@@AEAAXKKK@Z @ 0x1C01056DC
 * Callers:
 *     ?insertAt@?$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z @ 0x1C0105510 (-insertAt@-$KArray@ULwfBindProperties@@$00@Rtl@@QEAA_N_K$$QEAULwfBindProperties@@@Z.c)
 * Callees:
 *     ??_GLwfBindProperties@@QEAAPEAXI@Z @ 0x1C0081D70 (--_GLwfBindProperties@@QEAAPEAXI@Z.c)
 */

void __fastcall Rtl::KArray<LwfBindProperties,1>::moveElements(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v8; // ebp
  unsigned int v9; // r12d
  unsigned int i; // r8d
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // ebx
  unsigned int v20; // r12d
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  unsigned int v25; // esi
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // r13
  __int64 v28; // rdx
  __int64 v29; // rcx
  unsigned __int64 v30; // rdi
  __int64 v31; // rbx

  if ( a2 != a3 && a4 )
  {
    if ( a2 >= a3 )
    {
      v19 = a3;
      v20 = a2 - a3;
      if ( a3 < a2 )
      {
        v21 = (unsigned __int64)a3 << 6;
        do
        {
          v22 = *(_QWORD *)(a1 + 8);
          v23 = (unsigned __int64)(v19 + v20) << 6;
          ++v19;
          v24 = v22 + v23;
          *(_OWORD *)(v21 + v22) = *(_OWORD *)v24;
          *(_DWORD *)(v21 + v22 + 16) = *(_DWORD *)(v24 + 16);
          v21 += 64LL;
          *(_DWORD *)(v21 + v22 - 44) = *(_DWORD *)(v24 + 20);
          *(_QWORD *)(v21 + v22 - 40) = *(_QWORD *)(v24 + 24);
          *(_QWORD *)(v24 + 24) = 0LL;
          *(_QWORD *)(v24 + 16) = 0LL;
          *(_DWORD *)(v21 + v22 - 32) = *(_DWORD *)(v24 + 32);
          *(_DWORD *)(v21 + v22 - 28) = *(_DWORD *)(v24 + 36);
          *(_QWORD *)(v21 + v22 - 24) = *(_QWORD *)(v24 + 40);
          *(_QWORD *)(v24 + 40) = 0LL;
          *(_QWORD *)(v24 + 32) = 0LL;
          *(_DWORD *)(v21 + v22 - 16) = *(_DWORD *)(v24 + 48);
          *(_BYTE *)(v21 + v22 - 12) = *(_BYTE *)(v24 + 52);
          *(_DWORD *)(v21 + v22 - 8) = *(_DWORD *)(v24 + 56);
        }
        while ( v19 < a2 );
      }
      v25 = a4 + a3;
      if ( v19 < v25 )
      {
        v26 = (unsigned __int64)v19 << 6;
        v27 = v26;
        do
        {
          LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(v27 + *(_QWORD *)(a1 + 8)));
          v28 = *(_QWORD *)(a1 + 8);
          v29 = v28 + ((unsigned __int64)(v19 + v20) << 6);
          ++v19;
          v27 += 64LL;
          *(_OWORD *)(v26 + v28) = *(_OWORD *)v29;
          *(_DWORD *)(v26 + v28 + 16) = *(_DWORD *)(v29 + 16);
          v26 += 64LL;
          *(_DWORD *)(v26 + v28 - 44) = *(_DWORD *)(v29 + 20);
          *(_QWORD *)(v26 + v28 - 40) = *(_QWORD *)(v29 + 24);
          *(_QWORD *)(v29 + 24) = 0LL;
          *(_QWORD *)(v29 + 16) = 0LL;
          *(_DWORD *)(v26 + v28 - 32) = *(_DWORD *)(v29 + 32);
          *(_DWORD *)(v26 + v28 - 28) = *(_DWORD *)(v29 + 36);
          *(_QWORD *)(v26 + v28 - 24) = *(_QWORD *)(v29 + 40);
          *(_QWORD *)(v29 + 40) = 0LL;
          *(_QWORD *)(v29 + 32) = 0LL;
          *(_DWORD *)(v26 + v28 - 16) = *(_DWORD *)(v29 + 48);
          *(_BYTE *)(v26 + v28 - 12) = *(_BYTE *)(v29 + 52);
          *(_DWORD *)(v26 + v28 - 8) = *(_DWORD *)(v29 + 56);
        }
        while ( v19 < v25 );
      }
      if ( v19 < a2 + a4 )
      {
        v30 = (unsigned __int64)v19 << 6;
        v31 = a2 + a4 - v19;
        do
        {
          LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(v30 + *(_QWORD *)(a1 + 8)));
          v30 += 64LL;
          --v31;
        }
        while ( v31 );
      }
    }
    else
    {
      v8 = a3 + a4;
      v9 = a3 - a2;
      for ( i = a3 + a4 - 1; i >= *(_DWORD *)(a1 + 4); *(_DWORD *)(v12 + 56) = *(_DWORD *)(v14 + 56) )
      {
        v11 = *(_QWORD *)(a1 + 8);
        v12 = v11 + ((unsigned __int64)i << 6);
        v13 = v8 - v9 - 1;
        v8 = i--;
        v14 = v11 + (v13 << 6);
        *(_OWORD *)v12 = *(_OWORD *)v14;
        *(_DWORD *)(v12 + 16) = *(_DWORD *)(v14 + 16);
        *(_DWORD *)(v12 + 20) = *(_DWORD *)(v14 + 20);
        *(_QWORD *)(v12 + 24) = *(_QWORD *)(v14 + 24);
        *(_QWORD *)(v14 + 24) = 0LL;
        *(_QWORD *)(v14 + 16) = 0LL;
        *(_DWORD *)(v12 + 32) = *(_DWORD *)(v14 + 32);
        *(_DWORD *)(v12 + 36) = *(_DWORD *)(v14 + 36);
        *(_QWORD *)(v12 + 40) = *(_QWORD *)(v14 + 40);
        *(_QWORD *)(v14 + 40) = 0LL;
        *(_QWORD *)(v14 + 32) = 0LL;
        *(_DWORD *)(v12 + 48) = *(_DWORD *)(v14 + 48);
        *(_BYTE *)(v12 + 52) = *(_BYTE *)(v14 + 52);
      }
      for ( ; v8 > a3; *(_DWORD *)(v16 + v15 + 56) = *(_DWORD *)(v18 + 56) )
      {
        v15 = (unsigned __int64)(v8 - 1) << 6;
        LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(v15 + *(_QWORD *)(a1 + 8)));
        v16 = *(_QWORD *)(a1 + 8);
        v17 = v8 - v9 - 1;
        --v8;
        v18 = v16 + (v17 << 6);
        *(_OWORD *)(v16 + v15) = *(_OWORD *)v18;
        *(_DWORD *)(v16 + v15 + 16) = *(_DWORD *)(v18 + 16);
        *(_DWORD *)(v16 + v15 + 20) = *(_DWORD *)(v18 + 20);
        *(_QWORD *)(v16 + v15 + 24) = *(_QWORD *)(v18 + 24);
        *(_QWORD *)(v18 + 24) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_DWORD *)(v16 + v15 + 32) = *(_DWORD *)(v18 + 32);
        *(_DWORD *)(v16 + v15 + 36) = *(_DWORD *)(v18 + 36);
        *(_QWORD *)(v16 + v15 + 40) = *(_QWORD *)(v18 + 40);
        *(_QWORD *)(v18 + 40) = 0LL;
        *(_QWORD *)(v18 + 32) = 0LL;
        *(_DWORD *)(v16 + v15 + 48) = *(_DWORD *)(v18 + 48);
        *(_BYTE *)(v16 + v15 + 52) = *(_BYTE *)(v18 + 52);
      }
      while ( v8 > a2 )
        LwfBindProperties::`scalar deleting destructor'((LwfBindProperties *)(*(_QWORD *)(a1 + 8)
                                                                            + ((unsigned __int64)--v8 << 6)));
    }
  }
}
