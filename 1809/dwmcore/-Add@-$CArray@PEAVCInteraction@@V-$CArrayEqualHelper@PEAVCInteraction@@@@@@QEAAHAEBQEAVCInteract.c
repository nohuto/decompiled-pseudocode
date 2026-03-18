/*
 * XREFs of ?Add@?$CArray@PEAVCInteraction@@V?$CArrayEqualHelper@PEAVCInteraction@@@@@@QEAAHAEBQEAVCInteraction@@@Z @ 0x18019BD68
 * Callers:
 *     ?UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z @ 0x18019D1E0 (-UpdateDefaultInteractionForCurrentMC@CInteraction@@QEAAX_N@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?ReallocHeap@@YAPEAXPEAX_K@Z @ 0x1800D8F0C (-ReallocHeap@@YAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CArray<CInteraction *,CArrayEqualHelper<CInteraction *>>::Add(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  int v5; // ebp
  int v6; // ebx
  char *v7; // rax
  char *v8; // rdx

  v2 = dword_1803086A8;
  v4 = 1;
  v5 = dword_1803086A8 + 1;
  if ( dword_1803086A8 + 1 <= 0 )
    return 0;
  if ( dword_1803086A8 == dword_1803086AC )
  {
    if ( dword_1803086A8 <= 0x3FFFFFFF && (unsigned __int64)dword_1803086A8 <= 0xFFFFFFFFFFFFFFFLL )
    {
      v6 = 2;
      if ( dword_1803086AC >= 2 )
        v6 = dword_1803086A8 + (dword_1803086A8 >> 1);
      v7 = (char *)(dword_1803086A8
                  ? ReallocHeap(CInteraction::s_DefaultStateLockedInteractions, 8LL * v6)
                  : WPF::ProcessHeapImpl::AllocClear(8LL * v6));
      if ( v7 )
      {
        dword_1803086AC = v6;
        CInteraction::s_DefaultStateLockedInteractions = v7;
        goto LABEL_14;
      }
    }
    return 0;
  }
  v7 = (char *)CInteraction::s_DefaultStateLockedInteractions;
LABEL_14:
  v8 = &v7[8 * v2];
  dword_1803086A8 = v5;
  if ( v8 )
    *(_QWORD *)v8 = *a2;
  return v4;
}
