/*
 * XREFs of ExpWnfCaptureScopeInstanceId @ 0x140656250
 * Callers:
 *     NtUpdateWnfStateData @ 0x140654FA0 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x1406557F0 (NtQueryWnfStateData.c)
 *     NtQueryWnfStateNameInformation @ 0x1406D69C0 (NtQueryWnfStateNameInformation.c)
 *     NtDeleteWnfStateData @ 0x140787500 (NtDeleteWnfStateData.c)
 * Callees:
 *     MmGetSessionById @ 0x1400023F0 (MmGetSessionById.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCaptureSid @ 0x140658A6C (SeCaptureSid.c)
 */

__int64 __fastcall ExpWnfCaptureScopeInstanceId(int a1, _DWORD *a2, char a3, __int64 *a4, __int64 a5)
{
  int v7; // ecx
  unsigned int v8; // ecx
  __int64 SessionById; // rax
  int v10; // ecx
  int v11; // ecx
  __int64 v12; // rax
  ULONG Tag; // [rsp+20h] [rbp-28h]

  if ( !a2 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  if ( !a1 )
    return (unsigned int)-1073741811;
  v7 = a1 - 1;
  if ( v7 )
  {
    v11 = v7 - 1;
    if ( !v11 )
    {
      v10 = SeCaptureSid(a2, Tag, 0, a5);
      if ( v10 >= 0 )
        *a4 = *(_QWORD *)a5;
      return (unsigned int)v10;
    }
    if ( v11 == 1 )
    {
      v10 = ObpReferenceObjectByHandleWithTag(
              (ULONG_PTR)a2,
              0,
              (__int64)PsProcessType,
              a3,
              0x20666E57u,
              (_QWORD *)a5,
              0LL,
              0LL);
      if ( v10 >= 0 )
        *a4 = a5;
      return (unsigned int)v10;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
  {
    v12 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v12 = (__int64)a2;
    v8 = *(_DWORD *)v12;
  }
  else
  {
    v8 = *a2;
  }
  *(_DWORD *)(a5 + 8) = v8;
  SessionById = MmGetSessionById(v8);
  *(_QWORD *)a5 = SessionById;
  if ( !SessionById )
    return (unsigned int)-1073741811;
  *a4 = a5 + 8;
  return 0;
}
