/*
 * XREFs of MiMapViewOfSectionCommon @ 0x140609F10
 * Callers:
 *     NtMapViewOfSection @ 0x140609CA0 (NtMapViewOfSection.c)
 *     MiMapViewOfSectionExCommon @ 0x14067E25C (MiMapViewOfSectionExCommon.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     MiMakeProtectionMask @ 0x1400504A0 (MiMakeProtectionMask.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1405F13C0 (ObReferenceObjectByHandleWithTag.c)
 *     ObReferenceObjectByHandle @ 0x1405FB4B0 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __fastcall MiMapViewOfSectionCommon(
        HANDLE Handle,
        void *a2,
        int a3,
        PVOID *a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        int a7,
        __int64 a8,
        KPROCESSOR_MODE a9,
        PVOID *a10)
{
  int ProtectionMask; // eax
  KPROCESSOR_MODE v15; // si
  NTSTATUS result; // eax
  NTSTATUS v17; // r12d
  __int64 v18; // rdx
  PVOID *v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r8
  PVOID v22; // rax
  unsigned __int64 v23; // rdx
  PVOID v24; // [rsp+48h] [rbp-40h] BYREF

  memset(a10, 0, 0x30uLL);
  ProtectionMask = MiMakeProtectionMask(a7 & 0xBFFFFFFF);
  *((_DWORD *)a10 + 6) = ProtectionMask;
  if ( ProtectionMask == -1 )
    return -1073741755;
  *((_DWORD *)a10 + 6) = ProtectionMask & 7;
  if ( a3 )
  {
    a10[5] = Handle;
    a10[4] = a2;
    v15 = a9;
  }
  else
  {
    v15 = a9;
    result = ObReferenceObjectByHandleWithTag(Handle, 8u, (POBJECT_TYPE)PsProcessType, a9, 0x77566D4Du, a10 + 5, 0LL);
    if ( result < 0 )
      return result;
    v17 = ObReferenceObjectByHandle(
            a2,
            MmMakeSectionAccess[*((unsigned int *)a10 + 6)],
            MmSectionObjectType,
            a9,
            &v24,
            0LL);
    a10[4] = v24;
    if ( v17 < 0 )
    {
      ObfDereferenceObjectWithTag(a10[5], 0x77566D4Du);
      return v17;
    }
  }
  if ( v15 )
  {
    v18 = (__int64)a4;
    if ( (unsigned __int64)a4 >= 0x7FFFFFFF0000LL )
      v18 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v18 = *(_QWORD *)v18;
    v19 = (PVOID *)a5;
    v20 = a5;
    if ( a5 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = *(_QWORD *)v20;
  }
  else
  {
    v19 = (PVOID *)a5;
  }
  *a10 = *a4;
  a10[1] = *v19;
  if ( a6 )
  {
    if ( v15 )
    {
      v21 = a6;
      if ( (a6 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a6 >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      *(_BYTE *)v21 = *(_BYTE *)v21;
      *(_BYTE *)(v21 + 7) = *(_BYTE *)(v21 + 7);
    }
    a10[2] = *(PVOID *)a6;
  }
  else
  {
    a10[2] = 0LL;
  }
  v22 = *a10;
  if ( (unsigned __int64)*a10 <= 0x7FFFFFFEFFFFLL )
  {
    v23 = (unsigned __int64)a10[1];
    if ( v23 <= 0x7FFFFFFF0000LL - (__int64)v22 && (unsigned __int64)v22 + v23 <= 0xFFFFFFFFFFFFFFFFuLL >> a8 )
      return 0;
  }
  if ( !a3 )
  {
    ObfDereferenceObject(a10[4]);
    ObfDereferenceObjectWithTag(a10[5], 0x77566D4Du);
  }
  return -1073741811;
}
