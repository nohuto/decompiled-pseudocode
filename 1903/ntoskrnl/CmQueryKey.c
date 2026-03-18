/*
 * XREFs of CmQueryKey @ 0x140654E60
 * Callers:
 *     NtQueryKey @ 0x1405FF6B0 (NtQueryKey.c)
 * Callees:
 *     CmpInitializeDelayDerefContext @ 0x1400440B4 (CmpInitializeDelayDerefContext.c)
 *     CmpDrainDelayDerefContext @ 0x140045A40 (CmpDrainDelayDerefContext.c)
 *     CmpFreeTransientPoolWithTag @ 0x140092A90 (CmpFreeTransientPoolWithTag.c)
 *     PsGetCurrentThreadProcess @ 0x14012AA90 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     KCBNeedsVirtualImage_0 @ 0x14027FE04 (KCBNeedsVirtualImage_0.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     CmpAttachToRegistryProcess @ 0x1405F31F0 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x1405F5E50 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x1405F5E90 (CmpLockRegistry.c)
 *     CmpUnlockKcb @ 0x1405F84A0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x1405FAAF0 (CmpLockKcbShared.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpDetachFromRegistryProcess @ 0x1405FD4FC (CmpDetachFromRegistryProcess.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x140632D84 (CmpTransSearchAddTransFromKeyBody.c)
 *     CmpUnlockTwoKcbs @ 0x140650340 (CmpUnlockTwoKcbs.c)
 *     CmpLockTwoKcbsShared @ 0x1406503DC (CmpLockTwoKcbsShared.c)
 *     CmpConstructName @ 0x140655720 (CmpConstructName.c)
 *     CmpQueryKeyData @ 0x140656BA4 (CmpQueryKeyData.c)
 *     CmGetKeyFlags @ 0x14078A824 (CmGetKeyFlags.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14082B7F4 (CmEnumerateValueKeyFromMergedView.c)
 *     CmVirtualKCBToRealPath @ 0x14082C2DC (CmVirtualKCBToRealPath.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14082CAC4 (CmpFindSubKeyByNumberFromMergedView.c)
 */

__int64 __fastcall CmQueryKey(__int64 a1, __int64 a2, int a3, unsigned int *a4, unsigned int a5, unsigned int *a6)
{
  unsigned int *v10; // rdi
  __int64 v11; // r12
  __int64 v12; // r15
  __int64 v13; // r15
  int KeyData; // edi
  UNICODE_STRING *p_UnicodeString; // rax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  __int64 v18; // rcx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  struct _KTHREAD *CurrentThread; // rdi
  struct _KPROCESS *CurrentThreadProcess; // rax
  int v24; // edi
  __int64 v25; // r15
  bool v26; // al
  unsigned int v27; // r8d
  unsigned int v28; // r8d
  int v29; // edx
  unsigned int v30; // edx
  int v31; // ecx
  __int64 v32; // rcx
  int v33; // r8d
  unsigned int LayeredKey; // ebx
  _DWORD v36[3]; // [rsp+54h] [rbp-144h] BYREF
  __int64 v37; // [rsp+60h] [rbp-138h]
  unsigned int *v38; // [rsp+68h] [rbp-130h]
  const void **v39; // [rsp+70h] [rbp-128h]
  unsigned int v40; // [rsp+78h] [rbp-120h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-118h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-108h] BYREF
  _QWORD *v43[2]; // [rsp+A0h] [rbp-F8h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-E8h]
  _BYTE v45[4]; // [rsp+B8h] [rbp-E0h] BYREF
  _BYTE v46[4]; // [rsp+BCh] [rbp-DCh] BYREF
  _BYTE v47[8]; // [rsp+C0h] [rbp-D8h] BYREF
  _BYTE v48[8]; // [rsp+C8h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-C8h] BYREF
  _DWORD v50[12]; // [rsp+F0h] [rbp-A8h] BYREF
  _BYTE v51[48]; // [rsp+120h] [rbp-78h] BYREF

  *(_QWORD *)&v36[1] = a1;
  v37 = a2;
  v41[1] = a4;
  v10 = a6;
  v38 = a6;
  v39 = 0LL;
  v11 = 0LL;
  v41[0] = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(v51, 0, sizeof(v51));
  v43[0] = 0LL;
  v43[1] = 0LL;
  CmpInitializeDelayDerefContext(v43);
  CmpAttachToRegistryProcess((__int64)v51);
  CmpLockRegistry();
  v12 = *(_QWORD *)(a1 + 8);
  v44 = v12;
  if ( !*(_WORD *)(v12 + 66) )
  {
    if ( !*(_QWORD *)(a1 + 56) && !*(_QWORD *)(a1 + 64) )
      goto LABEL_4;
    CmpLockKcbShared(v12);
    if ( CmpIsKeyDeletedForKeyBody(a1, 0LL) )
    {
      KeyData = -1073740763;
      if ( (*(_DWORD *)(a1 + 48) & 1) == 0 )
        KeyData = -1073741444;
      CmpUnlockKcb(v12);
    }
    else
    {
      CmpUnlockKcb(v12);
      KeyData = CmpTransSearchAddTransFromKeyBody((_QWORD *)a1, v41);
      if ( KeyData >= 0 )
      {
        v11 = v41[0];
        v10 = v38;
LABEL_4:
        if ( a2 )
        {
          v12 = *(_QWORD *)(a2 + 8);
          v44 = v12;
          CmpLockTwoKcbsShared(v12, *(_QWORD *)(a1 + 8));
        }
        else
        {
          CmpLockKcbShared(*(_QWORD *)(a1 + 8));
        }
        if ( a3 != 3 )
        {
          if ( a2 && CmpIsKeyDeletedForKeyBody(a2, v11) || CmpIsKeyDeletedForKeyBody(a1, v11) )
          {
            v19 = -1073741444;
            if ( (*(_BYTE *)(a1 + 48) & 1) != 0 )
              v19 = -1073740763;
            KeyData = v19;
            goto LABEL_100;
          }
          switch ( a3 )
          {
            case 5:
              *v10 = 12;
              if ( a5 < 0xC )
              {
                KeyData = -1073741789;
              }
              else
              {
                *a4 = CmGetKeyFlags(v12, v11);
                a4[1] = 0;
                v20 = 0;
                if ( *(int *)(v12 + 40) < 0 )
                {
                  v20 = 1;
                  a4[1] = 1;
                }
                v21 = *(_DWORD *)(v12 + 184);
                if ( (v21 & 0x100000) != 0 )
                {
                  a4[1] = v20 | 2;
                  v21 = *(_DWORD *)(v12 + 184);
                }
                a4[2] = (unsigned __int8)v21 >> 4;
                KeyData = 0;
              }
              break;
            case 6:
              memset(&SubjectContext, 0, sizeof(SubjectContext));
              CurrentThread = KeGetCurrentThread();
              CurrentThreadProcess = PsGetCurrentThreadProcess();
              SeCaptureSubjectContextEx(CurrentThread, CurrentThreadProcess, &SubjectContext);
              v24 = 4;
              *v38 = 4;
              if ( a5 >= 4 )
              {
                v25 = v44;
                v26 = KCBNeedsVirtualImage_0(v44);
                v27 = v26 | *a4 & 0xFFFFFFFE;
                *a4 = v27;
                v28 = v27 & 0xFFFFFFFD;
                *a4 = v28;
                v29 = v28;
                if ( v26 && (*(_DWORD *)(v25 + 184) & 0x20) == 0 )
                {
                  v29 = v28 | 2;
                  *a4 = v28 | 2;
                }
                if ( !CmpVEEnabled || (*(_DWORD *)(v25 + 184) & 0x1000000) == 0 )
                  v24 = 0;
                v30 = v24 | v29 & 0xFFFFFFFB;
                *a4 = v30;
                v31 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)(*(_DWORD *)(v25 + 184) >> 22)) & 8;
                *a4 = v31;
                *a4 = v31 ^ ((unsigned __int8)v31 ^ (unsigned __int8)(*(_DWORD *)(v25 + 184) >> 19)) & 0x10;
                KeyData = 0;
              }
              else
              {
                KeyData = -1073741789;
              }
              SeReleaseSubjectContext(&SubjectContext);
              v11 = v41[0];
              break;
            case 8:
              *v38 = 4;
              if ( a5 >= 4 )
              {
                if ( (*(_DWORD *)(*(_QWORD *)(v12 + 32) + 4152LL) & 1) != 0 )
                  *a4 &= ~1u;
                else
                  *a4 |= 1u;
                KeyData = 0;
LABEL_22:
                if ( a2 )
                {
                  if ( ((a3 - 3) & 0xFFFFFFFC) != 0 || a3 == 4 )
                  {
                    v32 = *(_QWORD *)(*(_QWORD *)(a2 + 8) + 168LL);
                    if ( *(_QWORD *)(*(_QWORD *)(a1 + 8) + 168LL) < v32 )
                      *(_QWORD *)a4 = v32;
                  }
                  if ( ((a3 - 2) & 0xFFFFFFFD) == 0 )
                  {
                    memset(v50, 0, sizeof(v50));
                    if ( (unsigned int)CmpFindSubKeyByNumberFromMergedView(
                                         *(_QWORD *)(a2 + 8),
                                         *(_QWORD *)(a1 + 8),
                                         -1,
                                         v11,
                                         (__int64)v43,
                                         (__int64)v47,
                                         (__int64)v45,
                                         0LL,
                                         (__int64)v36) == -2147483622 )
                    {
                      if ( a3 == 2 )
                        a4[5] = v36[0];
                      else
                        a4[3] = v36[0];
                    }
                    LOBYTE(v33) = 1;
                    if ( (unsigned int)CmEnumerateValueKeyFromMergedView(a1, a2, v33, -1, 0, 0LL, 0, 0LL, (__int64)v36) == -2147483622 )
                    {
                      if ( a3 == 2 )
                        a4[8] = v36[0];
                      else
                        a4[5] = v36[0];
                    }
                    KeyData = CmpQueryKeyData(*(_QWORD *)(a1 + 8), a3, (unsigned int)v50, 48, (__int64)v38, v11);
                    if ( (int)(KeyData + 0x80000000) < 0 || KeyData == -2147483643 )
                    {
                      if ( a3 == 2 )
                      {
                        if ( v50[6] > a4[6] )
                          a4[6] = v50[6];
                        if ( v50[9] > a4[9] )
                          a4[9] = v50[9];
                        if ( v50[10] > a4[10] )
                          a4[10] = v50[10];
                      }
                      else
                      {
                        if ( v50[4] > a4[4] )
                          a4[4] = v50[4];
                        if ( v50[6] > a4[6] )
                          a4[6] = v50[6];
                        if ( v50[7] > a4[7] )
                          a4[7] = v50[7];
                      }
                    }
                  }
                }
                else if ( CmpVEEnabled )
                {
                  v18 = *(_QWORD *)(a1 + 8);
                  if ( (*(_DWORD *)(v18 + 184) & 0x1000000) != 0 && ((a3 - 2) & 0xFFFFFFFD) == 0 )
                  {
                    KeyData = CmpFindSubKeyByNumberFromMergedView(
                                v18,
                                0,
                                -1,
                                v11,
                                (__int64)v43,
                                (__int64)v48,
                                (__int64)v46,
                                0LL,
                                (__int64)&v40);
                    if ( KeyData == -2147483622 )
                    {
                      if ( a3 == 2 )
                        a4[5] = v40;
                      else
                        a4[3] = v40;
                      KeyData = 0;
                    }
                  }
                }
                goto LABEL_100;
              }
              KeyData = -1073741789;
LABEL_100:
              if ( a2 )
                CmpUnlockTwoKcbs(*(_QWORD *)(a2 + 8), *(_QWORD *)(a1 + 8));
              else
                CmpUnlockKcb(*(_QWORD *)(a1 + 8));
              CmpDrainDelayDerefContext(v43);
              CmpUnlockRegistry();
              CmpDetachFromRegistryProcess((struct _KTHREAD *)v51);
              if ( UnicodeString.Buffer )
              {
                RtlFreeAnsiString(&UnicodeString);
              }
              else if ( v39 )
              {
                CmpFreeTransientPoolWithTag(v39, 0x624E4D43u);
              }
              return (unsigned int)KeyData;
            default:
              KeyData = CmpQueryKeyData(v12, a3, (_DWORD)a4, a5, (__int64)v10, v11);
              break;
          }
LABEL_21:
          if ( KeyData >= 0 )
            goto LABEL_22;
          goto LABEL_100;
        }
        v13 = *(_QWORD *)(a1 + 8);
        if ( CmpIsKeyDeletedForKeyBody(a1, v11) )
        {
          if ( (*(_DWORD *)(a1 + 48) & 1) != 0 )
          {
            KeyData = -1073740763;
            goto LABEL_100;
          }
          KeyData = -1073741444;
        }
        else
        {
          KeyData = 0;
        }
        if ( !*(_QWORD *)(v13 + 80) )
        {
LABEL_54:
          KeyData = -1073741670;
          goto LABEL_100;
        }
        if ( CmpVEEnabled && (*(_DWORD *)(v13 + 184) & 0x1000000) != 0 )
        {
          if ( (int)CmVirtualKCBToRealPath(v13, &UnicodeString) < 0 )
          {
LABEL_14:
            if ( v39 )
            {
              v16 = *(unsigned __int16 *)v39;
              *v38 = v16 + 4;
              if ( a5 < 4 )
              {
                KeyData = -1073741789;
              }
              else
              {
                *a4 = v16;
                v17 = a5 - 4;
                if ( a5 - 4 >= v16 )
                  v17 = v16;
                else
                  KeyData = -2147483643;
                memmove(a4 + 1, v39[1], v17);
              }
              goto LABEL_21;
            }
            goto LABEL_54;
          }
          p_UnicodeString = &UnicodeString;
        }
        else
        {
          p_UnicodeString = (UNICODE_STRING *)CmpConstructName(v13);
        }
        v39 = (const void **)p_UnicodeString;
        goto LABEL_14;
      }
    }
    CmpUnlockRegistry();
    CmpDetachFromRegistryProcess((struct _KTHREAD *)v51);
    return (unsigned int)KeyData;
  }
  LayeredKey = CmQueryLayeredKey(a1, a3, a4, a5, a6);
  CmpUnlockRegistry();
  CmpDetachFromRegistryProcess((struct _KTHREAD *)v51);
  return LayeredKey;
}
