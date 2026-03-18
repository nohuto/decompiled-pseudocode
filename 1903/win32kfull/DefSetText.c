/*
 * XREFs of DefSetText @ 0x1C0022B3C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0060288 (xxxRealDefWindowProc.c)
 *     NtUserDefSetText @ 0x1C0154650 (NtUserDefSetText.c)
 * Callees:
 *     DwmAsyncTextChange @ 0x1C0020340 (DwmAsyncTextChange.c)
 *     ?getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@Z @ 0x1C0020520 (-getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEBAPEAU_LARGE_UNICODE_STRING@@AEAU3@@.c)
 *     DesktopVerifyHeapLargeUnicodeString @ 0x1C0020584 (DesktopVerifyHeapLargeUnicodeString.c)
 *     IsToplevelWindowDesktopComposed @ 0x1C0022D88 (IsToplevelWindowDesktopComposed.c)
 *     ??4?$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z @ 0x1C0022DDC (--4-$SharedPointerFieldBuffer@G@ProtectedLargeUnicodeStringWNDstrName@tagWND@@QEAAPEAGPEAG@Z.c)
 *     DesktopAlloc @ 0x1C0022E10 (DesktopAlloc.c)
 *     memmove @ 0x1C0166500 (memmove.c)
 */

__int64 __fastcall DefSetText(__int64 *a1, unsigned int *a2)
{
  __int64 v4; // rsi
  ULONG v5; // edx
  __int64 v6; // rdx
  PVOID *v7; // r15
  __int64 v8; // rax
  unsigned int v9; // esi
  BOOL v10; // r12d
  WCHAR *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  struct _LARGE_UNICODE_STRING *StrName; // rax
  void *v18; // rax
  _QWORD v19[7]; // [rsp+40h] [rbp-38h] BYREF
  ULONG BytesInUnicodeString; // [rsp+90h] [rbp+18h] BYREF

  v4 = a1[3];
  if ( !v4 || !a2 || !*((_QWORD *)a2 + 1) )
  {
    v9 = 1;
LABEL_25:
    v12 = a1[5];
LABEL_26:
    *(_DWORD *)(v12 + 184) = 0;
    goto LABEL_20;
  }
  v5 = *a2;
  if ( v5 >= 0x3FFFFFFE )
  {
    v9 = 0;
    goto LABEL_25;
  }
  if ( (a2[1] & 0x80000000) != 0 )
    v6 = 2 * v5 + 2;
  else
    v6 = (v5 & 0xFFFFFFFE) + 2;
  BytesInUnicodeString = v6;
  v7 = (PVOID *)(a1 + 23);
  if ( a1[23] )
  {
    v19[0] = 0LL;
    v19[1] = 0LL;
    StrName = tagWND::ProtectedLargeUnicodeStringWNDstrName::getStrName(
                (tagWND::ProtectedLargeUnicodeStringWNDstrName *)(a1 + 23),
                (struct _LARGE_UNICODE_STRING *)v19);
    DesktopVerifyHeapLargeUnicodeString(v4, (ULONG_PTR)StrName);
    v6 = BytesInUnicodeString;
  }
  if ( (*(_DWORD *)(a1[5] + 188) & 0x7FFFFFFFu) >= (unsigned int)v6 )
    goto LABEL_14;
  if ( *v7 )
  {
    RtlFreeHeap(*(PVOID *)(v4 + 128), 0, *v7);
    v6 = BytesInUnicodeString;
  }
  v8 = DesktopAlloc(v4, v6, 4LL);
  tagWND::ProtectedLargeUnicodeStringWNDstrName::SharedPointerFieldBuffer<unsigned short>::operator=(v7, v8);
  *(_DWORD *)(a1[5] + 184) = 0;
  if ( *v7 )
  {
    *(_DWORD *)(a1[5] + 188) ^= (BytesInUnicodeString ^ *(_DWORD *)(a1[5] + 188)) & 0x7FFFFFFF;
    LODWORD(v6) = BytesInUnicodeString;
LABEL_14:
    v9 = 1;
    v10 = 1;
    if ( *a2 )
    {
      v11 = (WCHAR *)*v7;
      if ( (a2[1] & 0x80000000) != 0 )
      {
        v10 = RtlMultiByteToUnicodeN(v11, v6, &BytesInUnicodeString, *((const CHAR **)a2 + 1), *a2) >= 0;
        LODWORD(v6) = BytesInUnicodeString + 2;
        BytesInUnicodeString += 2;
      }
      else
      {
        memmove(v11, *((const void **)a2 + 1), *a2);
        LODWORD(v6) = BytesInUnicodeString;
      }
    }
    v12 = a1[5];
    if ( v10 )
    {
      *(_DWORD *)(v12 + 184) = v6 - 2;
      *((_WORD *)*v7 + ((unsigned __int64)*(unsigned int *)(a1[5] + 184) >> 1)) = 0;
      goto LABEL_20;
    }
    v9 = 0;
    goto LABEL_26;
  }
  *(_DWORD *)(a1[5] + 188) &= 0x80000000;
  v9 = 0;
LABEL_20:
  if ( (unsigned int)IsToplevelWindowDesktopComposed(a1) )
  {
    v18 = (void *)ReferenceDwmApiPort(v14, v13, v15);
    DwmAsyncTextChange(v18, *a1);
  }
  return v9;
}
