/*
 * XREFs of CmQueryLayeredKey @ 0x14026C108
 * Callers:
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     KCBNeedsVirtualImage_0 @ 0x14026C5AC (KCBNeedsVirtualImage_0.c)
 *     CmpQueryKeyDataFromKeyNodeStack @ 0x14026D664 (CmpQueryKeyDataFromKeyNodeStack.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1405CCDE0 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x1405D78BC (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1405D8310 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpConstructNameWithStatus @ 0x1405D83A0 (CmpConstructNameWithStatus.c)
 *     CmpGetKcbAtLayerHeight @ 0x1405D9AC0 (CmpGetKcbAtLayerHeight.c)
 *     SeCaptureSubjectContextEx @ 0x1405E17F0 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
 *     CmpCleanupKcbStack @ 0x140644FD0 (CmpCleanupKcbStack.c)
 *     CmpLockKcbStackShared @ 0x140645050 (CmpLockKcbStackShared.c)
 *     CmpUnlockKcbStack @ 0x1406450E0 (CmpUnlockKcbStack.c)
 *     CmpIsKeyStackSymlink @ 0x140645740 (CmpIsKeyStackSymlink.c)
 *     CmGetKeyFlags @ 0x140765030 (CmGetKeyFlags.c)
 *     CmpCleanupKeyNodeStack @ 0x1407FABA0 (CmpCleanupKeyNodeStack.c)
 *     CmpInitializeKcbStack @ 0x1407FB100 (CmpInitializeKcbStack.c)
 *     CmpInitializeKeyNodeStack @ 0x1407FB128 (CmpInitializeKeyNodeStack.c)
 *     CmpStartKeyNodeStackFromKcbStack @ 0x1407FB760 (CmpStartKeyNodeStackFromKcbStack.c)
 */

__int64 __fastcall CmQueryLayeredKey(__int64 a1, int a2, unsigned int *a3, unsigned int a4, unsigned int *a5)
{
  __int64 v9; // r12
  signed int started; // ebx
  unsigned int v11; // ebx
  const void **v12; // r9
  unsigned int v13; // ecx
  char v14; // al
  unsigned int v15; // ebx
  char v16; // al
  unsigned int v17; // ecx
  int v18; // eax
  unsigned int v19; // ebx
  int v20; // eax
  unsigned int v21; // esi
  unsigned int v22; // eax
  __int64 KcbAtLayerHeight; // rax
  __int16 v24; // dx
  __int64 v25; // rbx
  int v26; // r9d
  int v27; // eax
  char v29; // [rsp+30h] [rbp-128h]
  PVOID P; // [rsp+40h] [rbp-118h] BYREF
  _QWORD v31[10]; // [rsp+48h] [rbp-110h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-C0h] BYREF
  _BYTE v33[80]; // [rsp+C0h] [rbp-98h] BYREF

  CmpInitializeKcbStack(v31);
  v29 = 0;
  CmpInitializeKeyNodeStack(v33);
  P = 0LL;
  memset(&v31[4], 0, 0x30uLL);
  v9 = *(_QWORD *)(a1 + 8);
  started = CmpStartKcbStackForTopLayerKcb(v31, v9);
  if ( started < 0 )
    goto LABEL_48;
  CmpLockKcbStackShared(v31);
  v29 = 1;
  if ( a2 == 3 )
  {
    if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) && (*(_BYTE *)(a1 + 48) & 1) != 0 )
    {
      started = -1073740763;
    }
    else
    {
      started = CmpConstructNameWithStatus(v9, &P);
      if ( started >= 0 )
      {
        v11 = *(unsigned __int16 *)P + 4;
        *a5 = v11;
        if ( a4 >= 4 )
        {
          v12 = (const void **)P;
          *a3 = *(unsigned __int16 *)P;
          v13 = a4 - 4;
          if ( a4 - 4 >= *(unsigned __int16 *)v12 )
            v13 = *(unsigned __int16 *)v12;
          memmove(a3 + 1, v12[1], v13);
          if ( v11 <= a4 )
            started = (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) != 0 ? 0xC000017C : 0;
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
  started = CmpPerformKeyBodyDeletionCheck(a1, 0LL);
  if ( started < 0 )
    goto LABEL_48;
  if ( a2 == 6 )
  {
    SeCaptureSubjectContextEx(KeGetCurrentThread(), KeGetCurrentThread()->Process, &SubjectContext);
    v14 = KCBNeedsVirtualImage_0(v9, &SubjectContext);
    v15 = (v14 != 0) | v31[4] & 0xFFFFFFFE;
    v16 = KCBNeedsVirtualImage_0(v9, &SubjectContext);
    v17 = *(_DWORD *)(v9 + 176);
    if ( !v16 || (v18 = 2, (v17 & 0x20) != 0) )
      v18 = 0;
    v19 = v18 | v15 & 0xFFFFFFFD;
    if ( !CmpVEEnabled || (v20 = 4, (v17 & 0x1000000) == 0) )
      v20 = 0;
    v21 = v20 & 0xFFFFFFE7 | v19 & 0xFFFFFFE3 | ((HIWORD(v17) & 0x80 | (v17 >> 19) & 0x40) >> 3);
    SeReleaseSubjectContext(&SubjectContext);
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_48;
    }
    *a3 = v21;
    goto LABEL_25;
  }
  if ( a2 == 8 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v9 + 24) + 4152LL) & 1) != 0 )
      v22 = v31[4] & 0xFFFFFFFE;
    else
      v22 = LODWORD(v31[4]) | 1;
    *a5 = 4;
    if ( a4 < 4 )
    {
      started = -1073741789;
      goto LABEL_48;
    }
    *a3 = v22;
    goto LABEL_25;
  }
  if ( *(__int16 *)(v9 + 58) < 0 )
  {
LABEL_38:
    v25 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      KcbAtLayerHeight = CmpGetKcbAtLayerHeight(v31);
      if ( *(_DWORD *)(KcbAtLayerHeight + 32) != -1 )
        break;
      if ( (__int16)(v24 - 1) < 0 )
        goto LABEL_38;
    }
    v25 = KcbAtLayerHeight;
  }
  if ( a2 == 5 )
  {
    LODWORD(v31[4]) = CmGetKeyFlags(v25, 0LL);
    HIDWORD(v31[4]) = *(int *)(v25 + 32) < 0;
    if ( (unsigned __int8)CmpIsKeyStackSymlink(v31) )
      HIDWORD(v31[4]) = v26 | 2;
    v27 = (*(_DWORD *)(v25 + 176) >> 4) & 0xF;
    *a5 = 12;
    if ( a4 < 0xC )
    {
      started = -1073741789;
      goto LABEL_48;
    }
    *(_QWORD *)a3 = v31[4];
    a3[2] = v27;
LABEL_25:
    started = 0;
    goto LABEL_48;
  }
  started = CmpStartKeyNodeStackFromKcbStack(v33, v31, a1);
  if ( started >= 0 )
  {
    started = CmpQueryKeyDataFromKeyNodeStack((unsigned int)v33, a2, (_DWORD)a3, a4, (__int64)a5);
    if ( started >= 0 )
      started = 0;
  }
LABEL_48:
  CmpCleanupKeyNodeStack(v33);
  if ( P )
    ExFreePoolWithTag(P, 0x624E4D43u);
  if ( v29 )
    CmpUnlockKcbStack(v31);
  CmpCleanupKcbStack(v31);
  return (unsigned int)started;
}
