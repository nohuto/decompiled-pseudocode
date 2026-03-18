/*
 * XREFs of ExCallCallBack @ 0x1405F4BA4
 * Callers:
 *     NtFindAtom @ 0x1405F4A40 (NtFindAtom.c)
 *     PsInvokeWin32Callout @ 0x1405F4E90 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x1405F75E0 (PspExitThread.c)
 *     KeUserModeCallback @ 0x140646480 (KeUserModeCallback.c)
 *     PsConvertToGuiThread @ 0x1406AAFC0 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x1406AC980 (NtAddAtomEx.c)
 *     NtDeleteAtom @ 0x1406AD220 (NtDeleteAtom.c)
 *     NtQueryInformationAtom @ 0x1406ADF70 (NtQueryInformationAtom.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x140088AA0 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x140088AF0 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
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
