/*
 * XREFs of MmManagePartitionGetMemoryEvents @ 0x1407880A8
 * Callers:
 *     NtManagePartition @ 0x14066CA40 (NtManagePartition.c)
 * Callees:
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 */

__int64 __fastcall MmManagePartitionGetMemoryEvents(PVOID **a1, __int64 a2, KPROCESSOR_MODE AccessMode)
{
  PVOID *v3; // r13
  ULONG v6; // edx
  HANDLE *Handle; // rbp
  HANDLE *v8; // r14
  HANDLE *v9; // r15
  NTSTATUS v10; // esi

  v3 = *a1;
  if ( *(_DWORD *)a2 != 1 )
    return 3221225485LL;
  v6 = *(_DWORD *)(a2 + 4);
  if ( (v6 & (AccessMode != 0 ? 7666 : 73714)) != v6 )
    return 3221225485LL;
  Handle = (HANDLE *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  v8 = (HANDLE *)(a2 + 24);
  *(_QWORD *)(a2 + 24) = 0LL;
  v9 = (HANDLE *)(a2 + 32);
  *(_QWORD *)(a2 + 32) = 0LL;
  v10 = ObOpenObjectByPointer(v3[36], v6, 0LL, *(_DWORD *)(a2 + 8), (POBJECT_TYPE)ExEventObjectType, AccessMode, Handle);
  if ( v10 < 0
    || (v10 = ObOpenObjectByPointer(
                v3[37],
                *(_DWORD *)(a2 + 4),
                0LL,
                *(_DWORD *)(a2 + 8),
                (POBJECT_TYPE)ExEventObjectType,
                AccessMode,
                (PHANDLE)(a2 + 24)),
        v10 < 0)
    || (v10 = ObOpenObjectByPointer(
                v3[38],
                *(_DWORD *)(a2 + 4),
                0LL,
                *(_DWORD *)(a2 + 8),
                (POBJECT_TYPE)ExEventObjectType,
                AccessMode,
                (PHANDLE)(a2 + 32)),
        v10 < 0) )
  {
    if ( *Handle )
      ObCloseHandle(*Handle, AccessMode);
    if ( *v8 )
      ObCloseHandle(*v8, AccessMode);
    if ( *v9 )
      ObCloseHandle(*v9, AccessMode);
  }
  return (unsigned int)v10;
}
