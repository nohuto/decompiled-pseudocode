/*
 * XREFs of ?Create@CRedirectedVisualContent@@SAJPEAVCVisual@@PEAPEAV1@@Z @ 0x18020C4F0
 * Callers:
 *     ?ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISUAL_SETREDIRECTEDVISUAL@@@Z @ 0x1801F4C28 (-ProcessSetRedirectedVisual@CRedirectVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REDIRECTVISU.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CRedirectedVisualContent::Create(struct CVisual *a1, struct CRedirectedVisualContent **a2)
{
  struct CRedirectedVisualContent *v4; // rbx
  __int64 v5; // rax
  signed int v6; // eax
  __int64 v7; // rcx
  unsigned int v8; // edi
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (struct CRedirectedVisualContent *)DefaultHeap::AllocClear(0x60uLL);
  if ( !v4 )
    ModuleFailFastForHRESULT(-2147024882, retaddr);
  v5 = *((_QWORD *)a1 + 2);
  *((_DWORD *)v4 + 2) = 0;
  *((_QWORD *)v4 + 2) = v5;
  *((_QWORD *)v4 + 3) = 0LL;
  *((_QWORD *)v4 + 5) = 0LL;
  *((_DWORD *)v4 + 8) = 0;
  *(_QWORD *)v4 = &CRedirectedVisualContent::`vftable';
  *((_QWORD *)v4 + 7) = a1;
  (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)a1 + 8LL))(a1);
  *((_QWORD *)v4 + 8) = 0LL;
  (*(void (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v4 + 8LL))(v4);
  v6 = (*(__int64 (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v4 + 40LL))(v4);
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0x13u, 0LL);
    (*(void (__fastcall **)(struct CRedirectedVisualContent *))(*(_QWORD *)v4 + 16LL))(v4);
  }
  else
  {
    *a2 = v4;
  }
  return v8;
}
