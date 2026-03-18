/*
 * XREFs of _SetCursorIconData @ 0x1C0014A20
 * Callers:
 *     NtUserSetCursorIconData @ 0x1C0014770 (NtUserSetCursorIconData.c)
 *     _DuplicateCursor @ 0x1C0109EE8 (_DuplicateCursor.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1C0015490 (RtlStringCchCopyW.c)
 *     _GetCurrentLogicalCursorThread @ 0x1C0015808 (_GetCurrentLogicalCursorThread.c)
 *     HMValidateHandle @ 0x1C0015A84 (HMValidateHandle.c)
 *     ?ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z @ 0x1C0017110 (-ProcessAlphaBitmap@@YAPEAUHBITMAP__@@PEAU1@@Z.c)
 *     GreExtGetObjectW @ 0x1C0017838 (GreExtGetObjectW.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0029B88 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0029BD8 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C003A8EC (UserSetLastError.c)
 *     GreReferenceObject @ 0x1C00C5604 (GreReferenceObject.c)
 *     GreDereferenceObject @ 0x1C00C5650 (GreDereferenceObject.c)
 *     AllocateUnicodeString @ 0x1C010321C (AllocateUnicodeString.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall SetCursorIconData(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, size_t Size)
{
  void *v8; // r12
  unsigned int v9; // eax
  int v10; // r14d
  _WORD *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // edx
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
  __int64 v32; // r14
  int v33; // eax
  __int64 v34; // rcx
  int v35; // esi
  __int64 v36; // r14
  __int64 v37; // r14
  HSURF v38; // rcx
  __int64 v39; // rcx
  HSURF v40; // rcx
  HSURF v41; // rcx
  __int64 v42; // rcx
  HBITMAP v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // ecx
  __int64 v47; // rax
  HSURF v49; // rcx
  __int128 v50; // [rsp+30h] [rbp-A8h] BYREF
  _OWORD v51[9]; // [rsp+40h] [rbp-98h] BYREF

  v8 = 0LL;
  memset(&v51[1], 0, 0x20uLL);
  memset(&v51[4], 0, 0x20uLL);
  v9 = *(_DWORD *)(a1 + 80) & 0xFFFFF7FF;
  *(_DWORD *)(a1 + 80) = v9;
  v10 = v9 | *(_DWORD *)(a4 + 24);
  if ( (*(_DWORD *)(a4 + 24) & 8) != 0 && *(_QWORD *)(a1 + 96) )
    return 0LL;
  v11 = (_WORD *)(a1 + 56);
  if ( *(_WORD *)a3 )
  {
    if ( !(unsigned int)AllocateUnicodeString(a1 + 56, a3) )
    {
      if ( (v10 & 8) == 0 )
      {
        v12 = *(_QWORD *)(a4 + 32);
        if ( v12 )
          GreDeleteObject(v12);
        v13 = *(_QWORD *)(a4 + 40);
        if ( v13 )
          GreDeleteObject(v13);
      }
      *(_QWORD *)(a1 + 64) = 0LL;
      *v11 = 0;
      *(_WORD *)(a1 + 58) = 0;
      return 0LL;
    }
  }
  else
  {
    *(_OWORD *)v11 = *a3;
  }
  if ( *(_QWORD *)(a2 + 8) )
  {
    UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v50);
    *(_WORD *)(a1 + 72) = RtlStringCchCopyW(&gawchAtomScratch, 0x100uLL, *(NTSTRSAFE_PCWSTR *)(a2 + 8)) < 0
                        ? 0
                        : UserAddAtomEx(&gawchAtomScratch, 0LL, 2LL);
    UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v50);
    if ( !*(_WORD *)(a1 + 72) )
    {
      if ( (v10 & 8) == 0 )
      {
        v14 = *(_QWORD *)(a4 + 32);
        if ( v14 )
          GreDeleteObject(v14);
        v15 = *(_QWORD *)(a4 + 40);
        if ( v15 )
          GreDeleteObject(v15);
      }
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      return 0LL;
    }
  }
  if ( (v10 & 8) != 0 )
  {
    if ( (_DWORD)Size )
      v8 = (void *)Win32AllocPoolWithQuota((unsigned int)Size, 1969451861LL);
    if ( !v8 )
    {
      if ( *(_WORD *)(a1 + 56) )
      {
        Win32FreePool(*(_QWORD *)(a1 + 64));
        *(_QWORD *)(a1 + 64) = 0LL;
        *(_DWORD *)(a1 + 56) = 0;
      }
      v16 = *(unsigned __int16 *)(a1 + 72);
      if ( (_WORD)v16 )
      {
        UserDeleteAtom(v16);
        *(_WORD *)(a1 + 72) = 0;
      }
      return 0LL;
    }
  }
  v17 = *(_DWORD *)(a1 + 80) | *(_DWORD *)(a4 + 24);
  *(_DWORD *)(a1 + 80) = v17;
  *(_WORD *)(a1 + 74) = *(_WORD *)(a4 + 16);
  *(_DWORD *)(a1 + 76) = *(unsigned __int16 *)(gpsi + 7000LL);
  if ( (v17 & 8) == 0 )
  {
    v37 = *(_QWORD *)(GetCurrentLogicalCursorThread(gpsi) + 416);
    *(_QWORD *)(a4 + 48) = 0LL;
    v50 = 0uLL;
    *(_OWORD *)(a4 + 56) = 0uLL;
    *(_OWORD *)(a1 + 84) = *(_OWORD *)(a4 + 28);
    *(_OWORD *)(a1 + 100) = *(_OWORD *)(a4 + 44);
    *(_OWORD *)(a1 + 116) = *(_OWORD *)(a4 + 60);
    *(_OWORD *)(a1 + 132) = *(_OWORD *)(a4 + 76);
    *(_DWORD *)(a1 + 148) = *(_DWORD *)(a4 + 92);
    *(_QWORD *)(a1 + 88) = 0LL;
    *(_QWORD *)(a1 + 96) = 0LL;
    v38 = *(HSURF *)(a4 + 32);
    if ( v38 && (int)GreReferenceObject(v38) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 32));
      v39 = *(_QWORD *)(a4 + 40);
      if ( v39 )
        GreDeleteObject(v39);
      return 0LL;
    }
    v40 = *(HSURF *)(a4 + 40);
    if ( v40 && (int)GreReferenceObject(v40) < 0 )
    {
      GreDeleteObject(*(_QWORD *)(a4 + 40));
      v41 = *(HSURF *)(a4 + 32);
    }
    else
    {
      if ( *(_DWORD *)(a1 + 140) )
      {
        if ( *(_DWORD *)(a1 + 144) )
        {
          v42 = *(_QWORD *)(a4 + 32);
          if ( v42 )
          {
            if ( !*(_QWORD *)(a4 + 40)
              || (unsigned int)GreExtGetObjectW(v42)
              && (unsigned int)GreExtGetObjectW(*(_QWORD *)(a4 + 40))
              && (DWORD2(v51[4]) == SDWORD2(v51[1]) >> 1 || DWORD2(v51[4]) == DWORD2(v51[1]))
              && SDWORD1(v51[4]) >= SDWORD1(v51[1]) )
            {
              *(_QWORD *)(a1 + 88) = *(_QWORD *)(a4 + 32);
              v43 = *(HBITMAP *)(a4 + 40);
              *(_QWORD *)(a1 + 96) = v43;
              *(_QWORD *)(a1 + 128) = ProcessAlphaBitmap(v43);
              GreSetBitmapOwner(*(_QWORD *)(a1 + 88), 0LL);
              GreIncQuotaCount(v37);
              v44 = *(_QWORD *)(a1 + 96);
              if ( v44 )
              {
                GreSetBitmapOwner(v44, 0LL);
                GreIncQuotaCount(v37);
              }
              v45 = *(_QWORD *)(a1 + 128);
              if ( v45 )
              {
                GreSetBitmapOwner(v45, 0LL);
                GreIncQuotaCount(v37);
              }
              goto LABEL_78;
            }
          }
        }
      }
      UserSetLastError(87LL);
      v49 = *(HSURF *)(a4 + 32);
      if ( v49 )
        GreDereferenceObject(v49);
      v41 = *(HSURF *)(a4 + 40);
    }
    if ( v41 )
      GreDereferenceObject(v41);
    return 0LL;
  }
  *(_OWORD *)(a1 + 88) = *(_OWORD *)(a4 + 96);
  *(_OWORD *)(a1 + 104) = *(_OWORD *)(a4 + 112);
  *(_QWORD *)(a1 + 120) = *(_QWORD *)(a4 + 128);
  *(_QWORD *)(a1 + 96) = v8;
  memmove(v8, *(const void **)(a4 + 104), (unsigned int)Size);
  v18 = *(_QWORD *)(a1 + 96);
  v19 = v18 + *(_QWORD *)(a4 + 112);
  *(_QWORD *)(a1 + 104) = v19;
  v20 = v18 + *(_QWORD *)(a4 + 120);
  *(_QWORD *)(a1 + 112) = v20;
  v21 = 0;
  v22 = *(_DWORD *)(a1 + 92);
  if ( v22 > 0 )
  {
    v23 = 0LL;
    do
    {
      v24 = *(_DWORD *)(v23 + v19);
      if ( v24 < 0 || v24 >= *(_DWORD *)(a1 + 88) )
        goto LABEL_52;
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
    if ( *(int *)(a1 + 88) > 0 )
    {
      v28 = 0LL;
      while ( 1 )
      {
        LOBYTE(v25) = 3;
        v29 = HMValidateHandle(*(_QWORD *)(*(_QWORD *)(a1 + 96) + v28), v25);
        v32 = v29;
        if ( !v29 )
          break;
        v33 = *(_DWORD *)(v29 + 80);
        if ( (v33 & 8) != 0 || (v33 & 0x40) == 0 || PsGetCurrentProcess(v31, v30) != gpepCSRSS && !*(_QWORD *)(v32 + 24) )
          break;
        *(_QWORD *)(v28 + *(_QWORD *)(a1 + 96)) = 0LL;
        *(_QWORD *)&v50 = *(_QWORD *)(a1 + 96) + 8LL * v27;
        *((_QWORD *)&v50 + 1) = v32;
        v51[0] = v50;
        HMAssignmentLock(v51);
        ++v27;
        v28 += 8LL;
        if ( v27 >= *(_DWORD *)(a1 + 88) )
          goto LABEL_78;
      }
      v35 = v27 - 1;
      if ( v35 >= 0 )
      {
        v36 = 8LL * v35;
        do
        {
          HMAssignmentUnlock(v36 + *(_QWORD *)(a1 + 96));
          v36 -= 8LL;
          --v35;
        }
        while ( v35 >= 0 );
      }
      v34 = 1402LL;
      goto LABEL_53;
    }
LABEL_78:
    *(_QWORD *)(a1 + 48) = a1;
    v46 = *(_DWORD *)(a1 + 80);
    if ( (v46 & 0x40) == 0 )
    {
      v47 = *(_QWORD *)(a1 + 24);
      if ( !v47 )
      {
        *(_QWORD *)(a1 + 32) = gpcurFirst;
        gpcurFirst = a1;
LABEL_83:
        *(_DWORD *)(a1 + 80) |= 0x100u;
        return 1LL;
      }
      if ( (v46 & 4) != 0 )
      {
        *(_QWORD *)(a1 + 32) = *(_QWORD *)(v47 + 728);
        *(_QWORD *)(v47 + 728) = a1;
        goto LABEL_83;
      }
    }
    return 1LL;
  }
LABEL_52:
  v34 = 87LL;
LABEL_53:
  UserSetLastError(v34);
  Win32FreePool(*(_QWORD *)(a1 + 96));
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_DWORD *)(a1 + 120) = 0;
  return 0LL;
}
