/*
 * XREFs of SePrivilegePolicyCheck @ 0x1400AA918
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400A7C90 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SePrivilegePolicyCheck(int *a1, _DWORD *a2, __int64 *a3, __int64 a4, __int64 a5, char a6)
{
  char v6; // r13
  POOL_TYPE v7; // r15d
  POOL_TYPE v8; // ebx
  int v12; // eax
  POOL_TYPE v13; // r8d
  char v14; // r14
  char v15; // r12
  POOL_TYPE v17; // esi
  _DWORD *PoolWithTag; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // [rsp+38h] [rbp-60h] BYREF
  int v23; // [rsp+40h] [rbp-58h]

  v6 = 0;
  v7 = NonPagedPool;
  v8 = NonPagedPool;
  if ( a3 )
  {
    a4 = *a3;
    if ( !*a3 )
      a4 = a3[2];
  }
  v12 = *a1;
  v13 = PagedPool;
  if ( (*a1 & 0x1000000) != 0 )
  {
    v23 = 0;
    v22 = (__int64)SeSecurityPrivilege;
    if ( !SepPrivilegeCheck(a4, (__int64)&v22, 1u, 1, a6) )
      return 3221225569LL;
    *a1 &= ~0x1000000u;
    v8 = v13;
    *a2 |= 0x1000000u;
    v6 = v13;
    v12 = *a1;
  }
  if ( (v12 & 0x80000) == 0 )
    goto LABEL_4;
  v23 = 0;
  v22 = SeTakeOwnershipPrivilege;
  if ( SepPrivilegeCheck(a4, (__int64)&v22, v13, v13, a6) )
  {
    *a1 &= ~0x80000u;
    v8 += v13;
    *a2 |= 0x80000u;
    v15 = v13;
    v14 = 0;
    goto LABEL_5;
  }
  v23 = 0;
  v22 = SeRelabelPrivilege;
  if ( SepPrivilegeCheck(a4, (__int64)&v22, v13, v13, a6) )
  {
    *a1 &= ~0x80000u;
    v8 += v13;
    *a2 |= 0x80000u;
    v14 = v13;
    v15 = 0;
  }
  else
  {
LABEL_4:
    v14 = 0;
    v15 = 0;
  }
LABEL_5:
  if ( v8 == NonPagedPool )
    return 0LL;
  v17 = v13;
  PoolWithTag = ExAllocatePoolWithTag(v13, (unsigned int)(12 * v8 + 8), 0x72506553u);
  *(_QWORD *)a5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = v8;
    *(_DWORD *)(*(_QWORD *)a5 + 4LL) = 0;
    if ( v15 )
    {
      v7 = v17;
      *(_QWORD *)(*(_QWORD *)a5 + 8LL) = SeTakeOwnershipPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 16LL) = 0x80000000;
    }
    if ( v6 )
    {
      v19 = (unsigned int)v7;
      v7 += v17;
      v20 = 3 * v19;
      *(LUID *)(*(_QWORD *)a5 + 4 * v20 + 8) = SeSecurityPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v20 + 16) = 0x80000000;
    }
    if ( v14 )
    {
      v21 = 3LL * (unsigned int)v7;
      *(_QWORD *)(*(_QWORD *)a5 + 4 * v21 + 8) = SeRelabelPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v21 + 16) = 0x80000000;
    }
    return 0LL;
  }
  return 3221225626LL;
}
