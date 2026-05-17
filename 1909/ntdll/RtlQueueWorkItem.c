/*
 * XREFs of RtlQueueWorkItem @ 0x18002F7D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpxLookupFunctionTable @ 0x18001E620 (RtlpxLookupFunctionTable.c)
 *     RtlpTpWorkUnposted @ 0x18002F180 (RtlpTpWorkUnposted.c)
 *     TpUnreserveTaskPost @ 0x18002F270 (TpUnreserveTaskPost.c)
 *     LdrUnloadDll @ 0x18002F330 (LdrUnloadDll.c)
 *     LdrAddRefDll @ 0x18002F760 (LdrAddRefDll.c)
 *     TpReserveTaskPost @ 0x18002FD98 (TpReserveTaskPost.c)
 *     RtlpTpRevertCapture @ 0x180030D7C (RtlpTpRevertCapture.c)
 *     RtlpTpInitializeData @ 0x180030DFC (RtlpTpInitializeData.c)
 *     RtlpTpResumeImpersonation @ 0x1800310E4 (RtlpTpResumeImpersonation.c)
 *     TpPostTask @ 0x1800318A8 (TpPostTask.c)
 *     RtlReleaseActivationContext @ 0x1800373A0 (RtlReleaseActivationContext.c)
 *     RtlQueryInformationActivationContext @ 0x1800376A0 (RtlQueryInformationActivationContext.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     RtlpTpETWCallbackEnqueue @ 0x18010F2F4 (RtlpTpETWCallbackEnqueue.c)
 */

__int64 __fastcall RtlQueueWorkItem(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // edi
  __int64 Heap; // rax
  __int64 v8; // rbx
  int InformationActivationContext; // eax
  unsigned __int64 *v10; // r12
  __int64 *v11; // rsi
  int v12; // eax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v19; // rcx
  void *v20; // rcx
  char v21; // [rsp+40h] [rbp-C8h]
  char v22; // [rsp+41h] [rbp-C7h]
  char v23; // [rsp+42h] [rbp-C6h]
  char v24; // [rsp+43h] [rbp-C5h]
  int v25; // [rsp+44h] [rbp-C4h]
  __int64 v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v28; // [rsp+58h] [rbp-B0h]
  int v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h]
  __int64 v31; // [rsp+70h] [rbp-98h]
  __int64 v32; // [rsp+78h] [rbp-90h]
  __int128 v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  int v35; // [rsp+98h] [rbp-70h]
  int v36; // [rsp+9Ch] [rbp-6Ch]
  int v37; // [rsp+A0h] [rbp-68h]
  __int128 v38; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v39; // [rsp+C0h] [rbp-48h]
  struct _TEB *v40; // [rsp+C8h] [rbp-40h]
  struct _TEB *v41; // [rsp+D0h] [rbp-38h]
  struct _TEB *v42; // [rsp+D8h] [rbp-30h]
  __int64 v43; // [rsp+128h] [rbp+20h] BYREF

  v27 = 0LL;
  v28 = 0LL;
  v21 = 0;
  v23 = 0;
  v24 = 0;
  v22 = 0;
  v43 = 0LL;
  v26 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 3221225473LL;
  v6 = RtlpTpRevertCapture(&v43, a3 & 0x100);
  v25 = v6;
  if ( v6 < 0 )
  {
    v8 = 0LL;
  }
  else
  {
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, 120LL);
    v8 = Heap;
    v26 = Heap;
    if ( Heap )
    {
      v6 = RtlpTpInitializeData(Heap + 40, a3, v43);
      v25 = v6;
      if ( v6 >= 0 )
      {
        v24 = 1;
        v40 = NtCurrentTeb();
        *(_QWORD *)(v26 + 96) = v40->SubProcessTag;
        v41 = NtCurrentTeb();
        v8 = v26;
        *(_GUID *)(v26 + 104) = v41->ActivityId;
        InformationActivationContext = RtlQueryInformationActivationContext(1, 0, 0, 1, (__int64)&v27, 16LL, 0LL);
        v6 = InformationActivationContext;
        v25 = InformationActivationContext;
        if ( InformationActivationContext >= 0 )
        {
LABEL_6:
          if ( (v28 & 1) != 0 )
          {
            RtlReleaseActivationContext(v27);
            v27 = -1LL;
          }
          *(_QWORD *)(v26 + 72) = v27;
          v21 = 1;
          *(_DWORD *)(v26 + 88) = 2;
          v10 = (unsigned __int64 *)(v26 + 56);
          *(_QWORD *)(v26 + 56) = a1;
          *(_QWORD *)(v26 + 64) = a2;
          v11 = (__int64 *)(v26 + 32);
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
          v12 = 0;
          if ( (a3 & 0xC0) != 0 )
            v12 = 2;
          v35 = v12;
          *(_QWORD *)v26 = RtlpTpWorkTaskCallbacks;
          *(_DWORD *)(v26 + 8) = 0;
          v6 = TpReserveTaskPost(*v11, v26, &v29);
          v25 = v6;
          if ( v6 >= 0 )
          {
            v22 = 1;
            if ( *v10 < *((_QWORD *)&xmmword_18017A500 + 1)
              || *v10 >= *((_QWORD *)&xmmword_18017A500 + 1) + (unsigned __int64)(unsigned int)qword_18017A510 )
            {
              RtlpxLookupFunctionTable(*v10, (signed __int64)&v38, v13, v14);
            }
            else
            {
              v38 = xmmword_18017A500;
              v39 = qword_18017A510;
            }
            v15 = *((_QWORD *)&v38 + 1);
            *(_QWORD *)(v26 + 80) = *((_QWORD *)&v38 + 1);
            if ( v15 )
            {
              LdrAddRefDll(0, v15);
              v23 = 1;
              if ( (unsigned int)RtlGetCurrentServiceSessionId(v16) )
              {
                v17 = (__int64)NtCurrentPeb()->SharedData + 556;
                v8 = v26;
              }
              else
              {
                v17 = 2147353478LL;
              }
              if ( *(_BYTE *)v17 )
              {
                v42 = NtCurrentTeb();
                v8 = v26;
                RtlpTpETWCallbackEnqueue(*v11, v26, *v10, *(_QWORD *)(v26 + 64), (__int64)v42->SubProcessTag);
              }
              TpPostTask(v8, *v11, 1LL, &v29);
              if ( !_InterlockedDecrement((volatile signed __int32 *)(v26 + 88)) )
                RtlpTpWorkUnposted(v26, *v11);
              v8 = 0LL;
              v26 = 0LL;
              v6 = 0;
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
      v6 = -1073741801;
      v25 = -1073741801;
    }
  }
LABEL_28:
  if ( v8 )
  {
    if ( v21 )
    {
      v19 = *(_QWORD *)(v8 + 72);
      if ( v19 != -1 )
        RtlReleaseActivationContext(v19);
    }
    if ( v22 )
      TpUnreserveTaskPost(*(volatile signed __int32 **)(v8 + 32), (__int64)&v29);
    if ( v23 )
      LdrUnloadDll(*(_QWORD *)(v8 + 80));
    if ( v24 )
    {
      v20 = *(void **)(v8 + 40);
      if ( v20 )
        NtClose(v20);
    }
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v26);
    v6 = v25;
  }
  RtlpTpResumeImpersonation(v43);
  return (unsigned int)v6;
}
