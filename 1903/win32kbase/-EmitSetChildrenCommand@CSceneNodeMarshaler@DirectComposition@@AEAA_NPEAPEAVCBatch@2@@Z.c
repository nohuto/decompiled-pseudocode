/*
 * XREFs of ?EmitSetChildrenCommand@CSceneNodeMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B9CFC
 * Callers:
 *     ?EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01BB3F0 (-EmitUpdateCommands@CSceneNodeMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00091A4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 */

bool __fastcall DirectComposition::CSceneNodeMarshaler::EmitSetChildrenCommand(
        DirectComposition::CSceneNodeMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  char *v7; // rcx
  bool v8; // zf
  int v9; // eax
  unsigned int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r11
  __int64 v13; // r10
  unsigned __int64 v14; // rax
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF
  void *v17; // [rsp+50h] [rbp+18h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 && (unsigned __int64)*((unsigned int *)this + 16) < *((_QWORD *)this + 6) )
  {
    do
    {
      v4 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
      v16 = v4;
      if ( v4 < 0x18 )
      {
        if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v16) )
          return *((unsigned int *)this + 16) == *((_QWORD *)this + 6);
        v4 = v16;
      }
      v5 = *((unsigned int *)this + 16);
      v6 = (v4 - 20) >> 2;
      if ( *((_QWORD *)this + 6) - v5 < v6 )
        LODWORD(v6) = *((_DWORD *)this + 12) - v5;
      DirectComposition::CBatch::EnsureBatchBuffer(
        (struct DirectComposition::CBatch **)a2,
        (unsigned int)(4 * v6 + 20),
        &v17);
      v7 = (char *)v17;
      *(_DWORD *)v17 = 4 * v6 + 20;
      v8 = *((_DWORD *)this + 16) == 0;
      *(_QWORD *)(v7 + 4) = 0LL;
      *(_QWORD *)(v7 + 12) = 0LL;
      v9 = 634;
      if ( !v8 )
        v9 = 635;
      *((_DWORD *)v7 + 1) = v9;
      *((_DWORD *)v7 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v7 + 3) = 4 * v6;
      v10 = *((_DWORD *)this + 16);
      if ( (_DWORD)v6 )
      {
        v11 = 0LL;
        v12 = (unsigned int)v6;
        do
        {
          if ( (unsigned __int64)v10 >= *((_QWORD *)this + 6) )
          {
            v13 = 0LL;
          }
          else
          {
            _mm_lfence();
            v13 = *(_QWORD *)(*((_QWORD *)this + 5) + 8LL * v10);
          }
          ++v10;
          *(_DWORD *)&v7[v11 + 16] = *(_DWORD *)(v13 + 24);
          v11 += 4LL;
          --v12;
        }
        while ( v12 );
        v10 = *((_DWORD *)this + 16);
      }
      v14 = v10 + (unsigned int)v6;
      *((_DWORD *)this + 16) = v14;
    }
    while ( v14 < *((_QWORD *)this + 6) );
  }
  return *((unsigned int *)this + 16) == *((_QWORD *)this + 6);
}
