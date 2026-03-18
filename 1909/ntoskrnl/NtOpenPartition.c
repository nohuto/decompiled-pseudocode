/*
 * XREFs of NtOpenPartition @ 0x14078A650
 * Callers:
 *     <none>
 * Callees:
 *     ObOpenObjectByName @ 0x1405FF9C0 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 */

__int64 __fastcall NtOpenPartition(HANDLE *a1, ACCESS_MASK a2, __int64 a3)
{
  char PreviousMode; // di
  __int64 v7; // rdx
  __int64 result; // rax
  HANDLE Handle[4]; // [rsp+48h] [rbp-20h] BYREF

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v7 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a1 < 0x7FFFFFFF0000LL )
      v7 = (__int64)a1;
    *(_QWORD *)v7 = *(_QWORD *)v7;
  }
  result = ObOpenObjectByName(a3, PsPartitionType, PreviousMode, 0LL, a2, 0LL, Handle);
  if ( (int)result >= 0 )
  {
    *a1 = Handle[0];
    return (unsigned int)result;
  }
  return result;
}
