/*
 * XREFs of ?EmitUpdateTextCommand@CTextBrushMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B6064
 * Callers:
 *     ?EmitUpdateCommands@CTextBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01B5E50 (-EmitUpdateCommands@CTextBrushMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000D1E8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

char __fastcall DirectComposition::CTextBrushMarshaler::EmitUpdateTextCommand(
        DirectComposition::CTextBrushMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  int v4; // ecx
  int v5; // ebp
  unsigned __int64 v6; // rsi
  char *v8; // rdx
  void *v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x20) != 0 && *((_QWORD *)this + 7) )
  {
    v4 = *((_DWORD *)this + 16);
    if ( (v4 & 3) != 0 )
      v4 += 4 - (v4 & 3);
    v5 = v4 + 16;
    v6 = (unsigned int)(v4 + 16);
    v9 = (void *)(4096LL - *((_QWORD *)(*a2)[17] + 5));
    if ( (unsigned __int64)v9 < v6
      && (!DirectComposition::CBatch::AllocateNewFragment(a2, (unsigned __int64 *)&v9) || (unsigned __int64)v9 < v6) )
    {
      return 0;
    }
    DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, v6, &v9);
    v8 = (char *)v9;
    *(_DWORD *)v9 = v5;
    *(_QWORD *)(v8 + 4) = 0LL;
    *((_DWORD *)v8 + 3) = 0;
    *((_DWORD *)v8 + 1) = 462;
    *((_DWORD *)v8 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v8 + 3) = (*((_QWORD *)this + 8) >> 1) - 1;
    memmove(v8 + 16, *((const void **)this + 7), *((_QWORD *)this + 8));
    *((_DWORD *)this + 4) &= ~0x20u;
  }
  return 1;
}
