/*
 * XREFs of EtwpUpdateFilterData @ 0x1406581D4
 * Callers:
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1405C5D5C (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpUpdateGuidEnableInfo @ 0x140657F14 (EtwpUpdateGuidEnableInfo.c)
 * Callees:
 *     KeGenericCallDpc @ 0x140120460 (KeGenericCallDpc.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     EtwpFreeEventNameFilter @ 0x1408C3680 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdateEventFilter @ 0x1408C36B0 (EtwpUpdateEventFilter.c)
 *     EtwpUpdateLevelKwFilter @ 0x1408C36D8 (EtwpUpdateLevelKwFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1408C3774 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1408C3818 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1408C38DC (EtwpUpdateStringFilterData.c)
 */

__int64 __fastcall EtwpUpdateFilterData(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r10d
  char v6; // si
  char *v8; // rbp
  __int64 v9; // r14
  __int32 v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rbp
  char *PoolWithTag; // rax
  __int64 v16; // rdx
  __int32 v17; // edi
  __int64 v18; // rsi
  unsigned int v19; // eax
  __int32 v20; // r14d
  __int64 v21; // r8
  __int64 v22; // rcx
  int v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rcx
  PVOID v26; // r15
  PVOID v27; // rbx
  unsigned int v28; // [rsp+20h] [rbp-98h]
  PVOID v29; // [rsp+28h] [rbp-90h]
  PVOID v30; // [rsp+30h] [rbp-88h]
  unsigned int v31; // [rsp+38h] [rbp-80h]
  PVOID updated; // [rsp+40h] [rbp-78h]
  __int64 v33; // [rsp+48h] [rbp-70h]
  PVOID v34; // [rsp+50h] [rbp-68h] BYREF
  PVOID P; // [rsp+58h] [rbp-60h]
  __int32 v36; // [rsp+60h] [rbp-58h]
  __int64 v37; // [rsp+68h] [rbp-50h] BYREF
  int v38; // [rsp+70h] [rbp-48h]
  unsigned int v39; // [rsp+74h] [rbp-44h]
  char v42; // [rsp+D8h] [rbp+20h]

  v5 = a2;
  v28 = 0;
  v6 = a4;
  v42 = 0;
  P = 0LL;
  LOBYTE(a4) = 0;
  updated = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( !a3 || !*(_DWORD *)(a3 + 116) )
    v6 = 1;
  v8 = *(char **)(a1 + 384);
  if ( !v6 )
  {
    if ( !v8 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x340uLL, 0x46777445u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
        return 3221225495LL;
      memset(PoolWithTag, 0, 0x340uLL);
      v5 = a2;
      *(_QWORD *)(a1 + 384) = v8;
    }
    v16 = a3;
    v17 = 0;
    v18 = 104LL * v5;
    v19 = 0;
    v31 = 0;
    v20 = _InterlockedExchange((volatile __int32 *)&v8[v18], 0);
    v36 = v20;
    if ( !*(_DWORD *)(a3 + 116) )
      goto LABEL_62;
    while ( 1 )
    {
      v21 = a3;
      v22 = 2LL * v19;
      v23 = *(_DWORD *)(v16 + 16LL * v19 + 128);
      v24 = *(_DWORD *)(v16 + 8 * v22 + 132);
      v25 = a3 + *(_QWORD *)(a3 + 8 * v22 + 120);
      v38 = v23;
      v39 = v24;
      v37 = v25;
      if ( v24 > 0x80000200 )
        break;
      if ( v24 == -2147483136 )
      {
        updated = (PVOID)EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 72LL, a5 + 32, 0LL, a4);
        v17 |= 0x80000200;
        goto LABEL_59;
      }
      if ( v24 != 0x80000000 )
      {
        if ( v24 == -2147483644 )
        {
          EtwpUpdatePidFilterData(v18 + *(_QWORD *)(a1 + 384), &v37, 0LL, a4);
          v17 |= 0x80000004;
        }
        else if ( v24 == -2147483640 )
        {
          EtwpUpdateStringFilterData(v18 + *(_QWORD *)(a1 + 384) + 16LL, a5, 0LL, a4);
          v17 |= 0x80000008;
        }
        else if ( v24 == -2147483632 )
        {
          EtwpUpdateStringFilterData(v18 + *(_QWORD *)(a1 + 384) + 24LL, a5 + 8, 0LL, a4);
          v17 |= 0x80000010;
        }
        else
        {
          if ( v24 != -2147483616 )
          {
            if ( v24 == -2147483392 )
            {
              v33 = EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 80LL, a5 + 72, 0LL, a4);
              v17 |= 0x80000100;
            }
            goto LABEL_59;
          }
          EtwpUpdateStringFilterData(v18 + *(_QWORD *)(a1 + 384) + 32LL, a5 + 16, 0LL, a4);
          v17 |= 0x80000020;
        }
LABEL_43:
        v5 = a2;
        goto LABEL_59;
      }
      EtwpUpdateSchematizedFilterData(v18 + *(_QWORD *)(a1 + 384), v5, &v37, 0LL);
      v5 = a2;
      LOBYTE(a4) = 1;
      v42 = 1;
LABEL_60:
      v16 = a3;
      v19 = v31 + 1;
      v31 = v19;
      if ( v19 >= *(_DWORD *)(a3 + 116) )
      {
        v20 = v36;
        if ( !(_BYTE)a4 )
        {
LABEL_62:
          LOBYTE(a4) = 1;
          EtwpUpdateSchematizedFilterData(v18 + *(_QWORD *)(a1 + 384), 0LL, 0LL, a4);
        }
        if ( (v20 & 0x80000004) == 0x80000004 && (v17 & 0x80000004) != 0x80000004 )
        {
          LOBYTE(v21) = 1;
          EtwpUpdatePidFilterData(v18 + *(_QWORD *)(a1 + 384), 0LL, v21, a4);
        }
        if ( (v20 & 0x80000008) == 0x80000008 && (v17 & 0x80000008) != 0x80000008 )
        {
          LOBYTE(v21) = 1;
          EtwpUpdateStringFilterData(v18 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, v21, a4);
        }
        if ( (v20 & 0x80000010) == 0x80000010 && (v17 & 0x80000010) != 0x80000010 )
        {
          LOBYTE(v21) = 1;
          EtwpUpdateStringFilterData(v18 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, v21, a4);
        }
        if ( (v20 & 0x80000020) == 0x80000020 && (v17 & 0x80000020) != 0x80000020 )
        {
          LOBYTE(v21) = 1;
          EtwpUpdateStringFilterData(v18 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, v21, a4);
        }
        if ( (v20 & 0x80008000) == 0x80008000 && (v17 & 0x80008000) != 0x80008000 )
        {
          LOBYTE(v21) = 1;
          EtwpUpdateStringFilterData(v18 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, v21, a4);
        }
        if ( (v20 & 0x80001000) == 0x80001000 && (v17 & 0x80001000) != 0x80001000 )
        {
          LOBYTE(v21) = 1;
          P = (PVOID)EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 48LL, 0LL, v21, a4);
        }
        if ( (v20 & 0x80000200) == 0x80000200 && (v17 & 0x80000200) != 0x80000200 )
        {
          LOBYTE(v21) = 1;
          updated = (PVOID)EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 72LL, 0LL, v21, a4);
        }
        if ( (v20 & 0x80000400) == 0x80000400 && (v17 & 0x80000400) != 0x80000400 )
        {
          LOBYTE(v21) = 1;
          v30 = (PVOID)EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 96LL, 0LL, v21, a4);
        }
        if ( (v20 & 0x80002000) == 0x80002000 && (v17 & 0x80002000) != 0x80002000 )
        {
          LOBYTE(v21) = 1;
          v29 = (PVOID)EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 56LL, 0LL, v21, a4);
        }
        if ( (v20 & 0x80004000) == 0x80004000 && (v17 & 0x80004000) != 0x80004000 )
        {
          LOBYTE(v21) = 1;
          v28 = EtwpUpdateLevelKwFilter(v18 + *(_QWORD *)(a1 + 384), 0LL, v21, &v34);
        }
        if ( (v20 & 0x80000100) != 0x80000100 || (v17 & 0x80000100) == 0x80000100 )
        {
          v13 = (void *)v33;
        }
        else
        {
          LOBYTE(v21) = 1;
          v13 = (void *)EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 80LL, 0LL, v21, a4);
        }
        _InterlockedExchange((volatile __int32 *)(v18 + *(_QWORD *)(a1 + 384)), v17);
LABEL_99:
        v26 = P;
        v27 = v34;
        if ( P || updated || v30 || v29 || v34 || v13 )
        {
          KeGenericCallDpc((struct _SINGLE_LIST_ENTRY *)EtwpSynchronizationDpc, 0LL);
          if ( v26 )
            ExFreePoolWithTag(v26, 0);
          if ( updated )
            ExFreePoolWithTag(updated, 0);
          if ( v30 )
            EtwpFreeEventNameFilter(v30);
          if ( v29 )
            EtwpFreeEventNameFilter(v29);
          if ( v27 )
            ExFreePoolWithTag(v27, 0);
          if ( v13 )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v13, 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(v13, 0);
          }
        }
        return v28;
      }
    }
    switch ( v24 )
    {
      case 0x80000400:
        v30 = (PVOID)EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 96LL, a5 + 48, 0LL, a4);
        v17 |= 0x80000400;
        break;
      case 0x80001000:
        P = (PVOID)EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 48LL, a5 + 40, 0LL, a4);
        v17 |= 0x80001000;
        break;
      case 0x80002000:
        v29 = (PVOID)EtwpUpdateEventFilter(v18 + *(_QWORD *)(a1 + 384) + 56LL, a5 + 56, 0LL, a4);
        v17 |= 0x80002000;
        break;
      case 0x80004000:
        v28 = EtwpUpdateLevelKwFilter(v18 + *(_QWORD *)(a1 + 384), &v37, 0LL, &v34);
        v17 |= 0x80004000;
        goto LABEL_43;
      case 0x80008000:
        EtwpUpdateStringFilterData(v18 + *(_QWORD *)(a1 + 384) + 40LL, a5 + 24, 0LL, a4);
        v17 |= 0x80008000;
        goto LABEL_43;
    }
LABEL_59:
    LOBYTE(a4) = v42;
    goto LABEL_60;
  }
  if ( v8 )
  {
    v9 = 104LL * a2;
    LOBYTE(a4) = v6;
    v10 = _InterlockedExchange((volatile __int32 *)&v8[v9], 0);
    EtwpUpdateSchematizedFilterData(v9 + *(_QWORD *)(a1 + 384), 0LL, 0LL, a4);
    if ( (v10 & 0x80000004) == 0x80000004 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdatePidFilterData(v9 + *(_QWORD *)(a1 + 384), 0LL, v11, v12);
    }
    if ( (v10 & 0x80000008) == 0x80000008 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdateStringFilterData(v9 + *(_QWORD *)(a1 + 384) + 16LL, 0LL, v11, v12);
    }
    if ( (v10 & 0x80000010) == 0x80000010 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdateStringFilterData(v9 + *(_QWORD *)(a1 + 384) + 24LL, 0LL, v11, v12);
    }
    if ( (v10 & 0x80000020) == 0x80000020 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdateStringFilterData(v9 + *(_QWORD *)(a1 + 384) + 32LL, 0LL, v11, v12);
    }
    if ( (v10 & 0x80008000) == 0x80008000 )
    {
      LOBYTE(v11) = v6;
      EtwpUpdateStringFilterData(v9 + *(_QWORD *)(a1 + 384) + 40LL, 0LL, v11, v12);
    }
    if ( (v10 & 0x80001000) == 0x80001000 )
    {
      LOBYTE(v11) = v6;
      P = (PVOID)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 48LL, 0LL, v11, v12);
    }
    if ( (v10 & 0x80000200) == 0x80000200 )
    {
      LOBYTE(v11) = v6;
      updated = (PVOID)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 72LL, 0LL, v11, v12);
    }
    if ( (v10 & 0x80000400) == 0x80000400 )
    {
      LOBYTE(v11) = v6;
      v30 = (PVOID)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 96LL, 0LL, v11, v12);
    }
    if ( (v10 & 0x80002000) == 0x80002000 )
    {
      LOBYTE(v11) = v6;
      v29 = (PVOID)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 56LL, 0LL, v11, v12);
    }
    if ( (v10 & 0x80004000) == 0x80004000 )
    {
      LOBYTE(v11) = v6;
      v28 = EtwpUpdateLevelKwFilter(v9 + *(_QWORD *)(a1 + 384), 0LL, v11, &v34);
    }
    if ( (v10 & 0x80000100) == 0x80000100 )
    {
      LOBYTE(v11) = v6;
      v13 = (void *)EtwpUpdateEventFilter(v9 + *(_QWORD *)(a1 + 384) + 80LL, 0LL, v11, v12);
    }
    else
    {
      v13 = 0LL;
    }
    goto LABEL_99;
  }
  return 0LL;
}
