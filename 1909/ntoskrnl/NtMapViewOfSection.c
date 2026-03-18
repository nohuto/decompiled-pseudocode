/*
 * XREFs of NtMapViewOfSection @ 0x140609CA0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MiMapViewOfSectionCommon @ 0x140609F10 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x14060A148 (MiValidateZeroBits.c)
 *     MiMapParametersInitialize @ 0x14060A740 (MiMapParametersInitialize.c)
 *     MiMapViewOfSection @ 0x14060A890 (MiMapViewOfSection.c)
 *     DbgkMapViewOfSection @ 0x14067E638 (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x1406F0428 (EtwTiLogMapExecView.c)
 */

NTSTATUS __stdcall NtMapViewOfSection(
        HANDLE SectionHandle,
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        ULONG_PTR ZeroBits,
        SIZE_T CommitSize,
        PLARGE_INTEGER SectionOffset,
        PSIZE_T ViewSize,
        SECTION_INHERIT InheritDisposition,
        ULONG AllocationType,
        ULONG AccessProtection)
{
  NTSTATUS result; // eax
  __int64 v13; // rbx
  ULONG v14; // r13d
  PLARGE_INTEGER v15; // rsi
  PSIZE_T v16; // r15
  char v17; // r12
  __int64 v18; // rdi
  NTSTATUS v19; // ebx
  void *v20; // rdi
  bool v21; // zf
  unsigned __int8 v22; // [rsp+50h] [rbp-E8h]
  _QWORD v23[7]; // [rsp+58h] [rbp-E0h] BYREF
  _QWORD v24[16]; // [rsp+90h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+158h] [rbp+20h] BYREF

  v25 = ZeroBits;
  memset(v24, 0, sizeof(v24));
  memset(v23, 0, 0x30uLL);
  result = MiValidateZeroBits(&v25);
  if ( result >= 0 )
  {
    v22 = KeGetCurrentThread()->$24A664F1AFBF48775CBEA2BECCC9B900::gap0[10];
    v13 = v25;
    v14 = AccessProtection;
    v15 = SectionOffset;
    v16 = ViewSize;
    result = MiMapViewOfSectionCommon(
               ProcessHandle,
               (__int64)ViewSize,
               (__int64)SectionOffset,
               AccessProtection,
               v25,
               v22,
               v23);
    if ( result < 0 )
    {
      ++dword_140466020;
      return result;
    }
    v17 = AllocationType;
    v18 = v23[0];
    v19 = MiMapParametersInitialize(v24, v23[1], AllocationType, v14, v13);
    if ( v19 < 0 )
    {
      v21 = v18 == 0;
    }
    else
    {
      v19 = MiMapViewOfSection(
              v23[4],
              (unsigned int)v24,
              (unsigned int)v23,
              CommitSize,
              (__int64)&v23[2],
              InheritDisposition,
              0);
      if ( v19 >= 0 )
      {
        v20 = (void *)v23[0];
        if ( (v24[9] & 4) != 0 )
          DbgkMapViewOfSection(v23[5]);
        if ( (*(_DWORD *)(v23[4] + 56LL) & 0x20) == 0 && (v23[3] & 2) != 0 )
          EtwTiLogMapExecView(v23[5], v22, (_DWORD)v20, v23[1], v17, v14);
        *v16 = v24[3];
        *BaseAddress = v20;
        if ( v15 )
          *v15 = (LARGE_INTEGER)v23[2];
        goto LABEL_12;
      }
      v21 = v23[0] == 0LL;
    }
    if ( v21 )
      ++dword_140466020;
    else
      ++dword_140466024;
LABEL_12:
    ObfDereferenceObject((PVOID)v23[4]);
    ObfDereferenceObjectWithTag((PVOID)v23[5], 0x77566D4Du);
    return v19;
  }
  return result;
}
