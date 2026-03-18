/*
 * XREFs of ACPIGetConvertToCompatibleIDWide @ 0x1C0025B70
 * Callers:
 *     ACPIGetWorkerForString @ 0x1C00052C0 (ACPIGetWorkerForString.c)
 *     ACPIGetConvertToCompatibleID @ 0x1C0025B0C (ACPIGetConvertToCompatibleID.c)
 * Callees:
 *     RtlStringCchPrintfA @ 0x1C0005788 (RtlStringCchPrintfA.c)
 *     ACPIAnsiStringToWideHelper @ 0x1C0005804 (ACPIAnsiStringToWideHelper.c)
 *     ACPIGetConvertToPnpIDWide @ 0x1C0025FE8 (ACPIGetConvertToPnpIDWide.c)
 *     memmove @ 0x1C0031A00 (memmove.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ACPIGetConvertToStringWideWithPrepend @ 0x1C0055988 (ACPIGetConvertToStringWideWithPrepend.c)
 */

__int64 __fastcall ACPIGetConvertToCompatibleIDWide(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        char **a5,
        unsigned int *a6)
{
  int v9; // ebx
  __int64 v10; // rax
  unsigned __int16 v11; // ax
  __int64 v12; // rdi
  PVOID *PoolWithTag; // rax
  PVOID *v14; // r14
  int *v15; // rax
  int *v16; // r15
  int v17; // eax
  unsigned int v18; // ebp
  char *v19; // rax
  char *v20; // r13
  unsigned int *v21; // rsi
  const void **v22; // r12
  char *v23; // r15
  unsigned __int64 v24; // rax
  bool v25; // zf
  PVOID *v26; // rsi
  const char *v28; // rdi
  __int64 v29; // rbx
  unsigned int v30; // ebx
  unsigned int v31; // ebp
  char *v32; // rax
  char *v33; // rsi
  __int64 v34; // r12
  unsigned int *v35; // r13
  int v36; // eax
  int v37; // eax
  unsigned int *v38; // [rsp+30h] [rbp-58h]
  size_t Size; // [rsp+38h] [rbp-50h]
  int *Sizea; // [rsp+38h] [rbp-50h]
  int *v41; // [rsp+40h] [rbp-48h]
  int v42; // [rsp+90h] [rbp+8h]
  unsigned int v43; // [rsp+98h] [rbp+10h]

  v42 = a1;
  v38 = 0LL;
  v43 = 0;
  v9 = a2;
  if ( (a4 & 0x4000000) != 0 || (v10 = *(_QWORD *)(a1 + 8), (v10 & 0x1000000000LL) == 0) )
  {
    if ( a2 < 0 )
      return (unsigned int)a2;
    v11 = *(_WORD *)(a3 + 2);
    if ( v11 )
    {
      if ( v11 <= 2u )
      {
        v12 = 1LL;
        goto LABEL_7;
      }
      if ( v11 == 4 )
      {
        v38 = *(unsigned int **)(a3 + 32);
        v12 = *v38;
        if ( *(unsigned int *)(a3 + 24) >= (unsigned __int64)(40 * v12 + 8) )
        {
LABEL_7:
          PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v12, 0x4D706341u);
          v14 = PoolWithTag;
          if ( PoolWithTag )
          {
            memset(PoolWithTag, 0, 8LL * (unsigned int)v12);
            v15 = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 4LL * (unsigned int)v12, 0x4D706341u);
            v41 = v15;
            v16 = v15;
            if ( v15 )
            {
              memset(v15, 0, 4LL * (unsigned int)v12);
              if ( *(_WORD *)(a3 + 2) == 1 )
              {
                v17 = ACPIGetConvertToPnpIDWide(v42, a2, a3, a4, (__int64)v14, (__int64)v16);
              }
              else
              {
                if ( *(_WORD *)(a3 + 2) != 2 )
                {
                  if ( *(_WORD *)(a3 + 2) == 4 )
                  {
                    v34 = 0LL;
                    if ( (_DWORD)v12 )
                    {
                      v35 = v38 + 2;
                      Sizea = v16;
                      while ( 1 )
                      {
                        if ( *((_WORD *)v35 + 1) == 1 )
                        {
                          v36 = ACPIGetConvertToPnpIDWide(
                                  v42,
                                  a2,
                                  (_DWORD)v35,
                                  a4,
                                  (__int64)&v14[v34],
                                  (__int64)&v16[v34]);
                        }
                        else
                        {
                          if ( *((_WORD *)v35 + 1) != 2 )
                            KeBugCheckEx(0xA3u, 1uLL, 0x6039DuLL, 0LL, 0LL);
                          v36 = ACPIGetConvertToStringWideWithPrepend(
                                  (int)v16 + 4 * (int)v34,
                                  a2,
                                  (_DWORD)v35,
                                  a4,
                                  (__int64)&v14[v34],
                                  (__int64)&v16[v34]);
                        }
                        v9 = v36;
                        if ( v36 < 0 )
                          break;
                        v37 = *Sizea;
                        if ( *Sizea == 1 )
                        {
                          v37 = 0;
                          *Sizea = 0;
                        }
                        v43 += v37;
                        v34 = (unsigned int)(v34 + 1);
                        ++Sizea;
                        v35 += 10;
                        if ( (unsigned int)v34 >= (unsigned int)v12 )
                          goto LABEL_56;
                      }
                    }
                    else
                    {
LABEL_56:
                      if ( v9 >= 0 )
                        goto LABEL_13;
                    }
                    v12 = (unsigned int)v34;
                  }
LABEL_12:
                  if ( v9 < 0 )
                  {
LABEL_23:
                    if ( (_DWORD)v12 )
                    {
                      v26 = v14;
                      do
                      {
                        if ( *v26 )
                          ExFreePoolWithTag(*v26, 0);
                        ++v26;
                        --v12;
                      }
                      while ( v12 );
                    }
                    ExFreePoolWithTag(v16, 0);
                    ExFreePoolWithTag(v14, 0);
                    return (unsigned int)v9;
                  }
LABEL_13:
                  if ( v43 <= 2 )
                  {
                    v9 = -1072431089;
                  }
                  else
                  {
                    v18 = v43 + 2;
                    v19 = (char *)ExAllocatePoolWithTag(
                                    (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                                    v43 + 2,
                                    0x53706341u);
                    v20 = v19;
                    if ( v19 )
                    {
                      memset(v19, 0, v18);
                      if ( (_DWORD)v12 )
                      {
                        v21 = (unsigned int *)v16;
                        Size = (unsigned int)v12;
                        v22 = (const void **)v14;
                        v23 = v20;
                        do
                        {
                          if ( *v22 )
                            memmove(v23, *v22, *v21);
                          ++v22;
                          v24 = (unsigned __int64)*v21++ >> 1;
                          v25 = Size-- == 1;
                          v23 += 2 * v24;
                        }
                        while ( !v25 );
                        v16 = v41;
                      }
                      *a5 = v20;
                      if ( a6 )
                        *a6 = v18;
                    }
                    else
                    {
                      v9 = -1073741670;
                    }
                  }
                  goto LABEL_23;
                }
                v17 = ACPIGetConvertToStringWideWithPrepend(0, a2, a3, a4, (__int64)v14, (__int64)v16);
              }
              v9 = v17;
              v43 = *v16;
              goto LABEL_12;
            }
            ExFreePoolWithTag(v14, 0);
          }
          return 3221225626LL;
        }
      }
    }
    return 3222536207LL;
  }
  if ( v10 >= 0 )
    v28 = (const char *)&AcpiProcessorCompatId;
  else
    v28 = *(const char **)(a1 + 184);
  v29 = -1LL;
  do
    ++v29;
  while ( v28[v29] );
  v30 = v29 + 2;
  v31 = 2 * v30;
  v32 = (char *)ExAllocatePoolWithTag(
                  (POOL_TYPE)((a4 & 0x8000000) != 0 ? NonPagedPoolNx : PagedPool),
                  2 * v30,
                  0x53706341u);
  v33 = v32;
  if ( !v32 )
    return 3221225626LL;
  memset(v32, 0, v31);
  RtlStringCchPrintfA(v33, v30, "%s", v28);
  ACPIAnsiStringToWideHelper(v33, v31);
  *a5 = v33;
  if ( a6 )
    *a6 = 2 * v30;
  return 0LL;
}
