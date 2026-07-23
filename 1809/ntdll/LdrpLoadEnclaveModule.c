/*
 * XREFs of LdrpLoadEnclaveModule @ 0x1800CF84C
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800CEEC0 (LdrLoadEnclaveModule.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpMapDllFullPath @ 0x180070F28 (LdrpMapDllFullPath.c)
 *     LdrpMapDllSearchPath @ 0x180071120 (LdrpMapDllSearchPath.c)
 *     LdrpUnmapModule @ 0x180076BA8 (LdrpUnmapModule.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     NtLoadEnclaveData @ 0x1800A22F0 (NtLoadEnclaveData.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     LdrpEnclaveAddDelayloadModules @ 0x1800CF388 (LdrpEnclaveAddDelayloadModules.c)
 *     LdrpEnclaveAddForwarderModules @ 0x1800CF57C (LdrpEnclaveAddForwarderModules.c)
 */

__int64 __fastcall LdrpLoadEnclaveModule(unsigned __int16 *a1)
{
  __int64 v1; // rbp
  void *PageInformation; // r15
  _QWORD *v4; // r14
  __int64 result; // rax
  void *v6; // rdi
  int EnclaveData; // esi
  __int64 v8; // rcx
  __int64 v9; // rdx
  ULONG PageInformationLength; // esi
  char *Heap; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  v1 = *((_QWORD *)a1 + 7);
  PageInformation = 0LL;
  v4 = (_QWORD *)*((_QWORD *)a1 + 21);
  if ( (*((_DWORD *)a1 + 8) & 0x200) != 0 )
    result = LdrpMapDllFullPath((__int64)a1);
  else
    result = LdrpMapDllSearchPath((__int64)a1);
  if ( (int)result >= 0 )
  {
    v6 = (void *)v4[10];
    EnclaveData = LdrpEnclaveAddDelayloadModules((__int64)a1);
    if ( EnclaveData >= 0 )
    {
      EnclaveData = LdrpEnclaveAddForwarderModules(a1);
      if ( EnclaveData >= 0 )
      {
        v8 = v4[8];
        if ( !v6 )
          v6 = (void *)((v8 + v4[9]) & 0xFFFFFFFFFFFFF000uLL);
        v9 = *(unsigned int *)(v1 + 64);
        if ( (__int64)v6 - v8 >= v9 )
        {
          v6 = (void *)(((unsigned __int64)v6 - v9) & 0xFFFFFFFFFFFFF000uLL);
          PageInformationLength = *a1 + 10;
          Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, PageInformationLength);
          PageInformation = Heap;
          if ( Heap )
          {
            *(_QWORD *)Heap = *((_QWORD *)a1 + 3);
            *((_WORD *)Heap + 4) = *a1;
            memmove(Heap + 10, *((const void **)a1 + 1), *a1);
            EnclaveData = NtLoadEnclaveData(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            v6,
                            0LL,
                            0LL,
                            0,
                            PageInformation,
                            PageInformationLength,
                            0LL,
                            0LL);
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
      v13 = 0LL;
    }
    else
    {
      v4[10] = v6;
      v12 = *(_QWORD *)(v1 + 152);
      *(_QWORD *)(v1 + 184) = v6;
      *(_DWORD *)(v12 + 56) = 9;
      v13 = v4[13];
      if ( !v13 )
      {
        v4[13] = v1;
        v13 = v1;
      }
    }
    if ( EnclaveData < 0 || v1 != v13 )
      LdrpUnmapModule(v1);
    if ( PageInformation )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, PageInformation);
    NtClose(*((HANDLE *)a1 + 3));
    NtClose(*((HANDLE *)a1 + 22));
    *((_QWORD *)a1 + 3) = 0LL;
    result = (unsigned int)EnclaveData;
    *((_QWORD *)a1 + 22) = -1LL;
  }
  return result;
}
