/*
 * XREFs of ?HampPkgCommitAppsUsageInfo@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180013DF0
 * Callers:
 *     ?HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800137B0 (-HampPkgUpdateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z @ 0x180012834 (-HamRcNodeGetSuccessor@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@0@Z.c)
 *     CemRcTableGetNext @ 0x1800128DC (CemRcTableGetNext.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z @ 0x180013184 (-HamRcNodeGetFirst@@YAPEAU_HAM_RC_TREE_NODE@@PEAU1@K@Z.c)
 *     CempRcTableGetFirstActiveObject @ 0x180014720 (CempRcTableGetFirstActiveObject.c)
 *     ?HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z @ 0x180014ED8 (-HampUsageInfoRegistrySaveForApp@@YAJPEBGPEAX0PEAU_HAM_APPLICATION_USAGE_INFO@@@Z.c)
 *     ?RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180018884 (-RmHamHostReferenceUnsafe@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     memset_0 @ 0x1800492AA (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampPkgCommitAppsUsageInfo(struct _HAM_PACKAGE *a1)
{
  struct _HAM_RC_TREE_NODE *v1; // r14
  unsigned __int64 v2; // r13
  int v3; // edi
  __int64 v4; // rax
  __int64 v5; // rcx
  _QWORD *FirstActiveObject; // r12
  DWORD v7; // r14d
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // r15
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v13; // r14d
  _QWORD *v14; // rbx
  int *v15; // rax
  int *v16; // rbx
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  DWORD v19; // r12d
  _QWORD *v20; // r14
  __int64 v21; // rcx
  unsigned __int64 v22; // r14
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // rax
  bool v25; // cc
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rcx
  bool v28; // cc
  _QWORD *v29; // rax
  DWORD v30; // esi
  __int64 v31; // r14
  _QWORD *v32; // rdi
  DWORD v33; // eax
  DWORD v34; // esi
  _QWORD *v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // rdx
  int *v38; // r14
  _QWORD *v39; // rax
  _QWORD *v40; // rax
  DWORD v41; // esi
  _QWORD *v42; // rdi
  _QWORD *v43; // rax
  unsigned __int64 v44; // rax
  unsigned __int64 v45; // rcx
  bool v46; // cc
  __int128 v47; // rax
  bool v48; // cc
  struct _HAM_RC_TREE_NODE *v49; // rax
  char *v50; // rdi
  unsigned __int64 i; // rbx
  _QWORD *v52; // rax
  _QWORD *v53; // rcx
  signed __int64 v54; // rax
  signed __int64 v55; // rcx
  bool v56; // zf
  signed __int64 v57; // rtt
  __int64 *v58; // rdx
  __int64 v59; // r8
  _QWORD **v60; // rax
  unsigned __int64 v61; // rcx
  _QWORD *v62; // rcx
  unsigned __int64 v63; // rdi
  signed __int64 v64; // rax
  signed __int64 v65; // rax
  struct _HAM_RC_TREE_NODE *Successor; // rbx
  int v67; // [rsp+20h] [rbp-E0h]
  int v68; // [rsp+24h] [rbp-DCh]
  __int64 Next; // [rsp+28h] [rbp-D8h]
  __int128 v70; // [rsp+30h] [rbp-D0h]
  __int128 v71; // [rsp+30h] [rbp-D0h]
  __int128 v72; // [rsp+40h] [rbp-C0h]
  __int128 v73; // [rsp+40h] [rbp-C0h]
  int v74; // [rsp+50h] [rbp-B0h] BYREF
  struct _HAM_RC_TREE_NODE *v75; // [rsp+58h] [rbp-A8h]
  __int128 v76; // [rsp+60h] [rbp-A0h]
  __int128 v77; // [rsp+70h] [rbp-90h]
  __int128 v78; // [rsp+80h] [rbp-80h] BYREF
  __int128 v79; // [rsp+90h] [rbp-70h]
  wchar_t String1[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v81; // [rsp+B0h] [rbp-50h]
  __int128 v82; // [rsp+C0h] [rbp-40h]
  __int128 v83; // [rsp+D0h] [rbp-30h]
  __int128 v84; // [rsp+E0h] [rbp-20h]
  __int128 v85; // [rsp+F0h] [rbp-10h]
  __int128 v86; // [rsp+100h] [rbp+0h]
  __int128 v87; // [rsp+110h] [rbp+10h]
  __int16 v88; // [rsp+120h] [rbp+20h]
  wchar_t String2[8]; // [rsp+130h] [rbp+30h] BYREF
  __int128 v90; // [rsp+140h] [rbp+40h]
  __int128 v91; // [rsp+150h] [rbp+50h]
  __int128 v92; // [rsp+160h] [rbp+60h]
  __int128 v93; // [rsp+170h] [rbp+70h]
  __int128 v94; // [rsp+180h] [rbp+80h]
  __int128 v95; // [rsp+190h] [rbp+90h]
  __int128 v96; // [rsp+1A0h] [rbp+A0h]
  __int16 v97; // [rsp+1B0h] [rbp+B0h]

  v1 = a1;
  v75 = a1;
  v2 = 0LL;
  v67 = 0;
  v3 = 0;
  memset_0(String1, 0, 0x82uLL);
  RtlAcquireSRWLockShared((char *)v1 + 56);
  v4 = *((_QWORD *)v1 + 6);
  if ( (v4 & 1) != 0 )
  {
    if ( v4 == 1 )
      v5 = 0LL;
    else
      v5 = v4 ^ (((unsigned __int64)v1 + 40) | 1);
  }
  else
  {
    v5 = *((_QWORD *)v1 + 6);
  }
  FirstActiveObject = (_QWORD *)CempRcTableGetFirstActiveObject(v5);
  RtlReleaseSRWLockShared((char *)v1 + 56);
  if ( !FirstActiveObject )
    FirstActiveObject = 0LL;
  Next = (__int64)FirstActiveObject;
  if ( FirstActiveObject )
  {
    while ( 1 )
    {
      v74 = 130;
      PsmGetApplicationNameFromKey(FirstActiveObject + 12, String2, &v74);
      if ( _wcsicmp(String1, String2) )
      {
        if ( v3 )
          HampUsageInfoRegistrySaveForApp(
            (const unsigned __int16 *)v1 + 48,
            (char *)v1 + 228,
            String1,
            (struct _HAM_APPLICATION_USAGE_INFO *)&v78);
        v78 = 0xFFFFFFFFFFFFFFFFuLL;
        v79 = 0xFFFFFFFFFFFFFFFFuLL;
        v67 = 0;
      }
      v7 = HampLockTrackerId;
      v8 = -1LL;
      v76 = 0xFFFFFFFFFFFFFFFFuLL;
      v9 = -1LL;
      v77 = 0xFFFFFFFFFFFFFFFFuLL;
      v10 = 0LL;
      v68 = 0;
      if ( HampLockTrackerId != -1 )
      {
        Value = TlsGetValue(HampLockTrackerId);
        if ( *(_QWORD *)TlsGetValue(v7) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&RmpGlobalLock);
      CurrentThreadId = GetCurrentThreadId();
      v13 = HampLockTrackerId;
      dword_1800AC208 = CurrentThreadId;
      if ( HampLockTrackerId != -1 )
      {
        v14 = TlsGetValue(HampLockTrackerId);
        if ( (*(_QWORD *)TlsGetValue(v13) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *v14 |= 0x20uLL;
        ++v14[6];
      }
      RtlAcquireSRWLockShared(FirstActiveObject + 72);
      v15 = (int *)FirstActiveObject[74];
      if ( v15 == (int *)(FirstActiveObject + 74) )
      {
LABEL_165:
        v16 = 0LL;
      }
      else
      {
        while ( 1 )
        {
          v16 = v15 - 202;
          if ( *(v15 - 212) >= 0 )
            break;
          v15 = *(int **)v15;
          if ( v15 == (int *)(FirstActiveObject + 74) )
            goto LABEL_165;
        }
        ++*((_QWORD *)v16 + 74);
      }
      if ( HampLockTrackerId != -1 )
      {
        v17 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v17 & 0x20) == 0 )
          __int2c();
        v56 = v17[6]-- == 1LL;
        if ( v56 )
          *v17 &= ~0x20uLL;
      }
      RtlReleaseSRWLockShared(FirstActiveObject + 72);
      dword_1800AC208 = 0;
      RtlReleaseSRWLockExclusive(&RmpGlobalLock);
      if ( HampLockTrackerId != -1 )
      {
        v18 = TlsGetValue(HampLockTrackerId);
        if ( (*(_BYTE *)v18 & 1) == 0 )
          __int2c();
        v56 = v18[1]-- == 1LL;
        if ( v56 )
          *v18 &= ~1uLL;
      }
      if ( v16 )
      {
        while ( 1 )
        {
          v19 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v20 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v19) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
              __int2c();
            *v20 |= 2uLL;
            ++v20[2];
          }
          RtlAcquireSRWLockExclusive(v16);
          v16[2] = GetCurrentThreadId();
          v21 = *((_QWORD *)v16 + 81);
          v68 |= (v21 & 0x2000000000000000LL) != 0;
          *((_QWORD *)v16 + 81) = v21 & 0xCFFFFFFFFFFFFFFFuLL;
          v22 = ((v21 & 0xDFFFFFFFFFFFFFFFuLL) >> 60) & 1;
          v23 = *((_QWORD *)v16 + 127);
          v24 = *((_QWORD *)v16 + 126);
          v25 = v24 <= v23;
          if ( v24 >= v23 )
            goto LABEL_154;
          if ( v8 >= v10 )
            break;
          if ( v24 <= v10 && v23 >= v8 )
          {
LABEL_37:
            if ( v24 < v8 )
              v8 = *((_QWORD *)v16 + 126);
LABEL_39:
            *(_QWORD *)&v70 = v8;
            goto LABEL_40;
          }
LABEL_151:
          if ( (__int64)v24 <= (__int64)v8 )
            goto LABEL_39;
          *(_QWORD *)&v70 = *((_QWORD *)v16 + 126);
LABEL_40:
          v26 = *((_QWORD *)v16 + 129);
          v27 = *((_QWORD *)v16 + 128);
          v28 = v27 <= v26;
          if ( v27 >= v26 )
            goto LABEL_41;
          if ( v9 >= v2 )
          {
            if ( v9 > v2 )
            {
              if ( v9 <= v26 )
                goto LABEL_42;
              goto LABEL_138;
            }
            v28 = v27 <= v26;
LABEL_41:
            if ( v28 || v9 >= v2 || v27 <= v2 )
              goto LABEL_42;
            goto LABEL_138;
          }
          if ( v27 <= v2 && v26 >= v9 )
          {
LABEL_42:
            if ( v27 < v9 )
              v9 = *((_QWORD *)v16 + 128);
            goto LABEL_44;
          }
LABEL_138:
          if ( (__int64)v27 > (__int64)v9 )
          {
            *(_QWORD *)&v72 = *((_QWORD *)v16 + 128);
            goto LABEL_45;
          }
LABEL_44:
          *(_QWORD *)&v72 = v9;
LABEL_45:
          if ( v23 <= v10 )
            *((_QWORD *)&v70 + 1) = v10;
          else
            *((_QWORD *)&v70 + 1) = *((_QWORD *)v16 + 127);
          if ( v26 <= v2 )
            *((_QWORD *)&v72 + 1) = v2;
          else
            *((_QWORD *)&v72 + 1) = *((_QWORD *)v16 + 129);
          v76 = v70;
          v77 = v72;
          if ( HampLockTrackerId != -1 )
          {
            v29 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v29 & 2) == 0 )
              __int2c();
            v56 = v29[2]-- == 1LL;
            if ( v56 )
              *v29 &= ~2uLL;
          }
          v16[2] = 0;
          RtlReleaseSRWLockExclusive(v16);
          if ( (_DWORD)v22 )
          {
            RmpAcquireGlobalLock();
            v56 = (*((_QWORD *)v16 + 74))-- == 1LL;
            if ( v56 )
              RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v16 - 16));
            RmpReleaseGlobalLock();
          }
          v30 = HampLockTrackerId;
          v31 = *((_QWORD *)v16 + 97);
          if ( HampLockTrackerId != -1 )
          {
            v32 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v30) )
              __int2c();
            *v32 |= 1uLL;
            ++v32[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          v33 = GetCurrentThreadId();
          v34 = HampLockTrackerId;
          dword_1800AC208 = v33;
          if ( HampLockTrackerId != -1 )
          {
            v35 = TlsGetValue(HampLockTrackerId);
            if ( (*(_QWORD *)TlsGetValue(v34) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
              __int2c();
            *v35 |= 0x20uLL;
            ++v35[6];
          }
          v36 = v31 + 576;
          RtlAcquireSRWLockShared(v31 + 576);
          v37 = *((_QWORD *)v16 + 101);
          if ( v37 == v31 + 592 )
          {
LABEL_64:
            v38 = 0LL;
          }
          else
          {
            while ( 1 )
            {
              v38 = (int *)(v37 - 808);
              if ( RmHamHostReferenceUnsafe((struct _RM_HAM_ACTIVITY_HOST *)(v37 - 808)) )
                break;
              v37 = *v58;
              if ( v37 == v59 )
                goto LABEL_64;
            }
          }
          if ( HampLockTrackerId != -1 )
          {
            v39 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v39 & 0x20) == 0 )
              __int2c();
            v56 = v39[6]-- == 1LL;
            if ( v56 )
              *v39 &= ~0x20uLL;
          }
          RtlReleaseSRWLockShared(v36);
          dword_1800AC208 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v40 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v40 & 1) == 0 )
              __int2c();
            v56 = v40[1]-- == 1LL;
            if ( v56 )
              *v40 &= ~1uLL;
          }
          v41 = HampLockTrackerId;
          if ( HampLockTrackerId != -1 )
          {
            v42 = TlsGetValue(HampLockTrackerId);
            if ( *(_QWORD *)TlsGetValue(v41) )
              __int2c();
            *v42 |= 1uLL;
            ++v42[1];
          }
          RtlAcquireSRWLockExclusive(&RmpGlobalLock);
          dword_1800AC208 = GetCurrentThreadId();
          v56 = (*((_QWORD *)v16 + 74))-- == 1LL;
          if ( v56 )
            RmpActivityHostCheckQueueDelete((struct _RM_ACTIVITY_HOST *)(v16 - 16));
          dword_1800AC208 = 0;
          RtlReleaseSRWLockExclusive(&RmpGlobalLock);
          if ( HampLockTrackerId != -1 )
          {
            v43 = TlsGetValue(HampLockTrackerId);
            if ( (*(_BYTE *)v43 & 1) == 0 )
              __int2c();
            v56 = v43[1]-- == 1LL;
            if ( v56 )
              *v43 &= ~1uLL;
          }
          v2 = *((_QWORD *)&v77 + 1);
          v16 = v38;
          v9 = v77;
          v10 = *((_QWORD *)&v76 + 1);
          v8 = v76;
          if ( !v38 )
          {
            FirstActiveObject = (_QWORD *)Next;
            goto LABEL_88;
          }
        }
        if ( v8 > v10 )
        {
          if ( v8 <= v23 )
            goto LABEL_37;
          goto LABEL_151;
        }
        v25 = v24 <= v23;
LABEL_154:
        if ( v25 || v8 >= v10 || v24 <= v10 )
          goto LABEL_37;
        goto LABEL_151;
      }
LABEL_88:
      v45 = *((_QWORD *)&v78 + 1);
      v44 = v78;
      v46 = v8 <= v10;
      if ( v8 < v10 )
      {
        if ( (unsigned __int64)v78 < *((_QWORD *)&v78 + 1) )
        {
          if ( v8 <= *((_QWORD *)&v78 + 1) && v10 >= (unsigned __int64)v78 )
            goto LABEL_92;
          goto LABEL_128;
        }
        if ( (unsigned __int64)v78 > *((_QWORD *)&v78 + 1) )
        {
          if ( (unsigned __int64)v78 <= v10 )
            goto LABEL_92;
          goto LABEL_128;
        }
        v46 = v8 <= v10;
      }
      if ( v46 || (unsigned __int64)v78 >= *((_QWORD *)&v78 + 1) || v8 <= *((_QWORD *)&v78 + 1) )
      {
LABEL_92:
        if ( v8 < (unsigned __int64)v78 )
          v44 = v8;
LABEL_94:
        *(_QWORD *)&v71 = v44;
        goto LABEL_95;
      }
LABEL_128:
      if ( (__int64)v8 <= (__int64)v78 )
        goto LABEL_94;
      *(_QWORD *)&v71 = v8;
LABEL_95:
      v47 = v79;
      v48 = v9 <= v2;
      if ( v9 >= v2 )
        goto LABEL_96;
      if ( (unsigned __int64)v79 >= *((_QWORD *)&v79 + 1) )
      {
        if ( (unsigned __int64)v79 > *((_QWORD *)&v79 + 1) )
        {
          if ( (unsigned __int64)v79 <= v2 )
            goto LABEL_97;
          goto LABEL_133;
        }
        v48 = v9 <= v2;
LABEL_96:
        if ( v48 || (unsigned __int64)v79 >= *((_QWORD *)&v79 + 1) || v9 <= *((_QWORD *)&v79 + 1) )
          goto LABEL_97;
        goto LABEL_133;
      }
      if ( v9 <= *((_QWORD *)&v79 + 1) && v2 >= (unsigned __int64)v79 )
      {
LABEL_97:
        if ( v9 < (unsigned __int64)v79 )
          *(_QWORD *)&v47 = v9;
LABEL_99:
        *(_QWORD *)&v73 = v47;
        goto LABEL_100;
      }
LABEL_133:
      if ( (__int64)v9 <= (__int64)v79 )
        goto LABEL_99;
      *(_QWORD *)&v73 = v9;
LABEL_100:
      v1 = v75;
      if ( v10 > *((_QWORD *)&v78 + 1) )
        v45 = v10;
      *((_QWORD *)&v71 + 1) = v45;
      if ( v2 > *((_QWORD *)&v79 + 1) )
        *((_QWORD *)&v47 + 1) = v2;
      v88 = v97;
      v3 = v68 | v67;
      v78 = v71;
      *((_QWORD *)&v73 + 1) = *((_QWORD *)&v47 + 1);
      v67 |= v68;
      v79 = v73;
      v81 = v90;
      *(_OWORD *)String1 = *(_OWORD *)String2;
      v83 = v92;
      v82 = v91;
      v85 = v94;
      v84 = v93;
      v87 = v96;
      v86 = v95;
      v49 = (struct _HAM_RC_TREE_NODE *)(FirstActiveObject[4] & 0xFFFFFFFFFFFFFFFCuLL);
      if ( v49 == (struct _HAM_RC_TREE_NODE *)((char *)v75 + 40) )
      {
        v50 = (char *)v49 + 16;
        RtlAcquireSRWLockShared((char *)v49 + 16);
        i = FirstActiveObject[1];
        v52 = FirstActiveObject;
        if ( i )
        {
          v53 = *(_QWORD **)i;
          if ( *(_QWORD *)i )
          {
            do
            {
              i = (unsigned __int64)v53;
              v53 = (_QWORD *)*v53;
            }
            while ( v53 );
          }
        }
        else
        {
          for ( i = FirstActiveObject[2] & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD **)i == v52 )
              break;
            v52 = (_QWORD *)i;
          }
        }
        if ( i )
        {
          while ( !*(_QWORD *)(i + 24) )
          {
            v60 = *(_QWORD ***)(i + 8);
            v61 = i;
            if ( v60 )
            {
              v62 = *v60;
              for ( i = *(_QWORD *)(i + 8); v62; v62 = (_QWORD *)*v62 )
                i = (unsigned __int64)v62;
            }
            else
            {
              for ( i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
              {
                if ( *(_QWORD *)i == v61 )
                  break;
                v61 = i;
              }
            }
            if ( !i )
              goto LABEL_125;
          }
          if ( _InterlockedIncrement64((volatile signed __int64 *)(i + 24)) <= 1 )
            __fastfail(0xEu);
          v2 = 0LL;
        }
        else
        {
LABEL_125:
          v2 = 0LL;
          i = 0LL;
        }
        RtlReleaseSRWLockShared(v50);
        _m_prefetchw(FirstActiveObject + 3);
        v54 = FirstActiveObject[3];
        v55 = v54 - 1;
        v56 = v54 == 1;
        if ( v54 - 1 <= 0 )
        {
LABEL_198:
          if ( !v56 )
            __fastfail(0xEu);
          v63 = FirstActiveObject[4] & 0xFFFFFFFFFFFFFFFCuLL;
          if ( FirstActiveObject[2] == -1LL )
          {
            if ( _InterlockedDecrement64(FirstActiveObject + 3) <= -1 )
              __fastfail(0xEu);
            (*(void (__fastcall **)(_QWORD *))(v63 + 24))(FirstActiveObject);
          }
          else
          {
            RtlAcquireSRWLockExclusive(v63 + 16);
            v64 = _InterlockedExchangeAdd64(FirstActiveObject + 3, 0xFFFFFFFFFFFFFFFFuLL);
            v25 = v64 <= 1;
            v65 = v64 - 1;
            if ( v25 )
            {
              if ( v65 )
                __fastfail(0xEu);
              RtlReleaseSRWLockExclusive(v63 + 16);
              (*(void (__fastcall **)(_QWORD *))(v63 + 24))(FirstActiveObject);
            }
            else
            {
              RtlReleaseSRWLockExclusive(v63 + 16);
            }
          }
        }
        else
        {
          while ( 1 )
          {
            v57 = v54;
            v54 = _InterlockedCompareExchange64(FirstActiveObject + 3, v55, v54);
            if ( v57 == v54 )
              break;
            v55 = v54 - 1;
            v56 = v54 == 1;
            if ( v54 - 1 <= 0 )
              goto LABEL_198;
          }
        }
        v3 = v67;
        FirstActiveObject = (_QWORD *)i;
        Next = i;
        goto LABEL_115;
      }
      Successor = (struct _HAM_RC_TREE_NODE *)((char *)v49 - 40);
      if ( _InterlockedIncrement64((volatile signed __int64 *)v49 - 2) <= 1 )
        __fastfail(0xEu);
      Next = CemRcTableGetNext(FirstActiveObject);
      FirstActiveObject = (_QWORD *)Next;
      if ( !Next )
      {
        Successor = HamRcNodeGetSuccessor(v1, Successor);
        if ( !Successor )
        {
LABEL_215:
          v2 = 0LL;
          FirstActiveObject = 0LL;
          Next = 0LL;
          goto LABEL_217;
        }
        while ( 1 )
        {
          Next = (__int64)HamRcNodeGetFirst(Successor, 1);
          FirstActiveObject = (_QWORD *)Next;
          if ( Next )
            break;
          Successor = HamRcNodeGetSuccessor(v1, Successor);
          if ( !Successor )
            goto LABEL_215;
        }
      }
      v2 = 0LL;
LABEL_217:
      if ( Successor )
        CemRcObjectDereference(Successor);
LABEL_115:
      if ( !FirstActiveObject )
      {
        if ( v3 )
          HampUsageInfoRegistrySaveForApp(
            (const unsigned __int16 *)v1 + 48,
            (char *)v1 + 228,
            String1,
            (struct _HAM_APPLICATION_USAGE_INFO *)&v78);
        return;
      }
    }
  }
}
