/*
 * XREFs of RtlQueueWorkItem @ 0x180047CF0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x180006E00 (RtlpxLookupFunctionTable.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     TpPostTask @ 0x1800159A0 (TpPostTask.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180018440 (RtlGetCurrentServiceSessionId.c)
 *     RtlpTpResumeImpersonation @ 0x18002BCB8 (RtlpTpResumeImpersonation.c)
 *     RtlReleaseActivationContext @ 0x18002D7A0 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x18002DE20 (RtlQueryInformationActivationContext.c)
 *     RtlpTpInitializeData @ 0x18002F1A4 (RtlpTpInitializeData.c)
 *     RtlpTpRevertCapture @ 0x18002F218 (RtlpTpRevertCapture.c)
 *     TpUnreserveTaskPost @ 0x18002FC60 (TpUnreserveTaskPost.c)
 *     TpReserveTaskPost @ 0x18002FCC4 (TpReserveTaskPost.c)
 *     RtlpTpWorkUnposted @ 0x18002FD50 (RtlpTpWorkUnposted.c)
 *     LdrUnloadDll @ 0x1800425D0 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x180045070 (LdrAddRefDll.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     RtlpTpETWCallbackEnqueue @ 0x180110B04 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  _PEB_LDR_DATA *Ldr; // r8
  unsigned __int64 v7; // rdx
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 Heap; // rax
  __int64 v12; // rbx
  int InformationActivationContext; // eax
  unsigned __int64 *v14; // r12
  volatile signed __int32 **v15; // rsi
  int v16; // eax
  __int64 v17; // rcx
  volatile signed __int32 *v19; // rcx
  void *v20; // rcx
  char v21; // [rsp+40h] [rbp-B8h]
  char v22; // [rsp+41h] [rbp-B7h]
  char v23; // [rsp+42h] [rbp-B6h]
  char v24; // [rsp+43h] [rbp-B5h]
  int v25; // [rsp+44h] [rbp-B4h]
  unsigned __int64 v26; // [rsp+48h] [rbp-B0h]
  __int64 v27; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-A0h]
  int v29; // [rsp+60h] [rbp-98h] BYREF
  __int64 v30; // [rsp+68h] [rbp-90h]
  __int64 v31; // [rsp+70h] [rbp-88h]
  __int64 v32; // [rsp+78h] [rbp-80h]
  __int128 v33; // [rsp+80h] [rbp-78h]
  __int64 v34; // [rsp+90h] [rbp-68h]
  int v35; // [rsp+98h] [rbp-60h]
  int v36; // [rsp+9Ch] [rbp-5Ch]
  int v37; // [rsp+A0h] [rbp-58h]
  __int128 v38; // [rsp+B0h] [rbp-48h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-38h]
  struct _TEB *v40; // [rsp+C8h] [rbp-30h]
  HANDLE v41; // [rsp+118h] [rbp+20h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v22 = 0;
  v41 = 0LL;
  v26 = 0LL;
  Ldr = NtCurrentPeb()->Ldr;
  if ( Ldr->ShutdownInProgress )
    return 3221225473LL;
  v8 = RtlpTpRevertCapture(&v41, a3 & 0x100, (__int64)Ldr);
  v25 = v8;
  if ( v8 < 0 )
  {
    v12 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 120LL);
    v12 = Heap;
    v26 = Heap;
    if ( Heap )
    {
      v8 = RtlpTpInitializeData(Heap + 40, a3, (__int64)v41);
      v25 = v8;
      if ( v8 >= 0 )
      {
        v24 = 1;
        *(_QWORD *)(v26 + 96) = NtCurrentTeb()->SubProcessTag;
        v12 = v26;
        *(_GUID *)(v26 + 104) = NtCurrentTeb()->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(1, 0LL, 0LL, 1, (__int64)&v27, 0x10uLL, 0LL);
        v8 = InformationActivationContext;
        v25 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( (v28 & 1) != 0 )
          {
            RtlReleaseActivationContext((volatile signed __int32 *)v27);
            v27 = -1LL;
          }
          *(_QWORD *)(v26 + 72) = v27;
          v21 = 1;
          *(_DWORD *)(v26 + 88) = 2;
          v14 = (unsigned __int64 *)(v26 + 56);
          *(_QWORD *)(v26 + 56) = a1;
          *(_QWORD *)(v26 + 64) = a2;
          v15 = (volatile signed __int32 **)(v26 + 32);
          *(_QWORD *)(v26 + 32) = 0LL;
          v29 = 3;
          v30 = 0LL;
          v31 = 0LL;
          v32 = 0LL;
          v33 = 0LL;
          v34 = 0LL;
          v35 = 0;
          v36 = 1;
          v37 = 72;
          v16 = 0;
          if ( (a3 & 0xC0) != 0 )
            v16 = 2;
          v35 = v16;
          *(_QWORD *)v26 = RtlpTpWorkTaskCallbacks;
          *(_DWORD *)(v26 + 8) = 0;
          v8 = TpReserveTaskPost(*v15, v26, (__int64)&v29, v10);
          v25 = v8;
          if ( v8 >= 0 )
          {
            v22 = 1;
            if ( *v14 < *((_QWORD *)&xmmword_180178500 + 1)
              || *v14 >= *((_QWORD *)&xmmword_180178500 + 1) + (unsigned __int64)(unsigned int)qword_180178510 )
            {
              RtlpxLookupFunctionTable(*v14, (__int64 *)&v38);
            }
            else
            {
              v38 = xmmword_180178500;
              v39 = qword_180178510;
            }
            v7 = *((_QWORD *)&v38 + 1);
            *(_QWORD *)(v26 + 80) = *((_QWORD *)&v38 + 1);
            if ( v7 )
            {
              LdrAddRefDll(0, v7, v9, v10);
              v23 = 1;
              if ( (unsigned int)RtlGetCurrentServiceSessionId() )
              {
                v17 = (__int64)NtCurrentPeb()->SharedData + 556;
                v12 = v26;
              }
              else
              {
                v17 = 2147353478LL;
              }
              if ( *(_BYTE *)v17 )
              {
                v40 = NtCurrentTeb();
                v12 = v26;
                RtlpTpETWCallbackEnqueue(
                  (unsigned int)*v15,
                  v26,
                  *v14,
                  *(_QWORD *)(v26 + 64),
                  (__int64)v40->SubProcessTag);
              }
              TpPostTask(v12, (__int64)*v15, 1, (__int64)&v29);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v26 + 88)) )
                RtlpTpWorkUnposted(v26, (__int64)*v15);
              v12 = 0LL;
              v26 = 0LL;
              v8 = 0;
              v25 = 0;
            }
          }
          goto LABEL_28;
        }
        if ( InformationActivationContext == -1072365557 )
        {
          *(_QWORD *)(v26 + 72) = -1LL;
          goto LABEL_6;
        }
      }
    }
    else
    {
      v8 = -1073741801;
      v25 = -1073741801;
    }
  }
LABEL_28:
  if ( v12 )
  {
    if ( v21 )
    {
      v19 = *(volatile signed __int32 **)(v12 + 72);
      if ( v19 != (volatile signed __int32 *)-1LL )
        RtlReleaseActivationContext(v19);
    }
    if ( v22 )
      TpUnreserveTaskPost(*(volatile signed __int32 **)(v12 + 32), (__int64)&v29, v9, v10);
    if ( v23 )
      LdrUnloadDll(*(_QWORD *)(v12 + 80), v7, v9, v10);
    if ( v24 )
    {
      v20 = *(void **)(v12 + 40);
      if ( v20 )
        NtClose(v20);
    }
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v26);
    v8 = v25;
  }
  RtlpTpResumeImpersonation(v41);
  return (unsigned int)v8;
}
