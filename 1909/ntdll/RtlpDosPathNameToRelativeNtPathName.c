/*
 * XREFs of RtlpDosPathNameToRelativeNtPathName @ 0x1800276A8
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x180025E00 (RtlDoesFileExists_UstrEx.c)
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x180025F70 (RtlpDosPathNameToRelativeNtPathName_U.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180027630 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     RtlDosPathNameToRelativeNtPathName @ 0x180029BCC (RtlDosPathNameToRelativeNtPathName.c)
 *     LdrAddDllDirectory @ 0x18008C8A0 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180019FB0 (RtlPrefixUnicodeString.c)
 *     RtlpWin32NtNameToNtPathName @ 0x180025FD8 (RtlpWin32NtNameToNtPathName.c)
 *     RtlGetFullPathName_Ustr @ 0x180027B70 (RtlGetFullPathName_Ustr.c)
 *     RtlDetermineDosPathNameType_Ustr @ 0x18002891C (RtlDetermineDosPathNameType_Ustr.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpReferenceCurrentDirectory @ 0x180076D08 (RtlpReferenceCurrentDirectory.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 */

__int64 __fastcall RtlpDosPathNameToRelativeNtPathName(
        int a1,
        _UNICODE_STRING *a2,
        _UNICODE_STRING *a3,
        _UNICODE_STRING *a4,
        _UNICODE_STRING **a5,
        _QWORD *a6,
        __int64 a7)
{
  _UNICODE_STRING *v8; // r15
  int v9; // r12d
  wchar_t *Buffer; // rax
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  unsigned int i; // eax
  unsigned int v14; // esi
  int v15; // eax
  _UNICODE_STRING *v16; // r11
  const _UNICODE_STRING *v17; // r13
  unsigned __int16 Length; // di
  unsigned int v19; // r12d
  wchar_t *Heap; // rax
  __int64 v21; // rdx
  wchar_t *v22; // rdx
  int v23; // ecx
  unsigned int MaximumLength; // eax
  unsigned __int16 v25; // di
  int v26; // ecx
  unsigned int v27; // eax
  _QWORD *v28; // rcx
  bool v29; // zf
  __int64 v31; // rax
  HANDLE *v32; // rdi
  _WORD *v33; // r12
  _WORD *v34; // rcx
  __int16 v35; // si
  PVOID v36; // rax
  _BYTE v37[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh]
  _UNICODE_STRING *v39; // [rsp+38h] [rbp-C8h]
  int v40; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v41; // [rsp+48h] [rbp-B8h]
  PVOID BaseAddress; // [rsp+50h] [rbp-B0h]
  _UNICODE_STRING String2; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v45; // [rsp+70h] [rbp-90h]
  _UNICODE_STRING **v46; // [rsp+78h] [rbp-88h]
  _BYTE v47[528]; // [rsp+80h] [rbp-80h] BYREF

  v8 = a3;
  v40 = a1;
  v9 = 8;
  v39 = a4;
  v46 = a5;
  v45 = a6;
  if ( a2->Length > 8u )
  {
    Buffer = a2->Buffer;
    if ( *Buffer == 92 && (Buffer[1] == 92 || Buffer[1] == 63) && Buffer[2] == 63 && Buffer[3] == 92 )
      return RtlpWin32NtNameToNtPathName(a2, a3, a4, a5, a6, a7);
  }
  v11 = 0;
  if ( a6 )
    *a6 = 0LL;
  v41 = 4LL;
  BaseAddress = v47;
  v12 = 520;
  if ( (a1 & 1) != 0 )
  {
    String2 = *a2;
    v15 = RtlDetermineDosPathNameType_Ustr(&String2);
    LOWORD(v14) = String2.Length;
    v44 = v15;
LABEL_11:
    if ( v15 == 1 )
    {
      v17 = &RtlpDosDevicesUncPrefix;
      v9 = 4;
      LOWORD(v38) = 4;
    }
    else
    {
      v17 = &RtlpDosDevicesPrefix;
      if ( v15 == 6 )
      {
        v41 = 8LL;
        LOWORD(v38) = 8;
      }
      else
      {
        v41 = 0LL;
        v9 = 0;
        v38 = 0;
      }
    }
    Length = v17->Length;
    v19 = v17->Length - v9 + (unsigned __int16)v14 + 2;
    if ( v19 <= 0xFFFE )
    {
      if ( !v8 )
      {
        if ( !v16 )
        {
          v11 = -1073741811;
          goto LABEL_33;
        }
        goto LABEL_17;
      }
      if ( v19 <= v8->MaximumLength )
      {
LABEL_19:
        if ( Length )
        {
          v21 = v8->Length;
          if ( (unsigned int)v21 + Length > v8->MaximumLength )
            goto LABEL_24;
          v22 = v17->Buffer;
          v39 = (_UNICODE_STRING *)&v8->Buffer[(unsigned __int64)v8->Length >> 1];
          memmove(v39, v22, Length);
          v23 = (unsigned __int16)(Length + v8->Length);
          MaximumLength = v8->MaximumLength;
          v8->Length = v23;
          if ( v23 + 1 < MaximumLength )
            *(&v39->Length + ((unsigned __int64)Length >> 1)) = 0;
        }
        v21 = v8->Length;
LABEL_24:
        v25 = v14 - v38;
        if ( (_WORD)v14 != (_WORD)v38 && v25 + (unsigned int)(unsigned __int16)v21 <= v8->MaximumLength )
        {
          v39 = (_UNICODE_STRING *)&v8->Buffer[(unsigned __int64)(unsigned __int16)v21 >> 1];
          memmove(v39, &String2.Buffer[v41 / 2], v25);
          v26 = (unsigned __int16)(v25 + v8->Length);
          v27 = v8->MaximumLength;
          v8->Length = v26;
          if ( v26 + 1 < v27 )
            *(&v39->Length + ((unsigned __int64)v25 >> 1)) = 0;
        }
        if ( v46 )
          *v46 = v8;
        v8->Buffer[(unsigned __int64)v8->Length >> 1] = 0;
        v28 = v45;
        if ( v45 && *v45 )
          *v45 += (char *)v8->Buffer + v17->Length - v41 - (_QWORD)BaseAddress;
        if ( a7 )
        {
          v29 = v44 == 5;
          *(_DWORD *)a7 = 0;
          *(_QWORD *)(a7 + 8) = 0LL;
          *(_QWORD *)(a7 + 16) = 0LL;
          *(_QWORD *)(a7 + 24) = 0LL;
          if ( v29 )
          {
            LOBYTE(v28) = 1;
            v31 = RtlpReferenceCurrentDirectory(v28, v21);
            v32 = (HANDLE *)v31;
            if ( v31 )
            {
              v33 = (_WORD *)(v31 + 24);
              if ( !RtlPrefixUnicodeString((PUNICODE_STRING)(v31 + 24), &String2, 1u) )
                goto LABEL_66;
              v34 = (wchar_t *)((char *)v8->Buffer + v17->Length + (unsigned __int16)*v33 - v41);
              *(_QWORD *)(a7 + 8) = v34;
              v35 = v14 - *v33;
              *(_WORD *)a7 = v35;
              if ( *v34 == 92 )
              {
                v35 -= 2;
                *(_WORD *)a7 = v35;
                *(_QWORD *)(a7 + 8) = v34 + 1;
              }
              v29 = (v40 & 2) == 0;
              *(_WORD *)(a7 + 2) = v35;
              if ( v29 )
              {
LABEL_66:
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v32, 0xFFFFFFFF) == 1 )
                {
                  NtClose(v32[1]);
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v32);
                }
              }
              else
              {
                *(_QWORD *)(a7 + 24) = v32;
                *(_QWORD *)(a7 + 16) = v32[1];
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
      if ( v16 )
      {
LABEL_17:
        Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, v19);
        v8 = v39;
        v39->Buffer = Heap;
        if ( Heap )
        {
          LOWORD(v14) = String2.Length;
          v8->Length = 0;
          v8->MaximumLength = v19;
          Length = v17->Length;
          goto LABEL_19;
        }
        v11 = -1073741801;
LABEL_33:
        if ( BaseAddress != v47 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
        return v11;
      }
    }
LABEL_60:
    v11 = -1073741562;
    goto LABEL_33;
  }
  for ( i = RtlGetFullPathName_Ustr(a2, 520LL, v47, a6, v37, &v44);
        ;
        i = RtlGetFullPathName_Ustr(a2, v14, v36, v45, v37, &v44) )
  {
    v14 = i;
    if ( !i || v37[0] )
    {
      v11 = -1073741773;
      goto LABEL_33;
    }
    if ( i <= v12 )
    {
      String2.Buffer = (wchar_t *)BaseAddress;
      String2.Length = i;
      String2.MaximumLength = v12;
      v15 = RtlDetermineDosPathNameType_Ustr(&String2);
      v16 = v39;
      goto LABEL_11;
    }
    if ( (v40 & 4) == 0 && ((v40 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
      goto LABEL_60;
    v36 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, i);
    BaseAddress = v36;
    if ( !v36 )
      break;
    v12 = v14;
  }
  return 3221225495LL;
}
