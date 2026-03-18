/*
 * XREFs of PopFxRegisterComponentPerfStates @ 0x1408A5F74
 * Callers:
 *     PoFxRegisterComponentPerfStates @ 0x1408A4FD0 (PoFxRegisterComponentPerfStates.c)
 * Callees:
 *     KeInitializeEvent @ 0x14000AB10 (KeInitializeEvent.c)
 *     RtlCopyUnicodeString @ 0x140043EC0 (RtlCopyUnicodeString.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PopPluginRegisterComponentPerfStates @ 0x1402F5EDC (PopPluginRegisterComponentPerfStates.c)
 *     PopPepRegisterComponentPerfStates @ 0x1402FA638 (PopPepRegisterComponentPerfStates.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     PopFxPepPerfInfoFree @ 0x1408A5CE0 (PopFxPepPerfInfoFree.c)
 *     PopFxPepPerfInfoQuery @ 0x1408A5D5C (PopFxPepPerfInfoQuery.c)
 *     PopFxTracePerfRegistration @ 0x1408B1308 (PopFxTracePerfRegistration.c)
 */

__int64 __fastcall PopFxRegisterComponentPerfStates(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _QWORD *a5,
        char **a6)
{
  __int64 v6; // r9
  char v7; // bl
  __int64 v8; // rax
  int v9; // eax
  _QWORD *v10; // rdi
  unsigned int v11; // ebx
  unsigned __int64 v13; // r10
  unsigned __int128 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r15
  unsigned __int128 v18; // rax
  unsigned __int64 v19; // kr10_8
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r8
  unsigned int v22; // r11d
  unsigned __int64 v23; // r12
  unsigned int *v24; // r9
  unsigned __int64 v25; // kr20_8
  unsigned int v26; // r9d
  unsigned __int64 v27; // r8
  unsigned __int16 *v28; // rcx
  unsigned __int16 v29; // ax
  unsigned __int64 v30; // rcx
  size_t v31; // rbp
  char *PoolWithTag; // rax
  char *v33; // rsi
  UNICODE_STRING **v34; // rcx
  UNICODE_STRING *v35; // r15
  UNICODE_STRING *v36; // rax
  unsigned int i; // edx
  wchar_t *v38; // r12
  unsigned int v39; // ebp
  UNICODE_STRING *v40; // r14
  unsigned int v41; // eax
  unsigned int v42; // ebp
  wchar_t *j; // r12
  _QWORD *v44; // r14
  unsigned __int16 v45; // ax
  char v46; // [rsp+20h] [rbp-98h]
  PVOID P; // [rsp+28h] [rbp-90h] BYREF
  unsigned __int64 v48; // [rsp+30h] [rbp-88h]
  unsigned __int64 v49; // [rsp+38h] [rbp-80h]
  char *v50; // [rsp+40h] [rbp-78h]
  __int64 v51; // [rsp+48h] [rbp-70h]
  __int64 v52; // [rsp+50h] [rbp-68h]
  __int64 v53; // [rsp+58h] [rbp-60h]
  __int64 v54; // [rsp+60h] [rbp-58h]

  v6 = BugCheckParameter3;
  P = 0LL;
  v7 = a3;
  v8 = a2;
  if ( a5 )
  {
    if ( !a6 )
    {
      v10 = a5;
      P = a5;
LABEL_8:
      if ( *(_DWORD *)v10 )
      {
        v46 = PopPluginRegisterComponentPerfStates(v6, *(_DWORD *)(v8 + 16), (__int64)v10);
        if ( v46 || (v7 & 1) != 0 )
        {
          v13 = *(unsigned int *)v10;
          v14 = *(unsigned int *)v10 * (unsigned __int128)0x20uLL;
          v51 = *((_QWORD *)&v14 + 1);
          if ( !is_mul_ok(v13, 0x20uLL) )
            goto LABEL_51;
          v15 = v14 + 160;
          if ( v15 < 0xA0 )
            goto LABEL_51;
          v16 = (v15 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v17 = v16 + 8;
          if ( v16 + 8 < v16 )
            goto LABEL_51;
          v19 = (unsigned int)(DWORD2(v14) + 48);
          v18 = v13 * (unsigned __int128)(unsigned int)(DWORD2(v14) + 48);
          v52 = *((_QWORD *)&v18 + 1);
          if ( !is_mul_ok(v13, v19) || (unsigned __int64)v18 + v17 < v17 )
            goto LABEL_51;
          v20 = (unsigned int)(DWORD2(v18) + 16);
          v21 = (v18 + v17 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v22 = 0;
          v23 = v21;
          if ( (_DWORD)v13 )
          {
            v24 = (unsigned int *)(v10 + 5);
            do
            {
              if ( !*(v24 - 1) )
              {
                v25 = *v24;
                v53 = (*v24 * (unsigned __int128)(unsigned int)(DWORD2(v18) + 16)) >> 64;
                if ( !is_mul_ok(v25, v20) || v21 + v25 * v20 < v21 )
                  goto LABEL_51;
                v21 += v25 * v20;
              }
              ++v22;
              v24 += 12;
            }
            while ( v22 < (unsigned int)v13 );
          }
          v26 = 0;
          v27 = (v21 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
          v48 = v27;
          if ( (_DWORD)v13 )
          {
            v28 = (unsigned __int16 *)(v10 + 1);
            do
            {
              v29 = *v28;
              if ( *v28 )
              {
                if ( v29 + v27 + 2 < v27 )
                  goto LABEL_51;
                v27 += v29 + 2LL;
              }
              ++v26;
              v28 += 24;
            }
            while ( v26 < (unsigned int)v13 );
          }
          *(_QWORD *)&v18 = v13 * v20;
          v30 = (v27 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          v49 = v30;
          v54 = (v13 * (unsigned __int128)(unsigned int)(DWORD2(v18) + 16)) >> 64;
          if ( is_mul_ok(v13, v20) && (v31 = v18 + v30, (unsigned __int64)v18 + v30 >= v30) )
          {
            v11 = 0;
            PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v18 + v30, 0x4D584650u);
            v33 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, v31);
              *((_QWORD *)v33 + 4) = a4;
              v34 = (UNICODE_STRING **)(v33 + 160);
              v35 = (UNICODE_STRING *)&v33[v17];
              *((_DWORD *)v33 + 36) = *(_DWORD *)v10;
              *((_QWORD *)v33 + 19) = v33 + 160;
              *(_DWORD *)&v33[v16] = *(_DWORD *)v10;
              v36 = v35;
              v50 = &v33[v16];
              for ( i = 0; i < *(_DWORD *)v10; v34 += 4 )
              {
                *v34 = v36;
                ++i;
                v36 += 3;
              }
              v38 = (wchar_t *)&v33[v23];
              v39 = 0;
              if ( *(_DWORD *)v10 )
              {
                v40 = v35 + 2;
                do
                {
                  *(_QWORD *)&v40[-1].Length = v10[6 * v39 + 3];
                  LODWORD(v40[-1].Buffer) = v10[6 * v39 + 4];
                  HIDWORD(v40[-1].Buffer) = HIDWORD(v10[6 * v39 + 4]);
                  if ( HIDWORD(v10[6 * v39 + 4]) )
                  {
                    *(_QWORD *)&v40->Length = v10[6 * v39 + 5];
                    v40->Buffer = (wchar_t *)v10[6 * v39 + 6];
                  }
                  else
                  {
                    v41 = v10[6 * v39 + 5];
                    *(_DWORD *)&v40->Length = v41;
                    v40->Buffer = v38;
                    memmove(v38, (const void *)v10[6 * v39 + 6], 16LL * v41);
                    v38 += 8 * *(unsigned int *)&v40->Length;
                  }
                  v40 += 3;
                  ++v39;
                }
                while ( v39 < *(_DWORD *)v10 );
              }
              v42 = 0;
              for ( j = (wchar_t *)&v33[v48]; v42 < *(_DWORD *)v10; j += (v45 >> 1) + 1 )
              {
                v44 = &v10[6 * v42];
                v45 = *((_WORD *)v44 + 4);
                if ( v45 )
                {
                  v35->Buffer = j;
                  v35->Length = *((_WORD *)v44 + 4);
                  v35->MaximumLength = *((_WORD *)v44 + 4) + 2;
                  RtlCopyUnicodeString(v35, (PCUNICODE_STRING)(v44 + 1));
                  v45 = *((_WORD *)v44 + 4);
                }
                v35 += 3;
                ++v42;
              }
              *((_QWORD *)v33 + 6) = &v33[v49];
              *(_QWORD *)v33 = a2;
              KeInitializeEvent((PRKEVENT)(v33 + 8), NotificationEvent, 1u);
              if ( (a3 & 6) != 0 )
                v33[74] = 1;
              v33[73] = v46;
              *((_QWORD *)v33 + 14) = v33;
              *((_QWORD *)v33 + 13) = PopFxComponentPerfWork;
              *((_QWORD *)v33 + 11) = 0LL;
              PopFxTracePerfRegistration(v33, 0LL);
              PopPepRegisterComponentPerfStates(*(_QWORD *)(BugCheckParameter3 + 56), *(_DWORD *)(a2 + 16), a3);
              *(_QWORD *)(a2 + 424) = v33;
              if ( a6 )
                *a6 = v50;
            }
            else
            {
              v11 = -1073741670;
            }
          }
          else
          {
LABEL_51:
            v11 = -1073741675;
          }
        }
        else
        {
          v11 = -1073741822;
        }
      }
      else
      {
        v11 = -1073741811;
      }
      if ( a5 )
        return v11;
      goto LABEL_53;
    }
    return 3221225485LL;
  }
  if ( !a6 )
    return 3221225485LL;
  v9 = PopFxPepPerfInfoQuery(BugCheckParameter3, *(unsigned int *)(a2 + 16), &P);
  v10 = P;
  v11 = v9;
  if ( v9 >= 0 )
  {
    v8 = a2;
    v6 = BugCheckParameter3;
    v7 = a3;
    goto LABEL_8;
  }
LABEL_53:
  PopFxPepPerfInfoFree(v10);
  return v11;
}
