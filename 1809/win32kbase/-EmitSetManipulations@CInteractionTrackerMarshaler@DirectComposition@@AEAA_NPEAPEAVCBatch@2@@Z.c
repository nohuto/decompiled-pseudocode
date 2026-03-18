/*
 * XREFs of ?EmitSetManipulations@CInteractionTrackerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016F31C
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C016FBF0 (-EmitUpdateCommands@CInteractionTrackerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000C0D4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000E928 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 */

char __fastcall DirectComposition::CInteractionTrackerMarshaler::EmitSetManipulations(
        DirectComposition::CInteractionTrackerMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  char v3; // si
  unsigned int v4; // ecx
  char v6; // bp
  char *v7; // rcx
  void *v8; // rdx
  unsigned __int64 v9; // r15
  char *v10; // rcx
  unsigned int v11; // edx
  _DWORD *v12; // r8
  __int64 v13; // r9
  int v14; // eax
  void *v16; // [rsp+50h] [rbp+8h] BYREF
  void *v17; // [rsp+60h] [rbp+18h] BYREF

  v3 = 1;
  v4 = *((_DWORD *)this + 94);
  v6 = 1;
  if ( (*((_DWORD *)this + 4) & 0x800) != 0 || v4 )
  {
    if ( *((_DWORD *)this + 95) < v4 )
    {
      do
      {
        v8 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
        v16 = v8;
        if ( (unsigned __int64)v8 < 0x18 )
        {
          if ( !DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v16) )
            break;
          v8 = v16;
        }
        v9 = (unsigned int)(*((_DWORD *)this + 94) - *((_DWORD *)this + 95));
        if ( v9 >= ((unsigned __int64)v8 - 16) >> 3 )
          LODWORD(v9) = ((unsigned __int64)v8 - 16) >> 3;
        DirectComposition::CBatch::EnsureBatchBuffer(
          (struct DirectComposition::CBatch **)a2,
          (unsigned int)(8 * v9 + 16),
          &v17);
        v10 = (char *)v17;
        v11 = 0;
        *(_DWORD *)v17 = 8 * v9 + 16;
        v12 = v10 + 16;
        *(_QWORD *)(v10 + 4) = 0LL;
        *((_DWORD *)v10 + 3) = 0;
        *((_DWORD *)v10 + 1) = 230;
        *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
        for ( *((_DWORD *)v10 + 3) = v9; v11 < (unsigned int)v9; v12 += 2 )
        {
          *v12 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 46) + 16LL * (v11 + *((_DWORD *)this + 95))) + 24LL);
          v13 = *(_QWORD *)(*((_QWORD *)this + 46) + 16LL * (v11 + *((_DWORD *)this + 95)) + 8);
          if ( v13 )
            v14 = *(_DWORD *)(v13 + 24);
          else
            v14 = 0;
          v12[1] = v14;
          ++v11;
        }
        *((_DWORD *)this + 95) += v9;
      }
      while ( *((_DWORD *)this + 95) < *((_DWORD *)this + 94) );
    }
  }
  else if ( DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, 0x10uLL, &v16) )
  {
    v7 = (char *)v16;
    *(_DWORD *)v16 = 16;
    *(_QWORD *)(v7 + 4) = 0LL;
    *((_DWORD *)v7 + 3) = 0;
    *((_DWORD *)v7 + 1) = 230;
    *((_QWORD *)v7 + 1) = *((unsigned int *)this + 6);
  }
  else
  {
    v6 = 0;
  }
  if ( *((_DWORD *)this + 95) != *((_DWORD *)this + 94) || !v6 )
    return 0;
  return v3;
}
