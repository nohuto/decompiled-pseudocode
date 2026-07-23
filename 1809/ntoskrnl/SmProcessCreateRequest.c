/*
 * XREFs of SmProcessCreateRequest @ 0x14066BFB4
 * Callers:
 *     SmpDirtyStoreCreate @ 0x14066C6AC (SmpDirtyStoreCreate.c)
 *     SmSetStoreInformation @ 0x1406CCED0 (SmSetStoreInformation.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     ExReleaseRundownProtection_0 @ 0x14004D2F0 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400E12A8 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400E36E8 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400E3F08 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400E445C (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAlloc @ 0x1400E4BD4 (SmAlloc.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011D214 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     SmKmStoreAdd @ 0x14066C314 (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x14066C61C (SmKmStoreCreatePrepare.c)
 *     SmKmStoreDelete @ 0x1406CA730 (SmKmStoreDelete.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SmProcessCreateRequest(__int64 a1, unsigned __int64 a2, int a3, KPROCESSOR_MODE a4)
{
  __int64 v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rdx
  int TimeInit; // ebx
  int *v12; // r14
  int v13; // ecx
  PVOID v14; // rax
  __int64 v15; // r14
  struct _EX_RUNDOWN_REF *v17; // rax
  signed __int32 v18[8]; // [rsp+0h] [rbp-158h] BYREF
  __int64 v19; // [rsp+20h] [rbp-138h]
  int v20; // [rsp+28h] [rbp-130h]
  int v21; // [rsp+2Ch] [rbp-12Ch]
  PPRIVILEGE_SET v22; // [rsp+30h] [rbp-128h]
  __int64 v23; // [rsp+38h] [rbp-120h]
  PPRIVILEGE_SET Privileges; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v25[5]; // [rsp+48h] [rbp-110h] BYREF
  int *v26[8]; // [rsp+70h] [rbp-E8h] BYREF
  _OWORD v27[6]; // [rsp+B0h] [rbp-A8h] BYREF

  v19 = a1;
  v23 = a1;
  v7 = 0LL;
  v22 = 0LL;
  v8 = -1;
  v21 = -1;
  Privileges = 0LL;
  memset(v27, 0, 0x58uLL);
  if ( a3 != 88 )
  {
    TimeInit = -1073741306;
LABEL_33:
    v15 = v19;
    goto LABEL_24;
  }
  if ( a4 )
  {
    if ( (a2 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = a2;
    if ( a2 >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v9 = *(_BYTE *)v9;
    *(_BYTE *)(v9 + 87) = *(_BYTE *)(v9 + 87);
  }
  v27[0] = *(_OWORD *)a2;
  v27[1] = *(_OWORD *)(a2 + 16);
  v27[2] = *(_OWORD *)(a2 + 32);
  v27[3] = *(_OWORD *)(a2 + 48);
  v27[4] = *(_OWORD *)(a2 + 64);
  *(_QWORD *)&v27[5] = *(_QWORD *)(a2 + 80);
  memset(v26, 0, sizeof(v26));
  LOBYTE(v10) = a4;
  TimeInit = SmKmStoreCreatePrepare(v27, v10, &Privileges, v26);
  if ( TimeInit < 0 )
    goto LABEL_33;
  v12 = v26[0];
  v13 = *v26[0];
  if ( (*v26[0] & 0x400FF) != 0x40000 || (v13 & 0x300) != 0 )
    goto LABEL_36;
  if ( !(_BYTE)v13 && (v13 & 0x60000) != 0x40000 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
  {
    TimeInit = -1073741790;
    goto LABEL_33;
  }
  if ( (*v12 & 0x400FF) == 0x40000 && (unsigned int)v12[2] > 0x20000 )
  {
LABEL_36:
    TimeInit = -1073741637;
    goto LABEL_33;
  }
  v14 = SmAlloc(0x1A40uLL, 0x74536D73u);
  v7 = (__int64)v14;
  if ( !v14 )
  {
    TimeInit = -1073741670;
    goto LABEL_33;
  }
  SMKM_STORE<SM_TRAITS>::SmStInitialize((__int64)v14);
  TimeInit = SmFirstTimeInit(v12[2], 4 - (unsigned int)((*v12 & 0x10000) != 0));
  if ( TimeInit < 0 )
    goto LABEL_33;
  v26[4] = (int *)&SmGlobals;
  v26[5] = (int *)qword_14055C158;
  v26[6] = (int *)Handle;
  *v12 |= 0x8000u;
  TimeInit = SMKM_STORE<SM_TRAITS>::SmStStart(v7, v26);
  if ( TimeInit < 0 )
    goto LABEL_33;
  memset(v25, 0, 0x20uLL);
  v25[0] = (char *)v27 + 8;
  v25[1] = *(_QWORD *)(v7 + 6200);
  LODWORD(v25[3]) = DWORD2(v27[1]);
  if ( (v27[0] & 0x200) != 0 )
    v25[2] = KeGetCurrentThread()->ApcState.Process;
  TimeInit = SmKmStoreAdd(v19, v7, v25, v7 + 6016);
  if ( TimeInit < 0 )
    goto LABEL_33;
  v21 = *(_DWORD *)(v7 + 6016);
  v8 = v21;
  _InterlockedOr(v18, 0);
  byte_14055C168 = 5;
  v7 = 0LL;
  v22 = 0LL;
  v20 = 1;
  TimeInit = 0;
  *(_DWORD *)(a2 + 80) = v8;
  if ( (v27[0] & 0x100) != 0 )
    v8 = -1;
  v15 = v19;
LABEL_24:
  if ( v8 != -1 )
  {
    v17 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(v15, v8 & 0x3FF);
    ExReleaseRundownProtection_0(v17 + 1);
  }
  if ( v7 )
  {
    SMKM_STORE<SM_TRAITS>::SmStCleanup(v7);
    CmSiFreeMemory((PPRIVILEGE_SET)v7);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  return (unsigned int)TimeInit;
}
