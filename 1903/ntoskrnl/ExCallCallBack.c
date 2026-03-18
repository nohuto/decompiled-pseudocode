/*
 * XREFs of ExCallCallBack @ 0x1405EB234
 * Callers:
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 *     PspExitThread @ 0x14060D0B8 (PspExitThread.c)
 *     KeUserModeCallback @ 0x140686D70 (KeUserModeCallback.c)
 *     NtDeleteAtom @ 0x1406C7530 (NtDeleteAtom.c)
 *     PsConvertToGuiThread @ 0x1406CBD50 (PsConvertToGuiThread.c)
 *     NtAddAtomEx @ 0x1406CF2F0 (NtAddAtomEx.c)
 *     NtQueryInformationAtom @ 0x1406CF4E0 (NtQueryInformationAtom.c)
 * Callees:
 *     ExDereferenceCallBackBlock @ 0x14001CE50 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
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
