/*
 * XREFs of ?ModifyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K@Z @ 0x1C0070280
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FE00 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PAGE_TABLE::ModifyPageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        const struct COMMIT_VA_STATE *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // rdi
  unsigned __int64 v8; // r10
  __int64 v9; // rbp
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int64 v15; // r10
  __int64 v16; // rbp
  __int64 v17; // rbx
  unsigned __int64 v18; // rsi
  __int64 v19; // r9
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r10
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // rdx

  if ( *((_DWORD *)a3 + 13) == -2 )
  {
    if ( a4 < a4 + a5 )
    {
      v23 = *(_QWORD *)a3;
      v24 = a4;
      v25 = a5;
      v26 = 16 * v24;
      do
      {
        v27 = *((_QWORD *)this + 3);
        if ( (*(_BYTE *)(v27 + v26) & 1) == 0 )
          ++*((_DWORD *)this + 1);
        *(_QWORD *)(v27 + v26) = v23;
        v26 += 16LL;
        --v25;
      }
      while ( v25 );
    }
  }
  else
  {
    v6 = *((_QWORD *)a3 + 4);
    if ( v6 )
    {
      v7 = 1LL;
      if ( (*(_DWORD *)this & 0x40) != 0 )
        v7 = 16LL;
      v8 = a6;
      if ( a4 < a4 + a5 )
      {
        v9 = *(_QWORD *)a3;
        v10 = a5;
        v11 = *((_QWORD *)a3 + 8);
        v12 = 16LL * a4;
        do
        {
          v13 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v13 + v12) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v13 + v12) = v9;
          if ( v11 )
            v14 = *(_QWORD *)(v6
                            + 8LL
                            * ((unsigned int)*((_QWORD *)a3 + 3) + (unsigned int)((v8 - *((_QWORD *)a3 + 3)) % v11))
                            + 48);
          else
            v14 = *(_QWORD *)(v6 + 8 * v8 + 48);
          *(_QWORD *)(*((_QWORD *)this + 3) + v12 + 8) = v14;
          v8 += v7;
          v12 += 16LL;
          --v10;
        }
        while ( v10 );
      }
    }
    else
    {
      v15 = a6;
      if ( a4 < a4 + a5 )
      {
        v16 = *(_QWORD *)a3;
        v17 = a5;
        v18 = *((_QWORD *)a3 + 8);
        v19 = 16LL * a4;
        do
        {
          v20 = *((_QWORD *)this + 3);
          if ( (*(_BYTE *)(v20 + v19) & 1) == 0 )
            ++*((_DWORD *)this + 1);
          *(_QWORD *)(v20 + v19) = v16;
          if ( v18 )
            v21 = *((_QWORD *)a3 + 3) + (v15 - *((_QWORD *)a3 + 3)) % v18;
          else
            v21 = v15;
          *(_QWORD *)(*((_QWORD *)this + 3) + v19 + 8) = v21;
          v19 += 16LL;
          v22 = 16LL;
          if ( (*(_DWORD *)this & 0x40) == 0 )
            v22 = 1LL;
          v15 += v22;
          --v17;
        }
        while ( v17 );
      }
    }
  }
}
