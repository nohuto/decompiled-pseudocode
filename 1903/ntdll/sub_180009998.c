/*
 * XREFs of sub_180009998 @ 0x180009998
 * Callers:
 *     sub_180009910 @ 0x180009910 (sub_180009910.c)
 * Callees:
 *     sub_180003214 @ 0x180003214 (sub_180003214.c)
 *     RtlAppendUnicodeStringToString @ 0x180026140 (RtlAppendUnicodeStringToString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18006D6B8 @ 0x18006D6B8 (sub_18006D6B8.c)
 *     ZwQueryLicenseValue @ 0x18009F070 (ZwQueryLicenseValue.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     memset @ 0x1800A3600 (memset.c)
 */

__int64 __fastcall sub_180009998(_WORD *a1, UNICODE_STRING *a2)
{
  const void *Heap; // r14
  unsigned __int16 v5; // bx
  wchar_t *v6; // rax
  wchar_t *v7; // r15
  int appended; // ebx
  unsigned int v10; // esi
  unsigned int v11; // r15d
  __int64 v12; // rdx
  wchar_t *v13; // rax
  wchar_t *v14; // rsi
  unsigned __int16 v15; // ax
  UNICODE_STRING UnicodeString; // [rsp+30h] [rbp-10h] BYREF
  size_t Size; // [rsp+80h] [rbp+40h] BYREF
  int v18; // [rsp+90h] [rbp+50h] BYREF
  __int64 v19; // [rsp+98h] [rbp+58h] BYREF

  Heap = 0LL;
  LODWORD(Size) = 0;
  v18 = 0;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  if ( !a1 || !a2 )
  {
    appended = -1073741811;
LABEL_7:
    if ( appended >= 0 )
      goto LABEL_12;
    goto LABEL_8;
  }
  v5 = *a1 + 56;
  v6 = (wchar_t *)sub_18006D6B8(v5, a2);
  v7 = v6;
  if ( !v6 )
    goto LABEL_13;
  memset(v6, 0, v5);
  UnicodeString.Buffer = v7;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.MaximumLength = v5;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, L"68");
  if ( appended < 0 )
    goto LABEL_8;
  appended = RtlAppendUnicodeStringToString(&UnicodeString, a1);
  if ( appended < 0 )
    goto LABEL_8;
  appended = ZwQueryLicenseValue(&UnicodeString, &v18, 0LL, 0LL, &Size);
  if ( appended != -1073741789 )
    goto LABEL_7;
  v10 = Size;
  v11 = Size;
  Heap = (const void *)RtlAllocateHeap(
                         NtCurrentPeb()->ProcessHeap,
                         (unsigned int)(dword_18016542C + 1310720),
                         (unsigned int)Size);
  appended = ZwQueryLicenseValue(&UnicodeString, &v18, Heap, v10, &Size);
  if ( appended < 0 )
  {
LABEL_8:
    if ( a2 )
      RtlFreeUnicodeString(a2);
    goto LABEL_10;
  }
  if ( v18 != 1 || !v10 || (v10 & 1) != 0 )
  {
    appended = -1073741823;
    goto LABEL_8;
  }
  v13 = (wchar_t *)sub_18006D6B8(v10, v12);
  v14 = v13;
  if ( !v13 )
  {
LABEL_13:
    appended = -1073741801;
    goto LABEL_8;
  }
  memmove(v13, Heap, v11);
  *(_QWORD *)&a2->Length = 0LL;
  a2->Buffer = 0LL;
  appended = sub_180003214(v14, 0x7FFFLL, &v19);
  if ( appended < 0 )
    goto LABEL_8;
  v15 = 2 * v19;
  a2->Buffer = v14;
  a2->Length = v15;
  a2->MaximumLength = v15 + 2;
  appended = 0;
LABEL_10:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, Heap);
LABEL_12:
  RtlFreeUnicodeString(&UnicodeString);
  return (unsigned int)appended;
}
