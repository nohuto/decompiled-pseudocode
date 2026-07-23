/*
 * XREFs of sub_18002DC10 @ 0x18002DC10
 * Callers:
 *     LdrGetDllHandleByMapping @ 0x18002DD30 (LdrGetDllHandleByMapping.c)
 *     sub_1800795E8 @ 0x1800795E8 (sub_1800795E8.c)
 * Callees:
 *     sub_18002A75C @ 0x18002A75C (sub_18002A75C.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18002DC10(PVOID File2MappedAsFile, _DWORD *Buf1, volatile signed __int32 **a3, _DWORD *a4)
{
  int v8; // ebx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = Buf1[2];
  v11 = Buf1[20];
  RtlAcquireSRWLockExclusive(&stru_1801660B0);
  v8 = sub_18002A75C(File2MappedAsFile, Buf1, &v10, a3);
  if ( v8 >= 0 && a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)*a3 + 19) + 56LL);
  RtlReleaseSRWLockExclusive(&stru_1801660B0);
  return (unsigned int)v8;
}
