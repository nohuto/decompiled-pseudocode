/*
 * XREFs of CmQueryLayeredKey @ 0x14027F918
 * Callers:
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     KCBNeedsVirtualImage_0 @ 0x14027FE04 (KCBNeedsVirtualImage_0.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x140280F48 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     SeCaptureSubjectContextEx @ 0x1405D0200 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405F3180 (SeReleaseSubjectContext.c)
 *     CmpLockKcbStackShared @ 0x1405F8390 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1405F83F0 (CmpUnlockKcbStack.c)
 *     CmpCleanupKcbStack @ 0x1405FCF50 (CmpCleanupKcbStack.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405FD470 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405FD520 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405FECE0 (CmpGetKcbAtLayerHeight.c)
 *     CmpIsKeyStackSymlink @ 0x14062D2B0 (CmpIsKeyStackSymlink.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140650290 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpConstructNameWithStatus @ 0x140655750 (CmpConstructNameWithStatus.c)
 *     CmGetKeyFlags @ 0x14078A824 (CmGetKeyFlags.c)
 *     CmpCleanupKeyNodeStack @ 0x140832E50 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKcbStack @ 0x1408331E4 (CmpInitializeKcbStack.c)
 *     CmpInitializeKeyNodeStack @ 0x14083320C (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1408338F8 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmQueryLayeredKey(__int64 a1, int a2, unsigned int *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // rsi
  signed int started; // ebx
  __int64 v11; // r12
  unsigned int v12; // ebx
  const void **v13; // r9
  unsigned int v14; // ecx
  char v15; // al
  unsigned int v16; // ebx
  char v17; // al
  unsigned int v18; // ecx
  int v19; // eax
  unsigned int v20; // ebx
  int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // eax
  __int64 KcbAtLayerHeight; // rax
  __int16 v25; // dx
  __int64 v26; // rbx
  int v27; // r9d
  int v28; // eax
  char v30; // [rsp+30h] [rbp-128h]
  PVOID P; // [rsp+38h] [rbp-120h] BYREF
  __int64 v32; // [rsp+40h] [rbp-118h]
  _QWORD v33[10]; // [rsp+48h] [rbp-110h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-C0h] BYREF
  _BYTE v35[80]; // [rsp+C0h] [rbp-98h] BYREF

  v32 = a1;
  memset(v33, 0, 0x20uLL);
  memset(v35, 0, sizeof(v35));
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  CmpInitializeKcbStack(v33);
  v30 = 0;
  CmpInitializeKeyNodeStack(v35);
  P = 0LL;
  memset(&v33[4], 0, 0x30uLL);
  v9 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v33, v9);
  if ( started < 0 )
    goto LABEL_48;
  CmpLockKcbStackShared(v33);
  v30 = 1;
  if ( a2 == 3 )
  {
    v11 = v32;
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(v32, 0LL) && (*(_DWORD *)(v32 + 48) & 1) != 0 )
    {
      started = -1073740763;
    }
    else
    {
      started = CmpConstructNameWithStatus(v9, &P);
      if ( started >= 0 )
      {
        v12 = *(unsigned __int16 *)P + 4;
        *a5 = v12;
        if ( a4 >= 4 )
        {
          v13 = (const void **)P;
          *a3 = *(unsigned __int16 *)P;
          v14 = a4 - 4;
          if ( a4 - 4 >= *(unsigned __int16 *)v13 )
            v14 = *(unsigned __int16 *)v13;
          memmove(a3 + 1, v13[1], v14);
          if ( v12 <= a4 )
            started = (unsigned __int8)CmpIsKeyDeletedForKeyBody(v11, 0LL) != 0 ? 0xC000017C : 0;
          else
            started = -2147483643;
        }
        else
        {
          started = -1073741789;
        }
      }
    }
    goto LABEL_48;
  }
  started = CmpPerformKeyBodyDeletionCheck(v32, 0LL);
  if ( started < 0 )
    goto LABEL_48;
  if ( a2 == 6 )
  {
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->Process, &SubjectContext);
    v15 = KCBNeedsVirtualImage_0(v9, &SubjectContext);
    v16 = (v15 != 0) | v33[4] & 0xFFFFFFFE;
    v17 = KCBNeedsVirtualImage_0(v9, &SubjectContext);
    v18 = *(_DWORD *)(v9 + 184);
    if ( !v17 || (v19 = 2, (v18 & 0x20) != 0) )
      v19 = 0;
    v20 = v19 | v16 & 0xFFFFFFFD;
    if ( !CmpVEEnabled || (v21 = 4, (v18 & 0x1000000) == 0) )
      v21 = 0;
    v22 = v21 & 0xFFFFFFE7 | v20 & 0xFFFFFFE3 | ((HIWORD(v18) & 0x80 | (v18 >> 19) & 0x40) >> 3);
    SeReleaseSubjectContext(&SubjectContext);
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_48;
    }
    *a3 = v22;
    goto LABEL_25;
  }
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 32) + 4152LL) & 1) != 0 )
      v23 = v33[4] & 0xFFFFFFFE;
    else
      v23 = LODWORD(v33[4]) | 1;
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_48;
    }
    *a3 = v23;
    goto LABEL_25;
  }
  if ( *(__int16 *)(v9 + 66) < 0 )
  {
LABEL_38:
    v26 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v33);
      if ( *(_DWORD *)(KcbAtLayerHeight + 40) != -1 )
        break;
      if ( (__int16)(v25 - 1) < 0 )
        goto LABEL_38;
    }
    v26 = KcbAtLayerHeight;
  }
  if ( a2 == 5 )
  {
    LODWORD(v33[4]) = CmGetKeyFlags(v26, 0LL);
    HIDWORD(v33[4]) = *(int *)(v26 + 40) < 0;
    if ( (unsigned __int8)CmpIsKeyStackSymlink(v33) )
      HIDWORD(v33[4]) = v27 | 2;
    v28 = (*(_DWORD *)(v26 + 184) >> 4) & 0xF;
    *a5 = 12;
    if ( a4 < 0xC )
    {
      started = -1073741789;
      goto LABEL_48;
    }
    *(_QWORD *)a3 = v33[4];
    a3[2] = v28;
LABEL_25:
    started = 0;
    goto LABEL_48;
  }
  started = CmpStartKeyNodeStackFromKcbStack(v35, v33);
  if ( started >= 0 )
  {
    started = CmpQueryKeyDataFromKeyNodeStack((unsigned int)v35, a2, (_DWORD)a3, a4, (__int64)a5);
    if ( started >= 0 )
      started = 0;
  }
LABEL_48:
  CmpCleanupKeyNodeStack(v35);
  if ( P )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v30 )
    CmpUnlockKcbStack(v33);
  CmpCleanupKcbStack(v33);
  return (unsigned int)started;
}
