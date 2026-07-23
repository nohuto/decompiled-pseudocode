/*
 * XREFs of IopEnumerateEnvironmentVariablesTrEE @ 0x140822C00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     IopIssueTrEERequest @ 0x140286D50 (IopIssueTrEERequest.c)
 *     IopVerifierExAllocatePool_4 @ 0x140286E44 (IopVerifierExAllocatePool_4.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     IopEfiStatusToNTSTATUS @ 0x140822948 (IopEfiStatusToNTSTATUS.c)
 */

__int64 __fastcall IopEnumerateEnvironmentVariablesTrEE(
        __int64 a1,
        __int64 a2,
        int a3,
        __int64 (__fastcall *a4)(signed __int64 *, char *),
        __int64 a5,
        _DWORD *a6)
{
  _OWORD *v8; // rbp
  char *v9; // r14
  _DWORD *v10; // r15
  __int64 v11; // rcx
  _OWORD *Pool_4; // r13
  __int64 v13; // rdi
  int v14; // ebx
  __int64 v15; // rcx
  signed __int64 *v16; // rsi
  __int64 v17; // rcx
  _OWORD *v18; // rbx
  __int64 v19; // r13
  void *v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  signed __int64 v23; // rcx
  char v24; // al
  int v25; // eax
  signed __int64 v26; // rcx
  unsigned int v27; // ebx
  __int64 v28; // rcx
  char *v29; // rax
  _DWORD *v30; // rcx
  __int64 v31; // rax
  void *v32; // r15
  unsigned __int64 v33; // rbx
  int v34; // eax
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  int v37; // [rsp+50h] [rbp-78h] BYREF
  _OWORD *v38; // [rsp+58h] [rbp-70h]
  __int64 v39; // [rsp+60h] [rbp-68h]
  __int64 v40; // [rsp+68h] [rbp-60h]
  unsigned __int64 v41; // [rsp+70h] [rbp-58h]
  void *v42; // [rsp+78h] [rbp-50h]

  if ( (unsigned int)(a3 - 1) > 1 )
    return 3221225485LL;
  LODWORD(v40) = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  Pool_4 = IopVerifierExAllocatePool_4(a1, 0x214uLL);
  v38 = Pool_4;
  if ( Pool_4 )
  {
    v16 = (signed __int64 *)IopVerifierExAllocatePool_4(v11, 0x220uLL);
    if ( v16
      && (a3 != 2
       || (v8 = IopVerifierExAllocatePool_4(v15, 0x214uLL)) != 0LL
       && (v40 = 288LL, (v9 = (char *)IopVerifierExAllocatePool_4(v17, 0x120uLL)) != 0LL)) )
    {
      v13 = a5;
      v41 = a5 + (unsigned int)*a6;
      *a6 = 0;
      memset(v16, 0, 0x220uLL);
      v18 = v38;
      v19 = a5;
      v39 = a5;
      v20 = v38 + 1;
      v42 = v38 + 1;
      while ( 1 )
      {
        *v18 = *(_OWORD *)(v16 + 1);
        memmove(v20, (char *)v16 + 28, *((unsigned int *)v16 + 6));
        *((_WORD *)v18 + ((unsigned __int64)*((unsigned int *)v16 + 6) >> 1) + 8) = 0;
        v21 = IopIssueTrEERequest(1, a1, a2, (__int64)v18, 0x214u, (__int64)v16, 0x220u, 0x1Cu, &v37);
        LODWORD(v22) = 0;
        v14 = v21;
        if ( v21 < 0 )
          break;
        v23 = *v16;
        if ( *v16 == 0x800000000000000EuLL )
        {
          v14 = 0;
          break;
        }
        if ( v23 < 0 )
        {
          v14 = IopEfiStatusToNTSTATUS(v23);
          break;
        }
        if ( a4 )
        {
          v24 = a4(v16 + 1, (char *)v16 + 28);
          v18 = v38;
          v20 = v38 + 1;
          if ( !v24 )
            continue;
        }
        if ( a3 == 2 )
        {
          *v8 = *(_OWORD *)(v16 + 1);
          memmove(v8 + 1, (char *)v16 + 28, *((unsigned int *)v16 + 6));
          while ( 1 )
          {
            v25 = IopIssueTrEERequest(0, a1, a2, (__int64)v8, 0x214u, (__int64)v9, v40, 0x18u, &v37);
            v22 = 0LL;
            v14 = v25;
            if ( v25 < 0 )
              goto LABEL_42;
            v26 = *(_QWORD *)v9;
            if ( *(_QWORD *)v9 == 0x8000000000000005uLL )
            {
              if ( v13 )
              {
                v27 = *((_DWORD *)v9 + 4) + 32;
                v40 = v27;
                ExFreePoolWithTag(v9, 0);
                v29 = (char *)IopVerifierExAllocatePool_4(v28, v27);
                v22 = 0LL;
                v9 = v29;
                if ( !v29 )
                {
                  v14 = -1073741670;
                  goto LABEL_42;
                }
                v14 = -1073741789;
              }
            }
            else if ( v26 < 0 )
            {
              v14 = IopEfiStatusToNTSTATUS(v26);
LABEL_27:
              if ( v14 < 0 )
                goto LABEL_42;
              v30 = (_DWORD *)v39;
              v31 = v22;
              v32 = (void *)((*((unsigned int *)v16 + 6) + v39 + 39) & 0xFFFFFFFFFFFFFFF8uLL);
              v33 = ((unsigned __int64)v32 + *((_QWORD *)v9 + 2) + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              if ( v33 <= v41 )
                v31 = v13;
              v13 = v31;
              if ( v31 )
              {
                *(_OWORD *)(v39 + 16) = *(_OWORD *)(v16 + 1);
                memmove(v30 + 8, (char *)v16 + 28, *((unsigned int *)v16 + 6));
                *(_DWORD *)(v39 + 4) = (_DWORD)v32 - v39;
                memmove(v32, v9 + 24, *((_QWORD *)v9 + 2));
                v30 = (_DWORD *)v39;
                *(_DWORD *)(v39 + 8) = *((_DWORD *)v9 + 4);
                v30[3] = *((_DWORD *)v9 + 2);
                *v30 = v33 - (_DWORD)v30;
              }
              v39 = v33;
              v34 = v33 - (_DWORD)v30;
              v10 = v30;
              goto LABEL_38;
            }
            if ( v14 != -1073741789 )
              goto LABEL_27;
          }
        }
        v35 = 0LL;
        v36 = (v19 + *((unsigned int *)v16 + 6) + 27LL) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v36 <= v41 )
          v35 = v13;
        v13 = v35;
        if ( v35 )
        {
          *(_OWORD *)(v19 + 4) = *(_OWORD *)(v16 + 1);
          memmove((void *)(v19 + 20), (char *)v16 + 28, *((unsigned int *)v16 + 6));
          *(_DWORD *)v19 = v36 - v19;
        }
        v10 = (_DWORD *)v19;
        v34 = v36 - v19;
        v19 = v36;
LABEL_38:
        *a6 += v34;
        v18 = v38;
        v20 = v42;
      }
LABEL_42:
      Pool_4 = v38;
      if ( v10 && v13 )
        *v10 = v22;
    }
    else
    {
      v13 = a5;
      v14 = -1073741670;
    }
    ExFreePoolWithTag(Pool_4, 0);
    if ( v16 )
      ExFreePoolWithTag(v16, 0);
    if ( v8 )
      ExFreePoolWithTag(v8, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
  }
  else
  {
    v13 = a5;
    v14 = -1073741670;
  }
  if ( !v13 )
  {
    if ( *a6 )
      return (unsigned int)-1073741789;
  }
  return (unsigned int)v14;
}
