/*
 * XREFs of HvpRecoverDataReadRoutine @ 0x140830E30
 * Callers:
 *     HvpApplyIncrementalLogFile @ 0x14083FB88 (HvpApplyIncrementalLogFile.c)
 *     HvpApplyLegacyLogFile @ 0x14083FDB0 (HvpApplyLegacyLogFile.c)
 * Callees:
 *     CmSiFreeMemory @ 0x14008BCE0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14008BDA0 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpRecoverDataReadRoutine(unsigned int *a1, unsigned int a2, int a3, struct _LOOKASIDE_LIST_EX *a4)
{
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rbx
  int v7; // edi
  __int64 v8; // r13
  int v9; // eax
  struct _PRIVILEGE_SET *v10; // rcx
  unsigned int v11; // r12d
  unsigned int v12; // edi
  unsigned int v13; // r15d
  unsigned int v14; // ebp
  char *v15; // rcx

  TransientPoolWithTag = 0LL;
  if ( a2 + a3 < a2 && a2 + a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v8 = *(_QWORD *)a1;
    v9 = *(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9;
    v10 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
    v11 = a2 & ~(v9 - 1);
    v12 = (~(v9 - 1) & (a2 + v9 + a3 - 1)) - v11;
    v13 = v12;
    if ( v12 < 0x10000 )
      v13 = 0x10000;
    if ( !v10 )
      goto LABEL_13;
    v14 = a1[4];
    if ( v14 < v13 )
      CmSiFreeMemory(v10);
    else
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
    *((_QWORD *)a1 + 1) = 0LL;
    a1[4] = 0;
    if ( v14 < v13 )
      v14 = v13;
    if ( !TransientPoolWithTag )
    {
LABEL_13:
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v12, 0x6F494D43u, a4);
      if ( !TransientPoolWithTag )
        return (unsigned int)-1073741801;
      v14 = v12;
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
      a1[4] = v14;
      v15 = (char *)TransientPoolWithTag + a2 % (*(_DWORD *)(v8 + 136) << 9);
      TransientPoolWithTag = 0LL;
      v7 = 0;
      a4->L.ListHead.Alignment = (unsigned __int64)v15;
    }
    if ( TransientPoolWithTag )
      CmSiFreeMemory(TransientPoolWithTag);
  }
  return (unsigned int)v7;
}
