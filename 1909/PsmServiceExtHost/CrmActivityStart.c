/*
 * XREFs of CrmActivityStart @ 0x180032860
 * Callers:
 *     CrmRegistrationCreateActivity @ 0x1800326EC (CrmRegistrationCreateActivity.c)
 * Callees:
 *     CrmStateMonitorCleanup @ 0x180003718 (CrmStateMonitorCleanup.c)
 *     CrmStateMonitorStart @ 0x180003A80 (CrmStateMonitorStart.c)
 *     CrmStateMonitorListenerAdd @ 0x180004968 (CrmStateMonitorListenerAdd.c)
 *     CrmStateMonitorListenerRemove @ 0x180004AA4 (CrmStateMonitorListenerRemove.c)
 *     CrmStateMonitorInitialize @ 0x180004B98 (CrmStateMonitorInitialize.c)
 *     CrmStateMonitorSizeGet @ 0x180004EE0 (CrmStateMonitorSizeGet.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     CrmActivityPolicyTableEntryGet @ 0x180031828 (CrmActivityPolicyTableEntryGet.c)
 *     RmpWnfGetPublisherSid @ 0x1800323B8 (RmpWnfGetPublisherSid.c)
 *     ?RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z @ 0x180032478 (-RmpWnfCreateStateNameForIpcEx@@YAJPEAT_RM_SID@@0KKPEAU_WNF_STATE_NAME@@@Z.c)
 *     CrmPolicyTableEntryGet @ 0x180032C38 (CrmPolicyTableEntryGet.c)
 *     CrmRegistrationNotifyWindowClosedReasonChange @ 0x18003C5C4 (CrmRegistrationNotifyWindowClosedReasonChange.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CrmActivityStart(struct _WNF_STATE_NAME *a1, __int64 a2, int a3, void *a4)
{
  __int64 v4; // r12
  ULONG v8; // ebx
  __int64 v9; // r14
  __int64 v10; // r13
  int PublisherSid; // esi
  bool v12; // sf
  PVOID Heap; // rax
  unsigned int v14; // ebx
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  __int128 v17; // xmm0
  unsigned int *v18; // r14
  unsigned int *v19; // r12
  unsigned int **v20; // rcx
  __int64 v22; // rdx
  unsigned int v24; // eax
  int *v25; // rax
  int *v26; // r12
  __int64 v27; // r8
  __int64 v28; // r9
  DWORD CurrentThreadId; // eax
  unsigned int **v30; // r14
  int v31; // [rsp+30h] [rbp-D0h] BYREF
  int v32; // [rsp+34h] [rbp-CCh] BYREF
  ULONG v33; // [rsp+38h] [rbp-C8h] BYREF
  int v34; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h]
  __int64 *v36; // [rsp+48h] [rbp-B8h]
  __int64 v37; // [rsp+50h] [rbp-B0h]
  struct _WNF_STATE_NAME v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  char v40[8]; // [rsp+68h] [rbp-98h] BYREF
  ULONG v41; // [rsp+70h] [rbp-90h]
  _BYTE Source2[80]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE DestinationSid[80]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v44; // [rsp+120h] [rbp+20h] BYREF
  UUID *v45; // [rsp+140h] [rbp+40h]
  __int64 v46; // [rsp+148h] [rbp+48h]
  struct _WNF_STATE_NAME *v47; // [rsp+150h] [rbp+50h]
  __int64 v48; // [rsp+158h] [rbp+58h]
  ULONG *v49; // [rsp+160h] [rbp+60h]
  __int64 v50; // [rsp+168h] [rbp+68h]
  __int64 *v51; // [rsp+170h] [rbp+70h]
  __int64 v52; // [rsp+178h] [rbp+78h]
  int *v53; // [rsp+180h] [rbp+80h]
  __int64 v54; // [rsp+188h] [rbp+88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+190h] [rbp+90h] BYREF
  UUID *v56; // [rsp+1B0h] [rbp+B0h]
  __int64 v57; // [rsp+1B8h] [rbp+B8h]
  int *v58; // [rsp+1C0h] [rbp+C0h]
  __int64 v59; // [rsp+1C8h] [rbp+C8h]

  v4 = a2;
  v35 = a2;
  CrmActivityPolicyTableEntryGet(*(_DWORD *)(a2 + 24), a3, (__int64)v40);
  v8 = v41;
  v9 = CrmPolicyTableEntryGet(v41);
  v37 = v9;
  v10 = *(unsigned int *)(v9 + 4);
  a1[7].Data[1] = v8;
  a1[7].Data[0] = a3;
  a1[6] = (struct _WNF_STATE_NAME)_InterlockedIncrement64(&qword_1800ABF20);
  memset_0(Source2, 0, 0x44uLL);
  if ( RtlCompareMemory(a4, Source2, 0x44uLL) != 68 )
  {
    PublisherSid = RmpWnfGetPublisherSid(DestinationSid);
    if ( PublisherSid >= 0 )
    {
      PublisherSid = RmpWnfCreateStateNameForIpcEx(DestinationSid, a4, 4, 0, a1 + 15);
      if ( PublisherSid >= 0 )
        PublisherSid = 0;
    }
    v12 = PublisherSid < 0;
LABEL_6:
    if ( v12 )
      goto LABEL_22;
    goto LABEL_7;
  }
  if ( a3 == 17 )
  {
    a1[16] = (struct _WNF_STATE_NAME)WNF_RM_QUIET_MODE;
    v31 = 255;
    PublisherSid = RtlPublishWnfStateData(WNF_RM_QUIET_MODE, 0LL, &v31, 4LL, 0LL);
    v12 = PublisherSid < 0;
    goto LABEL_6;
  }
LABEL_7:
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 56 * v10);
  a1[13] = (struct _WNF_STATE_NAME)Heap;
  if ( Heap )
  {
    a1[11].Data[0] = v10;
    v14 = 0;
    if ( (_DWORD)v10 )
    {
      while ( 1 )
      {
        v15 = (_QWORD *)(*(_QWORD *)&a1[13] + 56LL * v14);
        v16 = *(int *)(v9 + 16LL * v14 + 8);
        *v15 = 0LL;
        v15[1] = 0LL;
        v15[2] = 0LL;
        v15[4] = 0LL;
        v15[5] = 0LL;
        v15[6] = 0LL;
        v15[3] = a1;
        v17 = *(_OWORD *)(v9 + 16LL * v14 + 8);
        v18 = (unsigned int *)(v15 + 1);
        *((_OWORD *)v15 + 2) = v17;
        v15[2] = 0LL;
        v15[2] = v15 + 1;
        v15[1] = v15 + 1;
        *v15 = CrmActivityListenerCallback;
        RtlAcquireSRWLockShared(CrmGlobals);
        v19 = (unsigned int *)CrmGlobals[v16 + 2];
        v36 = &CrmGlobals[v16 + 2];
        if ( v19 )
        {
          RtlAcquireSRWLockExclusive(v19 + 2);
          v19[4] = GetCurrentThreadId();
          v20 = (unsigned int **)*((_QWORD *)v19 + 4);
          if ( *v20 != v19 + 6 )
            __fastfail(3u);
          v15[2] = v20;
          *(_QWORD *)v18 = v19 + 6;
          *v20 = v18;
          *((_QWORD *)v19 + 4) = v18;
          RtlReleaseSRWLockShared(CrmGlobals);
          ((void (__fastcall *)(_QWORD *, _QWORD, _QWORD))*v15)(v15, *v19, *((_QWORD *)v19 + 5));
          v19[4] = 0;
          RtlReleaseSRWLockExclusive(v19 + 2);
          if ( dword_1800AB2F8 > 5u && (qword_1800AB308 & 8) != 0 && (qword_1800AB310 & 8) == qword_1800AB310 )
          {
            v32 = *v19;
            v56 = &Uuid;
            v58 = &v32;
            v57 = 16LL;
            v59 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009B355, 0LL, 0LL, 4u, &pData);
          }
        }
        else
        {
          RtlReleaseSRWLockShared(CrmGlobals);
          v24 = CrmStateMonitorSizeGet(v16);
          v25 = (int *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v24);
          v26 = v25;
          if ( !v25 )
          {
            PublisherSid = -1073741801;
            goto LABEL_22;
          }
          CrmStateMonitorInitialize(v25, v16);
          PublisherSid = CrmStateMonitorStart(v26, (__int64)v15, v27, v28);
          if ( PublisherSid < 0 )
          {
            CrmStateMonitorCleanup((__int64)v26);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v26);
          }
          else
          {
            RtlAcquireSRWLockExclusive(CrmGlobals);
            CurrentThreadId = GetCurrentThreadId();
            v30 = (unsigned int **)v36;
            LODWORD(qword_1800ABE08) = CurrentThreadId;
            if ( *v36 )
            {
              CrmStateMonitorListenerRemove((char *)v26, (__int64)v15, 1);
              CrmStateMonitorListenerAdd(*v30, (__int64)v15, 1);
              PublisherSid = 0;
            }
            else
            {
              *v36 = (__int64)v26;
              LODWORD(qword_1800ABE08) = 0;
              RtlReleaseSRWLockExclusive(CrmGlobals);
            }
          }
          if ( PublisherSid < 0 )
            goto LABEL_22;
        }
        ++a1[12].Data[0];
        if ( ++v14 >= (unsigned int)v10 )
        {
          v4 = v35;
          break;
        }
        v9 = v37;
      }
    }
    if ( a1[7].Data[0] == 17 )
    {
      RtlAcquireSRWLockExclusive(&a1[9]);
      a1[10].Data[0] = GetCurrentThreadId();
      CrmRegistrationNotifyWindowClosedReasonChange(v4, a1);
      a1[10].Data[0] = 0;
      RtlReleaseSRWLockExclusive(&a1[9]);
    }
    PublisherSid = 0;
  }
  else
  {
    PublisherSid = -1073741801;
  }
LABEL_22:
  if ( dword_1800AB2F8 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2F8, 4uLL) )
  {
    v38 = a1[6];
    v33 = a1[7].Data[1];
    v34 = PublisherSid;
    v45 = &Uuid;
    v46 = 16LL;
    v39 = *(_QWORD *)(v35 + 16);
    v47 = &v38;
    v49 = &v33;
    v51 = &v39;
    v53 = &v34;
    v48 = 8LL;
    v50 = v22;
    v52 = 8LL;
    v54 = v22;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2F8, &unk_18009AABE, 0LL, 0LL, 7u, &v44);
  }
  return (unsigned int)PublisherSid;
}
