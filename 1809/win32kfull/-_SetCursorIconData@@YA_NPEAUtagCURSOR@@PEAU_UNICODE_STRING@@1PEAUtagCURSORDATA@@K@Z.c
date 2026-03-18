/*
 * XREFs of ?_SetCursorIconData@@YA_NPEAUtagCURSOR@@PEAU_UNICODE_STRING@@1PEAUtagCURSORDATA@@K@Z @ 0x1C0023744
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C006C880 (NtUserSetCursorIconData.c)
 *     ?_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z @ 0x1C01D699C (-_DuplicateCursor@@YAPEAUtagCURSOR@@PEAU1@_N@Z.c)
 * Callees:
 *     GreReferenceObject @ 0x1C000E4C4 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C000E55C (GreDereferenceObject.c)
 *     GetDpiDependentMetric @ 0x1C00209DC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C002657C (GetDpiForSystem.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004152C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0041580 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     GreExtGetObjectW @ 0x1C00549E8 (GreExtGetObjectW.c)
 *     RtlStringCchCopyW @ 0x1C006B110 (RtlStringCchCopyW.c)
 *     ?_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ @ 0x1C006B480 (-_GetCurrentLogicalCursorThread@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HMValidateHandle @ 0x1C006CDAC (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C0073CC4 (UserSetLastError.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C00E4C80 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C0124434 (AllocateUnicodeString.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

char __fastcall _SetCursorIconData(
        struct tagCURSOR *a1,
        struct _UNICODE_STRING *a2,
        struct _UNICODE_STRING *a3,
        struct tagCURSORDATA *a4,
        size_t Size)
{
  void *v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // r14d
  struct _UNICODE_STRING *v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int DpiForSystem; // eax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // r9
  __int64 v22; // r10
  int v23; // eax
  int v24; // ecx
  __int64 v25; // rdx
  int v26; // r8d
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  int v30; // esi
  __int64 v31; // r15
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // r14
  int v38; // eax
  int v39; // esi
  __int64 v40; // r14
  __int64 v41; // r14
  HSURF v42; // rcx
  __int64 v43; // rcx
  HSURF v44; // rcx
  HSURF v45; // rcx
  HSURF v46; // rcx
  HBITMAP v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  __int64 v51; // rax
  HSURF v53; // rcx
  __int128 v54; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v55[9]; // [rsp+40h] [rbp-98h] BYREF

  v8 = 0LL;
  memset(&v55[1], 0, 0x20uLL);
  memset(&v55[4], 0, 0x20uLL);
  *((_DWORD *)a1 + 20) &= ~0x800u;
  v10 = *((unsigned int *)a4 + 6);
  v11 = *((_DWORD *)a1 + 20) | *((_DWORD *)a4 + 6);
  if ( (v10 & 8) != 0 && *((_QWORD *)a1 + 12) )
    return 0;
  v12 = (struct _UNICODE_STRING *)((char *)a1 + 56);
  if ( a3->Length )
  {
    if ( !(unsigned int)AllocateUnicodeString((char *)a1 + 56, a3) )
    {
      if ( (v11 & 8) == 0 )
      {
        v13 = *((_QWORD *)a4 + 4);
        if ( v13 )
          GreDeleteObject(v13);
        v14 = *((_QWORD *)a4 + 5);
        if ( v14 )
          GreDeleteObject(v14);
      }
      *((_QWORD *)a1 + 8) = 0LL;
      v12->Length = 0;
      *((_WORD *)a1 + 29) = 0;
      return 0;
    }
  }
  else
  {
    *v12 = *a3;
  }
  if ( a2->Buffer )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v54);
    *((_WORD *)a1 + 36) = RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, a2->Buffer) < 0
                        ? 0
                        : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v54);
    if ( !*((_WORD *)a1 + 36) )
    {
      if ( (v11 & 8) == 0 )
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
  if ( (v11 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v8 = (void *)Win32AllocPoolWithQuota((unsigned int)Size, 1969451861LL);
    if ( !v8 )
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
  DpiForSystem = GetDpiForSystem(v10, v9);
  *((_DWORD *)a1 + 19) = GetDpiDependentMetric(7LL, DpiForSystem, v19);
  if ( (*((_DWORD *)a1 + 20) & 8) == 0 )
  {
    v41 = *((_QWORD *)_GetCurrentLogicalCursorThread() + 53);
    *((_QWORD *)a4 + 6) = 0LL;
    v54 = 0uLL;
    *(_OWORD *)((char *)a4 + 56) = 0uLL;
    *(_OWORD *)((char *)a1 + 84) = *(_OWORD *)((char *)a4 + 28);
    *(_OWORD *)((char *)a1 + 100) = *(_OWORD *)((char *)a4 + 44);
    *(_OWORD *)((char *)a1 + 116) = *(_OWORD *)((char *)a4 + 60);
    *(_OWORD *)((char *)a1 + 132) = *(_OWORD *)((char *)a4 + 76);
    *((_DWORD *)a1 + 37) = *((_DWORD *)a4 + 23);
    *((_QWORD *)a1 + 11) = 0LL;
    *((_QWORD *)a1 + 12) = 0LL;
    v42 = (HSURF)*((_QWORD *)a4 + 4);
    if ( v42 && (int)GreReferenceObject(v42) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 4));
      v43 = *((_QWORD *)a4 + 5);
      if ( v43 )
        GreDeleteObject(v43);
      return 0;
    }
    v44 = (HSURF)*((_QWORD *)a4 + 5);
    if ( v44 && (int)GreReferenceObject(v44) < 0 )
    {
      GreDeleteObject(*((_QWORD *)a4 + 5));
      v45 = (HSURF)*((_QWORD *)a4 + 4);
    }
    else
    {
      if ( *((_DWORD *)a1 + 35) )
      {
        if ( *((_DWORD *)a1 + 36) )
        {
          v46 = (HSURF)*((_QWORD *)a4 + 4);
          if ( v46 )
          {
            if ( !*((_QWORD *)a4 + 5)
              || (unsigned int)GreExtGetObjectW(v46)
              && (unsigned int)GreExtGetObjectW(*((HSURF *)a4 + 5))
              && (DWORD2(v55[4]) == SDWORD2(v55[1]) >> 1 || DWORD2(v55[4]) == DWORD2(v55[1]))
              && SDWORD1(v55[4]) >= SDWORD1(v55[1]) )
            {
              *((_QWORD *)a1 + 11) = *((_QWORD *)a4 + 4);
              v47 = (HBITMAP)*((_QWORD *)a4 + 5);
              *((_QWORD *)a1 + 12) = v47;
              *((_QWORD *)a1 + 16) = ProcessAlphaBitmap(v47);
              GreSetBitmapOwner(*((_QWORD *)a1 + 11), 0LL);
              GreIncQuotaCount(v41);
              v48 = *((_QWORD *)a1 + 12);
              if ( v48 )
              {
                GreSetBitmapOwner(v48, 0LL);
                GreIncQuotaCount(v41);
              }
              v49 = *((_QWORD *)a1 + 16);
              if ( v49 )
              {
                GreSetBitmapOwner(v49, 0LL);
                GreIncQuotaCount(v41);
              }
              goto LABEL_78;
            }
          }
        }
      }
      UserSetLastError(87LL);
      v53 = (HSURF)*((_QWORD *)a4 + 4);
      if ( v53 )
        GreDereferenceObject(v53, 0);
      v45 = (HSURF)*((_QWORD *)a4 + 5);
    }
    if ( v45 )
      GreDereferenceObject(v45, 0);
    return 0;
  }
  *(_OWORD *)((char *)a1 + 88) = *((_OWORD *)a4 + 6);
  *(_OWORD *)((char *)a1 + 104) = *((_OWORD *)a4 + 7);
  *((_QWORD *)a1 + 15) = *((_QWORD *)a4 + 16);
  *((_QWORD *)a1 + 12) = v8;
  memmove(v8, *((const void **)a4 + 13), (unsigned int)Size);
  v20 = *((_QWORD *)a1 + 12);
  v21 = v20 + *((_QWORD *)a4 + 14);
  *((_QWORD *)a1 + 13) = v21;
  v22 = *((_QWORD *)a4 + 15) + v20;
  *((_QWORD *)a1 + 14) = v22;
  v23 = 0;
  v24 = *((_DWORD *)a1 + 23);
  if ( v24 > 0 )
  {
    v25 = 0LL;
    do
    {
      v26 = *(_DWORD *)(v25 + v21);
      if ( v26 < 0 || v26 >= *((_DWORD *)a1 + 22) )
        goto LABEL_43;
      ++v23;
      v25 += 4LL;
    }
    while ( v23 < v24 );
  }
  v27 = 0LL;
  if ( v24 > 0 )
  {
    v28 = 0LL;
    do
    {
      if ( (unsigned int)(100 * *(_DWORD *)(v28 + v22)) >= 6 )
        break;
      v27 = (unsigned int)(v27 + 1);
      v28 += 4LL;
    }
    while ( (int)v27 < v24 );
  }
  if ( (_DWORD)v27 != v24 )
  {
    v30 = 0;
    if ( *((int *)a1 + 22) > 0 )
    {
      v31 = 0LL;
      while ( 1 )
      {
        LOBYTE(v27) = 3;
        v32 = HMValidateHandle(*(_QWORD *)(*((_QWORD *)a1 + 12) + v31), v27);
        v37 = v32;
        if ( !v32 )
          break;
        v38 = *(_DWORD *)(v32 + 80);
        if ( (v38 & 8) != 0
          || (v38 & 0x40) == 0
          || PsGetCurrentProcess(v34, v33, v35, v36) != gpepCSRSS && !*(_QWORD *)(v37 + 24) )
        {
          break;
        }
        *(_QWORD *)(v31 + *((_QWORD *)a1 + 12)) = 0LL;
        *(_QWORD *)&v54 = *((_QWORD *)a1 + 12) + 8LL * v30;
        *((_QWORD *)&v54 + 1) = v37;
        v55[0] = v54;
        HMAssignmentLock(v55);
        ++v30;
        v31 += 8LL;
        if ( v30 >= *((_DWORD *)a1 + 22) )
          goto LABEL_78;
      }
      v39 = v30 - 1;
      if ( v39 >= 0 )
      {
        v40 = 8LL * v39;
        do
        {
          HMAssignmentUnlock(v40 + *((_QWORD *)a1 + 12));
          v40 -= 8LL;
          --v39;
        }
        while ( v39 >= 0 );
      }
      v29 = 1402LL;
      goto LABEL_44;
    }
LABEL_78:
    *((_QWORD *)a1 + 6) = a1;
    v50 = *((_DWORD *)a1 + 20);
    if ( (v50 & 0x40) == 0 )
    {
      v51 = *((_QWORD *)a1 + 3);
      if ( !v51 )
      {
        *((_QWORD *)a1 + 4) = gpcurFirst;
        gpcurFirst = a1;
LABEL_83:
        *((_DWORD *)a1 + 20) |= 0x100u;
        return 1;
      }
      if ( (v50 & 4) != 0 )
      {
        *((_QWORD *)a1 + 4) = *(_QWORD *)(v51 + 736);
        *(_QWORD *)(v51 + 736) = a1;
        goto LABEL_83;
      }
    }
    return 1;
  }
LABEL_43:
  v29 = 87LL;
LABEL_44:
  UserSetLastError(v29);
  Win32FreePool(*((_QWORD *)a1 + 12));
  *((_QWORD *)a1 + 12) = 0LL;
  *((_QWORD *)a1 + 13) = 0LL;
  *((_QWORD *)a1 + 14) = 0LL;
  *((_QWORD *)a1 + 11) = 0LL;
  *((_DWORD *)a1 + 30) = 0;
  return 0;
}
