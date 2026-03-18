/*
 * XREFs of ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002F08C
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C002EDB0 (NtUserSetCursorIconData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015B8AC (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C002F96C (HMValidateHandle.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0031130 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C00318B0 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0031B80 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreExtGetObjectW @ 0x1C00338F8 (GreExtGetObjectW.c)
 *     GreDereferenceObject @ 0x1C00455D4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C004567C (GreReferenceObject.c)
 *     UserSetLastError @ 0x1C008B3AC (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C00A9308 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C00AA6E4 (GetDpiForSystem.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00BFAE8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00BFB44 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     AllocateUnicodeString @ 0x1C012E354 (AllocateUnicodeString.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

char __fastcall _SetCursorIconData(
        struct tagCURSOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSORDATA *a4,
        size_t Size)
{
  struct _UNICODE_STRING *v7; // r13
  void *v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r14d
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v19; // rcx
  __int64 v20; // r9
  __int64 v21; // r10
  int v22; // eax
  int v23; // ecx
  __int64 v24; // rdx
  int v25; // r8d
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // esi
  __int64 v29; // r15
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // r14
  int v36; // eax
  __int64 v37; // rcx
  int v38; // esi
  __int64 v39; // r14
  __int64 v40; // r14
  HSURF v41; // rcx
  __int64 v42; // rcx
  HSURF v43; // rcx
  HSURF v44; // rcx
  __int64 v45; // rcx
  HBITMAP v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  int v49; // ecx
  __int64 v50; // rax
  HSURF v52; // rcx
  __int128 v53; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v54[9]; // [rsp+40h] [rbp-98h] BYREF

  v7 = a2;
  v9 = 0LL;
  memset(&v54[1], 0, 0x20uLL);
  memset(&v54[4], 0, 0x20uLL);
  *((_DWORD *)a1 + 20) &= ~0x800u;
  v11 = *((unsigned int *)a4 + 6);
  v12 = *((_DWORD *)a1 + 20) | *((_DWORD *)a4 + 6);
  if ( (v11 & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  if ( a3->Length )
  {
    if ( !(unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
    {
      if ( (v12 & 8) == 0 )
      {
        v13 = *((_QWORD *)a4 + 4);
        if ( v13 )
          GreDeleteObject(v13);
        v14 = *((_QWORD *)a4 + 5);
        if ( v14 )
          GreDeleteObject(v14);
      }
      *((_QWORD *)a1 + 8) = 0LL;
      *((_DWORD *)a1 + 14) = 0;
      return 0;
    }
    v7 = a2;
  }
  else
  {
    *(struct _UNICODE_STRING *)((char *)a1 + 56) = *a3;
  }
  if ( v7->Buffer )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v53);
    *((_WORD *)a1 + 36) = (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, v7->Buffer) < 0
                        ? 0
                        : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v53);
    if ( !*((_WORD *)a1 + 36) )
    {
      if ( (v12 & 8) == 0 )
      {
        v15 = *((_QWORD *)a4 + 4);
        if ( v15 )
          GreDeleteObject(v15);
        v16 = *((_QWORD *)a4 + 5);
        if ( v16 )
          GreDeleteObject(v16);
      }
      if ( *((_WORD *)a1 + 28) )
      {
        Win32FreePool(*((_QWORD *)a1 + 8));
        *((_QWORD *)a1 + 8) = 0LL;
        *((_DWORD *)a1 + 14) = 0;
      }
      return 0;
    }
  }
  if ( (v12 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v9 = (void *)Win32AllocPoolWithQuota((unsigned int)Size, 1969451861LL);
    if ( !v9 )
    {
      if ( *((_WORD *)a1 + 28) )
      {
        Win32FreePool(*((_QWORD *)a1 + 8));
        *((_QWORD *)a1 + 8) = 0LL;
        *((_DWORD *)a1 + 14) = 0;
      }
      v17 = *((unsigned __int16 *)a1 + 36);
      if ( (_WORD)v17 )
      {
        UserDeleteAtom(v17);
        *((_WORD *)a1 + 36) = 0;
      }
      return 0;
    }
  }
  *((_DWORD *)a1 + 20) |= *((_DWORD *)a4 + 6);
  *((_WORD *)a1 + 37) = *((_WORD *)a4 + 8);
  DpiForSystem = GetDpiForSystem(v11, v10);
  *((_DWORD *)a1 + 19) = GetDpiDependentMetric(7LL, DpiForSystem);
  if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    v40 = *((_QWORD *)_GetCurrentLogicalCursorThread() + 52);
    *((_QWORD *)a4 + 6) = 0LL;
    v53 = 0uLL;
    *(_OWORD *)((char *)a4 + 56) = 0uLL;
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
    *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    v41 = (HSURF)*((_QWORD *)a4 + 4);
    if ( v41 && (int)GreReferenceObject(v41) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 4));
      v42 = *((_QWORD *)a4 + 5);
      if ( v42 )
        GreDeleteObject(v42);
      return 0;
    }
    v43 = (HSURF)*((_QWORD *)a4 + 5);
    if ( v43 && (int)GreReferenceObject(v43) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 5));
      v44 = (HSURF)*((_QWORD *)a4 + 4);
    }
    else
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( *((_DWORD *)a1 + 36) )
        {
          v45 = *((_QWORD *)a4 + 4);
          if ( v45 )
          {
            if ( !*((_QWORD *)a4 + 5)
              || (unsigned int)GreExtGetObjectW(v45)
              && (unsigned int)GreExtGetObjectW(*((_QWORD *)a4 + 5))
              && (DWORD2(v54[4]) == SDWORD2(v54[1]) >> 1 || DWORD2(v54[4]) == DWORD2(v54[1]))
              && SDWORD1(v54[4]) >= SDWORD1(v54[1]) )
            {
              *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
              v46 = (HBITMAP)*((_QWORD *)a4 + 5);
              *((_QWORD *)a1 + 12) = v46;
              *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v46);
              GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
              GreIncQuotaCount(v40);
              v47 = *((_QWORD *)a1 + 12);
              if ( v47 )
              {
                GreSetBitmapOwner(v47, 0LL);
                GreIncQuotaCount(v40);
              }
              v48 = *((_QWORD *)a1 + 16);
              if ( v48 )
              {
                GreSetBitmapOwner(v48, 0LL);
                GreIncQuotaCount(v40);
              }
              goto LABEL_79;
            }
          }
        }
      }
      UserSetLastError(87LL);
      v52 = (HSURF)*((_QWORD *)a4 + 4);
      if ( v52 )
        GreDereferenceObject(v52);
      v44 = (HSURF)*((_QWORD *)a4 + 5);
    }
    if ( v44 )
      GreDereferenceObject(v44);
    return 0;
  }
  *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
  *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
  *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
  *((_QWORD *)a1 + 12) = v9;
  memmove(v9, *((const void **)a4 + 13), (unsigned int)Size);
  v19 = *((_QWORD *)a1 + 12);
  v20 = v19 + *((_QWORD *)a4 + 14);
  *((_QWORD *)a1 + 13) = v20;
  v21 = *((_QWORD *)a4 + 15) + v19;
  *((_QWORD *)a1 + 14) = v21;
  v22 = 0;
  v23 = *((_DWORD *)a1 + 23);
  if ( v23 > 0 )
  {
    v24 = 0LL;
    do
    {
      v25 = *(_DWORD *)(v24 + v20);
      if ( v25 < 0 || v25 >= *((_DWORD *)a1 + 22) )
        goto LABEL_53;
      ++v22;
      v24 += 4LL;
    }
    while ( v22 < v23 );
  }
  v26 = 0LL;
  if ( v23 > 0 )
  {
    v27 = 0LL;
    do
    {
      if ( (unsigned int)(100 * *(_DWORD *)(v27 + v21)) >= 6 )
        break;
      v26 = (unsigned int)(v26 + 1);
      v27 += 4LL;
    }
    while ( (int)v26 < v23 );
  }
  if ( (_DWORD)v26 != v23 )
  {
    v28 = 0;
    if ( *((int *)a1 + 22) > 0 )
    {
      v29 = 0LL;
      while ( 1 )
      {
        LOBYTE(v26) = 3;
        v30 = HMValidateHandle(*(_QWORD *)(*((_QWORD *)a1 + 12) + v29), v26);
        v35 = v30;
        if ( !v30 )
          break;
        v36 = *(_DWORD *)(v30 + 80);
        if ( (v36 & 8) != 0
          || (v36 & 0x40) == 0
          || PsGetCurrentProcess(v32, v31, v33, v34) != gpepCSRSS && !*(_QWORD *)(v35 + 24) )
        {
          break;
        }
        *(_QWORD *)(v29 + *((_QWORD *)a1 + 12)) = 0LL;
        *(_QWORD *)&v53 = *((_QWORD *)a1 + 12) + 8LL * v28;
        *((_QWORD *)&v53 + 1) = v35;
        v54[0] = v53;
        HMAssignmentLock(v54);
        ++v28;
        v29 += 8LL;
        if ( v28 >= *((_DWORD *)a1 + 22) )
          goto LABEL_79;
      }
      v38 = v28 - 1;
      if ( v38 >= 0 )
      {
        v39 = 8LL * v38;
        do
        {
          HMAssignmentUnlock(v39 + *((_QWORD *)a1 + 12));
          v39 -= 8LL;
          --v38;
        }
        while ( v38 >= 0 );
      }
      v37 = 1402LL;
      goto LABEL_54;
    }
LABEL_79:
    *((_QWORD *)a1 + 6) = a1;
    v49 = *((_DWORD *)a1 + 20);
    if ( (v49 & 0x40) == 0 )
    {
      v50 = *((_QWORD *)a1 + 3);
      if ( !v50 )
      {
        *((_QWORD *)a1 + 4) = gpcurFirst;
        gpcurFirst = a1;
LABEL_84:
        *((_DWORD *)a1 + 20) |= 0x100u;
        return 1;
      }
      if ( (v49 & 4) != 0 )
      {
        *((_QWORD *)a1 + 4) = *(_QWORD *)(v50 + 728);
        *(_QWORD *)(v50 + 728) = a1;
        goto LABEL_84;
      }
    }
    return 1;
  }
LABEL_53:
  v37 = 87LL;
LABEL_54:
  UserSetLastError(v37);
  Win32FreePool(*((_QWORD *)a1 + 12));
  *((_QWORD *)a1 + 12) = 0LL;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_DWORD *)a1 + 30) = 0;
  return 0;
}
