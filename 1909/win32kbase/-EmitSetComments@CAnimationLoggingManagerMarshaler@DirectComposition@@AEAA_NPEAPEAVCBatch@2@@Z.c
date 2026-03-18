/*
 * XREFs of ?EmitSetComments@CAnimationLoggingManagerMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x1C0006A0C
 * Callers:
 *     ?EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@Z @ 0x1C00066A0 (-EmitUpdateCommands@CAnimationLoggingManagerMarshaler@DirectComposition@@MEAA_NPEAPEAVCBatch@2@@.c)
 * Callees:
 *     ?SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C00068AC (-SetCount@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1C0009C94 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z @ 0x1C000D1E8 (-AllocateNewFragment@CBatch@DirectComposition@@SA_NPEAPEAV12@PEA_K@Z.c)
 *     Win32FreePool @ 0x1C0012E40 (Win32FreePool.c)
 *     memmove @ 0x1C00BF740 (memmove.c)
 */

char __fastcall DirectComposition::CAnimationLoggingManagerMarshaler::EmitSetComments(
        DirectComposition::CAnimationLoggingManagerMarshaler *this,
        struct DirectComposition::CBatch **a2)
{
  unsigned int v2; // esi
  unsigned int v4; // ebp
  char v6; // di
  __int64 v8; // r12
  _DWORD *v9; // r13
  int v10; // ecx
  struct DirectComposition::CBatch *v11; // rax
  unsigned __int64 v12; // r14
  char *v13; // rcx
  size_t v14; // r8
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 v16; // [rsp+70h] [rbp+18h] BYREF
  void *v17; // [rsp+78h] [rbp+20h] BYREF

  v2 = *((_DWORD *)this + 56);
  v4 = *((_DWORD *)this + 52);
  v6 = 1;
  if ( v2 < v4 )
  {
    v8 = *((unsigned int *)this + 56);
    v6 = 1;
    while ( 1 )
    {
      v9 = *(_DWORD **)(v8 * *((_QWORD *)this + 27) + *((_QWORD *)this + 23));
      v10 = 2 * v9[2];
      if ( ((2 * *((_BYTE *)v9 + 8)) & 3) != 0 )
        v10 += 4 - ((2 * *((_BYTE *)v9 + 8)) & 3);
      v11 = *a2;
      v12 = (unsigned int)(v10 + 20);
      LODWORD(Src) = v10 + 20;
      v16 = 4096LL - *(_QWORD *)(*((_QWORD *)v11 + 17) + 40LL);
      if ( v16 < v12 && (!DirectComposition::CBatch::AllocateNewFragment(a2, &v16) || v16 < v12) )
        break;
      DirectComposition::CBatch::EnsureBatchBuffer(a2, v12, &v17);
      v13 = (char *)v17;
      *(_DWORD *)v17 = Src;
      *(_QWORD *)(v13 + 4) = 0LL;
      *(_QWORD *)(v13 + 12) = 0LL;
      *((_DWORD *)v13 + 1) = 15;
      *((_DWORD *)v13 + 2) = *((_DWORD *)this + 6);
      *((_DWORD *)v13 + 3) = *v9;
      *((_DWORD *)v13 + 4) = v9[2];
      memmove(v13 + 20, v9 + 4, 2LL * *((_QWORD *)v9 + 1));
      Win32FreePool(*(_QWORD *)(v8 * *((_QWORD *)this + 27) + *((_QWORD *)this + 23)));
      v14 = *((_QWORD *)this + 27);
      Src = 0LL;
      memmove((void *)(*((_QWORD *)this + 23) + v14 * v2), &Src, v14);
      ++*((_DWORD *)this + 56);
      ++v2;
      ++v8;
      if ( v2 >= v4 )
        goto LABEL_2;
    }
    v6 = 0;
  }
LABEL_2:
  if ( *((_DWORD *)this + 56) == v4 )
  {
    v6 = 1;
    DirectComposition::CDCompDynamicArrayBase::SetCount(
      (DirectComposition::CAnimationLoggingManagerMarshaler *)((char *)this + 184),
      0LL,
      0x6D6C4344u);
    *((_DWORD *)this + 56) = 0;
  }
  return v6;
}
