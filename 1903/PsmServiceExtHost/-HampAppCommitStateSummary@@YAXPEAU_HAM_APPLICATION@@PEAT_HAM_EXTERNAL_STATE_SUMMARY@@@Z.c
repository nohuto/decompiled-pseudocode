/*
 * XREFs of ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180014A00
 * Callers:
 *     ?HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180013234 (-HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z @ 0x180014CD0 (-HampPkgPushUpdate@@YAXPEAU_HAM_PACKAGE@@@Z.c)
 *     ?HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z @ 0x180014E9C (-HampStateSummaryGetUpdateMask@@YAKPEAT_HAM_EXTERNAL_STATE_SUMMARY@@0@Z.c)
 *     RmpWnfPublishMessageToClientStateName @ 0x1800152B4 (RmpWnfPublishMessageToClientStateName.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800492D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HampAppCommitStateSummary(struct _HAM_APPLICATION *a1, union _HAM_EXTERNAL_STATE_SUMMARY *a2)
{
  __int128 *v3; // r8
  char *v4; // rax
  __int64 v5; // r9
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  char UpdateMask; // al
  int *v19; // rdx
  int v20; // ecx
  char v21; // r15
  DWORD v22; // r14d
  __int64 v23; // rcx
  unsigned __int64 v24; // rbp
  __int64 **v25; // rdi
  _QWORD *Value; // rbx
  __int64 *i; // rbx
  int v28; // edx
  int v29; // ecx
  _QWORD *v30; // rax
  _DWORD v32[2]; // [rsp+20h] [rbp-248h] BYREF
  char v33; // [rsp+28h] [rbp-240h] BYREF
  __int128 v34; // [rsp+1F8h] [rbp-70h]
  __int128 v35; // [rsp+208h] [rbp-60h]
  __int128 v36; // [rsp+218h] [rbp-50h]
  __int128 v37; // [rsp+228h] [rbp-40h]
  int v38; // [rsp+238h] [rbp-30h]
  int v39; // [rsp+23Ch] [rbp-2Ch]

  v3 = (__int128 *)((char *)a1 + 96);
  v4 = &v33;
  v5 = 3LL;
  do
  {
    v4 += 128;
    v6 = *v3;
    v7 = v3[1];
    v3 += 8;
    *((_OWORD *)v4 - 8) = v6;
    v8 = *(v3 - 6);
    *((_OWORD *)v4 - 7) = v7;
    v9 = *(v3 - 5);
    *((_OWORD *)v4 - 6) = v8;
    v10 = *(v3 - 4);
    *((_OWORD *)v4 - 5) = v9;
    v11 = *(v3 - 3);
    *((_OWORD *)v4 - 4) = v10;
    v12 = *(v3 - 2);
    *((_OWORD *)v4 - 3) = v11;
    v13 = *(v3 - 1);
    *((_OWORD *)v4 - 2) = v12;
    *((_OWORD *)v4 - 1) = v13;
    --v5;
  }
  while ( v5 );
  v14 = v3[1];
  *(_OWORD *)v4 = *v3;
  v15 = v3[2];
  *((_OWORD *)v4 + 1) = v14;
  v16 = v3[3];
  *((_OWORD *)v4 + 2) = v15;
  v17 = v3[4];
  *((_OWORD *)v4 + 3) = v16;
  *((_OWORD *)v4 + 4) = v17;
  v32[0] = 0;
  UpdateMask = HampStateSummaryGetUpdateMask((struct _HAM_APPLICATION *)((char *)a1 + 616), a2);
  v20 = *v19;
  v21 = UpdateMask;
  v22 = HampLockTrackerId;
  *((_DWORD *)a1 + 154) = *v19;
  v32[1] = v20;
  v23 = *((_QWORD *)a1 + 11);
  v34 = *(_OWORD *)(v23 + 228);
  v35 = *(_OWORD *)(v23 + 244);
  v36 = *(_OWORD *)(v23 + 260);
  v37 = *(_OWORD *)(v23 + 276);
  v38 = *(_DWORD *)(v23 + 292);
  v39 = *(_DWORD *)(v23 + 296);
  v24 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(v23 + 32) & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  v25 = (__int64 **)(v24 - 56);
  if ( v22 != -1 )
  {
    Value = TlsGetValue(v22);
    if ( (*(_QWORD *)TlsGetValue(v22) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockShared(v24 - 168);
  for ( i = *v25; i != (__int64 *)v25; i = (__int64 *)*i )
  {
    v28 = *((_DWORD *)i + 30);
    if ( (v28 & 1) == 0 && (!v39 || (v29 = *((_DWORD *)i + 34)) == 0 || v39 == v29) )
    {
      if ( v32[0] )
      {
        if ( v32[0] != 1 || (i[18] & 2) != 0 )
        {
LABEL_14:
          if ( ((v21 & 1) == 0 || (i[18] & 4) != 0) && ((v21 & 2) == 0 || (i[18] & 8) != 0) )
          {
            if ( (v28 & 2) != 0 )
              ((void (__fastcall *)(_DWORD *, __int64))i[13])(v32, i[14]);
            else
              RmpWnfPublishMessageToClientStateName(i + 12, v32, 544LL, i[13]);
          }
        }
      }
      else if ( (i[18] & 1) != 0 )
      {
        goto LABEL_14;
      }
    }
  }
  if ( HampLockTrackerId != -1 )
  {
    v30 = TlsGetValue(HampLockTrackerId);
    if ( (*(_DWORD *)v30 & 0x400LL) == 0 )
      __int2c();
    if ( v30[11]-- == 1LL )
      *v30 &= ~0x400uLL;
  }
  RtlReleaseSRWLockShared(v24 - 168);
  HampPkgPushUpdate(*((struct _HAM_PACKAGE **)a1 + 11));
}
