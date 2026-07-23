/*
 * XREFs of CmpEnumerateLayeredKey @ 0x1407F0F80
 * Callers:
 *     CmEnumerateKey @ 0x1405D3A20 (CmEnumerateKey.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140013000 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpIsRegistryLockContended @ 0x14026C5FC (CmpIsRegistryLockContended.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14026D664 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpGetKeyNodeForKcb @ 0x1405AB400 (CmpGetKeyNodeForKcb.c)
 *     CmpLockRegistryExclusive @ 0x1405B26C8 (CmpLockRegistryExclusive.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpQueryKeyDataFromNode @ 0x1405D4570 (CmpQueryKeyDataFromNode.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpLockRegistry @ 0x140646120 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140646170 (CmpUnlockRegistry.c)
 *     CmpFindSubKeyByNumber @ 0x1406B3F28 (CmpFindSubKeyByNumber.c)
 *     CmpKeyEnumStackAdvance @ 0x1408000AC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x140800380 (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408003E8 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x1408009D8 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpKeyEnumStackInitialize @ 0x140800A94 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140800C90 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140800D7C (CmpKeyEnumStackVerifyResumeContext.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        PPRIVILEGE_SET *a7,
        char a8)
{
  char v10; // r15
  __int64 KcbAtLayerHeight; // r13
  struct _PRIVILEGE_SET *v12; // r12
  PPRIVILEGE_SET v13; // rbx
  int started; // edi
  __int16 v15; // dx
  __int16 v16; // dx
  char v17; // r8
  __int64 v18; // r9
  __int16 v19; // r10
  ULONG Control; // r15d
  ULONG v21; // esi
  int v22; // r9d
  int ResumeContext; // eax
  _DWORD *KeyNodeForKcb; // r14
  __int64 v25; // rax
  __int64 v26; // rcx
  PPRIVILEGE_SET v28; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v29; // [rsp+50h] [rbp-B0h]
  int v30; // [rsp+58h] [rbp-A8h]
  unsigned int v31; // [rsp+5Ch] [rbp-A4h]
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35[4]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v36; // [rsp+98h] [rbp-68h]
  __int64 v37; // [rsp+A0h] [rbp-60h]
  __int64 v38; // [rsp+A8h] [rbp-58h]
  PPRIVILEGE_SET *v39; // [rsp+B0h] [rbp-50h]
  char v40[8]; // [rsp+C0h] [rbp-40h] BYREF
  __int16 v41[172]; // [rsp+C8h] [rbp-38h] BYREF

  v31 = a2;
  v30 = a3;
  v37 = a4;
  v36 = a6;
  v39 = a7;
  memset(v35, 0, sizeof(v35));
  WORD1(v35[0]) = -1;
  v10 = 0;
  CmpKeyEnumStackInitialize(v40);
  v29 = 0LL;
  v33 = 0LL;
  v32 = 0LL;
  KcbAtLayerHeight = 0LL;
  v38 = 0LL;
  v12 = 0LL;
  v13 = *a7;
  *a7 = 0LL;
  LODWORD(v33) = -1;
  WORD2(v33) = 0;
  LODWORD(v32) = -1;
  WORD2(v32) = 0;
  v28 = v13;
  if ( v30 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  started = CmpStartKcbStackForTopLayerKcb((__int64)v35, *(_QWORD *)(a1 + 8));
  if ( started < 0 )
  {
    KeyNodeForKcb = 0LL;
    goto LABEL_45;
  }
  CmpLockKcbStackShared((__int64)v35);
  v10 = 1;
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
  {
    KeyNodeForKcb = 0LL;
    goto LABEL_45;
  }
  v15 = WORD1(v35[0]);
  if ( SWORD1(v35[0]) <= 0 )
    goto LABEL_35;
  do
  {
    KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v35, v15);
    if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
      v17 = 1;
    v15 = v19 + v16;
  }
  while ( v15 > 0 );
  if ( !v17 )
  {
LABEL_35:
    KcbAtLayerHeight = v35[1];
    KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(v35[1], (__int64)&v33, 0);
    started = CmpFindSubKeyByNumber(*(_QWORD *)(KcbAtLayerHeight + 24), KeyNodeForKcb, a2, &v34);
    if ( started >= 0 )
    {
      if ( v34 == -1 )
      {
        started = -2147483622;
      }
      else
      {
        v25 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 8LL))(
                *(_QWORD *)(KcbAtLayerHeight + 24),
                v34,
                &v32);
        v26 = *(_QWORD *)(KcbAtLayerHeight + 24);
        v38 = v25;
        started = CmpQueryKeyDataFromNode(v26, v25, v30, v37, a5, v36, 0LL, 0LL);
        if ( started >= 0 )
          started = 0;
      }
    }
    goto LABEL_45;
  }
  if ( v13 || (v13 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), v18), (v28 = v13) != 0LL) )
  {
    if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(v35, v13) == -1073741735 || v13->Control > a2 )
    {
      v12 = v13;
      v13 = 0LL;
      v28 = 0LL;
    }
  }
  started = CmpKeyEnumStackStartFromKcbStack(v40, v35, a1, v13);
  if ( started < 0 )
  {
LABEL_42:
    KeyNodeForKcb = v29;
    goto LABEL_45;
  }
  if ( v13 )
  {
    Control = v13->Control;
    v12 = v13;
    v13 = 0LL;
    v28 = 0LL;
  }
  else
  {
    Control = 0;
  }
  started = CmpKeyEnumStackAdvance(v40);
  if ( started < 0 )
  {
    v10 = 1;
    goto LABEL_42;
  }
  v21 = Control;
  if ( Control >= v31 )
  {
LABEL_27:
    ResumeContext = CmpKeyEnumStackCreateResumeContext((unsigned int)v35, (unsigned int)v40, v21, 0, (__int64)&v28);
    v13 = v28;
    if ( ResumeContext >= 0 )
      v13 = (PPRIVILEGE_SET)_InterlockedExchange64((volatile __int64 *)(a1 + 88), (__int64)v28);
    v10 = 1;
    started = CmpQueryKeyDataFromKeyNodeStack(v41, v30, v37, a5, v36);
    if ( started >= 0 )
      started = 0;
  }
  else
  {
    while ( !CmpIsRegistryLockContended() || v21 - Control < 0xA || !a8 )
    {
      started = CmpKeyEnumStackAdvance(v40);
      if ( started < 0 )
      {
        v10 = 1;
        KeyNodeForKcb = 0LL;
        goto LABEL_45;
      }
      if ( ++v21 >= v31 )
        goto LABEL_27;
    }
    v10 = 1;
    LOBYTE(v22) = 1;
    started = CmpKeyEnumStackCreateResumeContext((unsigned int)v35, (unsigned int)v40, v21, v22, (__int64)&v28);
    if ( started >= 0 )
    {
      v13 = 0LL;
      started = -1073741267;
      KeyNodeForKcb = 0LL;
      *v39 = v28;
      goto LABEL_45;
    }
    v13 = v28;
  }
  KeyNodeForKcb = 0LL;
LABEL_45:
  CmpKeyEnumStackCleanup(v40);
  if ( v38 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v32);
  if ( KeyNodeForKcb )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 24) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 24),
      &v33);
  if ( v10 )
    CmpUnlockKcbStack((__int64)v35);
  if ( v35[3] )
    CmSiFreeMemory((PPRIVILEGE_SET)v35[3]);
  if ( v13 )
    CmpKeyEnumStackFreeResumeContext(v13);
  if ( v12 )
    CmpKeyEnumStackFreeResumeContext(v12);
  CmpUnlockRegistry();
  return (unsigned int)started;
}
