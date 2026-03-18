/*
 * XREFs of ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C002464C
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C0024370 (NtUserSetCursorIconData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C015C85C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     HMValidateHandle @ 0x1C0024F2C (HMValidateHandle.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00266F0 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0026E70 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0027140 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSetLastError @ 0x1C002862C (UserSetLastError.c)
 *     GetDpiDependentMetric @ 0x1C004A0E8 (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C004B4C4 (GetDpiForSystem.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00611C8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0061224 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GreDereferenceObject @ 0x1C0089FA4 (GreDereferenceObject.c)
 *     GreReferenceObject @ 0x1C008A04C (GreReferenceObject.c)
 *     GreExtGetObjectW @ 0x1C00BDB18 (GreExtGetObjectW.c)
 *     AllocateUnicodeString @ 0x1C01095E4 (AllocateUnicodeString.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
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
  __int64 v10; // rcx
  int v11; // r14d
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v18; // rcx
  __int64 v19; // r9
  __int64 v20; // r10
  int v21; // eax
  int v22; // ecx
  __int64 v23; // rdx
  int v24; // r8d
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // esi
  __int64 v28; // r15
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r14
  int v35; // eax
  __int64 v36; // rcx
  int v37; // esi
  __int64 v38; // r14
  __int64 v39; // r14
  HSURF v40; // rcx
  __int64 v41; // rcx
  HSURF v42; // rcx
  HSURF v43; // rcx
  __int64 v44; // rcx
  HBITMAP v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  __int64 v49; // rax
  HSURF v51; // rcx
  __int128 v52; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v53[9]; // [rsp+40h] [rbp-98h] BYREF

  v7 = a2;
  v9 = 0LL;
  memset(&v53[1], 0, 0x20uLL);
  memset(&v53[4], 0, 0x20uLL);
  *((_DWORD *)a1 + 20) &= ~0x800u;
  v10 = *((unsigned int *)a4 + 6);
  v11 = *((_DWORD *)a1 + 20) | *((_DWORD *)a4 + 6);
  if ( (v10 & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  if ( a3->Length )
  {
    if ( !(unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
    {
      if ( (v11 & 8) == 0 )
      {
        v12 = *((_QWORD *)a4 + 4);
        if ( v12 )
          GreDeleteObject(v12);
        v13 = *((_QWORD *)a4 + 5);
        if ( v13 )
          GreDeleteObject(v13);
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
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v52);
    *((_WORD *)a1 + 36) = (int)RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, v7->Buffer) < 0
                        ? 0
                        : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v52);
    if ( !*((_WORD *)a1 + 36) )
    {
      if ( (v11 & 8) == 0 )
      {
        v14 = *((_QWORD *)a4 + 4);
        if ( v14 )
          GreDeleteObject(v14);
        v15 = *((_QWORD *)a4 + 5);
        if ( v15 )
          GreDeleteObject(v15);
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
  if ( (v11 & 8) != 0 )
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
      v16 = *((unsigned __int16 *)a1 + 36);
      if ( (_WORD)v16 )
      {
        UserDeleteAtom(v16);
        *((_WORD *)a1 + 36) = 0;
      }
      return 0;
    }
  }
  *((_DWORD *)a1 + 20) |= *((_DWORD *)a4 + 6);
  *((_WORD *)a1 + 37) = *((_WORD *)a4 + 8);
  DpiForSystem = GetDpiForSystem(v10);
  *((_DWORD *)a1 + 19) = GetDpiDependentMetric(7LL, DpiForSystem);
  if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    v39 = *((_QWORD *)_GetCurrentLogicalCursorThread() + 52);
    *((_QWORD *)a4 + 6) = 0LL;
    v52 = 0uLL;
    *(_OWORD *)((char *)a4 + 56) = 0uLL;
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
    *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    v40 = (HSURF)*((_QWORD *)a4 + 4);
    if ( v40 && (int)GreReferenceObject(v40) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 4));
      v41 = *((_QWORD *)a4 + 5);
      if ( v41 )
        GreDeleteObject(v41);
      return 0;
    }
    v42 = (HSURF)*((_QWORD *)a4 + 5);
    if ( v42 && (int)GreReferenceObject(v42) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 5));
      v43 = (HSURF)*((_QWORD *)a4 + 4);
    }
    else
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( *((_DWORD *)a1 + 36) )
        {
          v44 = *((_QWORD *)a4 + 4);
          if ( v44 )
          {
            if ( !*((_QWORD *)a4 + 5)
              || (unsigned int)GreExtGetObjectW(v44)
              && (unsigned int)GreExtGetObjectW(*((_QWORD *)a4 + 5))
              && (DWORD2(v53[4]) == SDWORD2(v53[1]) >> 1 || DWORD2(v53[4]) == DWORD2(v53[1]))
              && SDWORD1(v53[4]) >= SDWORD1(v53[1]) )
            {
              *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
              v45 = (HBITMAP)*((_QWORD *)a4 + 5);
              *((_QWORD *)a1 + 12) = v45;
              *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v45);
              GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
              GreIncQuotaCount(v39);
              v46 = *((_QWORD *)a1 + 12);
              if ( v46 )
              {
                GreSetBitmapOwner(v46, 0LL);
                GreIncQuotaCount(v39);
              }
              v47 = *((_QWORD *)a1 + 16);
              if ( v47 )
              {
                GreSetBitmapOwner(v47, 0LL);
                GreIncQuotaCount(v39);
              }
              goto LABEL_79;
            }
          }
        }
      }
      UserSetLastError(87LL);
      v51 = (HSURF)*((_QWORD *)a4 + 4);
      if ( v51 )
        GreDereferenceObject(v51);
      v43 = (HSURF)*((_QWORD *)a4 + 5);
    }
    if ( v43 )
      GreDereferenceObject(v43);
    return 0;
  }
  *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
  *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
  *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
  *((_QWORD *)a1 + 12) = v9;
  memmove(v9, *((const void **)a4 + 13), (unsigned int)Size);
  v18 = *((_QWORD *)a1 + 12);
  v19 = v18 + *((_QWORD *)a4 + 14);
  *((_QWORD *)a1 + 13) = v19;
  v20 = *((_QWORD *)a4 + 15) + v18;
  *((_QWORD *)a1 + 14) = v20;
  v21 = 0;
  v22 = *((_DWORD *)a1 + 23);
  if ( v22 > 0 )
  {
    v23 = 0LL;
    do
    {
      v24 = *(_DWORD *)(v23 + v19);
      if ( v24 < 0 || v24 >= *((_DWORD *)a1 + 22) )
        goto LABEL_53;
      ++v21;
      v23 += 4LL;
    }
    while ( v21 < v22 );
  }
  v25 = 0LL;
  if ( v22 > 0 )
  {
    v26 = 0LL;
    do
    {
      if ( (unsigned int)(100 * *(_DWORD *)(v26 + v20)) >= 6 )
        break;
      v25 = (unsigned int)(v25 + 1);
      v26 += 4LL;
    }
    while ( (int)v25 < v22 );
  }
  if ( (_DWORD)v25 != v22 )
  {
    v27 = 0;
    if ( *((int *)a1 + 22) > 0 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        LOBYTE(v25) = 3;
        v29 = HMValidateHandle(*(_QWORD *)(*((_QWORD *)a1 + 12) + v28), v25);
        v34 = v29;
        if ( !v29 )
          break;
        v35 = *(_DWORD *)(v29 + 80);
        if ( (v35 & 8) != 0
          || (v35 & 0x40) == 0
          || PsGetCurrentProcess(v31, v30, v32, v33) != gpepCSRSS && !*(_QWORD *)(v34 + 24) )
        {
          break;
        }
        *(_QWORD *)(v28 + *((_QWORD *)a1 + 12)) = 0LL;
        *(_QWORD *)&v52 = *((_QWORD *)a1 + 12) + 8LL * v27;
        *((_QWORD *)&v52 + 1) = v34;
        v53[0] = v52;
        HMAssignmentLock(v53);
        ++v27;
        v28 += 8LL;
        if ( v27 >= *((_DWORD *)a1 + 22) )
          goto LABEL_79;
      }
      v37 = v27 - 1;
      if ( v37 >= 0 )
      {
        v38 = 8LL * v37;
        do
        {
          HMAssignmentUnlock(v38 + *((_QWORD *)a1 + 12));
          v38 -= 8LL;
          --v37;
        }
        while ( v37 >= 0 );
      }
      v36 = 1402LL;
      goto LABEL_54;
    }
LABEL_79:
    *((_QWORD *)a1 + 6) = a1;
    v48 = *((_DWORD *)a1 + 20);
    if ( (v48 & 0x40) == 0 )
    {
      v49 = *((_QWORD *)a1 + 3);
      if ( !v49 )
      {
        *((_QWORD *)a1 + 4) = gpcurFirst;
        gpcurFirst = a1;
LABEL_84:
        *((_DWORD *)a1 + 20) |= 0x100u;
        return 1;
      }
      if ( (v48 & 4) != 0 )
      {
        *((_QWORD *)a1 + 4) = *(_QWORD *)(v49 + 728);
        *(_QWORD *)(v49 + 728) = a1;
        goto LABEL_84;
      }
    }
    return 1;
  }
LABEL_53:
  v36 = 87LL;
LABEL_54:
  UserSetLastError(v36);
  Win32FreePool(*((_QWORD *)a1 + 12));
  *((_QWORD *)a1 + 12) = 0LL;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_DWORD *)a1 + 30) = 0;
  return 0;
}
