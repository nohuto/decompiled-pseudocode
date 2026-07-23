/*
 * XREFs of PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x14087101C
 * Callers:
 *     PopDiagIdleWakeAccountingStop @ 0x140870F28 (PopDiagIdleWakeAccountingStop.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     RtlUnicodeStringCat @ 0x14012B59C (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringPrintf @ 0x14015D81C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x14015D890 (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PpmConvertTimeTo @ 0x1402E3394 (PpmConvertTimeTo.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     MmEnumerateSystemImages @ 0x140727E0C (MmEnumerateSystemImages.c)
 */

int __fastcall PopDiagIdleWakeSourceAccountingToDiagnostic(int *a1, _DWORD *a2)
{
  __int64 v2; // rbp
  int v5; // edi
  unsigned __int16 i; // dx
  char *v7; // r8
  __int64 v8; // rcx
  UNICODE_STRING *v9; // rbx
  wchar_t *v10; // r8
  wchar_t *v11; // rax
  __int64 v12; // rcx
  int v13; // edx
  __int16 v14; // si
  unsigned __int16 v15; // si
  int result; // eax
  unsigned __int8 v17; // al
  PVOID PoolWithTag; // rax
  const wchar_t *v19; // r15
  SIZE_T v20; // rbp
  PVOID v21; // rax
  UNICODE_STRING *v22; // rcx
  __int128 v23; // xmm0
  unsigned int *v24; // r15
  __int64 v25; // xmm1_8
  __int64 v26; // rsi
  unsigned int v27; // ecx
  unsigned __int16 *v28; // rdx
  SIZE_T v29; // rsi
  PVOID v30; // rax
  size_t *v31; // r9
  size_t v32; // rdx
  const wchar_t *v33; // rcx
  __int64 v34; // r9
  __int16 v35; // r8
  signed __int64 v36; // r10
  unsigned int j; // ebp
  unsigned __int16 v38; // cx
  unsigned __int16 Length; // dx
  __int64 v40; // r11
  unsigned __int64 v41; // r8
  const wchar_t *v42; // r9
  unsigned __int64 v43; // r10
  __int16 v44; // cx
  __int64 v45; // rdx
  unsigned __int64 v46; // r10
  unsigned __int64 v47; // r8
  __int64 v48; // r11
  unsigned __int64 v49; // r8
  size_t v50; // [rsp+20h] [rbp-88h]
  ULONG v51; // [rsp+28h] [rbp-80h]
  size_t pcbLength; // [rsp+30h] [rbp-78h] BYREF
  size_t v53; // [rsp+38h] [rbp-70h] BYREF
  size_t pcchDest; // [rsp+40h] [rbp-68h] BYREF
  wchar_t *ppszDest; // [rsp+48h] [rbp-60h] BYREF
  __int128 v56; // [rsp+50h] [rbp-58h] BYREF
  __int64 v57; // [rsp+60h] [rbp-48h]
  _DWORD *v58; // [rsp+68h] [rbp-40h]

  v2 = *a1;
  memset(a2, 0, 0x140uLL);
  *a2 = v2;
  a2[1] = a1[1];
  *((_QWORD *)a2 + 1) = PpmConvertTimeTo(*((_QWORD *)a1 + 1), 0xF4240uLL);
  *((_QWORD *)a2 + 2) = PpmConvertTimeTo(*((_QWORD *)a1 + 2), 0xF4240uLL);
  v5 = 0;
  *((_QWORD *)a2 + 3) = PpmConvertTimeTo(*((_QWORD *)a1 + 3), 0xF4240uLL);
  for ( i = 0; i < 0x14u; ++i )
  {
    v7 = (char *)a2 + 10 * *((unsigned __int16 *)a2 + 56);
    *((_WORD *)v7 + 57) = i;
    if ( i >= *((_WORD *)a1 + 84) )
      v8 = 0LL;
    else
      v8 = *(_QWORD *)&a1[2 * i + 44];
    *(_QWORD *)(v7 + 116) = v8;
    if ( v8 )
      ++*((_WORD *)a2 + 56);
  }
  v9 = (UNICODE_STRING *)(a2 + 8);
  if ( (unsigned int)v2 <= 4 )
  {
    _mm_lfence();
    v10 = PopDiagStaticWakeSourceDescriptions[v2];
    *(_QWORD *)&v9->Length = 0LL;
    *((_QWORD *)a2 + 5) = 0LL;
    if ( v10 )
    {
      v11 = v10;
      v12 = 0x7FFFLL;
      do
      {
        if ( !*v11 )
          break;
        ++v11;
        --v12;
      }
      while ( v12 );
      v13 = -1073741811;
      if ( v12 )
      {
        v13 = 0;
        v14 = 0x7FFF - v12;
      }
      else
      {
        v14 = 0;
      }
      v5 = v13;
      if ( v12 )
      {
        if ( a2 == (_DWORD *)-32LL )
        {
          return -1073741811;
        }
        else
        {
          v15 = 2 * v14;
          *((_QWORD *)a2 + 5) = v10;
          v9->Length = v15;
          *((_WORD *)a2 + 17) = v15 + 2;
        }
      }
    }
    return v5;
  }
  if ( (_DWORD)v2 == 6 )
  {
    v17 = *((_BYTE *)a1 + 32);
    if ( v17 >= 0xFu )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x67696450u);
      *((_QWORD *)a2 + 5) = PoolWithTag;
      if ( PoolWithTag )
      {
        *((_BYTE *)a2 + 48) = 1;
        *(_DWORD *)&v9->Length = 0x400000;
        return RtlUnicodeStringPrintf(
                 (PUNICODE_STRING)a2 + 2,
                 L"Timer(Component:Index): %d:%d",
                 *((unsigned __int8 *)a1 + 32),
                 *((unsigned __int8 *)a1 + 34));
      }
      return -1073741670;
    }
    v19 = PopIrTimerDescriptions[v17];
    result = RtlStringCbLengthW(v19, 0xFFFFuLL, &pcbLength);
    if ( result < 0 )
      return result;
    if ( *((_BYTE *)a1 + 32) == 3 )
    {
      result = RtlStringCbLengthW((STRSAFE_PCNZWCH)a1 + 17, 0x80uLL, &v53);
      if ( result < 0 )
        return result;
      v20 = pcbLength + v53 + 42;
    }
    else
    {
      v20 = pcbLength + 48;
    }
    if ( v20 <= 0xFFFF )
    {
      v21 = ExAllocatePoolWithTag(PagedPool, v20, 0x67696450u);
      *((_QWORD *)a2 + 5) = v21;
      if ( v21 )
      {
        *((_BYTE *)a2 + 48) = 1;
        v9->Length = 0;
        v22 = (UNICODE_STRING *)(a2 + 8);
        *((_WORD *)a2 + 17) = v20;
        if ( *((_BYTE *)a1 + 32) == 3 )
          return RtlUnicodeStringPrintf(v22, L"Timer(Name:Index): %s:%s", v19, (char *)a1 + 34);
        else
          return RtlUnicodeStringPrintf(v22, L"Timer(Name:Index): %s:%d", v19, *((unsigned __int8 *)a1 + 34));
      }
      return -1073741670;
    }
    return -2147483643;
  }
  if ( (_DWORD)v2 != 5 )
    return -1073741811;
  v23 = *((_OWORD *)a1 + 2);
  v24 = a2 + 14;
  v25 = *((_QWORD *)a1 + 6);
  v58 = a2 + 14;
  v56 = v23;
  v57 = v25;
  result = MmEnumerateSystemImages(
             (__int64 (__fastcall *)(PVOID *, __int64))PopDiagIdleSystemImageCallback,
             (__int64)&v56);
  if ( result < 0 )
    return result;
  v26 = 0LL;
  v27 = 0;
  if ( *v24 )
  {
    v28 = (unsigned __int16 *)(a2 + 16);
    do
    {
      if ( v27 )
        v26 += 4LL;
      ++v27;
      v26 += *v28;
      v28 += 8;
    }
    while ( v27 < *v24 );
  }
  v29 = v26 + 24;
  if ( v29 > 0xFFFF )
    return -2147483643;
  v30 = ExAllocatePoolWithTag(PagedPool, v29, 0x67696450u);
  *((_QWORD *)a2 + 5) = v30;
  if ( !v30 )
    return -1073741670;
  *((_BYTE *)a2 + 48) = 1;
  v9->Length = 0;
  *((_WORD *)a2 + 17) = v29;
  result = RtlUnicodeStringValidateDestWorker((PCUNICODE_STRING)a2 + 2, &ppszDest, &pcchDest, v31, v50, v51);
  if ( result >= 0 )
  {
    v32 = pcchDest;
    v33 = L"Interrupt: ";
    v34 = 0x7FFFLL;
    result = 0;
    v35 = 0;
    if ( !pcchDest )
      goto LABEL_56;
    v36 = (char *)ppszDest - (char *)L"Interrupt: ";
    while ( v34 && *v33 )
    {
      *(const wchar_t *)((char *)v33 + v36) = *v33;
      --v34;
      ++v33;
      ++v35;
      if ( !--v32 )
        goto LABEL_54;
    }
    if ( v32 )
      goto LABEL_57;
LABEL_54:
    if ( v34 && *v33 )
LABEL_56:
      result = -2147483643;
LABEL_57:
    v9->Length = 2 * v35;
  }
  for ( j = 0; j < *v24; ++j )
  {
    if ( j )
    {
      v38 = *((_WORD *)a2 + 17);
      Length = v9->Length;
      if ( ((v9->Length | v38) & 1) == 0 && Length <= v38 && v38 != 0xFFFF )
      {
        v40 = *((_QWORD *)a2 + 5);
        if ( v40 || !Length && !v38 )
        {
          v41 = v38;
          v42 = L", ";
          v43 = Length;
          v44 = 0;
          v45 = 0x7FFFLL;
          v46 = v43 >> 1;
          v47 = (v41 >> 1) - v46;
          if ( v47 )
          {
            v48 = 2 * v46 - (_QWORD)L", " + v40;
            v49 = v47 - 0x7FFF;
            do
            {
              if ( !v45 )
                break;
              if ( !*v42 )
                break;
              --v45;
              *(const wchar_t *)((char *)v42 + v48) = *v42;
              ++v42;
              ++v44;
            }
            while ( v45 + v49 );
          }
          v9->Length = 2 * (v46 + v44);
        }
      }
    }
    result = RtlUnicodeStringCat(v9, (PCUNICODE_STRING)&a2[4 * j + 16]);
  }
  return result;
}
