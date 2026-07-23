/*
 * XREFs of NtFindAtom @ 0x1405EB2B0
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14001CE10 (MmSessionGetWin32Callouts.c)
 *     ExDereferenceCallBackBlock @ 0x14001CE50 (ExDereferenceCallBackBlock.c)
 *     ExReferenceCallBackBlock @ 0x14001CEA0 (ExReferenceCallBackBlock.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     RtlLookupAtomInAtomTable @ 0x1405EBA90 (RtlLookupAtomInAtomTable.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913EC0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtFindAtom(PWSTR AtomName, ULONG AtomNameLength, PRTL_ATOM Atom)
{
  size_t v4; // rdi
  _RTL_RUN_ONCE *Win32Callouts; // r15
  struct _EX_RUNDOWN_REF *v7; // rax
  struct _EX_RUNDOWN_REF *v8; // rsi
  char PreviousMode; // r15
  WCHAR *v10; // rsi
  __int64 v11; // rcx
  NTSTATUS result; // eax
  USHORT Atoma; // [rsp+20h] [rbp-258h] BYREF
  PRTL_ATOM_TABLE AtomTable; // [rsp+28h] [rbp-250h] BYREF
  PWSTR v15; // [rsp+30h] [rbp-248h]
  _WORD v16[256]; // [rsp+40h] [rbp-238h] BYREF

  v4 = AtomNameLength;
  AtomTable = 0LL;
  Win32Callouts = MmSessionGetWin32Callouts();
  v7 = ExReferenceCallBackBlock((signed __int64 *)Win32Callouts);
  v8 = v7;
  if ( v7 )
  {
    ((void (__fastcall *)(unsigned __int64, __int64, PRTL_ATOM_TABLE *))v7[1].Count)(v7[2].Count, 2LL, &AtomTable);
    ExDereferenceCallBackBlock((signed __int64 *)Win32Callouts, v8);
  }
  if ( !AtomTable )
    return -1073741790;
  if ( (unsigned int)v4 > 0x1FE )
    return -1073741811;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v10 = AtomName;
  v15 = AtomName;
  if ( PreviousMode )
  {
    if ( Atom )
    {
      v11 = (__int64)Atom;
      if ( (unsigned __int64)Atom >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_WORD *)v11 = *(_WORD *)v11;
      v10 = v15;
    }
    if ( AtomName )
    {
      if ( (_DWORD)v4 )
      {
        if ( ((unsigned __int8)AtomName & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)AtomName + v4 > 0x7FFFFFFF0000LL || (PWSTR)((char *)AtomName + v4) < AtomName )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v10 = v16;
      v15 = v16;
      memmove(v16, AtomName, v4);
      v16[v4 >> 1] = 0;
    }
  }
  result = RtlLookupAtomInAtomTable(AtomTable, v10, &Atoma);
  if ( Atom )
  {
    if ( result >= 0 )
      *Atom = Atoma;
  }
  return result;
}
