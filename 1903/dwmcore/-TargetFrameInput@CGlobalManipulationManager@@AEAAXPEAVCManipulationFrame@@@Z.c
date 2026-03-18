/*
 * XREFs of ?TargetFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18023AC60
 * Callers:
 *     ?ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180239830 (-ProcessManipulationInfo@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RouteFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x18023A46C (-RouteFrameInput@CGlobalManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x180019298 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z @ 0x180234FD8 (-QpcToMicroSec@QpcTimeConverter@@QEBAH_KPEA_K@Z.c)
 *     ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180237CC0 (--4-$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?Lookup@?$CMap@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@@@@@QEBA?AV?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@AEBI@Z @ 0x1802385D0 (-Lookup@-$CMap@IV-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@V.c)
 *     ?TargetBufferedFrames@CGlobalManipulationManager@@AEAAXIPEAXK@Z @ 0x18023AB8C (-TargetBufferedFrames@CGlobalManipulationManager@@AEAAXIPEAXK@Z.c)
 *     ?TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame@@KPEAPEAX@Z @ 0x18023AE50 (-TargetPointer@CGlobalManipulationManager@@AEAAXPEAVCManipulationContext@@PEAVCManipulationFrame.c)
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@AEBUManipulationThreadTelemetryData@@@Z @ 0x1802605F0 (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 */

void __fastcall CGlobalManipulationManager::TargetFrameInput(
        CGlobalManipulationManager *this,
        struct CManipulationFrame *a2)
{
  unsigned __int64 v2; // r14
  unsigned int i; // ebx
  __int64 v6; // rsi
  int *v7; // r15
  unsigned __int64 v8; // rcx
  void *v9; // r8
  int v10; // r15d
  __int64 v11; // r12
  unsigned int v12; // esi
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rax
  struct CManipulationContext *v16; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp+10h] BYREF
  void *v18; // [rsp+80h] [rbp+18h] BYREF

  v2 = 0LL;
  for ( i = 0; i < *((_DWORD *)a2 + 4); ++i )
  {
    v6 = 248LL * i;
    v7 = (int *)((char *)a2 + v6);
    if ( (unsigned int)QpcTimeConverter::QpcToMicroSec(
                         (CGlobalManipulationManager *)((char *)this + 384),
                         *(_QWORD *)((char *)a2 + v6 + 224),
                         &v17) )
    {
      v8 = v17;
    }
    else
    {
      v8 = 1000LL * *(unsigned int *)((char *)a2 + v6 + 208);
      v17 = v8;
    }
    if ( v2 >= v8 )
      v8 = v2;
    v2 = v8;
    if ( (*((_BYTE *)a2 + 64) & 2) == 0 || *(_QWORD *)((char *)a2 + v6 + 168) == -1LL )
    {
      CMap<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CManipulationContext>>>::Lookup(
        (__int64)this + 264,
        (__int64 (__fastcall ****)(_QWORD))&v16,
        v7 + 37);
      if ( (((*(_DWORD *)((_BYTE *)a2 + v6 + 156) & 0x20006) - 0x20000) & 0xFFFFFFFD) == 0 )
        Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
          (__int64 (__fastcall ****)(_QWORD))&v16,
          (_QWORD *)this + 43);
      v9 = 0LL;
      v18 = 0LL;
      if ( v16 )
      {
        CGlobalManipulationManager::TargetPointer(this, v16, a2, i, &v18);
        v9 = v18;
      }
      *(_QWORD *)((char *)a2 + v6 + 168) = v9;
      if ( v9 != (void *)-1LL )
      {
        *((_BYTE *)a2 + 64) |= 1u;
        if ( (*((_BYTE *)a2 + 64) & 2) == 0 )
          CGlobalManipulationManager::TargetBufferedFrames(this, v7[37], v9, i);
      }
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
    }
  }
  v10 = 0;
  if ( *((int *)this + 74) > 0 )
  {
    v11 = 0LL;
    do
    {
      v12 = 0;
      if ( *((_DWORD *)a2 + 4) == 1 && (*((_DWORD *)a2 + 39) & 0x800000) != 0 )
      {
        v13 = *((_DWORD *)a2 + 54);
        if ( v13 == 571 )
        {
          v12 = 1;
        }
        else if ( v13 == 572 )
        {
          v12 = 2;
        }
      }
      v14 = *(_QWORD *)(v11 + *((_QWORD *)this + 36));
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      CGestureTargetingManager::ProcessHandledInteractionsWalk(v14, v15, v2, v12, (char *)a2 + 72);
      ++v10;
      v11 += 8LL;
    }
    while ( v10 < *((_DWORD *)this + 74) );
  }
}
