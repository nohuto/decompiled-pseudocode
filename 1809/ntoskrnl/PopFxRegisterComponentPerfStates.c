/*
 * XREFs of PopFxRegisterComponentPerfStates @ 0x14086B4E4
 * Callers:
 *     PoFxRegisterComponentPerfStates @ 0x14086A3A0 (PoFxRegisterComponentPerfStates.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400B8DB0 (KeInitializeEvent.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PopPluginRegisterComponentPerfStates @ 0x1402DAAEC (PopPluginRegisterComponentPerfStates.c)
 *     PopPepRegisterComponentPerfStates @ 0x1402DDDEC (PopPepRegisterComponentPerfStates.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PopFxPepPerfInfoFree @ 0x14086B250 (PopFxPepPerfInfoFree.c)
 *     PopFxPepPerfInfoQuery @ 0x14086B2CC (PopFxPepPerfInfoQuery.c)
 *     PopFxTracePerfRegistration @ 0x140875F78 (PopFxTracePerfRegistration.c)
 */

__int64 __fastcall PopFxRegisterComponentPerfStates(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        char **a6)
{
  char **v6; // r13
  __int64 v7; // r9
  char v8; // bl
  __int64 v9; // rax
  int v10; // eax
  _QWORD *v11; // rdi
  unsigned int v12; // ebx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rax
  SIZE_T v16; // rbp
  __int64 v17; // rcx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // r12
  unsigned __int64 v20; // rax
  __int64 v21; // r9
  unsigned int v22; // esi
  unsigned __int64 v23; // r9
  unsigned int *v24; // r11
  __int64 v25; // rax
  unsigned __int64 v26; // kr10_8
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  bool v29; // cf
  __int64 v30; // rax
  unsigned int v31; // esi
  unsigned __int64 v32; // r9
  _WORD *v33; // r11
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  unsigned __int64 v36; // rdx
  unsigned __int64 v37; // rcx
  unsigned __int64 v38; // rax
  char *PoolWithTag; // rax
  char *v40; // rsi
  UNICODE_STRING **v41; // rcx
  UNICODE_STRING *v42; // r15
  UNICODE_STRING *v43; // rax
  unsigned int i; // edx
  unsigned int v45; // ebp
  wchar_t *v46; // r12
  UNICODE_STRING *v47; // r14
  unsigned int v48; // eax
  unsigned int v49; // ebp
  wchar_t *v50; // r12
  _QWORD *v51; // r14
  unsigned __int16 v52; // ax
  char v53; // [rsp+20h] [rbp-98h]
  PVOID P; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v55; // [rsp+30h] [rbp-88h]
  unsigned __int64 v56; // [rsp+38h] [rbp-80h]
  unsigned __int64 v57; // [rsp+40h] [rbp-78h]
  char *v58; // [rsp+48h] [rbp-70h]
  __int64 v59; // [rsp+50h] [rbp-68h]
  __int64 v60; // [rsp+58h] [rbp-60h]
  __int64 v61; // [rsp+60h] [rbp-58h]
  __int64 v62; // [rsp+68h] [rbp-50h]

  v6 = a6;
  v7 = BugCheckParameter3;
  P = 0LL;
  v8 = a3;
  v9 = a2;
  if ( a5 )
  {
    if ( !a6 )
    {
      v11 = a5;
      P = a5;
LABEL_8:
      if ( !*(_DWORD *)v11 )
      {
        v12 = -1073741811;
        goto LABEL_48;
      }
      v53 = PopPluginRegisterComponentPerfStates(v7, *(_DWORD *)(v9 + 16), (__int64)v11);
      if ( !v53 && (v8 & 1) == 0 )
      {
        v12 = -1073741822;
        goto LABEL_48;
      }
      v14 = *(unsigned int *)v11;
      v59 = (*(unsigned int *)v11 * (unsigned __int128)0x20uLL) >> 64;
      if ( !is_mul_ok(v14, 0x20uLL) )
      {
        v12 = -1073741675;
        goto LABEL_48;
      }
      v15 = 32 * v14 + 160;
      v16 = -1LL;
      v17 = -1LL;
      if ( v15 >= 0xA0 )
        v17 = 32 * v14 + 160;
      v12 = 32 * v14 >= 0xFFFFFFFFFFFFFF60uLL ? 0xC0000095 : 0;
      if ( v15 >= 0xA0 )
      {
        v18 = -1LL;
        v19 = (v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v19 + 8 >= v19 )
          v18 = v19 + 8;
        v12 = v19 + 8 < v19 ? 0xC0000095 : 0;
        if ( v19 + 8 >= v19 )
        {
          v60 = (v14 * (unsigned __int128)0x30u) >> 64;
          if ( !is_mul_ok(v14, 0x30uLL) )
          {
LABEL_22:
            v12 = -1073741675;
            goto LABEL_48;
          }
          v20 = v18 + 48 * v14;
          v21 = -1LL;
          if ( v20 >= v18 )
            v21 = v18 + 48 * v14;
          v12 = v20 < v18 ? 0xC0000095 : 0;
          if ( v20 >= v18 )
          {
            v22 = 0;
            v23 = (v21 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
            v55 = v23;
            if ( (_DWORD)v14 )
            {
              v24 = (unsigned int *)(v11 + 5);
              do
              {
                if ( !*(v24 - 1) )
                {
                  v26 = *v24;
                  v25 = 16 * v26;
                  v61 = (*v24 * (unsigned __int128)0x10uLL) >> 64;
                  if ( !is_mul_ok(v26, 0x10uLL) )
                  {
                    v12 = -1073741675;
                    goto LABEL_48;
                  }
                  v27 = v25 + v23;
                  v28 = v23;
                  v29 = v25 + v23 < v23;
                  v30 = -1LL;
                  if ( !v29 )
                    v30 = v27;
                  v23 = v30;
                  v12 = v27 < v28 ? 0xC0000095 : 0;
                  if ( v27 < v28 )
                    goto LABEL_48;
                }
                ++v22;
                v24 += 12;
              }
              while ( v22 < (unsigned int)v14 );
            }
            v31 = 0;
            v32 = (v23 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
            v56 = v32;
            if ( (_DWORD)v14 )
            {
              v33 = v11 + 1;
              while ( 1 )
              {
                if ( *v33 )
                {
                  v34 = v32;
                  v35 = -1LL;
                  v36 = v32 + (unsigned __int16)*v33 + 2LL;
                  if ( v36 >= v32 )
                    v35 = v32 + (unsigned __int16)*v33 + 2LL;
                  v32 = v35;
                  v12 = v36 < v34 ? 0xC0000095 : 0;
                  if ( v36 < v34 )
                    break;
                }
                ++v31;
                v33 += 24;
                if ( v31 >= (unsigned int)v14 )
                  goto LABEL_41;
              }
            }
            else
            {
LABEL_41:
              v37 = (v32 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
              v57 = v37;
              v62 = (v14 * (unsigned __int128)0x10uLL) >> 64;
              if ( !is_mul_ok(v14, 0x10uLL) )
                goto LABEL_22;
              v38 = v37 + 16 * v14;
              if ( v38 >= v37 )
                v16 = v37 + 16 * v14;
              v12 = v38 < v37 ? 0xC0000095 : 0;
              if ( v38 >= v37 )
              {
                PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v16, 0x4D584650u);
                v40 = PoolWithTag;
                if ( PoolWithTag )
                {
                  memset(PoolWithTag, 0, v16);
                  *((_QWORD *)v40 + 4) = a4;
                  v41 = (UNICODE_STRING **)(v40 + 160);
                  v42 = (UNICODE_STRING *)&v40[v18];
                  *((_DWORD *)v40 + 36) = *(_DWORD *)v11;
                  *((_QWORD *)v40 + 19) = v40 + 160;
                  *(_DWORD *)&v40[v19] = *(_DWORD *)v11;
                  v43 = v42;
                  v58 = &v40[v19];
                  for ( i = 0; i < *(_DWORD *)v11; v41 += 4 )
                  {
                    *v41 = v43;
                    ++i;
                    v43 += 3;
                  }
                  v45 = 0;
                  v46 = (wchar_t *)&v40[v55];
                  if ( *(_DWORD *)v11 )
                  {
                    v47 = v42 + 2;
                    do
                    {
                      *(_QWORD *)&v47[-1].Length = v11[6 * v45 + 3];
                      LODWORD(v47[-1].Buffer) = v11[6 * v45 + 4];
                      HIDWORD(v47[-1].Buffer) = HIDWORD(v11[6 * v45 + 4]);
                      if ( HIDWORD(v11[6 * v45 + 4]) )
                      {
                        *(_QWORD *)&v47->Length = v11[6 * v45 + 5];
                        v47->Buffer = (wchar_t *)v11[6 * v45 + 6];
                      }
                      else
                      {
                        v48 = v11[6 * v45 + 5];
                        *(_DWORD *)&v47->Length = v48;
                        v47->Buffer = v46;
                        memmove(v46, (const void *)v11[6 * v45 + 6], 16LL * v48);
                        v46 += 8 * *(unsigned int *)&v47->Length;
                      }
                      v47 += 3;
                      ++v45;
                    }
                    while ( v45 < *(_DWORD *)v11 );
                    v6 = a6;
                  }
                  v49 = 0;
                  v50 = (wchar_t *)&v40[v56];
                  if ( *(_DWORD *)v11 )
                  {
                    do
                    {
                      v51 = &v11[6 * v49];
                      v52 = *((_WORD *)v51 + 4);
                      if ( v52 )
                      {
                        v42->Buffer = v50;
                        v42->Length = *((_WORD *)v51 + 4);
                        v42->MaximumLength = *((_WORD *)v51 + 4) + 2;
                        RtlCopyUnicodeString(v42, (PCUNICODE_STRING)(v51 + 1));
                        v52 = *((_WORD *)v51 + 4);
                      }
                      v42 += 3;
                      ++v49;
                      v50 += (v52 >> 1) + 1;
                    }
                    while ( v49 < *(_DWORD *)v11 );
                    v6 = a6;
                  }
                  *((_QWORD *)v40 + 6) = &v40[v57];
                  *(_QWORD *)v40 = a2;
                  KeInitializeEvent((PRKEVENT)(v40 + 8), NotificationEvent, 1u);
                  if ( (a3 & 6) != 0 )
                    v40[74] = 1;
                  v40[73] = v53;
                  *((_QWORD *)v40 + 14) = v40;
                  *((_QWORD *)v40 + 13) = PopFxComponentPerfWork;
                  *((_QWORD *)v40 + 11) = 0LL;
                  PopFxTracePerfRegistration(v40, 0LL);
                  PopPepRegisterComponentPerfStates(*(_QWORD *)(BugCheckParameter3 + 56), *(_DWORD *)(a2 + 16), a3);
                  *(_QWORD *)(a2 + 424) = v40;
                  if ( v6 )
                    *v6 = v58;
                }
                else
                {
                  v12 = -1073741670;
                }
              }
            }
          }
        }
      }
LABEL_48:
      if ( a5 )
        return v12;
      goto LABEL_49;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v10 = PopFxPepPerfInfoQuery(BugCheckParameter3, *(unsigned int *)(a2 + 16), &P);
  v11 = P;
  v12 = v10;
  if ( v10 >= 0 )
  {
    v9 = a2;
    v7 = BugCheckParameter3;
    v8 = a3;
    goto LABEL_8;
  }
LABEL_49:
  PopFxPepPerfInfoFree(v11);
  return v12;
}
