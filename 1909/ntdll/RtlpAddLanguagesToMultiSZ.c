/*
 * XREFs of RtlpAddLanguagesToMultiSZ @ 0x1800EBF8C
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBF8C (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800ED4B0 (RtlpMUIGetAllInstalledLang.c)
 * Callees:
 *     RtlpLangNameInMultiSzString @ 0x1800129A4 (RtlpLangNameInMultiSzString.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     LdrpCalcAllocSize @ 0x180059E04 (LdrpCalcAllocSize.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800820E0 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x18008CE50 (__security_check_cookie.c)
 *     memmove @ 0x1800A3A80 (memmove.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EBF8C (RtlpAddLanguagesToMultiSZ.c)
 */

char __fastcall RtlpAddLanguagesToMultiSZ(
        wchar_t **a1,
        unsigned int *a2,
        unsigned int *a3,
        _WORD *a4,
        __int64 a5,
        __int64 a6,
        unsigned __int16 a7)
{
  char v10; // si
  PVOID Heap; // rax
  unsigned __int16 Length; // bx
  unsigned int v14; // r8d
  int v15; // r14d
  unsigned int v16; // eax
  SIZE_T v17; // rax
  wchar_t *v18; // rax
  wchar_t *v19; // rbx
  char *v20; // rsi
  int v21; // eax
  _QWORD *v22; // r14
  unsigned __int16 v23; // bx
  int v24; // edx
  _QWORD *v25; // r9
  char v26; // [rsp+40h] [rbp-61h]
  _UNICODE_STRING v28; // [rsp+50h] [rbp-51h] BYREF
  __int64 v29; // [rsp+60h] [rbp-41h]
  PVOID BaseAddress; // [rsp+68h] [rbp-39h]
  _QWORD v31[3]; // [rsp+70h] [rbp-31h] BYREF
  int v32; // [rsp+88h] [rbp-19h]

  v29 = a6;
  v26 = 1;
  memset(v31, 0, sizeof(v31));
  v10 = 1;
  v32 = 0;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0xAAuLL);
    BaseAddress = Heap;
    if ( !Heap )
      return v10;
    v28.Buffer = (wchar_t *)Heap;
    *(_DWORD *)&v28.Length = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, &v28) >= 0 )
    {
      Length = v28.Length;
      v14 = *a2;
      v15 = v28.Length;
      v16 = *a2 + v28.Length + 2;
      if ( v16 >= v28.Length && v16 >= v14 )
      {
        if ( v16 <= *a3 )
        {
LABEL_17:
          v20 = (char *)*a1 + v14;
          if ( RtlpLangNameInMultiSzString(*a1, v28.Buffer) )
          {
            v22 = (_QWORD *)v29;
          }
          else
          {
            memmove(v20, v28.Buffer, Length);
            v21 = v15 + 2;
            v22 = (_QWORD *)v29;
            *(_WORD *)&v20[Length] = 0;
            *a2 += v21;
            ++*v22;
          }
          if ( (*a4 & 0x402) != 0 )
          {
            v23 = 0;
            while ( 1 )
            {
              v24 = ((unsigned __int16)a4[4] >> (2 * v23)) & 3;
              if ( v24 == 2 )
                break;
              if ( v24 == 1 )
              {
                WORD2(v31[0]) = a4[v23 + 6];
                goto LABEL_28;
              }
              if ( v24 == 3 )
              {
                HIWORD(v31[0]) = a4[v23 + 6];
LABEL_28:
                v25 = v31;
LABEL_30:
                v10 = RtlpAddLanguagesToMultiSZ(
                        (_DWORD)a1,
                        (_DWORD)a2,
                        (_DWORD)a3,
                        (_DWORD)v25,
                        a5,
                        (__int64)v22,
                        a7 + 1);
                v26 = v10;
                if ( !v10 )
                  goto LABEL_35;
                goto LABEL_31;
              }
              v10 = v26;
LABEL_31:
              if ( ++v23 >= 4u )
                goto LABEL_35;
            }
            v25 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(a5 + 24) + 16LL) + 28LL * (__int16)a4[v23 + 6]);
            goto LABEL_30;
          }
          v10 = 1;
          goto LABEL_35;
        }
        v17 = LdrpCalcAllocSize(*a3, 2uLL);
        if ( v17 )
        {
          v18 = (wchar_t *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v17);
          v19 = v18;
          if ( v18 )
          {
            memmove(v18, *a1, *a2);
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, *a1);
            *a1 = v19;
            Length = v28.Length;
            *a3 *= 2;
            v14 = *a2;
            goto LABEL_17;
          }
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, 0LL);
        }
      }
    }
LABEL_35:
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return v10;
  }
  return 0;
}
