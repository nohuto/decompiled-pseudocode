/*
 * XREFs of ?CreateRenderDataBuilder@CChannel@@UEAAJPEAPEAUIRenderDataBuilder@@@Z @ 0x1800CA1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CChannel::CreateRenderDataBuilder(CChannel *this, struct IRenderDataBuilder **a2)
{
  char *v3; // rax
  __int64 v4; // r8
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (char *)DefaultHeap::AllocClear(0x70uLL);
  if ( !v3 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v4);
  *(_QWORD *)v3 = &CRenderDataBuilder::`vftable';
  *((_DWORD *)v3 + 10) = 0;
  *((_QWORD *)v3 + 2) = v3 + 48;
  *((_QWORD *)v3 + 3) = v3 + 48;
  *((_DWORD *)v3 + 8) = 64;
  *((_DWORD *)v3 + 9) = 64;
  _InterlockedIncrement((volatile signed __int32 *)v3 + 3);
  *a2 = (struct IRenderDataBuilder *)v3;
  return 0LL;
}
