/*
 * XREFs of CmpEnumerateLayeredKey @ 0x14082A56C
 * Callers:
 *     CmEnumerateKey @ 0x14064FF30 (CmEnumerateKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmpIsRegistryLockContended @ 0x14027FE54 (CmpIsRegistryLockContended.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140280F48 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpLockKcbStackShared @ 0x1405F8390 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FCF50 (CmpCleanupKcbStack.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpLockRegistryExclusive @ 0x140631CA8 (CmpLockRegistryExclusive.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpQueryKeyDataFromNode @ 0x140651FC0 (CmpQueryKeyDataFromNode.c)
 *     CmpGetKeyNodeForKcb @ 0x140656ACC (CmpGetKeyNodeForKcb.c)
 *     CmpFindSubKeyByNumber @ 0x1406D8E24 (CmpFindSubKeyByNumber.c)
 *     CmpReleaseKeyNodeForKcb @ 0x1408336BC (CmpReleaseKeyNodeForKcb.c)
 *     CmpKeyEnumStackAdvance @ 0x1408382CC (CmpKeyEnumStackAdvance.c)
 *     CmpKeyEnumStackCleanup @ 0x14083857C (CmpKeyEnumStackCleanup.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x1408385E4 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140838B68 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpKeyEnumStackInitialize @ 0x140838C34 (CmpKeyEnumStackInitialize.c)
 *     CmpKeyEnumStackStartFromKcbStack @ 0x140838E30 (CmpKeyEnumStackStartFromKcbStack.c)
 *     CmpKeyEnumStackVerifyResumeContext @ 0x140838F1C (CmpKeyEnumStackVerifyResumeContext.c)
 */

__int64 __fastcall CmpEnumerateLayeredKey(
        __int64 a1,
        unsigned int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        struct _PRIVILEGE_SET **a7,
        char a8)
{
  char v10; // r12
  __int64 KcbAtLayerHeight; // r13
  _DWORD *KeyNodeForKcb; // r14
  struct _PRIVILEGE_SET *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r8
  struct _LOOKASIDE_LIST_EX *v16; // r9
  int started; // edi
  __int16 v18; // dx
  __int16 v19; // dx
  char v20; // r8
  __int64 v21; // r9
  __int16 v22; // r10
  ULONG Control; // r14d
  ULONG v24; // esi
  int v25; // r9d
  int ResumeContext; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  struct _PRIVILEGE_SET *v30; // [rsp+40h] [rbp-C0h] BYREF
  int v31; // [rsp+48h] [rbp-B8h]
  unsigned int v32; // [rsp+4Ch] [rbp-B4h]
  _DWORD *v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v35; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v36; // [rsp+68h] [rbp-98h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+70h] [rbp-90h]
  __int64 v38[4]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int *v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  _QWORD *v42[2]; // [rsp+B0h] [rbp-50h] BYREF
  struct _PRIVILEGE_SET **v43; // [rsp+C0h] [rbp-40h]
  unsigned __int16 v44[176]; // [rsp+D0h] [rbp-30h] BYREF

  v31 = a3;
  v32 = a2;
  v39 = a6;
  v43 = a7;
  v40 = a4;
  memset(v44, 0, sizeof(v44));
  v42[0] = 0LL;
  v42[1] = 0LL;
  memset(v38, 0, sizeof(v38));
  WORD1(v38[0]) = -1;
  v10 = 0;
  CmpKeyEnumStackInitialize(v44);
  v35 = 0xFFFFFFFFLL;
  KcbAtLayerHeight = 0LL;
  v34 = 0xFFFFFFFFLL;
  KeyNodeForKcb = 0LL;
  v33 = 0LL;
  v41 = 0LL;
  Privileges = 0LL;
  CmpInitializeDelayDerefContext(v42);
  v13 = *a7;
  *a7 = (struct _PRIVILEGE_SET *)(v14 & (unsigned __int64)*a7);
  v30 = v13;
  if ( v31 == 2 )
    CmpLockRegistryExclusive();
  else
    CmpLockRegistry();
  started = CmpStartKcbStackForTopLayerKcb((__int64)v38, *(_QWORD *)(a1 + 8), v15, v16);
  if ( started >= 0 )
  {
    CmpLockKcbStackShared((__int64)v38);
    v10 = 1;
    started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
    if ( started >= 0 )
    {
      v18 = WORD1(v38[0]);
      if ( SWORD1(v38[0]) <= 0 )
        goto LABEL_35;
      do
      {
        KcbAtLayerHeight = CmpGetKcbAtLayerHeight((__int64)v38, v18);
        if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
          v20 = 1;
        v18 = v22 + v19;
      }
      while ( v18 > 0 );
      if ( v20 )
      {
        if ( v13
          || (v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(a1 + 88), v21),
              (v30 = v13) != 0LL) )
        {
          if ( (unsigned int)CmpKeyEnumStackVerifyResumeContext(v38, v13) == -1073741735 || v13->Control > a2 )
          {
            Privileges = v13;
            v13 = 0LL;
            v30 = 0LL;
          }
        }
        started = CmpKeyEnumStackStartFromKcbStack(v44, v38, v13);
        if ( started >= 0 )
        {
          if ( v13 )
          {
            Control = v13->Control;
            Privileges = v13;
            v13 = 0LL;
            v30 = 0LL;
          }
          else
          {
            Control = 0;
          }
          started = CmpKeyEnumStackAdvance(v44);
          if ( started < 0 )
          {
            KeyNodeForKcb = v33;
          }
          else
          {
            v24 = Control;
            if ( Control >= v32 )
            {
LABEL_27:
              ResumeContext = CmpKeyEnumStackCreateResumeContext(
                                (unsigned int)v38,
                                (unsigned int)v44,
                                v24,
                                0,
                                (__int64)&v30);
              v13 = v30;
              if ( ResumeContext >= 0 )
                v13 = (struct _PRIVILEGE_SET *)_InterlockedExchange64((volatile __int64 *)(a1 + 88), (__int64)v30);
              started = CmpQueryKeyDataFromKeyNodeStack(&v44[4], v31, v40, a5, v39);
              if ( started >= 0 )
                started = 0;
            }
            else
            {
              while ( !CmpIsRegistryLockContended() || v24 - Control < 0xA || !a8 )
              {
                started = CmpKeyEnumStackAdvance(v44);
                if ( started < 0 )
                {
                  KeyNodeForKcb = 0LL;
                  goto LABEL_41;
                }
                if ( ++v24 >= v32 )
                  goto LABEL_27;
              }
              LOBYTE(v25) = 1;
              started = CmpKeyEnumStackCreateResumeContext(
                          (unsigned int)v38,
                          (unsigned int)v44,
                          v24,
                          v25,
                          (__int64)&v30);
              if ( started >= 0 )
              {
                v13 = 0LL;
                started = -1073741267;
                KeyNodeForKcb = 0LL;
                *v43 = v30;
                goto LABEL_41;
              }
              v13 = v30;
            }
            KeyNodeForKcb = 0LL;
          }
        }
      }
      else
      {
LABEL_35:
        KcbAtLayerHeight = v38[1];
        KeyNodeForKcb = (_DWORD *)CmpGetKeyNodeForKcb(v38[1], (__int64)&v35, 0);
        started = CmpFindSubKeyByNumber(*(_QWORD *)(KcbAtLayerHeight + 32), KeyNodeForKcb, a2, &v36);
        if ( started >= 0 )
        {
          if ( v36 == -1 )
          {
            started = -2147483622;
          }
          else
          {
            v27 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 8LL))(
                    *(_QWORD *)(KcbAtLayerHeight + 32),
                    v36,
                    &v34);
            v28 = *(_QWORD *)(KcbAtLayerHeight + 32);
            v41 = v27;
            started = CmpQueryKeyDataFromNode(v28, v27, v31, v40, a5, v39, 0LL, 0LL);
            if ( started >= 0 )
              started = 0;
          }
        }
      }
    }
  }
LABEL_41:
  CmpKeyEnumStackCleanup(v44);
  if ( v41 )
    (*(void (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)(KcbAtLayerHeight + 32) + 16LL))(
      *(_QWORD *)(KcbAtLayerHeight + 32),
      &v34);
  if ( KeyNodeForKcb )
    CmpReleaseKeyNodeForKcb(KcbAtLayerHeight, &v35);
  if ( v10 )
    CmpUnlockKcbStack((__int64)v38);
  CmpCleanupKcbStack((__int64)v38);
  if ( v13 )
    CmpKeyEnumStackFreeResumeContext(v13);
  if ( Privileges )
    CmpKeyEnumStackFreeResumeContext(Privileges);
  CmpDrainDelayDerefContext(v42);
  CmpUnlockRegistry();
  return (unsigned int)started;
}
