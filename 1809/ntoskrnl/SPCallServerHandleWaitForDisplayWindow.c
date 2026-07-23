/*
 * XREFs of SPCallServerHandleWaitForDisplayWindow @ 0x14071DFCC
 * Callers:
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 * Callees:
 *     KeReleaseMutex @ 0x140006340 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x140054880 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x1400B89E0 (KeResetEvent.c)
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleWaitForDisplayWindow(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // ebx
  unsigned __int64 v7; // rdx
  __int64 v8; // r15
  unsigned int i; // r9d
  unsigned __int64 v10; // r10
  unsigned int v11; // r8d
  unsigned __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // r9
  _QWORD *v15; // rax
  int v16; // esi
  int v17; // eax
  NTSTATUS v18; // eax
  NTSTATUS v19; // esi
  int v20; // r9d
  unsigned int v21; // eax
  int v22; // r14d
  unsigned int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // edx
  char *PoolWithTag; // rax
  char *v27; // rdx
  int v28; // esi
  char *v29; // rax
  __int64 v30; // r9
  unsigned int v31; // r10d
  char *v32; // rsi
  char *v33; // r9
  int v34; // r11d
  unsigned int v35; // eax
  unsigned int v36; // r12d
  char *v37; // rcx
  char *v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rdx
  _QWORD *v41; // xmm0_8
  __int64 v42; // r10
  int v43; // r12d
  char *v44; // r9
  unsigned int v45; // eax
  unsigned int v46; // r11d
  char *v47; // rcx
  char *v48; // rdx
  __int64 v49; // rax
  NTSTATUS v51; // eax
  unsigned int v52; // edx
  int v53; // eax
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // eax
  char v57[8]; // [rsp+30h] [rbp-20h] BYREF
  _QWORD *v58; // [rsp+38h] [rbp-18h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  _QWORD *v60; // [rsp+90h] [rbp+40h] BYREF
  int v61; // [rsp+A0h] [rbp+50h] BYREF

  v61 = a3;
  v4 = 0;
  if ( !a1 || !a2 || !a4 )
    return (unsigned int)-1073741811;
  v7 = *(_QWORD *)(a1 + 8);
  v8 = -1LL;
  if ( v7 && *(_DWORD *)a1 > 3u )
  {
    for ( i = 0; i < 3; ++i )
    {
      v10 = -1LL;
      if ( v7 + 4 >= v7 )
        v10 = v7 + 4;
      v11 = v7 + 4 < v7 ? 0xC0000095 : 0;
      if ( v7 + 4 < v7 )
        goto LABEL_81;
      v12 = v10 + *(unsigned int *)v7;
      v7 = -1LL;
      if ( v12 >= v10 )
        v7 = v12;
      v11 = v12 < v10 ? 0xC0000095 : 0;
      if ( v12 < v10 )
        goto LABEL_81;
    }
    v13 = *(_DWORD *)v7;
    v14 = -1LL;
    if ( v7 + 4 >= v7 )
      v14 = v7 + 4;
    v11 = v7 + 4 < v7 ? 0xC0000095 : 0;
    if ( v7 + 4 < v7 )
    {
LABEL_81:
      v13 = v61;
      v15 = v60;
      goto LABEL_19;
    }
    v15 = 0LL;
    if ( v13 )
      v15 = (_QWORD *)v14;
LABEL_19:
    if ( (v11 & 0x80000000) != 0 )
      return v11;
    if ( v13 != 8 )
      return (unsigned int)-1073741789;
    v58 = (_QWORD *)*v15;
  }
  else
  {
    v11 = -1073741811;
  }
  if ( (v11 & 0x80000000) == 0 )
  {
    v16 = 1;
    RtlInitUnicodeString(&DestinationString, L"Security-SPP-GenuineLocalStatus");
    v17 = ((__int64 (__fastcall *)(UNICODE_STRING *, int *, _QWORD **, __int64, char *))qword_14096E440)(
            &DestinationString,
            &v61,
            &v60,
            4LL,
            v57);
    v11 = v17;
    if ( v17 != -1073741772 )
    {
      if ( v17 < 0 )
        return v11;
      if ( v61 != 4 || !(_DWORD)v60 )
        v16 = 0;
      if ( v16 )
        KeResetEvent(&stru_140407460);
    }
    dword_14096E0CC = 1;
    do
    {
      v18 = KeWaitForSingleObject(&stru_140407460, UserRequest, 1, 1u, 0LL);
      v19 = v18;
    }
    while ( v18 == 257 );
    if ( v18 >= 0 && v18 != 192 )
    {
      do
      {
        v51 = KeWaitForSingleObject(&stru_140407480, UserRequest, 1, 1u, 0LL);
        v19 = v51;
      }
      while ( v51 == 257 );
      if ( v51 >= 0 && v51 != 192 && v51 != 258 )
        KeReleaseMutex(&stru_140407480, 0);
    }
    v20 = *(_DWORD *)(a2 + 32);
    v21 = *(_DWORD *)(a2 + 16) + 56;
    v22 = -1;
    v23 = -1;
    if ( v21 >= 0x38 )
      v23 = v21;
    v11 = v21 < 0x38 ? 0xC0000095 : 0;
    if ( v21 >= 0x38 )
    {
      v24 = v23 + 4;
      v25 = -1;
      if ( v23 + 4 >= v23 )
        v25 = v23 + 4;
      v11 = v24 < v23 ? 0xC0000095 : 0;
      if ( v24 >= v23 )
        v11 = v25 + v20 < v25 ? 0xC0000095 : 0;
    }
    if ( (v11 & 0x80000000) == 0 )
    {
      *(_DWORD *)(a4 + 4) = 28;
      PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1CuLL, 0x20534C53u);
      v27 = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      *(_QWORD *)(a4 + 8) = PoolWithTag;
      *(_DWORD *)a4 = 0;
      v28 = v19 | 0x10000000;
      v29 = PoolWithTag + 4;
      v30 = -1LL;
      v31 = 0;
      if ( v29 >= v27 )
        v30 = (__int64)v29;
      v11 = v29 < v27 ? 0xC0000095 : 0;
      if ( v29 >= v27 )
      {
        if ( v27 + 8 > &v27[*(unsigned int *)(a4 + 4)] )
          return (unsigned int)-1073741789;
        *(_DWORD *)v27 = 4;
        *(_DWORD *)v30 = v28;
        v31 = ++*(_DWORD *)a4;
      }
      if ( v29 < v27 )
        return v11;
      v32 = *(char **)(a4 + 8);
      v60 = v58;
      if ( v32 )
      {
        v33 = v32;
        v34 = 0;
        if ( v31 )
        {
          while ( 1 )
          {
            v35 = -1;
            if ( *(_DWORD *)v33 < 0xFFFFFFFC )
              v35 = *(_DWORD *)v33 + 4;
            v11 = *(_DWORD *)v33 >= 0xFFFFFFFC ? 0xC0000095 : 0;
            if ( (unsigned int)(*(_DWORD *)v33 + 4) < 4 )
              break;
            v36 = v35;
            v37 = v33;
            v38 = &v33[v35];
            v39 = -1LL;
            if ( v38 >= v33 )
              v39 = (__int64)&v33[v36];
            v33 = (char *)v39;
            v11 = v38 < v37 ? 0xC0000095 : 0;
            if ( v38 < v37 )
              break;
            if ( ++v34 >= v31 )
              goto LABEL_56;
          }
        }
        else
        {
LABEL_56:
          v40 = -1LL;
          if ( v33 + 4 >= v33 )
            v40 = (__int64)(v33 + 4);
          v11 = v33 + 4 < v33 ? 0xC0000095 : 0;
          if ( v33 + 4 >= v33 )
          {
            if ( v33 + 12 > &v32[*(unsigned int *)(a4 + 4)] )
              return (unsigned int)-1073741789;
            v41 = v60;
            *(_DWORD *)v33 = 8;
            *(_QWORD *)v40 = v41;
            ++*(_DWORD *)a4;
          }
        }
      }
      else
      {
        v52 = *(_DWORD *)(a4 + 4);
        v53 = -1;
        v54 = v52 + 12;
        if ( v52 + 12 >= v52 )
          v53 = v52 + 12;
        v11 = v54 < v52 ? 0xC0000095 : 0;
        *(_DWORD *)(a4 + 4) = v53;
        if ( v54 >= v52 )
        {
          *(_DWORD *)a4 = v31 + 1;
LABEL_62:
          v42 = *(_QWORD *)(a4 + 8);
          v43 = dword_14096E054;
          if ( !v42 )
          {
            v55 = *(_DWORD *)(a4 + 4);
            v56 = v55 + 8;
            if ( v55 + 8 >= v55 )
              v22 = v55 + 8;
            v11 = v56 < v55 ? 0xC0000095 : 0;
            *(_DWORD *)(a4 + 4) = v22;
            if ( v56 < v55 )
              return v11;
            v11 = 0;
LABEL_76:
            ++*(_DWORD *)a4;
            return v11;
          }
          v44 = *(char **)(a4 + 8);
          if ( *(_DWORD *)a4 )
          {
            do
            {
              v45 = -1;
              if ( *(_DWORD *)v44 < 0xFFFFFFFC )
                v45 = *(_DWORD *)v44 + 4;
              v11 = *(_DWORD *)v44 >= 0xFFFFFFFC ? 0xC0000095 : 0;
              if ( (unsigned int)(*(_DWORD *)v44 + 4) < 4 )
                return v11;
              v46 = v45;
              v47 = v44;
              v48 = &v44[v45];
              v49 = -1LL;
              if ( v48 >= v44 )
                v49 = (__int64)&v44[v46];
              v44 = (char *)v49;
              v11 = v48 < v47 ? 0xC0000095 : 0;
              if ( v48 < v47 )
                return v11;
            }
            while ( (unsigned int)++v4 < *(_DWORD *)a4 );
          }
          if ( v44 + 4 >= v44 )
            v8 = (__int64)(v44 + 4);
          v11 = v44 + 4 < v44 ? 0xC0000095 : 0;
          if ( v44 + 4 < v44 )
            return v11;
          if ( (unsigned __int64)(v44 + 8) <= v42 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v44 = 4;
            *(_DWORD *)v8 = v43;
            goto LABEL_76;
          }
          return (unsigned int)-1073741789;
        }
      }
      if ( (v11 & 0x80000000) != 0 )
        return v11;
      goto LABEL_62;
    }
  }
  return v11;
}
