/*
 * XREFs of SPCallServerHandleWaitForDisplayWindow @ 0x1407493A8
 * Callers:
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     KeReleaseMutex @ 0x14006BC60 (KeReleaseMutex.c)
 *     KeResetEvent @ 0x1400896E0 (KeResetEvent.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleWaitForDisplayWindow(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned int *v6; // rax
  unsigned int i; // ecx
  __int64 v8; // r8
  unsigned int *v9; // rdx
  unsigned int v10; // edx
  unsigned int *v11; // rcx
  unsigned int *v12; // rax
  unsigned int v13; // r8d
  int v14; // edi
  int v15; // eax
  NTSTATUS v16; // eax
  NTSTATUS v17; // edi
  int v18; // edx
  unsigned int v19; // ecx
  NTSTATUS v20; // eax
  _DWORD *PoolWithTag; // rax
  int v22; // edi
  unsigned int v23; // r9d
  unsigned __int64 v24; // r10
  int v25; // r11d
  unsigned int v26; // edx
  int v27; // eax
  unsigned int v28; // ecx
  __int64 v29; // r9
  int v30; // edi
  unsigned int v31; // ecx
  unsigned int v32; // eax
  unsigned int v33; // ecx
  unsigned __int64 v34; // rdx
  unsigned int v35; // eax
  __int64 v36; // xmm0_8
  unsigned int v37; // ecx
  _DWORD *v38; // rdx
  unsigned int v39; // eax
  LARGE_INTEGER v41; // [rsp+30h] [rbp-20h] BYREF
  __int64 v42; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  __int64 v44; // [rsp+80h] [rbp+30h] BYREF
  int v45; // [rsp+90h] [rbp+40h] BYREF

  v45 = a3;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( v6 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v8 = *v6;
      v9 = v6 + 1;
      if ( v6 + 1 < v6 )
        goto LABEL_35;
      v6 = (unsigned int *)((char *)v9 + v8);
      if ( (unsigned int *)((char *)v9 + v8) < v9 )
        goto LABEL_35;
    }
    v10 = *v6;
    v11 = v6 + 1;
    if ( v6 + 1 < v6 )
    {
LABEL_35:
      v13 = -1073741675;
      goto LABEL_15;
    }
    v12 = 0LL;
    if ( v10 )
      v12 = v11;
    v13 = 0;
    if ( v10 == 8 )
    {
      v42 = *(_QWORD *)v12;
      goto LABEL_15;
    }
    return (unsigned int)-1073741789;
  }
  v13 = -1073741811;
LABEL_15:
  if ( (v13 & 0x80000000) == 0 )
  {
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = 0LL;
    v14 = 1;
    RtlInitUnicodeString(&DestinationString, L"Security-SPP-GenuineLocalStatus");
    v15 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, __int64 *, __int64, LARGE_INTEGER *))qword_1409AD4D0)(
            &DestinationString,
            &v45,
            &v44,
            4LL,
            &v41);
    v13 = v15;
    if ( v15 != -1073741772 )
    {
      if ( v15 < 0 )
        return v13;
      if ( v45 != 4 || !(_DWORD)v44 )
        v14 = 0;
      if ( v14 )
        KeResetEvent(&stru_14042C980);
    }
    dword_1409AD148 = 1;
    do
    {
      v16 = KeWaitForSingleObject(&stru_14042C980, UserRequest, 1, 1u, 0LL);
      v17 = v16;
    }
    while ( v16 == 257 );
    if ( v16 >= 0 && v16 != 192 )
    {
      do
      {
        v20 = KeWaitForSingleObject(&Mutex, UserRequest, 1, 1u, 0LL);
        v17 = v20;
      }
      while ( v20 == 257 );
      if ( v20 >= 0 && v20 != 192 && v20 != 258 )
        KeReleaseMutex(&Mutex, 0);
    }
    v18 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC8 )
      return (unsigned int)-1073741675;
    v19 = *(_DWORD *)(a2 + 16) + 60;
    if ( v19 < *(_DWORD *)(a2 + 16) + 56 )
      return (unsigned int)-1073741675;
    v13 = v19 + v18 < v19 ? 0xC0000095 : 0;
    if ( v19 + v18 < v19 )
      return v13;
    *(_DWORD *)(a4 + 4) = 28;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x1CuLL, 0x20534C53u);
    if ( !PoolWithTag )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = PoolWithTag;
    *(_DWORD *)a4 = 0;
    v22 = v17 | 0x10000000;
    if ( PoolWithTag + 1 < PoolWithTag )
      return (unsigned int)-1073741675;
    if ( PoolWithTag + 2 <= (_DWORD *)((char *)PoolWithTag + *(unsigned int *)(a4 + 4)) )
    {
      *PoolWithTag = 4;
      PoolWithTag[1] = v22;
      v23 = ++*(_DWORD *)a4;
      v24 = *(_QWORD *)(a4 + 8);
      v25 = -1;
      v44 = v42;
      if ( !v24 )
      {
        v26 = *(_DWORD *)(a4 + 4);
        v27 = -1;
        v28 = v26 + 12;
        if ( v26 + 12 >= v26 )
          v27 = v26 + 12;
        v13 = v28 < v26 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v27;
        if ( v28 >= v26 )
        {
          *(_DWORD *)a4 = v23 + 1;
LABEL_52:
          v29 = *(_QWORD *)(a4 + 8);
          v30 = dword_1409AD06C;
          if ( !v29 )
          {
            v31 = *(_DWORD *)(a4 + 4);
            v32 = v31 + 8;
            if ( v31 + 8 >= v31 )
              v25 = v31 + 8;
            v13 = v32 < v31 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v25;
            if ( v32 >= v31 )
            {
              ++*(_DWORD *)a4;
              return 0;
            }
            return v13;
          }
          v37 = 0;
          v38 = *(_DWORD **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            while ( 1 )
            {
              v39 = *v38 + 4;
              if ( *v38 >= 0xFFFFFFFC || (_DWORD *)((char *)v38 + v39) < v38 )
                break;
              ++v37;
              v38 = (_DWORD *)((char *)v38 + v39);
              if ( v37 >= *(_DWORD *)a4 )
                goto LABEL_69;
            }
          }
          else
          {
LABEL_69:
            if ( v38 + 1 >= v38 )
            {
              v13 = 0;
              if ( (unsigned __int64)(v38 + 2) <= v29 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v38 = 4;
                v38[1] = v30;
                ++*(_DWORD *)a4;
                return v13;
              }
              return (unsigned int)-1073741789;
            }
          }
          return (unsigned int)-1073741675;
        }
LABEL_29:
        if ( (v13 & 0x80000000) != 0 )
          return v13;
        goto LABEL_52;
      }
      v33 = 0;
      v34 = v24;
      if ( v23 )
      {
        while ( 1 )
        {
          v35 = *(_DWORD *)v34 + 4;
          if ( *(_DWORD *)v34 >= 0xFFFFFFFC )
            break;
          if ( v34 + v35 < v34 )
            return (unsigned int)-1073741675;
          ++v33;
          v34 += v35;
          if ( v33 >= v23 )
            goto LABEL_61;
        }
        v13 = -1073741675;
        goto LABEL_29;
      }
LABEL_61:
      if ( v34 + 4 < v34 )
        return (unsigned int)-1073741675;
      v13 = 0;
      if ( v34 + 12 <= v24 + *(unsigned int *)(a4 + 4) )
      {
        v36 = v44;
        *(_DWORD *)v34 = 8;
        *(_QWORD *)(v34 + 4) = v36;
        ++*(_DWORD *)a4;
        goto LABEL_29;
      }
    }
    return (unsigned int)-1073741789;
  }
  return v13;
}
