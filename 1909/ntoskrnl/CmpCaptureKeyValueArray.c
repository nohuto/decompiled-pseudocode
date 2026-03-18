/*
 * XREFs of CmpCaptureKeyValueArray @ 0x14063DE1C
 * Callers:
 *     NtQueryMultipleValueKey @ 0x14063E0F0 (NtQueryMultipleValueKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x14008CFF8 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     CmpDoesBufferRequireCapturing @ 0x1406003F0 (CmpDoesBufferRequireCapturing.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmpCaptureKeyValueArray(
        __int64 a1,
        unsigned int a2,
        char a3,
        struct _PRIVILEGE_SET **a4,
        _QWORD *a5)
{
  unsigned int v6; // ebx
  struct _PRIVILEGE_SET *TransientPoolWithQuotaTag; // rsi
  unsigned __int64 v9; // rcx
  SIZE_T v10; // rdx
  __int64 v11; // rax
  unsigned __int64 v12; // rdx
  char *v13; // rdx
  unsigned __int16 v14; // bx
  unsigned __int16 v15; // ax
  unsigned __int64 v16; // r8
  int v17; // eax
  unsigned int v18; // ebx
  __int128 v19; // xmm0
  char *v20; // r14
  __int64 v21; // r13
  unsigned int i; // r12d
  unsigned __int16 *v23; // r15
  int v25; // [rsp+20h] [rbp-98h]
  unsigned __int16 v26; // [rsp+24h] [rbp-94h]
  SIZE_T v27; // [rsp+30h] [rbp-88h]
  ULONG *Src; // [rsp+38h] [rbp-80h]
  void *Srca; // [rsp+38h] [rbp-80h]
  __int128 v30; // [rsp+50h] [rbp-68h]

  v6 = a2;
  TransientPoolWithQuotaTag = 0LL;
  if ( !a2 )
    goto LABEL_37;
  TransientPoolWithQuotaTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithQuotaTag(a1, 32LL * a2, 0x33384D43u);
  if ( !TransientPoolWithQuotaTag )
    goto LABEL_41;
  v10 = 0LL;
  v27 = 0LL;
  v11 = 0LL;
  v25 = 0;
  while ( (unsigned int)v11 < v6 )
  {
    Src = &TransientPoolWithQuotaTag->PrivilegeCount + 8 * v11;
    v9 = a1 + 24LL * (unsigned int)v11;
    v12 = *(_QWORD *)v9;
    if ( a3 )
    {
      DWORD1(v30) = 0;
      if ( v12 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      LODWORD(v30) = *(_DWORD *)v12;
      *((_QWORD *)&v30 + 1) = *(_QWORD *)(v12 + 8);
      v13 = (char *)TransientPoolWithQuotaTag + 32 * v11;
      *(_OWORD *)Src = v30;
      v14 = *(_WORD *)Src;
      v15 = *(_WORD *)Src;
      if ( *(_WORD *)Src )
      {
        v9 = *((_QWORD *)Src + 1);
        if ( (v9 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v16 = v14 + v9;
        if ( v16 > 0x7FFFFFFF0000LL || (v15 = *(_WORD *)Src, v16 < v9) )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          v14 = *(_WORD *)Src;
          v15 = *(_WORD *)Src;
        }
      }
      if ( (v15 & 1) != 0 )
      {
        v18 = -1073741811;
        goto LABEL_38;
      }
    }
    else
    {
      v19 = *(_OWORD *)v12;
      v13 = (char *)TransientPoolWithQuotaTag + 32 * v11;
      *(_OWORD *)Src = v19;
      v14 = *(_WORD *)Src;
      v15 = *(_WORD *)Src;
    }
    if ( !v15 )
    {
      *((_QWORD *)v13 + 1) = 0LL;
      *((_WORD *)v13 + 1) = 0;
LABEL_24:
      v10 = v27;
      goto LABEL_18;
    }
    if ( !CmpDoesBufferRequireCapturing(a3, *((_QWORD *)v13 + 1)) )
      goto LABEL_24;
    v10 = v27 + v14;
    if ( v10 < v27 )
    {
      v10 = -1LL;
      v17 = -1073741675;
    }
    else
    {
      v17 = 0;
    }
    v27 = v10;
    if ( v17 < 0 )
    {
      v18 = -1073741670;
      goto LABEL_38;
    }
LABEL_18:
    v11 = (unsigned int)++v25;
    v6 = a2;
  }
  if ( !v10 )
  {
    *a4 = TransientPoolWithQuotaTag;
    TransientPoolWithQuotaTag = 0LL;
    goto LABEL_37;
  }
  v20 = (char *)CmpAllocateTransientPoolWithQuotaTag(v9, v10, 0x33384D43u);
  if ( !v20 )
  {
LABEL_41:
    v18 = -1073741670;
    goto LABEL_38;
  }
  v21 = 0LL;
  for ( i = 0; i < v6; ++i )
  {
    v23 = (unsigned __int16 *)((char *)TransientPoolWithQuotaTag + 32 * i);
    v26 = *v23;
    if ( *v23 )
    {
      Srca = (void *)*((_QWORD *)v23 + 1);
      if ( CmpDoesBufferRequireCapturing(a3, (__int64)Srca) )
      {
        memmove(&v20[v21], Srca, v26);
        *((_QWORD *)v23 + 1) = &v20[v21];
        v23[1] = *v23;
        v21 += *v23;
        v6 = a2;
      }
    }
  }
  *a4 = TransientPoolWithQuotaTag;
  TransientPoolWithQuotaTag = 0LL;
  *a5 = v20;
LABEL_37:
  v18 = 0;
LABEL_38:
  if ( TransientPoolWithQuotaTag )
    CmSiFreeMemory(TransientPoolWithQuotaTag);
  return v18;
}
