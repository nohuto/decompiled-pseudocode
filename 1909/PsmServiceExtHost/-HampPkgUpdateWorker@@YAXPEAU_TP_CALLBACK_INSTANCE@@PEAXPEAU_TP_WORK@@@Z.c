/*
 * XREFs of ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800137B0
 * Callers:
 *     <none>
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180012834 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcTableGetNext @ 0x1800128DC (CemRcTableGetNext.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180013184 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013DF0 (-HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x18001475C (-HampPkgCommitStateSummary@@YAXPEAU_HAM_PACKAGE@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampPkgUpdateWorker(struct _TP_CALLBACK_INSTANCE *a1, _DWORD *a2, struct _TP_WORK *a3)
{
  DWORD v4; // ebx
  DWORD v5; // edi
  _QWORD *Value; // rbx
  char *v7; // r13
  unsigned __int64 v8; // r12
  int v9; // ecx
  _QWORD *v10; // rax
  unsigned int v11; // edi
  __int64 v12; // rax
  unsigned __int64 i; // rsi
  DWORD v14; // r14d
  _QWORD *v15; // rbx
  unsigned int v16; // ebx
  _QWORD *v17; // rax
  unsigned int v18; // r10d
  unsigned int v19; // r9d
  int v20; // r10d
  char v21; // dl
  int v22; // r10d
  int v23; // eax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // r14
  unsigned __int64 j; // rbx
  unsigned __int64 v27; // rax
  _QWORD *v28; // rcx
  signed __int64 v29; // rax
  signed __int64 v30; // rcx
  bool v31; // zf
  signed __int64 v32; // rtt
  DWORD v33; // esi
  _QWORD *v34; // rbx
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int16 *v37; // rdx
  DWORD v38; // ebx
  _QWORD *k; // rcx
  unsigned __int64 v40; // rax
  _QWORD **v41; // rax
  unsigned __int64 v42; // rcx
  _QWORD *v43; // rcx
  _QWORD *v44; // rcx
  unsigned __int64 v45; // r14
  signed __int64 v46; // rax
  bool v47; // cc
  signed __int64 v48; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rbx
  unsigned int v50; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v51; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v52; // [rsp+38h] [rbp-C8h]
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DESCRIPTOR v54; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE TlsValue[144]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v57; // [rsp+100h] [rbp+0h]
  int v58; // [rsp+108h] [rbp+8h]
  int v59; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR v60; // [rsp+110h] [rbp+10h] BYREF
  void *v61; // [rsp+120h] [rbp+20h]
  int v62; // [rsp+128h] [rbp+28h]
  int v63; // [rsp+12Ch] [rbp+2Ch]
  __int16 *v64; // [rsp+130h] [rbp+30h]
  int v65; // [rsp+138h] [rbp+38h]
  int v66; // [rsp+13Ch] [rbp+3Ch]
  unsigned int *v67; // [rsp+140h] [rbp+40h]
  __int64 v68; // [rsp+148h] [rbp+48h]

  memset_0(TlsValue, 0, 0x88uLL);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, TlsValue);
  }
  if ( dword_1800AB2C0 > 4u )
  {
    *(_DWORD *)&EventDescriptor.Level = 260;
    UserData.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_1800AB2C8;
    v57 = &unk_18009980D;
    UserData.Reserved = 2;
    v58 = 23;
    v59 = 1;
    v52 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 2u, &UserData);
  }
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
      __int2c();
    *Value |= 0x40uLL;
    ++Value[7];
  }
  v7 = (char *)(a2 + 76);
  RtlAcquireSRWLockExclusive(a2 + 76);
  a2[78] = GetCurrentThreadId();
  v8 = (unsigned __int64)(a2 + 10);
  v9 = a2[85];
  do
  {
    a2[85] = v9 & 0xFFFFFFDF;
    if ( HampLockTrackerId != -1 )
    {
      v10 = TlsGetValue(HampLockTrackerId);
      if ( (*(_BYTE *)v10 & 0x40) == 0 )
        __int2c();
      v31 = v10[7]-- == 1LL;
      if ( v31 )
        *v10 &= ~0x40uLL;
    }
    *((_DWORD *)v7 + 2) = 0;
    RtlReleaseSRWLockExclusive(v7);
    v11 = 128;
    RtlAcquireSRWLockShared(v8 + 16);
    v12 = *(_QWORD *)(v8 + 8);
    if ( (v12 & 1) != 0 )
    {
      if ( v12 == 1 )
      {
LABEL_80:
        i = 0LL;
        goto LABEL_22;
      }
      i = v12 ^ (v8 | 1);
    }
    else
    {
      i = *(_QWORD *)(v8 + 8);
    }
    if ( !i )
      goto LABEL_80;
    while ( !*(_QWORD *)(i + 24) )
    {
      v41 = *(_QWORD ***)(i + 8);
      v42 = i;
      if ( v41 )
      {
        v43 = *v41;
        for ( i = *(_QWORD *)(i + 8); v43; v43 = (_QWORD *)*v43 )
          i = (unsigned __int64)v43;
      }
      else
      {
        for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD *)i == v42 )
            break;
          v42 = i;
        }
      }
      if ( !i )
        goto LABEL_80;
    }
    if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
      __fastfail(0xEu);
LABEL_22:
    RtlReleaseSRWLockShared(v8 + 16);
    if ( i )
    {
      do
      {
        v14 = HampLockTrackerId;
        if ( HampLockTrackerId != -1 )
        {
          v15 = TlsGetValue(HampLockTrackerId);
          if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
            __int2c();
          *v15 |= 0x20uLL;
          ++v15[6];
        }
        RtlAcquireSRWLockShared(i + 576);
        v16 = *(_DWORD *)(i + 616);
        if ( HampLockTrackerId != -1 )
        {
          v17 = TlsGetValue(HampLockTrackerId);
          if ( (*(_BYTE *)v17 & 0x20) == 0 )
            __int2c();
          v31 = v17[6]-- == 1LL;
          if ( v31 )
            *v17 &= ~0x20uLL;
        }
        RtlReleaseSRWLockShared(i + 576);
        v18 = v11 >> 5;
        v19 = v11 >> 3;
        if ( (unsigned __int8)((v11 >> 5) & 7) >= (unsigned __int8)((v16 >> 5) & 7) )
          LOBYTE(v18) = v16 >> 5;
        v20 = 4 * (v18 & 7);
        v21 = v11;
        if ( (unsigned __int8)((v11 >> 3) & 3) <= (unsigned __int8)((v16 >> 3) & 3) )
          LOBYTE(v19) = v16 >> 3;
        v22 = 8 * (v19 & 3 | v20);
        v23 = 0;
        if ( (unsigned __int8)(v11 & 7) <= (unsigned __int8)(v16 & 7) )
          v21 = v16;
        if ( (((unsigned __int16)v11 | (unsigned __int16)v16) & 0x100) != 0 )
          v23 = 256;
        v11 = v23 | v21 & 7 | v22;
        v24 = *(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v24 == v8 )
        {
          v25 = v24 + 16;
          RtlAcquireSRWLockShared(v24 + 16);
          j = *(_QWORD *)(i + 8);
          v27 = i;
          if ( j )
          {
            v28 = *(_QWORD **)j;
            if ( *(_QWORD *)j )
            {
              do
              {
                j = (unsigned __int64)v28;
                v28 = (_QWORD *)*v28;
              }
              while ( v28 );
            }
          }
          else
          {
            for ( j = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)j == v27 )
                break;
              v27 = j;
            }
          }
          if ( j )
          {
            while ( !*(_QWORD *)(j + 24) )
            {
              v44 = *(_QWORD **)(j + 8);
              v40 = j;
              if ( v44 )
              {
                j = *(_QWORD *)(j + 8);
                for ( k = (_QWORD *)*v44; k; k = (_QWORD *)*k )
                  j = (unsigned __int64)k;
              }
              else
              {
                for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
                {
                  if ( *(_QWORD *)j == v40 )
                    break;
                  v40 = j;
                }
              }
              if ( !j )
                goto LABEL_86;
            }
            if ( _InterlockedIncrement64((volatile signed __int64 *)(j + 24)) <= 1 )
              __fastfail(0xEu);
          }
          else
          {
LABEL_86:
            j = 0LL;
          }
          RtlReleaseSRWLockShared(v25);
          _m_prefetchw((const void *)(i + 24));
          v29 = *(_QWORD *)(i + 24);
          v30 = v29 - 1;
          v31 = v29 == 1;
          if ( v29 - 1 <= 0 )
          {
LABEL_104:
            if ( !v31 )
              __fastfail(0xEu);
            v45 = *(_QWORD *)(i + 32) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( *(_QWORD *)(i + 16) == -1LL )
            {
              if ( _InterlockedDecrement64((volatile signed __int64 *)(i + 24)) <= -1 )
                __fastfail(0xEu);
              (*(void (__fastcall **)(unsigned __int64))(v45 + 24))(i);
            }
            else
            {
              RtlAcquireSRWLockExclusive(v45 + 16);
              v46 = _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 24), 0xFFFFFFFFFFFFFFFFuLL);
              v47 = v46 <= 1;
              v48 = v46 - 1;
              if ( v47 )
              {
                if ( v48 )
                  __fastfail(0xEu);
                RtlReleaseSRWLockExclusive(v45 + 16);
                (*(void (__fastcall **)(unsigned __int64))(v45 + 24))(i);
              }
              else
              {
                RtlReleaseSRWLockExclusive(v45 + 16);
              }
              v8 = (unsigned __int64)(a2 + 10);
            }
          }
          else
          {
            while ( 1 )
            {
              v32 = v29;
              v29 = _InterlockedCompareExchange64((volatile signed __int64 *)(i + 24), v30, v29);
              if ( v32 == v29 )
                break;
              v30 = v29 - 1;
              v31 = v29 == 1;
              if ( v29 - 1 <= 0 )
                goto LABEL_104;
            }
          }
          i = j;
        }
        else
        {
          Successor = (struct _HAM_RC_TREE_NODE *)(v24 - 40);
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v24 - 40 + 24)) <= 1 )
            __fastfail(0xEu);
          i = CemRcTableGetNext((_QWORD *)i);
          if ( !i )
          {
            Successor = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)a2, Successor);
            if ( Successor )
            {
              while ( 1 )
              {
                i = (unsigned __int64)HamRcNodeGetFirst(Successor, 1);
                if ( i )
                  break;
                Successor = HamRcNodeGetSuccessor((struct _HAM_RC_TREE_NODE *)a2, Successor);
                if ( !Successor )
                  goto LABEL_122;
              }
            }
            else
            {
LABEL_122:
              i = 0LL;
            }
          }
          if ( Successor )
            CemRcObjectDereference(Successor);
        }
      }
      while ( i );
      v7 = (char *)(a2 + 76);
    }
    v50 = v11;
    HampPkgCommitAppsUsageInfo((struct _HAM_PACKAGE *)a2);
    v33 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      v34 = TlsGetValue(HampLockTrackerId);
      if ( (*(_QWORD *)TlsGetValue(v33) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *v34 |= 0x40uLL;
      ++v34[7];
    }
    RtlAcquireSRWLockExclusive(v7);
    *((_DWORD *)v7 + 2) = GetCurrentThreadId();
    v9 = a2[85];
  }
  while ( (v9 & 0x20) != 0 );
  if ( a2[86] != v11 )
  {
    HampPkgCommitStateSummary((struct _HAM_PACKAGE *)a2, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v50);
    v9 = a2[85];
    v11 = v50;
  }
  a2[85] = v9 & 0xFFFFFFEF;
  if ( HampLockTrackerId != -1 )
  {
    v35 = TlsGetValue(HampLockTrackerId);
    if ( (*(_BYTE *)v35 & 0x40) == 0 )
      __int2c();
    v31 = v35[7]-- == 1LL;
    if ( v31 )
      *v35 &= ~0x40uLL;
  }
  *((_DWORD *)v7 + 2) = 0;
  RtlReleaseSRWLockExclusive(v7);
  if ( dword_1800AB2C0 > 4u )
  {
    LODWORD(v36) = 0;
    v37 = &word_18008DA4C;
    if ( a2 != (_DWORD *)-96LL )
    {
      v37 = (__int16 *)(a2 + 24);
      v36 = -1LL;
      do
        ++v36;
      while ( *((_WORD *)a2 + v36 + 48) );
    }
    v64 = v37;
    v65 = 2 * v36 + 2;
    v67 = &v51;
    v66 = 0;
    v51 = v11;
    v68 = 4LL;
    *(_DWORD *)&v54.Level = 516;
    v60.Ptr = (ULONGLONG)off_1800AB2C8;
    *(_DWORD *)&v54.Id = 184549376;
    v54.Keyword = 0LL;
    v60.Size = *(unsigned __int16 *)off_1800AB2C8;
    v61 = &unk_180099830;
    v60.Reserved = 2;
    v62 = 49;
    v63 = 1;
    v52 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &v54, 0LL, 0LL, 4u, &v60);
  }
  CemRcObjectDereference(a2);
  v38 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v38, 0LL);
  }
}
