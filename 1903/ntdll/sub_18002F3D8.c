/*
 * XREFs of sub_18002F3D8 @ 0x18002F3D8
 * Callers:
 *     sub_180022378 @ 0x180022378 (sub_180022378.c)
 *     sub_1800225E4 @ 0x1800225E4 (sub_1800225E4.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     sub_180081070 @ 0x180081070 (sub_180081070.c)
 * Callees:
 *     sub_18002D75C @ 0x18002D75C (sub_18002D75C.c)
 *     sub_18002D7BC @ 0x18002D7BC (sub_18002D7BC.c)
 *     sub_18002ECFC @ 0x18002ECFC (sub_18002ECFC.c)
 *     sub_18002F464 @ 0x18002F464 (sub_18002F464.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall sub_18002F3D8(__int64 a1, unsigned int a2)
{
  __int64 v4; // rbx
  unsigned int v5; // edi
  __int64 v7; // rcx
  int v8; // [rsp+38h] [rbp+10h] BYREF

  if ( a2 && *(_DWORD *)(*(_QWORD *)(a1 + 152) + 24LL) == 1 )
    return 3221226029LL;
  RtlAcquireSRWLockExclusive(&stru_1801660B0);
  v4 = *(_QWORD *)(a1 + 152);
  v5 = sub_18002F464(v4, a2, &v8);
  RtlReleaseSRWLockExclusive(&stru_1801660B0);
  if ( v8 )
  {
    sub_18002D7BC();
    sub_18002ECFC(v4);
    sub_18002D75C(v7, 8, 0);
  }
  return v5;
}
