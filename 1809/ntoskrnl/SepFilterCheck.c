/*
 * XREFs of SepFilterCheck @ 0x140052760
 * Callers:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SepCommonAccessCheckExWithAdminlessChecks @ 0x14015B7C4 (SepCommonAccessCheckExWithAdminlessChecks.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeAdjustAccessStateForAccessConstraints @ 0x1406328A0 (SeAdjustAccessStateForAccessConstraints.c)
 *     SeShouldCheckForAccessRightsFromParent @ 0x1406329D0 (SeShouldCheckForAccessRightsFromParent.c)
 *     SepAdjustAccessStateForConstraints @ 0x14070695C (SepAdjustAccessStateForConstraints.c)
 * Callees:
 *     SepFreeResourceInfo @ 0x14001311C (SepFreeResourceInfo.c)
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140050860 (ExAcquireResourceSharedLite.c)
 *     AuthzBasepEvaluateAceCondition @ 0x1400A6240 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1401215CC (AuthzBasepInitializeResourceClaimsFromSacl.c)
 */

__int64 __fastcall SepFilterCheck(__int64 a1, PVOID *a2, __int64 a3, char a4, int *a5)
{
  int *v5; // r13
  unsigned int v6; // edi
  int v7; // r12d
  char v8; // r14
  int v9; // ebp
  __int64 v10; // r10
  __int16 v11; // ax
  __int64 v12; // r15
  PVOID *p_P; // rsi
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 v17; // rax
  unsigned __int16 v18; // cx
  int v19; // ebp
  int v20; // eax
  struct _KTHREAD *CurrentThread; // rax
  _QWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // r11
  int v27; // eax
  int v28; // ecx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  char v34; // al
  int v35; // [rsp+60h] [rbp-68h]
  int v36; // [rsp+64h] [rbp-64h]
  unsigned int v37; // [rsp+68h] [rbp-60h]
  PVOID P; // [rsp+70h] [rbp-58h] BYREF
  int v39; // [rsp+D0h] [rbp+8h] BYREF
  int v40; // [rsp+D8h] [rbp+10h]
  __int64 v41; // [rsp+E0h] [rbp+18h]
  char v42; // [rsp+E8h] [rbp+20h]

  v42 = a4;
  v41 = a3;
  v5 = a5;
  v6 = 0;
  v7 = -1;
  P = 0LL;
  v8 = 0;
  v9 = 0;
  v10 = a3;
  *a5 = -1;
  v11 = *(_WORD *)(a1 + 2);
  if ( (v11 & 0x10) != 0 )
  {
    if ( v11 < 0 )
    {
      v17 = *(unsigned int *)(a1 + 12);
      if ( (_DWORD)v17 )
        v12 = a1 + v17;
      else
        v12 = 0LL;
    }
    else
    {
      v12 = *(_QWORD *)(a1 + 24);
    }
  }
  else
  {
    v12 = 0LL;
  }
  LOBYTE(v40) = 0;
  p_P = &P;
  if ( a2 )
    p_P = a2;
  while ( 1 )
  {
    if ( !v12 || (v14 = v12 + 8, v15 = 0, !*(_WORD *)(v12 + 4)) )
    {
LABEL_11:
      v14 = 0LL;
      goto LABEL_12;
    }
    while ( v15 < v6 || *(_BYTE *)v14 != 21 )
    {
      ++v15;
      v14 += *(unsigned __int16 *)(v14 + 2);
      if ( v15 >= *(unsigned __int16 *)(v12 + 4) )
        goto LABEL_11;
    }
    v6 = v15;
    v37 = v15;
    if ( (*(_BYTE *)(v14 + 1) & 8) != 0 )
      goto LABEL_12;
    v18 = 4 * (*(unsigned __int8 *)(v14 + 9) + 2);
    v19 = v18;
    v20 = *(unsigned __int16 *)(v14 + 2) - v18;
    LOWORD(a5) = v18;
    v35 = v18;
    if ( v20 - 8 <= 0 )
      break;
    v36 = *(_DWORD *)(v14 + 4);
    if ( (v36 & 0xFF000000) != 0 )
      break;
    if ( a4 && !v8 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceSharedLite(*(PERESOURCE *)(v10 + 48), 1u);
      v10 = v41;
      v8 = 1;
      v18 = (unsigned __int16)a5;
      v6 = v37;
    }
    if ( !*p_P )
    {
      v9 = AuthzBasepInitializeResourceClaimsFromSacl(v12, p_P);
      if ( v9 < 0 )
        goto LABEL_13;
      v10 = v41;
      v18 = (unsigned __int16)a5;
      v19 = v35;
    }
    v22 = *(_QWORD **)(v10 + 1096);
    v39 = -1;
    if ( v22 )
    {
      v23 = v22[75];
      v24 = v22[73];
      v25 = v22[74];
      v26 = v22[72];
    }
    else
    {
      v23 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      LODWORD(v26) = 0;
    }
    v27 = *(unsigned __int16 *)(v14 + 2) - v19;
    a5 = (int *)(v18 + v14 + 8);
    v9 = AuthzBasepEvaluateAceCondition(
           v10,
           *(_QWORD *)(v10 + 776),
           (unsigned int)*p_P,
           v26,
           v25,
           v24,
           v23,
           (__int64)a5,
           v27 - 8,
           1,
           0,
           (__int64)&v39);
    if ( v9 < 0 )
      goto LABEL_13;
    if ( v39 != 1 )
    {
      v28 = (unsigned __int8)v40;
      if ( (*(_BYTE *)(v14 + 1) & 0x40) != 0 )
        v28 = 1;
      v40 = v28;
      v7 &= v36 | 0x1000000;
    }
    v10 = v41;
    if ( (*(_DWORD *)(v41 + 200) & 0x10) != 0 )
    {
      v29 = *(_QWORD **)(v41 + 1096);
      v39 = -1;
      if ( v29 )
      {
        v30 = v29[75];
        v31 = v29[73];
        v32 = v29[74];
        v33 = v29[72];
      }
      else
      {
        v30 = 0LL;
        v31 = 0LL;
        v32 = 0LL;
        LODWORD(v33) = 0;
      }
      v9 = AuthzBasepEvaluateAceCondition(
             v41,
             *(_QWORD *)(v41 + 776),
             (unsigned int)*p_P,
             v33,
             v32,
             v31,
             v30,
             (__int64)a5,
             (unsigned int)*(unsigned __int16 *)(v14 + 2) - v35 - 8,
             1,
             1,
             (__int64)&v39);
      if ( v9 < 0 )
        goto LABEL_13;
      a4 = v42;
      v10 = v41;
      if ( v39 != 1 )
      {
        v34 = v40;
        if ( (*(_BYTE *)(v14 + 1) & 0x40) != 0 )
          v34 = 1;
        LOBYTE(v40) = v34;
        v7 &= v36 | 0x1000000;
      }
    }
    else
    {
      a4 = v42;
    }
LABEL_12:
    ++v6;
    if ( !v14 )
      goto LABEL_13;
  }
  v9 = -1073741705;
LABEL_13:
  if ( v7 != -1 )
  {
    *((_BYTE *)v5 + 4) = v40;
    *v5 = v7;
  }
  if ( v8 )
  {
    ExReleaseResourceLite(*(PERESOURCE *)(v41 + 48));
    KeLeaveCriticalRegion();
  }
  if ( P )
    SepFreeResourceInfo(P);
  return (unsigned int)v9;
}
