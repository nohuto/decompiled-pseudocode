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

__int64 __fastcall sub_180013124(char a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v4; // r14d
  int v7; // ebx
  __int64 Heap; // rax
  wchar_t *v9; // rsi
  unsigned int i; // r15d
  wchar_t *v11; // r12
  const WCHAR *v13; // r12
  _WORD v14[2]; // [rsp+30h] [rbp-40h] BYREF
  unsigned __int16 v15; // [rsp+34h] [rbp-3Ch] BYREF
  __int64 v16; // [rsp+38h] [rbp-38h] BYREF
  const WCHAR *v17; // [rsp+40h] [rbp-30h]
  _DWORD v18[2]; // [rsp+48h] [rbp-28h] BYREF
  wchar_t *String1; // [rsp+50h] [rbp-20h]
  _DWORD v20[2]; // [rsp+58h] [rbp-18h] BYREF
  wchar_t *String2; // [rsp+60h] [rbp-10h]
  char v23; // [rsp+C0h] [rbp+50h] BYREF

  v18[1] = 0;
  v4 = (int)a4;
  v20[1] = 0;
  v16 = 0LL;
  v17 = 0LL;
  v7 = 0;
  v14[0] = 0;
  if ( !a3 || !a4 || !*a4 || !a2 )
    return 3221225485LL;
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8LL, 510LL);
  v9 = (wchar_t *)Heap;
  if ( !Heap )
    return 3221225495LL;
  v20[0] = 11141120;
  String2 = (wchar_t *)(Heap + 170);
  if ( (int)RtlpGetSystemDefaultUILanguage(&v15, a2) >= 0 && (unsigned __int8)RtlLCIDToCultureName(v15, v20) )
  {
    for ( i = 0; i < *(unsigned __int16 *)(a3 + 4); ++i )
    {
      String1 = v9;
      v18[0] = 11141120;
      v7 = sub_180015F28(a2, *(_QWORD *)(a3 + 24) + 6LL * i, v18);
      if ( v7 < 0 )
        break;
      v11 = String1;
      v7 = sub_180016590(v4, a2, 0, (unsigned int)v14, (__int64)String1);
      if ( v7 < 0 )
        break;
      if ( a1 || !wcsicmp(v11, String2) )
      {
        v23 = 0;
        v17 = v9 + 170;
        LODWORD(v16) = 11141120;
        v7 = sub_180013008(a2, v11, (__int64)&v16, &v23);
        if ( v7 < 0 )
          break;
        do
        {
          if ( !(_WORD)v16 || v23 )
            break;
          v13 = v17;
          v7 = sub_180016590(v4, a2, 0, (unsigned int)v14, (__int64)v17);
          if ( v7 < 0 )
            goto LABEL_16;
          v7 = sub_180013008(a2, v13, (__int64)&v16, &v23);
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
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v9);
  return (unsigned int)v7;
}
