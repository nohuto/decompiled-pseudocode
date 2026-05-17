/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x18000D640
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18000C170 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlDoesFileExists_UstrEx @ 0x18002A404 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x18002A538 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800349B4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     LdrAddDllDirectory @ 0x18008F910 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x18000DB20 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpWin32NtNameToNtPathName @ 0x1800299D4 (RtlpWin32NtNameToNtPathName.c)
 *     RtlPrefixUnicodeString @ 0x180071EA0 (RtlPrefixUnicodeString.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007BAA8 (RtlpReferenceCurrentDirectory.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        __int128 *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        _DWORD *a7)
{
  unsigned __int16 *v8; // rbx
  bool v10; // cc
  _WORD *v11; // rax
  unsigned int v12; // edi
  unsigned int v13; // r15d
  unsigned int FullPathName_Ustr; // ebp
  _BYTE *v15; // r12
  int v16; // eax
  int v17; // eax
  const wchar_t *v18; // r12
  wchar_t v19; // si
  unsigned int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // rdx
  void *v23; // r15
  int v24; // ecx
  unsigned int v25; // eax
  unsigned __int16 v26; // si
  void *v27; // r15
  int v28; // ecx
  unsigned int v29; // eax
  _BYTE *v30; // rsi
  unsigned __int64 v31; // rcx
  _DWORD *v32; // r14
  bool v33; // zf
  __int16 v35; // cx
  __int64 v36; // rax
  __int64 v37; // r8
  __int64 v38; // r15
  _WORD *v39; // rcx
  __int16 v40; // bp
  __int64 Heap; // rax
  _BYTE v42[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v43; // [rsp+34h] [rbp-2A4h]
  _BYTE *v44; // [rsp+38h] [rbp-2A0h]
  int v45; // [rsp+40h] [rbp-298h]
  __int64 v46; // [rsp+48h] [rbp-290h]
  __int128 v47; // [rsp+50h] [rbp-288h] BYREF
  int v48; // [rsp+60h] [rbp-278h] BYREF
  _QWORD *v49; // [rsp+68h] [rbp-270h]
  _DWORD *v50; // [rsp+70h] [rbp-268h]
  _BYTE v51[528]; // [rsp+80h] [rbp-258h] BYREF

  v8 = a3;
  v43 = a1;
  v10 = *(_WORD *)a2 <= 8u;
  v49 = a5;
  v50 = a7;
  if ( !v10 )
  {
    v11 = (_WORD *)*((_QWORD *)a2 + 1);
    if ( *v11 == 92 )
    {
      v35 = v11[1];
      if ( (v35 == 92 || v35 == 63) && v11[2] == 63 && v11[3] == 92 )
        return RtlpWin32NtNameToNtPathName((_DWORD)a2, (_DWORD)a3, (_DWORD)a4, (_DWORD)a5, (__int64)a6, (__int64)a7);
      LOBYTE(a1) = v43;
    }
  }
  v12 = 0;
  if ( a6 )
    *a6 = 0LL;
  v44 = v51;
  v13 = 520;
  if ( (a1 & 1) == 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, 520LL, v51, a6, v42, &v48);
    if ( FullPathName_Ustr )
    {
      v15 = v51;
      while ( !v42[0] )
      {
        if ( FullPathName_Ustr <= v13 )
        {
          LOWORD(v47) = FullPathName_Ustr;
          WORD1(v47) = v13;
          *((_QWORD *)&v47 + 1) = v15;
          v16 = RtlDetermineDosPathNameType_Ustr(&v47);
          goto LABEL_11;
        }
        if ( (v43 & 4) == 0 && ((v43 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_63;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, FullPathName_Ustr);
        v44 = (_BYTE *)Heap;
        v15 = (_BYTE *)Heap;
        if ( !Heap )
          return 3221225495LL;
        v13 = FullPathName_Ustr;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, FullPathName_Ustr, Heap, a6, v42, &v48);
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v12 = -1073741773;
    goto LABEL_59;
  }
  v47 = *a2;
  v16 = RtlDetermineDosPathNameType_Ustr(&v47);
  LOWORD(FullPathName_Ustr) = v47;
  v48 = v16;
LABEL_11:
  if ( v16 == 2 )
    goto LABEL_12;
  if ( v16 != 1 )
  {
    if ( v16 == 6 )
    {
      v17 = 8;
      v46 = 8LL;
      LOWORD(v45) = 8;
      goto LABEL_13;
    }
LABEL_12:
    v17 = 0;
    v46 = 0LL;
    LOWORD(v45) = 0;
LABEL_13:
    v18 = L"\b\n";
    goto LABEL_14;
  }
  v18 = (const wchar_t *)&RtlpDosDevicesUncPrefix;
  v46 = 4LL;
  v17 = 4;
  v45 = 4;
LABEL_14:
  v19 = *v18;
  v20 = *v18 - v17 + (unsigned __int16)FullPathName_Ustr + 2;
  if ( v20 > 0xFFFE )
  {
LABEL_63:
    v30 = v44;
    v12 = -1073741562;
    goto LABEL_33;
  }
  if ( v8 )
  {
    if ( v20 <= v8[1] )
    {
LABEL_19:
      if ( v19 )
      {
        v22 = *v8;
        if ( (unsigned int)v22 + v19 > v8[1] )
          goto LABEL_24;
        v23 = (void *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1));
        memmove(v23, *((const void **)v18 + 1), v19);
        v24 = (unsigned __int16)(v19 + *v8);
        v25 = v8[1];
        *v8 = v24;
        if ( v24 + 1 < v25 )
          *((_WORD *)v23 + ((unsigned __int64)v19 >> 1)) = 0;
      }
      v22 = *v8;
LABEL_24:
      v26 = FullPathName_Ustr - v45;
      if ( (_WORD)FullPathName_Ustr != (_WORD)v45 && v26 + (unsigned int)(unsigned __int16)v22 <= v8[1] )
      {
        v27 = (void *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v22 >> 1));
        memmove(v27, (const void *)(*((_QWORD *)&v47 + 1) + v46), v26);
        v28 = (unsigned __int16)(v26 + *v8);
        v29 = v8[1];
        *v8 = v28;
        if ( v28 + 1 < v29 )
          *((_WORD *)v27 + ((unsigned __int64)v26 >> 1)) = 0;
      }
      if ( v49 )
        *v49 = v8;
      v30 = v44;
      v31 = (unsigned __int64)*v8 >> 1;
      *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * v31) = 0;
      if ( a6 )
      {
        v31 = *a6;
        if ( *a6 )
          *a6 = *((_QWORD *)v8 + 1) + v31 + *v18 - v46 - (_QWORD)v30;
      }
      v32 = v50;
      if ( v50 )
      {
        v33 = v48 == 5;
        *v50 = 0;
        *((_QWORD *)v32 + 1) = 0LL;
        *((_QWORD *)v32 + 2) = 0LL;
        *((_QWORD *)v32 + 3) = 0LL;
        if ( v33 )
        {
          LOBYTE(v31) = 1;
          v36 = RtlpReferenceCurrentDirectory(v31, v22);
          v38 = v36;
          if ( v36 )
          {
            LOBYTE(v37) = 1;
            if ( !(unsigned __int8)RtlPrefixUnicodeString(v36 + 24, &v47, v37) )
              goto LABEL_70;
            v39 = (_WORD *)(*((_QWORD *)v8 + 1) + *(unsigned __int16 *)(v38 + 24) + *v18 - v46);
            *((_QWORD *)v32 + 1) = v39;
            v40 = FullPathName_Ustr - *(_WORD *)(v38 + 24);
            *(_WORD *)v32 = v40;
            if ( *v39 == 92 )
            {
              v40 -= 2;
              *(_WORD *)v32 = v40;
              *((_QWORD *)v32 + 1) = v39 + 1;
            }
            v33 = (v43 & 2) == 0;
            *((_WORD *)v32 + 1) = v40;
            if ( v33 )
            {
LABEL_70:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v38, 0xFFFFFFFF) == 1 )
              {
                NtClose(*(HANDLE *)(v38 + 8));
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v38);
              }
            }
            else
            {
              *((_QWORD *)v32 + 3) = v38;
              *((_QWORD *)v32 + 2) = *(_QWORD *)(v38 + 8);
            }
          }
          else
          {
            RtlLeaveCriticalSection(&FastPebLock);
          }
        }
      }
      goto LABEL_33;
    }
    if ( !a4 )
    {
      v12 = -1073741562;
      goto LABEL_59;
    }
  }
  else if ( !a4 )
  {
    v12 = -1073741811;
    goto LABEL_59;
  }
  v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v20);
  *((_QWORD *)a4 + 1) = v21;
  if ( v21 )
  {
    LOWORD(FullPathName_Ustr) = v47;
    v8 = a4;
    *a4 = 0;
    a4[1] = v20;
    v19 = *v18;
    goto LABEL_19;
  }
  v12 = -1073741801;
LABEL_59:
  v30 = v44;
LABEL_33:
  if ( v30 != v51 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v30);
  return v12;
}
