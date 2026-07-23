/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x18000D640
 * Callers:
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x18000C170 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlDoesFileExists_UstrEx @ 0x18002A404 (RtlDoesFileExists_UstrEx.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x18002A538 (RtlDosPathNameToRelativeNtPathName.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x1800349B4 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     LdrAddDllDirectory @ 0x18008F920 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlGetFullPathName_Ustr @ 0x18000DB20 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18000E8BC (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpWin32NtNameToNtPathName @ 0x1800299D4 (RtlpWin32NtNameToNtPathName.c)
 *     RtlPrefixUnicodeString @ 0x180071EA0 (RtlPrefixUnicodeString.c)
 *     RtlpReferenceCurrentDirectory @ 0x18007BAB8 (RtlpReferenceCurrentDirectory.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04E0 (NtClose.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        _UNICODE_STRING *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        _QWORD *a5,
        unsigned __int64 *a6,
        _DWORD *a7)
{
  unsigned __int16 *v8; // rbx
  bool v10; // cc
  wchar_t *Buffer; // rax
  unsigned int v12; // edi
  unsigned int v13; // r15d
  unsigned int FullPathName_Ustr; // ebp
  wchar_t *v15; // r12
  int v16; // eax
  int v17; // eax
  const _UNICODE_STRING *v18; // r12
  unsigned __int16 Length; // si
  unsigned int v20; // r15d
  PVOID v21; // rax
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
  wchar_t v35; // cx
  __int64 v36; // rax
  __int64 v37; // r15
  _WORD *v38; // rcx
  __int16 v39; // bp
  PVOID Heap; // rax
  _BYTE v41[4]; // [rsp+30h] [rbp-2A8h] BYREF
  int v42; // [rsp+34h] [rbp-2A4h]
  PVOID BaseAddress; // [rsp+38h] [rbp-2A0h]
  int v44; // [rsp+40h] [rbp-298h]
  unsigned __int64 v45; // [rsp+48h] [rbp-290h]
  _UNICODE_STRING String2; // [rsp+50h] [rbp-288h] BYREF
  int v47; // [rsp+60h] [rbp-278h] BYREF
  _QWORD *v48; // [rsp+68h] [rbp-270h]
  _DWORD *v49; // [rsp+70h] [rbp-268h]
  _BYTE v50[528]; // [rsp+80h] [rbp-258h] BYREF

  v8 = a3;
  v42 = a1;
  v10 = a2->Length <= 8u;
  v48 = a5;
  v49 = a7;
  if ( !v10 )
  {
    Buffer = a2->Buffer;
    if ( *Buffer == 92 )
    {
      v35 = Buffer[1];
      if ( (v35 == 92 || v35 == 63) && Buffer[2] == 63 && Buffer[3] == 92 )
        return RtlpWin32NtNameToNtPathName(a2, a3, a4, a5, a6, a7);
      LOBYTE(a1) = v42;
    }
  }
  v12 = 0;
  if ( a6 )
    *a6 = 0LL;
  BaseAddress = v50;
  v13 = 520;
  if ( (a1 & 1) == 0 )
  {
    FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, 520LL, v50, a6, v41, &v47);
    if ( FullPathName_Ustr )
    {
      v15 = (wchar_t *)v50;
      while ( !v41[0] )
      {
        if ( FullPathName_Ustr <= v13 )
        {
          String2.Length = FullPathName_Ustr;
          String2.MaximumLength = v13;
          String2.Buffer = v15;
          v16 = RtlDetermineDosPathNameType_Ustr(&String2);
          goto LABEL_11;
        }
        if ( (v42 & 4) == 0 && ((v42 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
          goto LABEL_63;
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, FullPathName_Ustr);
        BaseAddress = Heap;
        v15 = (wchar_t *)Heap;
        if ( !Heap )
          return 3221225495LL;
        v13 = FullPathName_Ustr;
        FullPathName_Ustr = RtlGetFullPathName_Ustr(a2, FullPathName_Ustr, Heap, a6, v41, &v47);
        if ( !FullPathName_Ustr )
          break;
      }
    }
    v12 = -1073741773;
    goto LABEL_59;
  }
  String2 = *a2;
  v16 = RtlDetermineDosPathNameType_Ustr(&String2);
  LOWORD(FullPathName_Ustr) = String2.Length;
  v47 = v16;
LABEL_11:
  if ( v16 == 2 )
    goto LABEL_12;
  if ( v16 != 1 )
  {
    if ( v16 == 6 )
    {
      v17 = 8;
      v45 = 8LL;
      LOWORD(v44) = 8;
      goto LABEL_13;
    }
LABEL_12:
    v17 = 0;
    v45 = 0LL;
    LOWORD(v44) = 0;
LABEL_13:
    v18 = &RtlpDosDevicesPrefix;
    goto LABEL_14;
  }
  v18 = &RtlpDosDevicesUncPrefix;
  v45 = 4LL;
  v17 = 4;
  v44 = 4;
LABEL_14:
  Length = v18->Length;
  v20 = v18->Length - v17 + (unsigned __int16)FullPathName_Ustr + 2;
  if ( v20 > 0xFFFE )
  {
LABEL_63:
    v30 = BaseAddress;
    v12 = -1073741562;
    goto LABEL_33;
  }
  if ( v8 )
  {
    if ( v20 <= v8[1] )
    {
LABEL_19:
      if ( Length )
      {
        v22 = *v8;
        if ( (unsigned int)v22 + Length > v8[1] )
          goto LABEL_24;
        v23 = (void *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1));
        memmove(v23, v18->Buffer, Length);
        v24 = (unsigned __int16)(Length + *v8);
        v25 = v8[1];
        *v8 = v24;
        if ( v24 + 1 < v25 )
          *((_WORD *)v23 + ((unsigned __int64)Length >> 1)) = 0;
      }
      v22 = *v8;
LABEL_24:
      v26 = FullPathName_Ustr - v44;
      if ( (_WORD)FullPathName_Ustr != (_WORD)v44 && v26 + (unsigned int)(unsigned __int16)v22 <= v8[1] )
      {
        v27 = (void *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v22 >> 1));
        memmove(v27, &String2.Buffer[v45 / 2], v26);
        v28 = (unsigned __int16)(v26 + *v8);
        v29 = v8[1];
        *v8 = v28;
        if ( v28 + 1 < v29 )
          *((_WORD *)v27 + ((unsigned __int64)v26 >> 1)) = 0;
      }
      if ( v48 )
        *v48 = v8;
      v30 = BaseAddress;
      v31 = (unsigned __int64)*v8 >> 1;
      *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * v31) = 0;
      if ( a6 )
      {
        v31 = *a6;
        if ( *a6 )
          *a6 = *((_QWORD *)v8 + 1) + v31 + v18->Length - v45 - (_QWORD)v30;
      }
      v32 = v49;
      if ( v49 )
      {
        v33 = v47 == 5;
        *v49 = 0;
        *((_QWORD *)v32 + 1) = 0LL;
        *((_QWORD *)v32 + 2) = 0LL;
        *((_QWORD *)v32 + 3) = 0LL;
        if ( v33 )
        {
          LOBYTE(v31) = 1;
          v36 = RtlpReferenceCurrentDirectory(v31, v22);
          v37 = v36;
          if ( v36 )
          {
            if ( !RtlPrefixUnicodeString((PUNICODE_STRING)(v36 + 24), &String2, 1u) )
              goto LABEL_70;
            v38 = (_WORD *)(*((_QWORD *)v8 + 1) + *(unsigned __int16 *)(v37 + 24) + v18->Length - v45);
            *((_QWORD *)v32 + 1) = v38;
            v39 = FullPathName_Ustr - *(_WORD *)(v37 + 24);
            *(_WORD *)v32 = v39;
            if ( *v38 == 92 )
            {
              v39 -= 2;
              *(_WORD *)v32 = v39;
              *((_QWORD *)v32 + 1) = v38 + 1;
            }
            v33 = (v42 & 2) == 0;
            *((_WORD *)v32 + 1) = v39;
            if ( v33 )
            {
LABEL_70:
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)v37, 0xFFFFFFFF) == 1 )
              {
                NtClose(*(HANDLE *)(v37 + 8));
                RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, (PVOID)v37);
              }
            }
            else
            {
              *((_QWORD *)v32 + 3) = v37;
              *((_QWORD *)v32 + 2) = *(_QWORD *)(v37 + 8);
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
  v21 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v20);
  *((_QWORD *)a4 + 1) = v21;
  if ( v21 )
  {
    LOWORD(FullPathName_Ustr) = String2.Length;
    v8 = a4;
    *a4 = 0;
    a4[1] = v20;
    Length = v18->Length;
    goto LABEL_19;
  }
  v12 = -1073741801;
LABEL_59:
  v30 = BaseAddress;
LABEL_33:
  if ( v30 != v50 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v30);
  return v12;
}
