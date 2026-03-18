/*
 * XREFs of SmProcessCreateRequest @ 0x140672858
 * Callers:
 *     SmpDirtyStoreCreate @ 0x140672F50 (SmpDirtyStoreCreate.c)
 *     SmSetStoreInformation @ 0x1406ECC34 (SmSetStoreInformation.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     CmSiFreeMemory @ 0x14008CFE0 (CmSiFreeMemory.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400D749C (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?SmFirstTimeInit@@YAJKK@Z @ 0x1400D7BA8 (-SmFirstTimeInit@@YAJKK@Z.c)
 *     ?SmStInitialize@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400D810C (-SmStInitialize@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmAlloc @ 0x1400D8890 (SmAlloc.c)
 *     SmKmStoreRefFromStoreIndex @ 0x1400EE3D4 (SmKmStoreRefFromStoreIndex.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14011B014 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     SmKmStoreAdd @ 0x140672BC0 (SmKmStoreAdd.c)
 *     SmKmStoreCreatePrepare @ 0x140672EC0 (SmKmStoreCreatePrepare.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     SmKmStoreDelete @ 0x1406E995C (SmKmStoreDelete.c)
 *     ExRaiseDatatypeMisalignment @ 0x140913920 (ExRaiseDatatypeMisalignment.c)
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
  _QWORD v25[2]; // [rsp+48h] [rbp-110h] BYREF
  _KPROCESS *Process; // [rsp+58h] [rbp-100h]
  int v27; // [rsp+60h] [rbp-F8h]
  int v28; // [rsp+64h] [rbp-F4h]
  int *v29[8]; // [rsp+70h] [rbp-E8h] BYREF
  _OWORD v30[6]; // [rsp+B0h] [rbp-A8h] BYREF

  v19 = a1;
  v23 = a1;
  Process = 0LL;
  v28 = 0;
  v7 = 0LL;
  v22 = 0LL;
  v8 = -1;
  v21 = -1;
  Privileges = 0LL;
  memset(v30, 0, 0x58uLL);
  if ( a3 != 88 )
  {
    TimeInit = -1073741306;
LABEL_34:
    v15 = v19;
    goto LABEL_25;
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
  v30[0] = *(_OWORD *)a2;
  v30[1] = *(_OWORD *)(a2 + 16);
  v30[2] = *(_OWORD *)(a2 + 32);
  v30[3] = *(_OWORD *)(a2 + 48);
  v30[4] = *(_OWORD *)(a2 + 64);
  *(_QWORD *)&v30[5] = *(_QWORD *)(a2 + 80);
  memset(v29, 0, sizeof(v29));
  LOBYTE(v10) = a4;
  TimeInit = SmKmStoreCreatePrepare(v30, v10, &Privileges, v29);
  if ( TimeInit < 0 )
    goto LABEL_34;
  v12 = v29[0];
  v13 = *v29[0];
  if ( (*v29[0] & 0x400FF) != 0x40000 || (v13 & 0x300) != 0 )
    goto LABEL_37;
  if ( !(_BYTE)v13 && (v13 & 0x60000) != 0x40000 && !SeSinglePrivilegeCheck(SeLockMemoryPrivilege, a4) )
  {
    TimeInit = -1073741790;
    goto LABEL_34;
  }
  if ( !(unsigned __int8)*v12 && (*v12 & 0x40000) != 0 && (unsigned int)v12[2] > 0x20000 )
  {
LABEL_37:
    TimeInit = -1073741637;
    goto LABEL_34;
  }
  v14 = SmAlloc(0x1A40uLL, 0x74536D73u);
  v7 = (__int64)v14;
  if ( !v14 )
  {
    TimeInit = -1073741670;
    goto LABEL_34;
  }
  SMKM_STORE<SM_TRAITS>::SmStInitialize((__int64)v14);
  TimeInit = SmFirstTimeInit(v12[2], 4 - (unsigned int)((*v12 & 0x10000) != 0));
  if ( TimeInit < 0 )
    goto LABEL_34;
  v29[4] = (int *)&SmGlobals;
  v29[5] = (int *)qword_14058C158;
  v29[6] = (int *)Handle;
  *v12 |= 0x8000u;
  TimeInit = SMKM_STORE<SM_TRAITS>::SmStStart(v7, v29);
  if ( TimeInit < 0 )
    goto LABEL_34;
  Process = 0LL;
  v28 = 0;
  v25[0] = (char *)v30 + 8;
  v25[1] = *(_QWORD *)(v7 + 6200);
  v27 = DWORD2(v30[1]);
  if ( (v30[0] & 0x200) != 0 )
    Process = KeGetCurrentThread()->ApcState.Process;
  TimeInit = SmKmStoreAdd(v19, v7, v25, v7 + 6016);
  if ( TimeInit < 0 )
    goto LABEL_34;
  v21 = *(_DWORD *)(v7 + 6016);
  v8 = v21;
  _InterlockedOr(v18, 0);
  byte_14058C168 = 5;
  v7 = 0LL;
  v22 = 0LL;
  v20 = 1;
  TimeInit = 0;
  *(_DWORD *)(a2 + 80) = v8;
  if ( (v30[0] & 0x100) != 0 )
    v8 = -1;
  v15 = v19;
LABEL_25:
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
