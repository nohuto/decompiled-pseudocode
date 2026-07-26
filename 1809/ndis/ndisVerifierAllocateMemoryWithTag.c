/*
 * XREFs of ndisVerifierAllocateMemoryWithTag @ 0x1C006A260
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     ndisVerifierInjectResourceFailure @ 0x1C006A564 (ndisVerifierInjectResourceFailure.c)
 */

__int64 __fastcall ndisVerifierAllocateMemoryWithTag(_LIST_ENTRY **a1, __int64 a2, __int64 a3)
{
  _LIST_ENTRY *v3; // rbp
  __int64 v4; // r9
  int v5; // r14d
  unsigned int v6; // edi
  int v8; // eax
  __int64 v9; // r8
  int v10; // r9d
  _LIST_ENTRY *v11; // rbx
  KIRQL v12; // dl
  _LIST_ENTRY *v13; // rcx
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *retaddr; // [rsp+38h] [rbp+0h]

  v3 = 0LL;
  v4 = 0LL;
  v5 = a3;
  v6 = a2;
  if ( (WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x400) != 0 )
  {
    v3 = retaddr;
    v8 = -1;
    if ( (int)a2 + 40 >= (unsigned int)a2 )
      v8 = a2 + 40;
    v4 = (int)a2 + 40 < (unsigned int)a2 ? 0xC0000095 : 0;
    v6 = v8;
  }
  if ( (unsigned __int8)ndisVerifierInjectResourceFailure(a1, a2, a3, v4) || v10 < 0 )
    v11 = 0LL;
  else
    v11 = (_LIST_ENTRY *)(*((__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, _LIST_ENTRY *))ndisVerifierWdmDispatch
                          + 6))(
                           512LL,
                           v6,
                           v9,
                           24LL,
                           retaddr);
  if ( !v11 || (WORD2(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 0x400) == 0 )
  {
    *a1 = v11;
    return v11 == 0LL ? 0xC0000001 : 0;
  }
  *a1 = (_LIST_ENTRY *)((char *)v11 + 40);
  memset(v11, 0, 0x28uLL);
  v11[2].Flink = 0LL;
  LODWORD(v11[1].Flink) = v5;
  HIDWORD(v11[1].Flink) = v6;
  v11[1].Blink = v3;
  v12 = KeAcquireSpinLockRaiseToDpc(&ndisTrackMemLock);
  if ( !ndisMiniportTrackAlloc )
  {
    Flink = ndisDriverTrackAllocList.Flink;
    if ( ndisDriverTrackAllocList.Flink->Blink == &ndisDriverTrackAllocList )
    {
      v11->Flink = ndisDriverTrackAllocList.Flink;
      v11->Blink = &ndisDriverTrackAllocList;
      Flink->Blink = v11;
      ndisDriverTrackAllocList.Flink = v11;
      goto LABEL_17;
    }
LABEL_15:
    __fastfail(3u);
  }
  v13 = ndisMiniportTrackAllocList.Flink;
  if ( ndisMiniportTrackAllocList.Flink->Blink != &ndisMiniportTrackAllocList )
    goto LABEL_15;
  v11->Flink = ndisMiniportTrackAllocList.Flink;
  v11->Blink = &ndisMiniportTrackAllocList;
  v13->Blink = v11;
  ndisMiniportTrackAllocList.Flink = v11;
LABEL_17:
  KeReleaseSpinLock(&ndisTrackMemLock, v12);
  v11 = *a1;
  return v11 == 0LL ? 0xC0000001 : 0;
}
