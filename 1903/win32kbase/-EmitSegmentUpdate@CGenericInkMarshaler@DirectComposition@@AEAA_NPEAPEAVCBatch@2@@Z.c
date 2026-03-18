/*
 * XREFs of ?EmitSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A7B4C
 * Callers:
 *     ?EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01A7CC0 (-EmitUpdateCommands@CGenericInkMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C00091A4 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ @ 0x1C01A7D88 (-GetSegmentCount@CGenericInkMarshaler@DirectComposition@@AEBAIXZ.c)
 *     ?NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEBA_NXZ @ 0x1C01A7DA4 (-NeedsSegmentUpdate@CGenericInkMarshaler@DirectComposition@@AEBA_NXZ.c)
 */

char __fastcall DirectComposition::CGenericInkMarshaler::EmitSegmentUpdate(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CBatch ***a2)
{
  DirectComposition::CGenericInkMarshaler *v4; // rcx
  unsigned int SegmentCount; // ebp
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned int v10; // esi
  unsigned int v11; // ebx
  char *v12; // r9
  int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  void *v18; // [rsp+58h] [rbp+20h] BYREF

  if ( !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this) )
    return 1;
  SegmentCount = DirectComposition::CGenericInkMarshaler::GetSegmentCount(v4);
  while ( 1 )
  {
    v7 = *((_QWORD *)this + 15) + 28LL;
    v8 = 4096LL - *((_QWORD *)(*a2)[17] + 5);
    v17 = v8;
    if ( v8 < v7 )
    {
      if ( !DirectComposition::CBatch::AllocateNewFragment(a2, &v17) )
        return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
      v8 = v17;
    }
    v9 = (v8 - 28) / *((_QWORD *)this + 15);
    v10 = SegmentCount - *((_DWORD *)this + 33);
    if ( v10 >= (unsigned int)v9 )
      v10 = v9;
    v11 = v10 * *((_DWORD *)this + 30) + 28;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer((struct DirectComposition::CBatch **)a2, v11, &v18) )
      break;
    v12 = (char *)v18;
    *(_DWORD *)v18 = v11;
    v13 = *((_DWORD *)this + 33);
    *(_QWORD *)(v12 + 4) = 0LL;
    v14 = v10 + v13;
    *(_QWORD *)(v12 + 12) = 0LL;
    *(_QWORD *)(v12 + 20) = 0LL;
    *((_DWORD *)v12 + 1) = 173;
    *((_DWORD *)v12 + 2) = *((_DWORD *)this + 6);
    *((_DWORD *)v12 + 3) = *((_DWORD *)this + 33);
    *((_DWORD *)v12 + 4) = v10;
    *((_DWORD *)v12 + 6) = *((_DWORD *)this + 35);
    v15 = *((_DWORD *)this + 32);
    v16 = v15;
    if ( v15 <= v14 )
      v16 = v14;
    *((_DWORD *)v12 + 5) = v16 - v15;
    memmove(
      v12 + 28,
      (const void *)(*((_QWORD *)this + 10)
                   + *((_QWORD *)this + 15) * *((_QWORD *)this + 14) * *((unsigned int *)this + 33)),
      *((_QWORD *)this + 15) * *((_QWORD *)this + 14) * v10);
    *((_BYTE *)this + 136) = 0;
    *((_DWORD *)this + 33) = v14;
    if ( v14 == SegmentCount )
    {
      *((_DWORD *)this + 4) |= 0x40u;
      return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
    }
  }
  return !DirectComposition::CGenericInkMarshaler::NeedsSegmentUpdate(this);
}
