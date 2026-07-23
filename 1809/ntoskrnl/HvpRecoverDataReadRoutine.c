/*
 * XREFs of HvpRecoverDataReadRoutine @ 0x1407F9380
 * Callers:
 *     HvpApplyIncrementalLogFile @ 0x140807974 (HvpApplyIncrementalLogFile.c)
 *     HvpApplyLegacyLogFile @ 0x140807B90 (HvpApplyLegacyLogFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140013040 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpRecoverDataReadRoutine(unsigned int *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  int v7; // ebx
  __int64 v8; // r13
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  struct _PRIVILEGE_SET *v13; // rcx
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  char *v16; // rcx

  TransientPoolWithTag = 0LL;
  if ( a2 + a3 < a2 && a2 + a3 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)a1;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9;
  v10 = ~(v9 - 1);
  v11 = a2 & v10;
  v12 = (v10 & (a2 + v9 + a3 - 1)) - (a2 & v10);
  if ( v12 < a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v13 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
    v14 = v12;
    if ( v12 < 0x10000 )
      v14 = 0x10000;
    if ( !v13 )
      goto LABEL_14;
    v15 = a1[4];
    if ( v15 < v14 )
      CmSiFreeMemory(v13);
    else
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = 0LL;
    a1[4] = 0;
    if ( v15 < v14 )
      v15 = v14;
    if ( !TransientPoolWithTag )
    {
LABEL_14:
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v12, 0x6F494D43u);
      if ( !TransientPoolWithTag )
        return (unsigned int)-1073741801;
      v15 = v12;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _PRIVILEGE_SET *, unsigned int))(v8 + 48))(
           v8,
           a1[5],
           v11,
           TransientPoolWithTag,
           v12);
    if ( v7 >= 0 )
    {
      *((_QWORD *)a1 + 1) = TransientPoolWithTag;
      a1[4] = v15;
      v16 = (char *)TransientPoolWithTag + a2 % (*(_DWORD *)(v8 + 136) << 9);
      TransientPoolWithTag = 0LL;
      v7 = 0;
      *a4 = v16;
    }
    if ( TransientPoolWithTag )
      CmSiFreeMemory(TransientPoolWithTag);
  }
  return (unsigned int)v7;
}
