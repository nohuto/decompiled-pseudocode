/*
 * XREFs of ??0CInteraction@@IEAA@PEAVCComposition@@@Z @ 0x1800963DC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x1800CFCE4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CInteractionProcessor@@QEAA@XZ @ 0x1800295A4 (--0CInteractionProcessor@@QEAA@XZ.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x180096374 (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     ?GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z @ 0x18009718C (-GetEntry@CInteraction@@CAPEAUHANDLE_ENTRY@1@I@Z.c)
 *     ?GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z @ 0x18009A96C (-GetNewEntry@HANDLE_TABLE@@QEAAJKPEAI@Z.c)
 *     McTemplateU0ppq @ 0x180161108 (McTemplateU0ppq.c)
 */

CInteraction *__fastcall CInteraction::CInteraction(CInteraction *this, struct CComposition *a2)
{
  int v2; // esi
  unsigned int *v4; // rdi
  int v5; // ecx
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  v2 = (_DWORD)this + 8;
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 1) = &CResource::`vftable';
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *(_QWORD *)this = &CInteraction::`vftable'{for `IInteractionResource'};
  *((_QWORD *)this + 1) = &CInteraction::`vftable'{for `CResource'};
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 47) = 4;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, (struct _D3DMATRIX *)((char *)this + 280));
  CInteractionProcessor::CInteractionProcessor((CInteraction *)((char *)this + 344));
  *((_QWORD *)this + 216) = 0LL;
  v4 = (unsigned int *)((char *)this + 1696);
  *((_DWORD *)this + 424) = 0;
  AcquireSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  if ( (int)HANDLE_TABLE::GetNewEntry(
              (HANDLE_TABLE *)&CInteraction::s_InteractionHandleTable,
              0x53u,
              (unsigned int *)this + 424) >= 0 )
    *((_QWORD *)CInteraction::GetEntry(*v4) + 1) = this;
  ReleaseSRWLockExclusive(&CInteraction::s_InteractionHandleTableLock);
  QueryPerformanceCounter(&PerformanceCount);
  *((LARGE_INTEGER *)this + 213) = PerformanceCount;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x1000) != 0 )
    McTemplateU0ppq(v5, (unsigned int)&INTERACTION_CREATED, (_DWORD)this, v2, *v4);
  return this;
}
