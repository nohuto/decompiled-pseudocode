/*
 * XREFs of ?EmitSetTrackerBindingMode@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01AD940
 * Callers:
 *     ?EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C01ADA80 (-EmitUpdateCommands@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVC.c)
 * Callees:
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C000CBD4 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     memmove @ 0x1C00C1540 (memmove.c)
 *     ?CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@AEAAXXZ @ 0x1C01AD8A0 (-CleanUpListItemsPendingDeletion@CInteractionTrackerBindingManagerMarshaler@DirectComposition@@A.c)
 */

char __fastcall DirectComposition::CInteractionTrackerBindingManagerMarshaler::EmitSetTrackerBindingMode(
        DirectComposition::CInteractionTrackerBindingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int128 v8; // xmm0
  __int32 v9; // ebp
  char *v10; // rdx
  __int64 v11; // rax
  __int128 Src; // [rsp+20h] [rbp-38h] BYREF
  __m128i v14; // [rsp+30h] [rbp-28h]
  void *v15; // [rsp+60h] [rbp+8h] BYREF

  if ( (*((_DWORD *)this + 4) & 0x40) == 0 )
    return 1;
  v4 = 0;
  if ( !*((_QWORD *)this + 10) )
  {
LABEL_10:
    if ( *((_BYTE *)this + 48) )
      *((_BYTE *)this + 48) = 0;
    DirectComposition::CInteractionTrackerBindingManagerMarshaler::CleanUpListItemsPendingDeletion(this);
    *((_DWORD *)this + 4) &= ~0x40u;
    return 1;
  }
  v5 = 0LL;
  while ( 1 )
  {
    v6 = *((_QWORD *)this + 7);
    v7 = v5 * *((_QWORD *)this + 11);
    v8 = *(_OWORD *)(v7 + v6);
    v14 = *(__m128i *)(v7 + v6 + 16);
    Src = v8;
    if ( !(unsigned __int8)_mm_cvtsi128_si32(_mm_srli_si128(v14, 8)) )
      goto LABEL_9;
    v9 = v14.m128i_i32[0];
    if ( v14.m128i_i32[0] == v14.m128i_i32[1] && !*((_BYTE *)this + 48) )
      goto LABEL_9;
    if ( !DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x18uLL, &v15) )
      return 0;
    v10 = (char *)v15;
    v14.m128i_i8[8] = 0;
    v14.m128i_i32[1] = v9;
    *(_DWORD *)v15 = 24;
    *(_QWORD *)(v10 + 4) = 0LL;
    *(_QWORD *)(v10 + 12) = 0LL;
    *((_DWORD *)v10 + 5) = 0;
    *((_DWORD *)v10 + 1) = 244;
    *((_DWORD *)v10 + 2) = *((_DWORD *)this + 6);
    v11 = *((_QWORD *)&Src + 1);
    *((_DWORD *)v10 + 3) = *(_DWORD *)(Src + 24);
    *((_DWORD *)v10 + 4) = *(_DWORD *)(v11 + 24);
    *((_DWORD *)v10 + 5) = v9;
    memmove((void *)(*((_QWORD *)this + 7) + v5 * *((_QWORD *)this + 11)), &Src, *((_QWORD *)this + 11));
LABEL_9:
    v5 = ++v4;
    if ( (unsigned __int64)v4 >= *((_QWORD *)this + 10) )
      goto LABEL_10;
  }
}
