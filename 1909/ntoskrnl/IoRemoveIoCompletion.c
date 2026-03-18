/*
 * XREFs of IoRemoveIoCompletion @ 0x1400448E0
 * Callers:
 *     NtWaitForWorkViaWorkerFactory @ 0x1400443F0 (NtWaitForWorkViaWorkerFactory.c)
 *     NtRemoveIoCompletionEx @ 0x1406045B0 (NtRemoveIoCompletionEx.c)
 *     NtRemoveIoCompletion @ 0x1406048D0 (NtRemoveIoCompletion.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140008320 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140008590 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     IoFreeIrp @ 0x140043F40 (IoFreeIrp.c)
 *     KeRemoveQueueEx @ 0x140044C00 (KeRemoveQueueEx.c)
 *     IopCompleteRequest @ 0x140065750 (IopCompleteRequest.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     IopDropIrp @ 0x1400FEDA0 (IopDropIrp.c)
 *     IopInterlockedAdd @ 0x140131834 (IopInterlockedAdd.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     IopFreeMiniCompletionPacket @ 0x1406044F0 (IopFreeMiniCompletionPacket.c)
 */

__int64 __fastcall IoRemoveIoCompletion(
        struct _KQUEUE *a1,
        __int64 a2,
        PLIST_ENTRY *EntryArray,
        ULONG Count,
        ULONG *a5,
        KPROCESSOR_MODE a6,
        LARGE_INTEGER *Timeout,
        BOOLEAN a8)
{
  PLIST_ENTRY *v8; // rbx
  __int64 v9; // rdi
  ULONG v10; // r15d
  __int64 i; // r14
  PLIST_ENTRY v12; // rbx
  char Flink; // al
  struct _LIST_ENTRY *Blink; // r13
  struct _LIST_ENTRY *v15; // rbx
  __int64 v16; // r12
  __int64 result; // rax
  struct _LIST_ENTRY **p_Blink; // rdi
  int v19; // eax
  ULONG_PTR v20; // rsi
  struct _LIST_ENTRY *v21; // rsi
  KIRQL v22; // al
  __int128 v24; // [rsp+40h] [rbp-D8h]
  __int64 v25; // [rsp+50h] [rbp-C8h] BYREF
  ULONG v26; // [rsp+58h] [rbp-C0h]
  struct _LIST_ENTRY *v27; // [rsp+60h] [rbp-B8h]
  PLIST_ENTRY *v28; // [rsp+68h] [rbp-B0h]
  PVOID Object; // [rsp+70h] [rbp-A8h]
  char v30; // [rsp+78h] [rbp-A0h] BYREF
  struct _KQUEUE *v31; // [rsp+80h] [rbp-98h]
  __int64 v32; // [rsp+88h] [rbp-90h]
  PLIST_ENTRY *v33; // [rsp+90h] [rbp-88h]
  ULONG *v34; // [rsp+98h] [rbp-80h]
  _BYTE v35[48]; // [rsp+A0h] [rbp-78h] BYREF

  v8 = EntryArray;
  v28 = EntryArray;
  v9 = a2;
  Object = a1;
  v31 = a1;
  v32 = a2;
  v33 = EntryArray;
  v34 = a5;
  DWORD1(v24) = 0;
  v10 = KeRemoveQueueEx(a1, a6, a8, Timeout, EntryArray, Count);
  v26 = v10;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= v10 )
    {
      result = 0LL;
      goto LABEL_11;
    }
    v12 = v8[i];
    if ( (unsigned __int64)&v12[-17].Blink + 7 <= 1 || v12 == (PLIST_ENTRY)192 || v12 == (PLIST_ENTRY)128 )
      break;
    Flink = (char)v12[1].Flink;
    if ( Flink )
    {
      if ( Flink == 2 )
      {
        Blink = v12[3].Blink;
        v27 = v12[3].Flink;
        LODWORD(v24) = v12[4].Blink;
        *((_QWORD *)&v24 + 1) = v12[4].Flink;
        v21 = v12[5].Flink;
        v22 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v12[6]);
        LOBYTE(v12[6].Blink) = 0;
        v12[5].Blink = 0LL;
        KeReleaseSpinLock((PKSPIN_LOCK)&v12[6], v22);
        ObfDereferenceObject(v21);
        ObfDereferenceObject(Object);
        ObfDereferenceObject(v12);
        v15 = v27;
        v9 = a2;
      }
      else
      {
        Blink = v12[2].Flink;
        v27 = v12[1].Blink;
        LODWORD(v24) = v12[2].Blink;
        *((_QWORD *)&v24 + 1) = v12[3].Flink;
        IopFreeMiniCompletionPacket(v12);
        v15 = v27;
      }
    }
    else
    {
      p_Blink = &v12[-11].Blink;
      Blink = v12[-5].Blink;
      v15 = v12[-3].Flink;
      v24 = *((_OWORD *)p_Blink + 3);
      v19 = *((_DWORD *)p_Blink + 4);
      if ( (v19 & 0x2000) != 0 )
      {
        v25 = 0LL;
        v20 = (unsigned __int64)p_Blink[11] & 0xFFFFFFFFFFFFFFF9uLL;
        memset(v35, 0, sizeof(v35));
        p_Blink[12] = 0LL;
        if ( (_KPROCESS *)v20 == KeGetCurrentThread()->ApcState.Process )
        {
          IopCompleteRequest(
            (_DWORD)p_Blink + 120,
            (unsigned int)&v30,
            (unsigned int)&v25,
            (_DWORD)p_Blink + 192,
            (__int64)&v25);
        }
        else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 768)) )
        {
          KiStackAttachProcess(v20);
          IopCompleteRequest(
            (_DWORD)p_Blink + 120,
            (unsigned int)&v30,
            (unsigned int)&v25,
            (_DWORD)p_Blink + 192,
            (__int64)&v25);
          KiUnstackDetachProcess(v35, 0LL);
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v20 + 768));
        }
        else
        {
          IopDropIrp((PIRP)p_Blink, (ULONG_PTR)p_Blink[24]);
          LODWORD(v24) = -1073741536;
          *((_QWORD *)&v24 + 1) = 0LL;
        }
LABEL_15:
        v9 = a2;
        goto LABEL_9;
      }
      if ( (v19 & 0x8000) != 0 && (unsigned int)IopInterlockedAdd(p_Blink + 11, 0xFFFFFFFFLL) )
        goto LABEL_15;
      IoFreeIrp((PIRP)p_Blink);
      v9 = a2;
    }
LABEL_9:
    v16 = 32LL * (unsigned int)i;
    *(_QWORD *)(v16 + v9) = v15;
    *(_QWORD *)(v16 + v9 + 8) = Blink;
    *(_OWORD *)(v16 + v9 + 16) = v24;
    v8 = v28;
  }
  result = (unsigned int)v12;
LABEL_11:
  *v34 = v10;
  return result;
}
