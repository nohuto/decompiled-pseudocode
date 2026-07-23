/*
 * XREFs of ExCallCallBack @ 0x1405F5BA4
 * Callers:
 *     NtFindAtom @ 0x1405F5A40 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1405F5E90 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x1405F85E0 (PspExitThread.c)
 *     KeUserModeCallback @ 0x140647480 (KeUserModeCallback.c)
 *     PsConvertToGuiThread @ 0x1406AC240 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x1406ADC00 (NtAddAtomEx.c)
 *     NtDeleteAtom @ 0x1406AE4A0 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x1406AF1F0 (NtQueryInformationAtom.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140088A90 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140088AE0 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ExCallCallBack(signed __int64 *a1, __int64 a2, __int64 a3)
{
  struct _EX_RUNDOWN_REF *v6; // rax
  struct _EX_RUNDOWN_REF *v7; // rdi
  unsigned int v8; // ebx

  v6 = ExReferenceCallBackBlock(a1);
  v7 = v6;
  if ( v6 )
  {
    v8 = ((__int64 (__fastcall *)(unsigned __int64, __int64, __int64))v6[1].Count)(v6[2].Count, a2, a3);
    ExDereferenceCallBackBlock(a1, v7);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
