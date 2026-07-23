/*
 * XREFs of PnpReleaseBootResourcesForFilteredRequirements @ 0x140180BB8
 * Callers:
 *     IopReleaseFilteredBootResources @ 0x14072EB78 (IopReleaseFilteredBootResources.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopFreeReqList @ 0x14072F8E0 (IopFreeReqList.c)
 *     IopResourceRequirementsListToReqList @ 0x140730064 (IopResourceRequirementsListToReqList.c)
 *     IopCallArbiter @ 0x140730B20 (IopCallArbiter.c)
 *     PnpCmResourcesToIoResources @ 0x1407310C4 (PnpCmResourcesToIoResources.c)
 */

__int64 __fastcall PnpReleaseBootResourcesForFilteredRequirements(__int64 *a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rax
  int v8; // ebx
  void *v9; // rdx
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // r14
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned int v16; // r8d
  __int64 i; // rdx
  __int64 v18; // rax
  _QWORD *v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // [rsp+38h] [rbp-59h] BYREF
  __int64 *v25; // [rsp+40h] [rbp-51h]
  int v26; // [rsp+48h] [rbp-49h]
  __int64 v27; // [rsp+50h] [rbp-41h]
  __int64 v28; // [rsp+58h] [rbp-39h]
  int v29; // [rsp+60h] [rbp-31h]
  int v30; // [rsp+64h] [rbp-2Dh]
  __int64 v31; // [rsp+68h] [rbp-29h]
  __int64 v32; // [rsp+80h] [rbp-11h]
  _QWORD v33[8]; // [rsp+98h] [rbp+7h] BYREF

  v2 = 0LL;
  memset(v33, 0, sizeof(v33));
  v4 = *a1;
  if ( *a1 )
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
  else
    v5 = 0LL;
  v6 = *(_QWORD *)(v5 + 544);
  if ( !v6 || (v7 = PnpCmResourcesToIoResources(v3, v6, 1LL), (v2 = (void *)v7) == 0LL) )
  {
    v8 = -1073741823;
    goto LABEL_15;
  }
  HIDWORD(v33[1]) = 4;
  v33[3] = v7;
  v33[0] = v4;
  v8 = IopResourceRequirementsListToReqList(v33, &v33[4]);
  if ( v8 < 0 )
  {
LABEL_15:
    v9 = (void *)v33[4];
    goto LABEL_16;
  }
  v9 = (void *)v33[4];
  if ( !v33[4] )
    goto LABEL_18;
  v10 = *(_QWORD *)(v33[4] + 40LL);
  v8 = 0;
  v11 = a1[4];
  v12 = 0LL;
  v13 = **(_QWORD **)(v11 + 16);
  v26 = 0;
  v27 = 0LL;
  v14 = *(_QWORD *)(v5 + 32);
  v30 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v28 = v14;
  v29 = 4;
  if ( *(_DWORD *)(v10 + 20) )
  {
    do
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v10 + 8 * v12 + 24) + 288LL);
      if ( v15 )
      {
        v16 = *(_DWORD *)(v13 + 20);
        for ( i = 0LL; (unsigned int)i < v16; i = (unsigned int)(i + 1) )
        {
          v18 = *(_QWORD *)(*(_QWORD *)(v13 + 8 * i + 24) + 288LL);
          if ( v18 && *(_BYTE *)(v15 + 16) == *(_BYTE *)(v18 + 16) )
            break;
        }
        if ( (_DWORD)i == v16 )
        {
          v25 = &v24;
          v24 = (__int64)&v24;
          v20 = *(_QWORD **)(v15 + 48);
          if ( *v20 != v15 + 40 )
            goto LABEL_27;
          v25 = *(__int64 **)(v15 + 48);
          v24 = v15 + 40;
          *v20 = &v24;
          *(_QWORD *)(v15 + 48) = &v24;
          v21 = IopCallArbiter(v15, 0LL);
          v22 = v24;
          v8 = v21;
          v23 = v25;
          if ( *(__int64 **)(v24 + 8) != &v24 || (__int64 *)*v25 != &v24 )
LABEL_27:
            __fastfail(3u);
          *v25 = v24;
          *(_QWORD *)(v22 + 8) = v23;
          if ( v8 < 0 )
            break;
          v8 = IopCallArbiter(v15, 2LL);
          if ( v8 < 0 )
            break;
        }
      }
      v12 = (unsigned int)(v12 + 1);
    }
    while ( (unsigned int)v12 < *(_DWORD *)(v10 + 20) );
    goto LABEL_15;
  }
LABEL_16:
  if ( v9 )
    IopFreeReqList(v9);
LABEL_18:
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v8;
}
