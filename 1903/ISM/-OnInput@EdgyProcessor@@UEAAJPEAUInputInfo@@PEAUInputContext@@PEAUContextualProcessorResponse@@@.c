/*
 * XREFs of ?OnInput@EdgyProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180100F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x1801035D8 (-OnContextualInput@EdgyProcessorTarget@@QEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProc.c)
 */

__int64 __fastcall EdgyProcessor::OnInput(
        EdgyProcessor *this,
        struct InputInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorResponse *a4)
{
  EdgyProcessorTarget *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rcx

  v4 = (EdgyProcessorTarget *)*((_QWORD *)this + 9);
  v5 = 0;
  if ( v4 )
  {
    return (unsigned int)EdgyProcessorTarget::OnContextualInput(v4, a2, a3, a4);
  }
  else
  {
    *(_DWORD *)a4 = 0;
    v6 = *((_QWORD *)a4 + 2);
    if ( v6 )
    {
      *((_QWORD *)a4 + 2) = 0LL;
      (*(void (__fastcall **)(__int64, struct InputInfo *, struct InputContext *))(*(_QWORD *)v6 + 16LL))(v6, a2, a3);
    }
  }
  return v5;
}
