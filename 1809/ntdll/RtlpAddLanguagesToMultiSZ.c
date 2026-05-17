/*
 * XREFs of RtlpAddLanguagesToMultiSZ @ 0x1800EF2A4
 * Callers:
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EF2A4 (RtlpAddLanguagesToMultiSZ.c)
 *     RtlpMUIGetAllInstalledLang @ 0x1800F047C (RtlpMUIGetAllInstalledLang.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18000F2A0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     LdrpCalcAllocSize @ 0x18003586C (LdrpCalcAllocSize.c)
 *     RtlpLangNameInMultiSzString @ 0x18003B314 (RtlpLangNameInMultiSzString.c)
 *     RtlpGetNameFromLangInfoNode @ 0x1800859F0 (RtlpGetNameFromLangInfoNode.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     memmove @ 0x1800A6DC0 (memmove.c)
 *     RtlpAddLanguagesToMultiSZ @ 0x1800EF2A4 (RtlpAddLanguagesToMultiSZ.c)
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
  void *Heap; // rax
  unsigned __int16 v13; // bx
  unsigned int v14; // r8d
  int v15; // r14d
  unsigned int v16; // eax
  __int64 v17; // rax
  wchar_t *v18; // rax
  wchar_t *v19; // rbx
  char *v20; // rsi
  int v21; // eax
  _QWORD *v22; // r14
  unsigned __int16 v23; // bx
  int v24; // edx
  _QWORD *v25; // r9
  char v26; // [rsp+40h] [rbp-61h]
  int v28; // [rsp+50h] [rbp-51h] BYREF
  void *Src; // [rsp+58h] [rbp-49h]
  __int64 v30; // [rsp+60h] [rbp-41h]
  unsigned __int64 v31; // [rsp+68h] [rbp-39h]
  _QWORD v32[3]; // [rsp+70h] [rbp-31h] BYREF
  int v33; // [rsp+88h] [rbp-19h]

  v30 = a6;
  v26 = 1;
  memset(v32, 0, sizeof(v32));
  v10 = 1;
  v33 = 0;
  if ( a1 && a2 && a3 && a4 && a5 && a6 )
  {
    if ( a7 > 2u )
      return 1;
    Heap = (void *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 170LL);
    v31 = (unsigned __int64)Heap;
    if ( !Heap )
      return v10;
    Src = Heap;
    v28 = 11141120;
    if ( (int)RtlpGetNameFromLangInfoNode(a5, (__int64)a4, (__int64)&v28) >= 0 )
    {
      v13 = v28;
      v14 = *a2;
      v15 = (unsigned __int16)v28;
      v16 = *a2 + (unsigned __int16)v28 + 2;
      if ( v16 >= (unsigned __int16)v28 && v16 >= v14 )
      {
        if ( v16 <= *a3 )
        {
LABEL_17:
          v20 = (char *)*a1 + v14;
          if ( RtlpLangNameInMultiSzString(*a1, (wchar_t *)Src) )
          {
            v22 = (_QWORD *)v30;
          }
          else
          {
            memmove(v20, Src, v13);
            v21 = v15 + 2;
            v22 = (_QWORD *)v30;
            *(_WORD *)&v20[v13] = 0;
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
                WORD2(v32[0]) = a4[v23 + 6];
                goto LABEL_28;
              }
              if ( v24 == 3 )
              {
                HIWORD(v32[0]) = a4[v23 + 6];
LABEL_28:
                v25 = v32;
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
          v18 = (wchar_t *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v17);
          v19 = v18;
          if ( v18 )
          {
            memmove(v18, *a1, *a2);
            RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)*a1);
            *a1 = v19;
            v13 = v28;
            *a3 *= 2;
            v14 = *a2;
            goto LABEL_17;
          }
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0LL);
        }
      }
    }
LABEL_35:
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v31);
    return v10;
  }
  return 0;
}
