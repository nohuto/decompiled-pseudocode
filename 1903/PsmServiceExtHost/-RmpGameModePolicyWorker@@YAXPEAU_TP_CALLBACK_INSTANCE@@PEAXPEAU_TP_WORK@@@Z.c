/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180036750
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x180036B50 (-RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180036BF4 (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x180042CA8 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048ABC (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18006ADDC (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18006B014 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18006B0D0 (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006B48C (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x18006BC44 (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006CE9C (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 */

void __fastcall RmpGameModePolicyWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  __int64 v5; // r13
  char v6; // al
  _QWORD *v7; // rdi
  char v8; // cl
  unsigned int v9; // r12d
  DWORD CurrentThreadId; // eax
  unsigned __int8 v11; // r15
  __int64 v12; // rax
  bool v13; // zf
  __int64 v14; // r12
  __int64 v15; // rax
  unsigned int v16; // r15d
  DWORD v17; // ebx
  bool v18; // r10
  unsigned int v19; // r9d
  _QWORD *v20; // rdx
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rax
  _QWORD **v24; // r8
  char v25; // al
  _QWORD *v26; // r8
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _QWORD *v29; // r12
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  unsigned __int8 v32[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD **v34; // [rsp+40h] [rbp-C0h]
  unsigned int v35; // [rsp+48h] [rbp-B8h]
  unsigned int v36; // [rsp+4Ch] [rbp-B4h]
  _LIST_ENTRY v37; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR v39; // [rsp+70h] [rbp-90h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v42; // [rsp+120h] [rbp+20h]
  int v43; // [rsp+128h] [rbp+28h]
  int v44; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+130h] [rbp+30h] BYREF
  void *v46; // [rsp+140h] [rbp+40h]
  int v47; // [rsp+148h] [rbp+48h]
  int v48; // [rsp+14Ch] [rbp+4Ch]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB288;
    v42 = &unk_180094A3F;
    UserData.Reserved = 2;
    v43 = 25;
    v44 = 1;
    v35 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = *(_QWORD *)a2;
  v37.Blink = &v37;
  v37.Flink = &v37;
  RtlAcquireSRWLockExclusive(a2 + 18);
  a2[20] = GetCurrentThreadId();
  v6 = *((_BYTE *)a2 + 148);
  if ( (v6 & 1) != 0 )
  {
    v7 = a2 + 22;
    do
    {
      v8 = v6 & 0xF6 | (2 * (v6 & 4));
      *((_BYTE *)a2 + 148) = v8;
      if ( ((2 * (v6 & 4)) & 8) != 0 )
      {
        v9 = 0;
        v35 = 0;
      }
      else
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        RtlAcquireSRWLockExclusive(v5 + 592);
        *(_DWORD *)(v5 + 648) = GetCurrentThreadId();
        v9 = *(_DWORD *)(v5 + 640);
        v35 = v9;
        *(_DWORD *)(v5 + 648) = 0;
        RtlReleaseSRWLockExclusive(v5 + 592);
        RtlAcquireSRWLockExclusive(a2 + 18);
        CurrentThreadId = GetCurrentThreadId();
        v8 = *((_BYTE *)a2 + 148);
        a2[20] = CurrentThreadId;
      }
      v11 = (v8 & 8) == 0 && a2[34];
      v12 = *v7;
      v32[0] = v11;
      if ( (_QWORD *)v12 != v7 )
      {
        v18 = v9 != *(_DWORD *)(v12 + 20) || (*(_BYTE *)(v12 + 82) & 5) != 1;
        v19 = 0;
        v34 = &v33;
        v20 = v7;
        v33 = &v33;
        do
        {
          v21 = (_QWORD *)*v20;
          if ( (_QWORD *)*v20 != v20 )
          {
            if ( v18 )
            {
              if ( (_QWORD *)v21[1] != v20
                || (v22 = (_QWORD *)v20[1], (_QWORD *)*v22 != v20)
                || (*v22 = v21, v21[1] = v22, v23 = v33, v24 = v34, v20[1] = v20, *v20 = v20, (_QWORD **)v23[1] != &v33)
                || *v24 != &v33
                || *(_QWORD **)(*v21 + 8LL) != v21
                || *(_QWORD **)v21[1] != v21 )
              {
LABEL_79:
                __fastfail(3u);
              }
              *v24 = v21;
              v34 = (_QWORD **)v21[1];
              *(_QWORD *)v21[1] = &v33;
              v21[1] = v24;
            }
            else if ( v19 )
            {
              do
              {
                v25 = *((_BYTE *)v21 + 82);
                v26 = v21;
                v21 = (_QWORD *)*v21;
                if ( (v25 & 5) != 1 )
                {
                  if ( (_QWORD *)v21[1] != v26 )
                    goto LABEL_79;
                  v27 = (_QWORD *)v26[1];
                  if ( (_QWORD *)*v27 != v26 )
                    goto LABEL_79;
                  *v27 = v21;
                  v21[1] = v27;
                  v28 = v34;
                  if ( *v34 != &v33 )
                    goto LABEL_79;
                  v26[1] = v34;
                  *v26 = &v33;
                  *v28 = v26;
                  v34 = (_QWORD **)v26;
                }
              }
              while ( v21 != v20 );
            }
          }
          ++v19;
          v20 += 2;
        }
        while ( v19 < 2 );
        if ( v33 != &v33 )
        {
          a2[20] = 0;
          RtlReleaseSRWLockExclusive(a2 + 18);
          while ( 1 )
          {
            v29 = v33;
            if ( v33 == &v33 )
              break;
            v30 = *v33;
            if ( *(_QWORD **)(*v33 + 8LL) != v33 )
              goto LABEL_79;
            v31 = (_QWORD *)v33[1];
            if ( (_QWORD *)*v31 != v33 )
              goto LABEL_79;
            *v31 = v30;
            *(_QWORD *)(v30 + 8) = v31;
            *v29 = 0LL;
            v29[1] = 0LL;
            RmpGameModeUnapplyAndReleaseRecipientResources(
              (struct _RM_GAME_MODE_CONTEXT *)a2,
              (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v29 - 11));
            *((_DWORD *)v29 + 4) = 2;
            RmpGameModeDereferenceRecipientProcess(v29 - 11);
          }
          RtlAcquireSRWLockExclusive(a2 + 18);
          a2[20] = GetCurrentThreadId();
        }
      }
      if ( (_QWORD *)*v7 == v7 )
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        v13 = !_BitScanForward((unsigned int *)&v14, a2[33]);
        v36 = v14;
        if ( !v13 )
        {
          do
          {
            off_18008BE80[5 * v14]((struct _RM_GAME_MODE_CONTEXT *)a2, 0LL);
            a2[33] &= ~(1 << v14);
            v13 = !_BitScanForward((unsigned int *)&v14, a2[33]);
          }
          while ( !v13 );
          v36 = v14;
          v7 = a2 + 22;
        }
        RtlAcquireSRWLockExclusive(a2 + 18);
        a2[20] = GetCurrentThreadId();
      }
      RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
      if ( !v11 && *((_BYTE *)a2 + 140) )
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        if ( (unsigned __int8)IsNotifyGameModeExtensionRecipientsPresentPresent() )
          NotifyGameModeExtensionRecipientsPresent(0LL);
        *((_BYTE *)a2 + 140) = 0;
        RtlAcquireSRWLockExclusive(a2 + 18);
        a2[20] = GetCurrentThreadId();
      }
      if ( (a2[37] & 8) == 0 )
      {
        RmpGameModePromoteNewRecipients((struct _RM_GAME_MODE_CONTEXT *)a2, v35, &v37, v32);
        if ( v32[0] )
          RmpGameModeNotifyExtensionRecipientsPresent((struct _RM_GAME_MODE_CONTEXT *)a2, v32[0]);
        if ( v37.Flink != &v37 )
        {
          RmpGameModeAcquireGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2, &v37);
          RmpGameModeApplyNewRecipientPolicies((struct _RM_GAME_MODE_CONTEXT *)a2, &v37);
          RmpGameModeApplyGlobalPolicies((struct _RM_GAME_MODE_CONTEXT *)a2);
          RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
        }
      }
      v15 = *v7;
      if ( (_QWORD *)*v7 == v7 || (*(_BYTE *)(v15 + 56) & 0x10) != 0 )
        v16 = 0;
      else
        v16 = *(_DWORD *)(v15 + 20);
      if ( v16 != a2[36] )
      {
        RmpSystemPublishGlobalGameModeState(v16);
        a2[36] = v16;
      }
      v6 = *((_BYTE *)a2 + 148);
    }
    while ( (v6 & 1) != 0 );
  }
  a2[20] = 0;
  *((_BYTE *)a2 + 148) = v6 & 0xFD;
  RtlReleaseSRWLockExclusive(a2 + 18);
  if ( hProvider > 4u && (byte_1800AB290 & 1) != 0 && (qword_1800AB298 & 1) == qword_1800AB298 )
  {
    *(_DWORD *)&v39.Level = 516;
    v45.Ptr = (ULONGLONG)off_1800AB288;
    *(_DWORD *)&v39.Id = 184549376;
    v39.Keyword = 1LL;
    v45.Size = *(unsigned __int16 *)off_1800AB288;
    v46 = &unk_180094B4C;
    v45.Reserved = 2;
    v47 = 25;
    v48 = 1;
    v36 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(qword_1800AB2A0, &v39, 0LL, 0LL, 2u, &v45);
  }
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
}
