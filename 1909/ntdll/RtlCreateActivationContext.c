/*
 * XREFs of RtlCreateActivationContext @ 0x180071C50
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     DbgPrintEx @ 0x180052820 (DbgPrintEx.c)
 *     RtlpInitializeAssemblyStorageMap @ 0x180071DB8 (RtlpInitializeAssemblyStorageMap.c)
 *     RtlpValidateActivationContextData @ 0x180071E3C (RtlpValidateActivationContextData.c)
 *     memset @ 0x1800A3DC0 (memset.c)
 *     RtlpPlaceActivationContextOnLiveList @ 0x1800DEAFC (RtlpPlaceActivationContextOnLiveList.c)
 */

__int64 __fastcall RtlCreateActivationContext(int a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  __int64 v6; // rdi
  __int64 v9; // r14
  int v10; // ebx
  _QWORD *Heap; // rax
  _QWORD *v12; // rdi
  _QWORD *v13; // rcx
  _QWORD *v14; // r8
  __int64 v15; // rdx
  _QWORD *v16; // rax

  v6 = a3;
  v9 = 0LL;
  if ( (char *)a2 == "Actx " )
  {
    DbgPrintEx(51, 0, "SXS: %s() passed the empty activation context data\n", "RtlCreateActivationContext");
    return (unsigned int)-1073741811;
  }
  if ( a6 )
    *a6 = 0LL;
  if ( !a1 && a2 && a3 <= 0x10000 && a6 )
  {
    v10 = RtlpValidateActivationContextData();
    if ( v10 < 0 )
      return (unsigned int)v10;
    Heap = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6 + 528);
    v9 = (__int64)Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v12 = Heap + 1;
    *Heap = 1733124929LL;
    v13 = Heap + 15;
    v14 = 0LL;
    v15 = *(unsigned int *)(*(unsigned int *)(a2 + 24) + a2 + 8);
    v16 = Heap + 17;
    if ( (unsigned int)v15 <= 0x20 )
      v14 = v16;
    v10 = RtlpInitializeAssemblyStorageMap(v13, v15, v14);
    if ( v10 >= 0 )
    {
      v12[5] = a5;
      *v12 = 1LL;
      v12[3] = a2;
      v12[4] = a4;
      v12[6] = 0LL;
      v12[7] = 0LL;
      v12[8] = 0LL;
      v12[9] = 0LL;
      v12[10] = 0LL;
      v12[11] = 0LL;
      v12[12] = 0LL;
      v12[13] = 0LL;
      memset(v12 + 49, 0, 0x80uLL);
      *((_DWORD *)v12 + 96) = 0;
      if ( g_SxsKeepActivationContextsAlive )
        RtlpPlaceActivationContextOnLiveList(v12);
      *a6 = v12;
      return 0;
    }
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v9 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)v10;
}
