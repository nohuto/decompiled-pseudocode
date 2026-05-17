/*
 * XREFs of sub_1800276A8 @ 0x1800276A8
 * Callers:
 *     sub_180025E00 @ 0x180025E00 (sub_180025E00.c)
 *     sub_180025F70 @ 0x180025F70 (sub_180025F70.c)
 *     RtlDosPathNameToRelativeNtPathName_U_WithStatus @ 0x180027630 (RtlDosPathNameToRelativeNtPathName_U_WithStatus.c)
 *     sub_180029BCC @ 0x180029BCC (sub_180029BCC.c)
 *     LdrAddDllDirectory @ 0x18008C200 (LdrAddDllDirectory.c)
 * Callees:
 *     RtlPrefixUnicodeString @ 0x180019FB0 (RtlPrefixUnicodeString.c)
 *     sub_180025FD8 @ 0x180025FD8 (sub_180025FD8.c)
 *     sub_180027B70 @ 0x180027B70 (sub_180027B70.c)
 *     sub_18002891C @ 0x18002891C (sub_18002891C.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
 *     RtlAllocateHeap @ 0x18003AA20 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_180076888 @ 0x180076888 (sub_180076888.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 */

__int64 __fastcall sub_1800276A8(
        int a1,
        __m128i *a2,
        unsigned __int16 *a3,
        unsigned __int16 *a4,
        unsigned __int16 **a5,
        _QWORD *a6,
        __int64 a7)
{
  unsigned __int16 *v8; // r15
  int v9; // r12d
  _WORD *v10; // rax
  unsigned int v11; // ebx
  unsigned int v12; // r13d
  unsigned int i; // eax
  unsigned int v14; // esi
  int v15; // eax
  void *v16; // r11
  const wchar_t *v17; // r13
  wchar_t v18; // di
  unsigned int v19; // r12d
  __int64 Heap; // rax
  __int64 v21; // rdx
  const void *v22; // rdx
  int v23; // ecx
  unsigned int v24; // eax
  unsigned __int16 v25; // di
  int v26; // ecx
  unsigned int v27; // eax
  _QWORD *v28; // rcx
  bool v29; // zf
  __int64 v31; // rax
  __int64 v32; // rdi
  _WORD *v33; // r12
  _WORD *v34; // rcx
  __int16 v35; // si
  __int64 v36; // rax
  _BYTE v37[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v38; // [rsp+34h] [rbp-CCh]
  unsigned __int16 *v39; // [rsp+38h] [rbp-C8h]
  int v40; // [rsp+40h] [rbp-C0h]
  __int64 v41; // [rsp+48h] [rbp-B8h]
  _BYTE *v42; // [rsp+50h] [rbp-B0h]
  __m128i v43; // [rsp+58h] [rbp-A8h] BYREF
  int v44; // [rsp+68h] [rbp-98h] BYREF
  _QWORD *v45; // [rsp+70h] [rbp-90h]
  unsigned __int16 **v46; // [rsp+78h] [rbp-88h]
  _BYTE v47[528]; // [rsp+80h] [rbp-80h] BYREF

  v8 = a3;
  v40 = a1;
  v9 = 8;
  v39 = a4;
  v46 = a5;
  v45 = a6;
  if ( a2->m128i_i16[0] > 8u )
  {
    v10 = (_WORD *)a2->m128i_i64[1];
    if ( *v10 == 92 && (v10[1] == 92 || v10[1] == 63) && v10[2] == 63 && v10[3] == 92 )
      return sub_180025FD8(a2, a3, a4, a5, a6, a7);
  }
  v11 = 0;
  if ( a6 )
    *a6 = 0LL;
  v41 = 4LL;
  v42 = v47;
  v12 = 520;
  if ( (a1 & 1) != 0 )
  {
    v43 = *a2;
    v15 = sub_18002891C(&v43);
    LOWORD(v14) = v43.m128i_i16[0];
    v44 = v15;
LABEL_11:
    if ( v15 == 1 )
    {
      v17 = (const wchar_t *)&unk_180118080;
      v9 = 4;
      LOWORD(v38) = 4;
    }
    else
    {
      v17 = L"\b\n";
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
    v18 = *v17;
    v19 = *v17 - v9 + (unsigned __int16)v14 + 2;
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
      if ( v19 <= v8[1] )
      {
LABEL_19:
        if ( v18 )
        {
          v21 = *v8;
          if ( (unsigned int)v21 + v18 > v8[1] )
            goto LABEL_24;
          v22 = (const void *)*((_QWORD *)v17 + 1);
          v39 = (unsigned __int16 *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1));
          memmove(v39, v22, v18);
          v23 = (unsigned __int16)(v18 + *v8);
          v24 = v8[1];
          *v8 = v23;
          if ( v23 + 1 < v24 )
            v39[(unsigned __int64)v18 >> 1] = 0;
        }
        v21 = *v8;
LABEL_24:
        v25 = v14 - v38;
        if ( (_WORD)v14 != (_WORD)v38 && v25 + (unsigned int)(unsigned __int16)v21 <= v8[1] )
        {
          v39 = (unsigned __int16 *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)(unsigned __int16)v21 >> 1));
          memmove(v39, (const void *)(v43.m128i_i64[1] + v41), v25);
          v26 = (unsigned __int16)(v25 + *v8);
          v27 = v8[1];
          *v8 = v26;
          if ( v26 + 1 < v27 )
            v39[(unsigned __int64)v25 >> 1] = 0;
        }
        if ( v46 )
          *v46 = v8;
        *(_WORD *)(*((_QWORD *)v8 + 1) + 2 * ((unsigned __int64)*v8 >> 1)) = 0;
        v28 = v45;
        if ( v45 && *v45 )
          *v45 += *((_QWORD *)v8 + 1) + *v17 - v41 - (_QWORD)v42;
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
            v31 = sub_180076888(v28, v21);
            v32 = v31;
            if ( v31 )
            {
              v33 = (_WORD *)(v31 + 24);
              if ( !RtlPrefixUnicodeString((unsigned __int16 *)(v31 + 24), (__int64)&v43, 1) )
                goto LABEL_66;
              v34 = (_WORD *)(*((_QWORD *)v8 + 1) + *v17 + (unsigned __int16)*v33 - v41);
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
                  ZwClose(*(_QWORD *)(v32 + 8));
                  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v32);
                }
              }
              else
              {
                *(_QWORD *)(a7 + 24) = v32;
                *(_QWORD *)(a7 + 16) = *(_QWORD *)(v32 + 8);
              }
            }
            else
            {
              RtlLeaveCriticalSection(&unk_180164FE0);
            }
          }
        }
        goto LABEL_33;
      }
      if ( v16 )
      {
LABEL_17:
        Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, v19);
        v8 = v39;
        *((_QWORD *)v39 + 1) = Heap;
        if ( Heap )
        {
          LOWORD(v14) = v43.m128i_i16[0];
          *v8 = 0;
          v8[1] = v19;
          v18 = *v17;
          goto LABEL_19;
        }
        v11 = -1073741801;
LABEL_33:
        if ( v42 != v47 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v42);
        return v11;
      }
    }
LABEL_60:
    v11 = -1073741562;
    goto LABEL_33;
  }
  for ( i = sub_180027B70(a2, 520LL, v47, a6, v37, &v44); ; i = sub_180027B70(a2, v14, v36, v45, v37, &v44) )
  {
    v14 = i;
    if ( !i || v37[0] )
    {
      v11 = -1073741773;
      goto LABEL_33;
    }
    if ( i <= v12 )
    {
      v43.m128i_i64[1] = (__int64)v42;
      v43.m128i_i16[0] = i;
      v43.m128i_i16[1] = v12;
      v15 = sub_18002891C(&v43);
      v16 = v39;
      goto LABEL_11;
    }
    if ( (v40 & 4) == 0 && ((v40 & 8) != 0 || (NtCurrentPeb()->BitField & 0x80u) == 0) )
      goto LABEL_60;
    v36 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0LL, i);
    v42 = (_BYTE *)v36;
    if ( !v36 )
      break;
    v12 = v14;
  }
  return 3221225495LL;
}
