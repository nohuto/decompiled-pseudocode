/*
 * XREFs of ExpCovQueryLoadedModule @ 0x1408D9124
 * Callers:
 *     ExpCovQueryInfoCallBack @ 0x1408D8B80 (ExpCovQueryInfoCallBack.c)
 * Callees:
 *     DbgPrintEx @ 0x140160560 (DbgPrintEx.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     ExpCovReadFriendlyName @ 0x1408D9298 (ExpCovReadFriendlyName.c)
 */

__int64 __fastcall ExpCovQueryLoadedModule(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int *a6)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v11; // edi
  unsigned int v12; // edx
  unsigned __int16 Length; // bp
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // rbx
  unsigned __int16 MaximumLength; // ax
  wchar_t *Buffer; // rdx
  void *v19; // rcx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-38h] BYREF

  v6 = *(_QWORD *)(a1 + 128);
  v7 = a1 + 72;
  UnicodeString.Buffer = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  v11 = ExpCovReadFriendlyName(v6, a1 + 72, &UnicodeString);
  if ( v11 >= 0 )
  {
    v12 = *(_DWORD *)(a1 + 124);
    if ( !a2 )
      v12 -= *(_DWORD *)(v6 + 28);
    Length = UnicodeString.Length;
    if ( v12 < 0xFFFFFFE0 )
    {
      v14 = UnicodeString.Length + v12 + 32;
      if ( v14 < 0x20 )
        v14 = -1;
    }
    else
    {
      v14 = -1;
    }
    *a6 = v14;
    if ( v14 == -1 )
    {
      DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating RequiredLengthForCurrentModule for %wZ\n", v7);
LABEL_10:
      v11 = -1073741675;
      goto LABEL_17;
    }
    v15 = *a5 + v14;
    if ( v15 < *a5 )
    {
      DbgPrintEx(0x7Eu, 2u, "COV: Overflow when calculating total required length for %wZ\n", v7);
      goto LABEL_10;
    }
    *a5 = v15;
    if ( a3 >= v15 )
    {
      *(_DWORD *)a4 = v14;
      *(_DWORD *)(a4 + 4) = 1;
      *(_DWORD *)(a4 + 24) = v12;
      v16 = v12;
      memmove((void *)(a4 + 28), *(const void **)(a1 + 128), v12);
      MaximumLength = UnicodeString.MaximumLength;
      Buffer = UnicodeString.Buffer;
      v19 = (void *)(v16 + a4 + 32);
      *(_QWORD *)(a4 + 16) = v19;
      *(_WORD *)(a4 + 8) = Length;
      *(_WORD *)(a4 + 10) = MaximumLength;
      memmove(v19, Buffer, Length);
      if ( a2 )
        memset((void *)(v6 + *(unsigned int *)(v6 + 32)), 0, *(unsigned int *)(v6 + 28));
    }
    else
    {
      v11 = -1073741820;
    }
  }
LABEL_17:
  if ( UnicodeString.Buffer )
    RtlFreeAnsiString(&UnicodeString);
  return (unsigned int)v11;
}
