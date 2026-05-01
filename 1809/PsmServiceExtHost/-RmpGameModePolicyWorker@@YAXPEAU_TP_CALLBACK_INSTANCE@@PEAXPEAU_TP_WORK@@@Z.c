/*
 * XREFs of ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800355F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z @ 0x1800359E8 (-RmpGameModePromoteNewRecipients@@YAXPEAU_RM_GAME_MODE_CONTEXT@@KPEAU_LIST_ENTRY@@PEAE@Z.c)
 *     ?RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180035BC8 (-RmpGameModeReleaseUnusedGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemPublishGlobalGameModeState@@YAXK@Z @ 0x180041DB8 (-RmpSystemPublishGlobalGameModeState@@YAXK@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     IsNotifyGameModeExtensionRecipientsPresentPresent @ 0x180048E40 (IsNotifyGameModeExtensionRecipientsPresentPresent.c)
 *     memset_0 @ 0x180049A1A (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180049A30 (_guard_dispatch_icall_nop.c)
 *     ?RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18005DE3C (-RmpGameModeAcquireGlobalResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18005E060 (-RmpGameModeApplyGlobalPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18005E11C (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005E4E0 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z @ 0x18005ECC0 (-RmpGameModeNotifyExtensionRecipientsPresent@@YAXPEAU_RM_GAME_MODE_CONTEXT@@E@Z.c)
 *     ?RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18005FF1C (-RmpGameModeUnapplyAndReleaseRecipientResources@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE.c)
 */

void __fastcall RmpGameModePolicyWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // edi
  __int64 v5; // r13
  unsigned int v6; // edi
  char v7; // al
  char *v8; // rsi
  char v9; // cl
  unsigned int v10; // r12d
  DWORD CurrentThreadId; // eax
  unsigned __int8 v12; // r15
  __int64 v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  DWORD v16; // ebx
  bool v17; // r10
  unsigned int v18; // r9d
  char *v19; // rdx
  char *v20; // rcx
  char **v21; // rax
  _QWORD *v22; // rax
  char **v23; // r8
  char v24; // al
  char *v25; // r8
  char **v26; // rax
  char **v27; // rax
  _QWORD *v28; // rdi
  __int64 v29; // rdx
  _QWORD *v30; // rcx
  int v31; // edi
  unsigned __int8 v32[8]; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD *v33; // [rsp+38h] [rbp-C8h] BYREF
  char *v34; // [rsp+40h] [rbp-C0h]
  _LIST_ENTRY v35; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR v37; // [rsp+68h] [rbp-98h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+110h] [rbp+10h] BYREF
  void *v40; // [rsp+120h] [rbp+20h]
  int v41; // [rsp+128h] [rbp+28h]
  int v42; // [rsp+12Ch] [rbp+2Ch]
  struct _EVENT_DATA_DESCRIPTOR v43; // [rsp+130h] [rbp+30h] BYREF
  void *v44; // [rsp+140h] [rbp+40h]
  int v45; // [rsp+148h] [rbp+48h]
  int v46; // [rsp+14Ch] [rbp+4Ch]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180086C57 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18009B0B8;
    v40 = &unk_180086C62;
    UserData.Reserved = 2;
    v41 = 25;
    v42 = 1;
    EventWriteTransfer(qword_18009B0D0, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = *(_QWORD *)a2;
  v35.Blink = &v35;
  v35.Flink = &v35;
  RtlAcquireSRWLockExclusive(a2 + 18);
  a2[20] = GetCurrentThreadId();
  v6 = 0;
  v7 = *((_BYTE *)a2 + 148);
  if ( (v7 & 1) != 0 )
  {
    v8 = (char *)(a2 + 22);
    do
    {
      v9 = v7 & 0xF6 | (2 * (v7 & 4));
      *((_BYTE *)a2 + 148) = v9;
      if ( ((2 * (v7 & 4)) & 8) != 0 )
      {
        v10 = 0;
      }
      else
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        RtlAcquireSRWLockExclusive(v5 + 592);
        *(_DWORD *)(v5 + 648) = GetCurrentThreadId();
        v10 = *(_DWORD *)(v5 + 640);
        *(_DWORD *)(v5 + 648) = 0;
        RtlReleaseSRWLockExclusive(v5 + 592);
        RtlAcquireSRWLockExclusive(a2 + 18);
        CurrentThreadId = GetCurrentThreadId();
        v9 = *((_BYTE *)a2 + 148);
        a2[20] = CurrentThreadId;
      }
      v12 = (v9 & 8) == 0 && a2[34];
      v13 = *(_QWORD *)v8;
      v32[0] = v12;
      if ( (char *)v13 != v8 )
      {
        v17 = v10 != *(_DWORD *)(v13 + 20) || (*(_BYTE *)(v13 + 82) & 5) != 1;
        v18 = 0;
        v34 = (char *)&v33;
        v19 = v8;
        v33 = &v33;
        do
        {
          v20 = *(char **)v19;
          if ( *(char **)v19 != v19 )
          {
            if ( v17 )
            {
              if ( *((char **)v20 + 1) != v19
                || (v21 = (char **)*((_QWORD *)v19 + 1), *v21 != v19)
                || (*v21 = v20,
                    *((_QWORD *)v20 + 1) = v21,
                    v22 = v33,
                    v23 = (char **)v34,
                    *((_QWORD *)v19 + 1) = v19,
                    *(_QWORD *)v19 = v19,
                    (_QWORD **)v22[1] != &v33)
                || *v23 != (char *)&v33
                || *(char **)(*(_QWORD *)v20 + 8LL) != v20
                || **((char ***)v20 + 1) != v20 )
              {
LABEL_77:
                __fastfail(3u);
              }
              *v23 = v20;
              v34 = (char *)*((_QWORD *)v20 + 1);
              **((_QWORD **)v20 + 1) = &v33;
              *((_QWORD *)v20 + 1) = v23;
            }
            else if ( v18 )
            {
              do
              {
                v24 = v20[82];
                v25 = v20;
                v20 = *(char **)v20;
                if ( (v24 & 5) != 1 )
                {
                  if ( *((char **)v20 + 1) != v25 )
                    goto LABEL_77;
                  v26 = (char **)*((_QWORD *)v25 + 1);
                  if ( *v26 != v25 )
                    goto LABEL_77;
                  *v26 = v20;
                  *((_QWORD *)v20 + 1) = v26;
                  v27 = (char **)v34;
                  if ( *(_QWORD ***)v34 != &v33 )
                    goto LABEL_77;
                  *((_QWORD *)v25 + 1) = v34;
                  *(_QWORD *)v25 = &v33;
                  *v27 = v25;
                  v34 = v25;
                }
              }
              while ( v20 != v19 );
            }
          }
          ++v18;
          v19 += 16;
        }
        while ( v18 < 2 );
        if ( v33 != &v33 )
        {
          a2[20] = 0;
          RtlReleaseSRWLockExclusive(a2 + 18);
          while ( 1 )
          {
            v28 = v33;
            if ( v33 == &v33 )
              break;
            v29 = *v33;
            if ( *(_QWORD **)(*v33 + 8LL) != v33 )
              goto LABEL_77;
            v30 = (_QWORD *)v33[1];
            if ( (_QWORD *)*v30 != v33 )
              goto LABEL_77;
            *v30 = v29;
            *(_QWORD *)(v29 + 8) = v30;
            *v28 = 0LL;
            v28[1] = 0LL;
            RmpGameModeUnapplyAndReleaseRecipientResources(
              (struct _RM_GAME_MODE_CONTEXT *)a2,
              (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)(v28 - 11));
            *((_DWORD *)v28 + 4) = 2;
            RmpGameModeDereferenceRecipientProcess(v28 - 11);
          }
          RtlAcquireSRWLockExclusive(a2 + 18);
          a2[20] = GetCurrentThreadId();
          v6 = 0;
        }
      }
      if ( *(char **)v8 == v8 )
      {
        a2[20] = 0;
        RtlReleaseSRWLockExclusive(a2 + 18);
        v14 = !_BitScanForward((unsigned int *)&v15, a2[33]);
        if ( !v14 )
        {
          do
          {
            v31 = 1 << v15;
            off_18007DC40[5 * v15]((struct _RM_GAME_MODE_CONTEXT *)a2, 0LL);
            a2[33] &= ~v31;
            v14 = !_BitScanForward((unsigned int *)&v15, a2[33]);
          }
          while ( !v14 );
          v8 = (char *)(a2 + 22);
          v6 = 0;
        }
        RtlAcquireSRWLockExclusive(a2 + 18);
        a2[20] = GetCurrentThreadId();
      }
      RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
      if ( !v12 && *((_BYTE *)a2 + 140) )
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
        RmpGameModePromoteNewRecipients((struct _RM_GAME_MODE_CONTEXT *)a2, v10, &v35, v32);
        if ( v32[0] )
          RmpGameModeNotifyExtensionRecipientsPresent((struct _RM_GAME_MODE_CONTEXT *)a2, v32[0]);
        if ( v35.Flink != &v35 )
        {
          RmpGameModeAcquireGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2, &v35);
          RmpGameModeApplyNewRecipientPolicies((struct _RM_GAME_MODE_CONTEXT *)a2, &v35);
          RmpGameModeApplyGlobalPolicies((struct _RM_GAME_MODE_CONTEXT *)a2);
          RmpGameModeReleaseUnusedGlobalResources((struct _RM_GAME_MODE_CONTEXT *)a2);
        }
      }
      if ( *(char **)v8 != v8 )
        v6 = *(_DWORD *)(*(_QWORD *)v8 + 20LL);
      if ( v6 != a2[36] )
      {
        RmpSystemPublishGlobalGameModeState(v6);
        a2[36] = v6;
      }
      v7 = *((_BYTE *)a2 + 148);
      v6 = 0;
    }
    while ( (v7 & 1) != 0 );
  }
  a2[20] = 0;
  *((_BYTE *)a2 + 148) = v7 & 0xFD;
  RtlReleaseSRWLockExclusive(a2 + 18);
  if ( dword_18009B0B0 > 4u && (qword_18009B0C0 & 1) != 0 && (qword_18009B0C8 & 1) == qword_18009B0C8 )
  {
    *(_DWORD *)&v37.Level = 516;
    v43.Ptr = (ULONGLONG)off_18009B0B8;
    *(_DWORD *)&v37.Id = ((unsigned int)&unk_180086D64 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v37.Keyword = 1LL;
    v43.Size = *(unsigned __int16 *)off_18009B0B8;
    v44 = &unk_180086D6F;
    v43.Reserved = 2;
    v45 = 25;
    v46 = 1;
    EventWriteTransfer(qword_18009B0D0, &v37, 0LL, 0LL, 2u, &v43);
  }
  v16 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v16, 0LL);
  }
}
