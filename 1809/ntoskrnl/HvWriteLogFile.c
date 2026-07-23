/*
 * XREFs of HvWriteLogFile @ 0x1406B987C
 * Callers:
 *     CmpFlushHive @ 0x1405B3F54 (CmpFlushHive.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1405A72AC (HvpLogTypeToLogArrayIndex.c)
 *     CmpTraceHiveFlushWroteLogFile @ 0x1406B99BC (CmpTraceHiveFlushWroteLogFile.c)
 *     CmpFileFlushAndPurge @ 0x1406B9A2C (CmpFileFlushAndPurge.c)
 *     CmpDoFileSetSizeEx @ 0x1406B9BE0 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvWriteLogFile(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v6; // rdx
  __int64 v7; // rbp
  __int64 v8; // rdi
  _QWORD *v9; // rcx
  __int64 v10; // r9
  __int64 (__fastcall *v11)(__int64, __int64, int *, __int64, _DWORD); // rax
  __int64 result; // rax
  unsigned int v13; // eax
  int v14; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+38h] [rbp-20h]
  int v16; // [rsp+40h] [rbp-18h]

  if ( (*(_DWORD *)(a1 + 160) & 0x8001) != 0 )
    return 0LL;
  v6 = *(unsigned int *)(a1 + 164);
  if ( !(_DWORD)v6 || !*(_QWORD *)(a1 + 8 * v6 + 1536) )
    return 3221225485LL;
  v7 = *(_QWORD *)(a1 + 1704);
  v8 = *(unsigned int *)(a1 + 1712);
  if ( (_DWORD)v6 == 1 || (_DWORD)v6 == 4 )
  {
    v9 = (_QWORD *)(a1 + 1800);
  }
  else if ( (_DWORD)v6 == 5 )
  {
    v9 = (_QWORD *)(a1 + 1808);
  }
  else
  {
    v9 = 0LL;
  }
  v10 = *(unsigned int *)(a1 + 176);
  if ( v10 + v8 > *v9 )
  {
    CmpDoFileSetSizeEx(a1, v6, v10 + v8, 1LL);
    LODWORD(v10) = *(_DWORD *)(a1 + 176);
    v6 = *(unsigned int *)(a1 + 164);
  }
  v11 = *(__int64 (__fastcall **)(__int64, __int64, int *, __int64, _DWORD))(a1 + 40);
  v14 = v10;
  v15 = v7;
  v16 = v8;
  result = v11(a1, v6, &v14, 1LL, 0);
  if ( (int)result >= 0 )
  {
    result = CmpFileFlushAndPurge(a1, *(unsigned int *)(a1 + 164));
    if ( (int)result >= 0 )
    {
      ++*(_DWORD *)(a1 + 168);
      *(_DWORD *)(a1 + 176) += v8;
      v13 = HvpLogTypeToLogArrayIndex(*(_DWORD *)(a1 + 164));
      *(_BYTE *)(v13 + a1 + 188) = 1;
      CmpTraceHiveFlushWroteLogFile(v13, (unsigned int)v8);
      *a4 = v8;
      return 0LL;
    }
  }
  return result;
}
