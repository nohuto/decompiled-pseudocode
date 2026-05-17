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

__int64 __fastcall sub_18002DC10(__int64 a1, _DWORD *a2, volatile signed __int32 **a3, _DWORD *a4)
{
  int v8; // ebx
  unsigned int v10; // [rsp+38h] [rbp+10h] BYREF
  int v11; // [rsp+3Ch] [rbp+14h]

  v10 = a2[2];
  v11 = a2[20];
  RtlAcquireSRWLockExclusive(&qword_1801660B0);
  v8 = sub_18002A75C(a1, a2, &v10, a3);
  if ( v8 >= 0 && a4 )
    *a4 = *(_DWORD *)(*((_QWORD *)*a3 + 19) + 56LL);
  RtlReleaseSRWLockExclusive(&qword_1801660B0);
  return (unsigned int)v8;
}
