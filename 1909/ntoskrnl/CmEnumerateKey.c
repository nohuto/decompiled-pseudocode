/*
 * XREFs of CmEnumerateKey @ 0x1406630F0
 * Callers:
 *     NtEnumerateKey @ 0x140662B00 (NtEnumerateKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x140044154 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045AE0 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     CmpUnlockRegistry @ 0x1405F6EA0 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F6EE0 (CmpLockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FE58C (CmpDetachFromRegistryProcess.c)
 *     CmpAttachToRegistryProcess @ 0x1405FEFA0 (CmpAttachToRegistryProcess.c)
 *     CmpDereferenceKeyControlBlock @ 0x140603F90 (CmpDereferenceKeyControlBlock.c)
 *     HvUnlockHiveFlusherShared @ 0x1406312D0 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140631304 (HvLockHiveFlusherShared.c)
 *     CmpUpdateKeyNodeAccessBits @ 0x140631924 (CmpUpdateKeyNodeAccessBits.c)
 *     CmpLockRegistryExclusive @ 0x140635B28 (CmpLockRegistryExclusive.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140636374 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140663450 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockTwoKcbs @ 0x140663500 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x14066359C (CmpLockTwoKcbsShared.c)
 *     CmpFindSubKeyByNumberEx @ 0x140663620 (CmpFindSubKeyByNumberEx.c)
 *     CmpQueryKeyDataFromNode @ 0x1406650C0 (CmpQueryKeyDataFromNode.c)
 *     CmpKeyNodeNeedsAccessBitUpdate @ 0x1406653DC (CmpKeyNodeNeedsAccessBitUpdate.c)
 *     CmpEnumerateLayeredKey @ 0x140829C6C (CmpEnumerateLayeredKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14082C1C4 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmEnumerateKey(_QWORD *a1, __int64 a2, int a3, int a4, __int64 a5, int a6, __int64 a7)
{
  __int64 *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r14
  char v13; // r15
  __int64 v14; // r13
  int SubKeyByNumber; // esi
  __int64 v16; // rbx
  ULONG_PTR v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edi
  __int64 v21; // r15
  __int64 v22; // rcx
  int v24; // r15d
  int v25; // eax
  __int64 *v26; // rax
  int v27; // edx
  int v28; // ecx
  _DWORD v29[2]; // [rsp+60h] [rbp-A8h] BYREF
  int v30; // [rsp+68h] [rbp-A0h]
  int v31; // [rsp+6Ch] [rbp-9Ch]
  __int64 *v32; // [rsp+70h] [rbp-98h] BYREF
  __int64 v33; // [rsp+78h] [rbp-90h] BYREF
  __int64 v34; // [rsp+80h] [rbp-88h] BYREF
  ULONG_PTR v35; // [rsp+88h] [rbp-80h] BYREF
  __int64 v36; // [rsp+90h] [rbp-78h]
  __int64 v37; // [rsp+98h] [rbp-70h]
  _QWORD *v38[2]; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v39; // [rsp+B0h] [rbp-58h]
  _BYTE v40[48]; // [rsp+B8h] [rbp-50h] BYREF

  v39 = a2;
  v37 = a5;
  v30 = a3;
  v31 = a4;
  v36 = a7;
  memset(v40, 0, sizeof(v40));
  v10 = 0LL;
  v38[0] = 0LL;
  v11 = 0LL;
  v38[1] = 0LL;
  v29[0] = -1;
  v29[1] = 0;
  v35 = 0LL;
  v34 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  CmpInitializeDelayDerefContext(v38);
  CmpAttachToRegistryProcess((__int64)v40);
  if ( *(_WORD *)(a1[1] + 66LL) )
  {
    v24 = v37;
    do
    {
      v25 = CmpEnumerateLayeredKey((_DWORD)a1, a3, v31, v24, a6, v36, (__int64)&v33, (unsigned int)v10 <= 0xA);
      LODWORD(v10) = (_DWORD)v10 + 1;
      SubKeyByNumber = v25;
    }
    while ( v25 == -1073741267 );
    v13 = 0;
    goto LABEL_24;
  }
  if ( a1[7] || a1[8] )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  v12 = a1[1];
  v13 = 1;
  if ( a2 )
    v14 = *(_QWORD *)(a2 + 8);
  else
    v14 = 0LL;
  CmpLockTwoKcbsShared(v14, v12);
  SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( SubKeyByNumber >= 0 )
  {
    if ( !a1[7] && !a1[8]
      || (SubKeyByNumber = CmpTransSearchAddTransFromKeyBody(a1, &v34), SubKeyByNumber >= 0)
      && (v11 = v34, SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(a1, v34), SubKeyByNumber >= 0) )
    {
      v16 = v39;
      if ( v39 )
      {
        SubKeyByNumber = CmpPerformKeyBodyDeletionCheck(v39, v11);
        if ( SubKeyByNumber < 0 )
          goto LABEL_22;
      }
      else if ( !CmpVEEnabled || (*(_DWORD *)(v12 + 184) & 0x1000000) == 0 )
      {
        v17 = *(_QWORD *)(v12 + 32);
        if ( v11 )
        {
          v10 = (__int64 *)&v32;
          v18 = v14;
          v19 = v12;
        }
        else
        {
          v18 = 0LL;
          v19 = 0LL;
        }
        SubKeyByNumber = CmpFindSubKeyByNumberEx(
                           v17,
                           *(_DWORD *)(v12 + 40),
                           v30,
                           (unsigned int)&v33,
                           v19,
                           v18,
                           v11,
                           (__int64)v38,
                           (__int64)v10);
        if ( SubKeyByNumber >= 0 )
          goto LABEL_16;
        goto LABEL_28;
      }
      v26 = (__int64 *)&v32;
      if ( !v11 )
        v26 = 0LL;
      v27 = v12;
      v28 = v14;
      if ( !v16 )
      {
        v27 = 0;
        v28 = v12;
      }
      SubKeyByNumber = CmpFindSubKeyByNumberFromMergedView(
                         v28,
                         v27,
                         v30,
                         v11,
                         (__int64)v38,
                         (__int64)&v35,
                         (__int64)&v33,
                         (__int64)v26,
                         (__int64)&v34);
      if ( SubKeyByNumber >= 0 )
      {
        v17 = v35;
LABEL_16:
        v20 = v33;
        if ( (_DWORD)v33 != -1 )
        {
          v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v17 + 8))(v17, (unsigned int)v33, v29);
          if ( (unsigned __int8)CmpKeyNodeNeedsAccessBitUpdate(v17, v21) )
          {
            (*(void (__fastcall **)(__int64, _DWORD *))(v17 + 16))(v22, v29);
            HvLockHiveFlusherShared(v17);
            v21 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, _DWORD *))(v17 + 8))(v17, v20, v29);
            CmpUpdateKeyNodeAccessBits(v17, v21, v20);
            HvUnlockHiveFlusherShared(v17);
          }
          v10 = v32;
          SubKeyByNumber = CmpQueryKeyDataFromNode(v17, v21, v31, v37, a6, v36, (__int64)v32, v11);
          if ( v21 )
            (*(void (__fastcall **)(ULONG_PTR, _DWORD *))(v17 + 16))(v17, v29);
          v13 = 1;
          goto LABEL_22;
        }
        SubKeyByNumber = -2147483622;
      }
LABEL_28:
      v10 = v32;
    }
  }
LABEL_22:
  CmpUnlockTwoKcbs(v14, v12);
  if ( v10 )
    CmpDereferenceKeyControlBlock((ULONG_PTR)v10);
LABEL_24:
  CmpDrainDelayDerefContext(v38);
  if ( v13 )
    CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v40);
  return (unsigned int)SubKeyByNumber;
}
