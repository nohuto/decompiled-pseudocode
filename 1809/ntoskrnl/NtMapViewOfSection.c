/*
 * XREFs of NtMapViewOfSection @ 0x140678170
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     MiMapViewOfSection @ 0x1405F0B10 (MiMapViewOfSection.c)
 *     MiMapParametersInitialize @ 0x1405F1080 (MiMapParametersInitialize.c)
 *     MiMapViewOfSectionCommon @ 0x1406783B0 (MiMapViewOfSectionCommon.c)
 *     MiValidateZeroBits @ 0x1406785EC (MiValidateZeroBits.c)
 *     DbgkMapViewOfSection @ 0x14067863C (DbgkMapViewOfSection.c)
 *     EtwTiLogMapExecView @ 0x1406D0680 (EtwTiLogMapExecView.c)
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
  __int64 v13; // r12
  ULONG v14; // r13d
  PLARGE_INTEGER v15; // r14
  PSIZE_T v16; // r15
  char v17; // r12
  __int64 v18; // rsi
  NTSTATUS v19; // ebx
  void *v20; // rsi
  bool v21; // zf
  __int64 v22; // [rsp+38h] [rbp-100h]
  unsigned __int8 v23; // [rsp+50h] [rbp-E8h]
  __int64 v24; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v25; // [rsp+60h] [rbp-D8h]
  LONGLONG v26; // [rsp+68h] [rbp-D0h] BYREF
  char v27; // [rsp+70h] [rbp-C8h]
  PVOID Object; // [rsp+78h] [rbp-C0h]
  PVOID v29; // [rsp+80h] [rbp-B8h]
  _BYTE v30[24]; // [rsp+90h] [rbp-A8h] BYREF
  ULONG_PTR v31; // [rsp+A8h] [rbp-90h]
  char v32; // [rsp+D0h] [rbp-68h]
  __int64 v33; // [rsp+158h] [rbp+20h] BYREF

  v33 = ZeroBits;
  result = MiValidateZeroBits(&v33);
  if ( result >= 0 )
  {
    v23 = KeGetCurrentThread()->$86A1A36C0FEBA810544B2F2B35F40C82::gap0[10];
    v13 = v33;
    v14 = AccessProtection;
    v15 = SectionOffset;
    v16 = ViewSize;
    result = MiMapViewOfSectionCommon(
               (ULONG_PTR)ProcessHandle,
               (__int64)ViewSize,
               (__int64)SectionOffset,
               AccessProtection,
               v33,
               v23,
               &v24);
    if ( result < 0 )
    {
      ++dword_14043B940;
      return result;
    }
    v22 = v13;
    v17 = AllocationType;
    v18 = v24;
    v19 = MiMapParametersInitialize(v30, (__int64)Object, (__int64)v29, v24, v25, AllocationType, v14, v22);
    if ( v19 < 0 )
    {
      v21 = v18 == 0;
    }
    else
    {
      v19 = MiMapViewOfSection(
              (__int64)Object,
              (__int64)v30,
              (void **)&v24,
              (void *)CommitSize,
              &v26,
              InheritDisposition,
              0);
      if ( v19 >= 0 )
      {
        v20 = (void *)v24;
        if ( (v32 & 4) != 0 )
          DbgkMapViewOfSection(v29);
        if ( (*((_DWORD *)Object + 14) & 0x20) == 0 && (v27 & 2) != 0 )
          EtwTiLogMapExecView((_DWORD)v29, v23, (_DWORD)v20, v25, v17, v14);
        *v16 = v31;
        *BaseAddress = v20;
        if ( v15 )
          v15->QuadPart = v26;
        goto LABEL_12;
      }
      v21 = v24 == 0;
    }
    if ( v21 )
      ++dword_14043B940;
    else
      ++dword_14043B944;
LABEL_12:
    ObfDereferenceObject(Object);
    ObfDereferenceObjectWithTag(v29, 0x77566D4Du);
    return v19;
  }
  return result;
}
