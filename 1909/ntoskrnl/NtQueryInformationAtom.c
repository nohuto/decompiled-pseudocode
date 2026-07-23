/*
 * XREFs of NtQueryInformationAtom @ 0x1406CE750
 * Callers:
 *     <none>
 * Callees:
 *     MmSessionGetWin32Callouts @ 0x14001D200 (MmSessionGetWin32Callouts.c)
 *     ExCallCallBack @ 0x1405EBA04 (ExCallCallBack.c)
 *     RtlQueryAtomInAtomTable @ 0x1405EC620 (RtlQueryAtomInAtomTable.c)
 *     ProbeForWrite @ 0x1405F10D0 (ProbeForWrite.c)
 *     RtlQueryAtomsInAtomTable @ 0x1408D11F8 (RtlQueryAtomsInAtomTable.c)
 */

NTSTATUS __stdcall NtQueryInformationAtom(
        RTL_ATOM Atom,
        ATOM_INFORMATION_CLASS AtomInformationClass,
        PVOID AtomInformation,
        ULONG AtomInformationLength,
        PULONG ReturnLength)
{
  _RTL_RUN_ONCE *Win32Callouts; // rax
  __int64 v10; // rcx
  ULONG v11; // ebx
  int AtomsInAtomTable; // edx
  ULONG v13; // eax
  ULONG RefCount; // [rsp+38h] [rbp-30h] BYREF
  ULONG NameLength; // [rsp+3Ch] [rbp-2Ch] BYREF
  ULONG PinCount; // [rsp+40h] [rbp-28h] BYREF
  PRTL_ATOM_TABLE AtomTable; // [rsp+48h] [rbp-20h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+50h] [rbp-18h]

  AtomTable = 0LL;
  Win32Callouts = MmSessionGetWin32Callouts();
  ExCallCallBack((signed __int64 *)Win32Callouts, 2LL, (__int64)&AtomTable);
  if ( !AtomTable )
    return -1073741790;
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    ProbeForWrite(AtomInformation, AtomInformationLength, 4u);
    if ( ReturnLength )
    {
      v10 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v10 = (__int64)ReturnLength;
      *(_DWORD *)v10 = *(_DWORD *)v10;
    }
  }
  v11 = 0;
  if ( AtomInformationClass )
  {
    if ( AtomInformationClass == AtomTableInformation )
    {
      v11 = 4;
      if ( AtomInformationLength < 4 )
        return -1073741820;
      AtomsInAtomTable = RtlQueryAtomsInAtomTable(
                           AtomTable,
                           (AtomInformationLength - 4) >> 1,
                           AtomInformation,
                           (char *)AtomInformation + 4);
      if ( AtomsInAtomTable >= 0 )
        v11 = 2 * *(_DWORD *)AtomInformation + 4;
    }
    else
    {
      AtomsInAtomTable = -1073741821;
    }
  }
  else
  {
    v11 = 6;
    if ( AtomInformationLength < 6 )
      return -1073741820;
    RefCount = 0;
    NameLength = AtomInformationLength - 6;
    AtomsInAtomTable = RtlQueryAtomInAtomTable(
                         AtomTable,
                         Atom,
                         &RefCount,
                         &PinCount,
                         (PWSTR)AtomInformation + 3,
                         &NameLength);
    if ( AtomsInAtomTable >= 0 )
    {
      *(_WORD *)AtomInformation = RefCount;
      *((_WORD *)AtomInformation + 1) = PinCount;
      v13 = NameLength;
      *((_WORD *)AtomInformation + 2) = NameLength;
      v11 = v13 + 8;
    }
  }
  if ( ReturnLength )
    *ReturnLength = v11;
  return AtomsInAtomTable;
}
