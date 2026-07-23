/*
 * XREFs of CmpCaptureKeyValueArray @ 0x1405CE130
 * Callers:
 *     NtQueryMultipleValueKey @ 0x1405B8130 (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140013018 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     CmpDoesBufferRequireCapturing @ 0x1405CE49C (CmpDoesBufferRequireCapturing.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpCaptureKeyValueArray(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _PRIVILEGE_SET **a4,
        struct _PRIVILEGE_SET **a5,
        _QWORD *a6)
{
  __int64 v7; // r13
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rsi
  struct _PRIVILEGE_SET *v9; // r14
  unsigned int v10; // ebx
  __int64 v11; // rcx
  SIZE_T v12; // rdx
  unsigned int i; // eax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // r9
  unsigned __int16 v17; // bx
  int v18; // eax
  char *v19; // r15
  __int64 v20; // rbx
  unsigned int j; // r12d
  unsigned __int16 *v22; // r13
  char *v23; // rbx
  unsigned int v25; // [rsp+20h] [rbp-A8h]
  unsigned __int16 v26; // [rsp+24h] [rbp-A4h]
  SIZE_T v27; // [rsp+30h] [rbp-98h]
  unsigned __int16 *v28; // [rsp+38h] [rbp-90h]
  __int64 v29; // [rsp+38h] [rbp-90h]
  void *Src; // [rsp+50h] [rbp-78h]
  __int128 v31; // [rsp+60h] [rbp-68h]

  v7 = a2;
  TransientPoolWithQuotaTag = 0LL;
  v9 = 0LL;
  if ( !a2 )
    goto LABEL_2;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(a1, 24LL * a2, 0x33384D43u);
  if ( TransientPoolWithQuotaTag )
  {
    if ( !a3 || (v9 = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(v11, 16 * v7, 0x33384D43u)) != 0LL )
    {
      v12 = 0LL;
      v27 = 0LL;
      for ( i = 0; ; i = v25 + 1 )
      {
        v25 = i;
        if ( i >= (unsigned int)v7 )
          break;
        v11 = 3LL * i;
        v14 = *(_QWORD *)(a1 + 24LL * i);
        if ( a3 )
        {
          v28 = (unsigned __int16 *)((char *)v9 + 16 * i);
          if ( v14 >= 0x7FFFFFFF0000LL )
            v14 = 0x7FFFFFFF0000LL;
          LODWORD(v31) = *(_DWORD *)v14;
          *((_QWORD *)&v31 + 1) = *(_QWORD *)(v14 + 8);
          v14 = (unsigned __int64)v9 + 16 * i;
          *(_OWORD *)v28 = v31;
          v11 = *v28;
          if ( (_WORD)v11 )
          {
            v15 = *((_QWORD *)v28 + 1);
            if ( (v15 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v16 = v15 + (unsigned __int16)v11;
            if ( v16 > 0x7FFFFFFF0000LL || v16 < v15 )
            {
              MEMORY[0x7FFFFFFF0000] = 0;
              v11 = *v28;
            }
          }
          if ( (v11 & 1) != 0 )
          {
            v10 = -1073741811;
            goto LABEL_40;
          }
        }
        *((_QWORD *)&TransientPoolWithQuotaTag->PrivilegeCount + 3 * i) = v14;
        v17 = *(_WORD *)v14;
        if ( *(_WORD *)v14 )
        {
          if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)a3, *(_QWORD *)(v14 + 8)) )
          {
            v12 = v27 + v17;
            if ( v12 < v27 )
            {
              v12 = -1LL;
              v18 = -1073741675;
            }
            else
            {
              v18 = 0;
            }
            v27 = v12;
            if ( v18 < 0 )
            {
              v10 = -1073741670;
              goto LABEL_40;
            }
          }
          else
          {
            v12 = v27;
          }
        }
        else
        {
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_WORD *)(v14 + 2) = 0;
          v12 = v27;
        }
      }
      if ( !v12 )
      {
        *a4 = TransientPoolWithQuotaTag;
        TransientPoolWithQuotaTag = 0LL;
        *a5 = v9;
        v9 = 0LL;
LABEL_2:
        v10 = 0;
        goto LABEL_40;
      }
      v19 = (char *)CmpAllocateTransientPoolWithQuotaTag(v11, v12, 0x33384D43u);
      if ( v19 )
      {
        v20 = 0LL;
        v29 = 0LL;
        for ( j = 0; j < (unsigned int)v7; ++j )
        {
          v22 = (unsigned __int16 *)*((_QWORD *)&TransientPoolWithQuotaTag->PrivilegeCount + 3 * j);
          v26 = *v22;
          if ( *v22 )
          {
            Src = (void *)*((_QWORD *)v22 + 1);
            if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)a3, Src) )
            {
              v23 = &v19[v20];
              memmove(v23, Src, v26);
              *((_QWORD *)v22 + 1) = v23;
              v22[1] = *v22;
              v20 = *v22 + v29;
              v29 = v20;
            }
          }
          LODWORD(v7) = a2;
        }
        *a4 = TransientPoolWithQuotaTag;
        TransientPoolWithQuotaTag = 0LL;
        *a5 = v9;
        v9 = 0LL;
        *a6 = v19;
        goto LABEL_2;
      }
    }
  }
  v10 = -1073741670;
LABEL_40:
  if ( TransientPoolWithQuotaTag )
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  if ( v9 )
    CmSiFreeMemory(v9);
  return v10;
}
