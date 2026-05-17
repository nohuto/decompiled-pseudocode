/*
 * XREFs of LdrQueryModuleServiceTags @ 0x1800CE7B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18001869C @ 0x18001869C (sub_18001869C.c)
 *     sub_18001B678 @ 0x18001B678 (sub_18001B678.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 */

__int64 __fastcall LdrQueryModuleServiceTags(unsigned __int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 *v9; // r8
  __int64 v10[5]; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  result = sub_18001869C(a1, v10, &v11);
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive(&qword_1801660B0);
    v6 = v10[0];
    v7 = 0LL;
    v8 = *a3;
    v9 = *(__int64 **)(*(_QWORD *)(v10[0] + 152) + 16LL);
    while ( v9 )
    {
      if ( (unsigned int)v7 < v8 )
        *(_DWORD *)(a2 + 4 * v7) = *((_DWORD *)v9 + 2);
      v9 = (__int64 *)*v9;
      v7 = (unsigned int)(v7 + 1);
    }
    RtlReleaseSRWLockExclusive(&qword_1801660B0);
    *a3 = v7;
    sub_18001B678(v6);
    return v8 < (unsigned int)v7 ? 0xC0000023 : 0;
  }
  return result;
}
