/*
 * XREFs of LdrQueryModuleServiceTags @ 0x1800CFF90
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDereferenceModule @ 0x1800099F8 (LdrpDereferenceModule.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     LdrpFindLoadedDllByHandle @ 0x180042010 (LdrpFindLoadedDllByHandle.c)
 */

__int64 __fastcall LdrQueryModuleServiceTags(unsigned __int64 a1, __int64 a2, unsigned int *a3, __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  unsigned __int64 *v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // edi
  __int64 *v13; // r8
  __int64 v14[5]; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+68h] [rbp+20h] BYREF

  result = LdrpFindLoadedDllByHandle(a1, v14, &v15, a4);
  if ( (int)result >= 0 )
  {
    RtlAcquireSRWLockExclusive((unsigned __int64)&LdrpModuleDatatableLock, v7, v8, v9);
    v10 = v14[0];
    v11 = 0LL;
    v12 = *a3;
    v13 = *(__int64 **)(*(_QWORD *)(v14[0] + 152) + 16LL);
    while ( v13 )
    {
      if ( (unsigned int)v11 < v12 )
        *(_DWORD *)(a2 + 4 * v11) = *((_DWORD *)v13 + 2);
      v13 = (__int64 *)*v13;
      v11 = (unsigned int)(v11 + 1);
    }
    RtlReleaseSRWLockExclusive(&LdrpModuleDatatableLock);
    *a3 = v11;
    LdrpDereferenceModule(v10);
    return v12 < (unsigned int)v11 ? 0xC0000023 : 0;
  }
  return result;
}
