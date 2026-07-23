/*
 * XREFs of sub_180013124 @ 0x180013124
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013B50 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     sub_180013008 @ 0x180013008 (sub_180013008.c)
 *     sub_180015F28 @ 0x180015F28 (sub_180015F28.c)
 *     RtlLCIDToCultureName @ 0x180016330 (RtlLCIDToCultureName.c)
 *     sub_180016590 @ 0x180016590 (sub_180016590.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpGetSystemDefaultUILanguage @ 0x1800730B0 (RtlpGetSystemDefaultUILanguage.c)
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 */

__int64 __fastcall sub_180013124(char a1, DWORD *a2, __int64 a3, _QWORD *a4)
{
  int v4; // r14d
  int v7; // ebx
  wchar_t *Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r15d
  wchar_t *v11; // r12
  const WCHAR *Buffer; // r12
  _WORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  LANGID DefaultUILanguageId; // [rsp+34h] [rbp-3Ch] BYREF
  _UNICODE_STRING v16; // [rsp+38h] [rbp-38h] BYREF
  _DWORD v17[2]; // [rsp+48h] [rbp-28h] BYREF
  wchar_t *String1; // [rsp+50h] [rbp-20h]
  _UNICODE_STRING String; // [rsp+58h] [rbp-18h] BYREF
  char v21; // [rsp+C0h] [rbp+50h] BYREF

  v17[1] = 0;
  v4 = (int)a4;
  *(_DWORD *)(&String.MaximumLength + 1) = 0;
  *(_QWORD *)&v16.Length = 0LL;
  v16.Buffer = 0LL;
  v7 = 0;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x1FEuLL);
  v9 = Heap;
  if ( !Heap )
    return 3221225495LL;
  *(_DWORD *)&String.Length = 11141120;
  String.Buffer = Heap + 85;
  if ( RtlpGetSystemDefaultUILanguage((LANGID)&DefaultUILanguageId, a2) >= 0
    && RtlLCIDToCultureName(DefaultUILanguageId, &String) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      String1 = v9;
      v17[0] = 11141120;
      v7 = sub_180015F28(a2, *(_QWORD *)(a3 + 24) + 6LL * i, v17);
      if ( v7 < 0 )
        break;
      v11 = String1;
      v7 = sub_180016590(v4, (_DWORD)a2, 0, (unsigned int)v14, (__int64)String1);
      if ( v7 < 0 )
        break;
      if ( a1 || !wcsicmp(v11, String.Buffer) )
      {
        v21 = 0;
        v16.Buffer = v9 + 170;
        *(_DWORD *)&v16.Length = 11141120;
        v7 = sub_180013008((__int64)a2, v11, &v16, &v21);
        if ( v7 < 0 )
          break;
        do
        {
          if ( !v16.Length || v21 )
            break;
          Buffer = v16.Buffer;
          v7 = sub_180016590(v4, (_DWORD)a2, 0, (unsigned int)v14, (__int64)v16.Buffer);
          if ( v7 < 0 )
            goto LABEL_16;
          v7 = sub_180013008((__int64)a2, Buffer, &v16, &v21);
        }
        while ( v7 >= 0 );
        if ( v7 < 0 )
          break;
      }
    }
  }
  else
  {
    v7 = -1073741823;
  }
LABEL_16:
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v9);
  return (unsigned int)v7;
}
