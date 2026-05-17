/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800CF84C
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800CEEC0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpMapDllFullPath @ 0x180070F28 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 *     LdrpUnmapModule @ 0x180076B98 (LdrpUnmapModule.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtLoadEnclaveData @ 0x1800A22D0 (NtLoadEnclaveData.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800CF388 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800CF57C (LdrpEnclaveAddForwarderModules.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // rbp
  unsigned __int64 v2; // r15
  _QWORD *v4; // r14
  __int64 result; // rax
  unsigned __int64 v6; // rdi
  int EnclaveData; // esi
  __int64 v8; // rcx
  signed __int64 v9; // rdx
  __int64 Heap; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v1 = *((_QWORD *)a1 + 7);
  v2 = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 21);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__int64)a1);
  else
    result = LdrpMapDllSearchPath((__int64)a1);
  if ( (int)result >= 0 )
  {
    v6 = v4[10];
    EnclaveData = LdrpEnclaveAddDelayloadModules((__int64)a1);
    if ( EnclaveData >= 0 )
    {
      EnclaveData = LdrpEnclaveAddForwarderModules(a1);
      if ( EnclaveData >= 0 )
      {
        v8 = v4[8];
        if ( !v6 )
          v6 = (v8 + v4[9]) & 0xFFFFFFFFFFFFF000uLL;
        v9 = *(unsigned int *)(v1 + 64);
        if ( (__int64)(v6 - v8) >= v9 )
        {
          v6 = (v6 - v9) & 0xFFFFFFFFFFFFF000uLL;
          Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, (unsigned int)*a1 + 10);
          v2 = Heap;
          if ( Heap )
          {
            *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
            *(_WORD *)(Heap + 8) = *a1;
            memmove((void *)(Heap + 10), *((const void **)a1 + 1), *a1);
            EnclaveData = NtLoadEnclaveData();
          }
          else
          {
            EnclaveData = -1073741670;
          }
        }
        else
        {
          EnclaveData = -1073741800;
        }
      }
    }
    if ( EnclaveData < 0 )
    {
      v4[13] = 0LL;
      v12 = 0LL;
    }
    else
    {
      v4[10] = v6;
      v11 = *(_QWORD *)(v1 + 152);
      *(_QWORD *)(v1 + 184) = v6;
      *(_DWORD *)(v11 + 56) = 9;
      v12 = v4[13];
      if ( !v12 )
      {
        v4[13] = v1;
        v12 = v1;
      }
    }
    if ( EnclaveData < 0 || v1 != v12 )
      LdrpUnmapModule(v1);
    if ( v2 )
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v2);
    NtClose(*((HANDLE *)a1 + 3));
    NtClose(*((HANDLE *)a1 + 22));
    *((_QWORD *)a1 + 3) = 0LL;
    result = (unsigned int)EnclaveData;
    *((_QWORD *)a1 + 22) = -1LL;
  }
  return result;
}
