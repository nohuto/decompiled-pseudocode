/*
 * XREFs of DefSetText @ 0x1C006A46C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0066C18 (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x1C014C540 (NtUserDefSetText.c)
 * Callees:
 *     IsToplevelWindowDesktopComposed @ 0x1C00431A8 (IsToplevelWindowDesktopComposed.c)
 *     DesktopAlloc @ 0x1C006B5F0 (DesktopAlloc.c)
 *     ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z @ 0x1C006BA90 (--4-$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C00F9D28 (DesktopVerifyHeapLargeUnicodeString.c)
 *     DwmAsyncTextChange @ 0x1C010E150 (DwmAsyncTextChange.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 */

__int64 __fastcall DefSetText(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rsi
  ULONG v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rdx
  PVOID *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned int v11; // esi
  BOOL v12; // r12d
  WCHAR *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rdx
  void *v19; // rax
  int v20; // [rsp+40h] [rbp-38h] BYREF
  int v21; // [rsp+44h] [rbp-34h]
  __int64 v22; // [rsp+48h] [rbp-30h]
  ULONG BytesInUnicodeString; // [rsp+90h] [rbp+18h] BYREF

  v4 = a1[3];
  if ( !v4 || !a2 || !*((_QWORD *)a2 + 1) )
  {
    v11 = 1;
LABEL_25:
    *(_DWORD *)(a1[5] + 184LL) = 0;
    goto LABEL_20;
  }
  v5 = *a2;
  if ( *a2 >= 0x3FFFFFFE )
  {
    v11 = 0;
    goto LABEL_25;
  }
  if ( (a2[1] & 0x80000000) != 0 )
    v6 = 2 * v5;
  else
    v6 = v5 & 0xFFFFFFFE;
  v7 = v6 + 2;
  BytesInUnicodeString = v6 + 2;
  v8 = (PVOID *)(a1 + 21);
  if ( a1[21] )
  {
    v22 = a1[21];
    v18 = a1[5];
    v20 = *(_DWORD *)(v18 + 184);
    v21 ^= (v21 ^ *(_DWORD *)(v18 + 188)) & 0x7FFFFFFF;
    v21 = *(_DWORD *)(v18 + 188) ^ (*(_DWORD *)(v18 + 188) ^ v21) & 0x7FFFFFFF;
    DesktopVerifyHeapLargeUnicodeString(v4, &v20);
    v7 = BytesInUnicodeString;
  }
  if ( (*(_DWORD *)(a1[5] + 188LL) & 0x7FFFFFFFu) >= (unsigned int)v7 )
    goto LABEL_14;
  if ( *v8 )
  {
    RtlFreeHeap(*(PVOID *)(v4 + 128), 0, *v8);
    v7 = BytesInUnicodeString;
  }
  v9 = DesktopAlloc(v4, v7, 4LL);
  tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(v8, v9);
  *(_DWORD *)(a1[5] + 184LL) = 0;
  v10 = a1[5];
  if ( *v8 )
  {
    *(_DWORD *)(v10 + 188) ^= (*(_DWORD *)(v10 + 188) ^ BytesInUnicodeString) & 0x7FFFFFFF;
    LODWORD(v7) = BytesInUnicodeString;
LABEL_14:
    v11 = 1;
    v12 = 1;
    if ( *a2 )
    {
      v13 = (WCHAR *)*v8;
      if ( (a2[1] & 0x80000000) != 0 )
      {
        v12 = RtlMultiByteToUnicodeN(v13, v7, &BytesInUnicodeString, *((const CHAR **)a2 + 1), *a2) >= 0;
        LODWORD(v7) = BytesInUnicodeString + 2;
        BytesInUnicodeString += 2;
      }
      else
      {
        memmove(v13, *((const void **)a2 + 1), *a2);
        LODWORD(v7) = BytesInUnicodeString;
      }
    }
    v14 = a1[5];
    if ( v12 )
    {
      *(_DWORD *)(v14 + 184) = v7 - 2;
      *((_WORD *)*v8 + ((unsigned __int64)*(unsigned int *)(a1[5] + 184LL) >> 1)) = 0;
      goto LABEL_20;
    }
    *(_DWORD *)(v14 + 184) = 0;
    goto LABEL_29;
  }
  *(_DWORD *)(v10 + 188) &= 0x80000000;
LABEL_29:
  v11 = 0;
LABEL_20:
  if ( (unsigned int)IsToplevelWindowDesktopComposed((__int64)a1) )
  {
    v19 = (void *)ReferenceDwmApiPort(v16, v15);
    DwmAsyncTextChange(v19);
  }
  return v11;
}
