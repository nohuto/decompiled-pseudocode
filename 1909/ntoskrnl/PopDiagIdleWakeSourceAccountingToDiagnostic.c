/*
 * XREFs of PopDiagIdleWakeSourceAccountingToDiagnostic @ 0x1408AC234
 * Callers:
 *     PopDiagIdleWakeAccountingStop @ 0x1408AC118 (PopDiagIdleWakeAccountingStop.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     RtlUnicodeStringCat @ 0x14012C358 (RtlUnicodeStringCat.c)
 *     RtlUnicodeStringPrintf @ 0x14014512C (RtlUnicodeStringPrintf.c)
 *     RtlUnicodeStringValidateDestWorker @ 0x1401451A0 (RtlUnicodeStringValidateDestWorker.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     PpmConvertTimeTo @ 0x1402FF984 (PpmConvertTimeTo.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MmEnumerateSystemImages @ 0x14070A210 (MmEnumerateSystemImages.c)
 */

signed int __fastcall PopDiagIdleWakeSourceAccountingToDiagnostic(int *a1, __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  char *v8; // r8
  _QWORD *v9; // rcx
  __int64 v10; // rdx
  unsigned __int16 i; // cx
  __int64 v12; // rax
  __int64 v13; // rdx
  UNICODE_STRING *v14; // rbx
  signed int result; // eax
  wchar_t *v16; // rdx
  wchar_t *v17; // rax
  __int64 v18; // rcx
  __int16 v19; // di
  unsigned __int16 v20; // di
  unsigned __int8 v21; // al
  PVOID PoolWithTag; // rax
  const wchar_t *v23; // r15
  SIZE_T v24; // r11
  SIZE_T v25; // r14
  PVOID v26; // rax
  UNICODE_STRING *v27; // rcx
  __int128 v28; // xmm0
  unsigned int *v29; // r14
  __int64 v30; // xmm1_8
  __int64 v31; // rdi
  unsigned int v32; // ecx
  unsigned __int16 *v33; // rdx
  SIZE_T v34; // rdi
  PVOID v35; // rax
  size_t *v36; // r9
  size_t v37; // r8
  const wchar_t *v38; // rcx
  __int64 v39; // r9
  __int16 v40; // dx
  signed __int64 v41; // r10
  unsigned int v42; // esi
  const wchar_t *v43; // r10
  unsigned __int16 MaximumLength; // cx
  unsigned __int16 Length; // dx
  wchar_t *Buffer; // r11
  unsigned __int64 v47; // r8
  __int16 v48; // cx
  unsigned __int64 v49; // r9
  __int64 v50; // rdx
  unsigned __int64 v51; // r9
  unsigned __int64 v52; // r8
  char *v53; // r11
  size_t v54; // [rsp+20h] [rbp-60h]
  ULONG v55; // [rsp+28h] [rbp-58h]
  wchar_t *ppszDest; // [rsp+30h] [rbp-50h] BYREF
  size_t pcbLength; // [rsp+38h] [rbp-48h] BYREF
  size_t v58; // [rsp+40h] [rbp-40h] BYREF
  size_t pcchDest; // [rsp+48h] [rbp-38h] BYREF
  _OWORD v60[2]; // [rsp+50h] [rbp-30h] BYREF

  memset(v60, 0, sizeof(v60));
  v4 = *a1;
  memset((void *)(a2 + 4), 0, 0x1DCuLL);
  *(_DWORD *)a2 = v4;
  *(_DWORD *)(a2 + 4) = a1[1];
  *(_QWORD *)(a2 + 8) = PpmConvertTimeTo(*((_QWORD *)a1 + 1), 0xF4240uLL);
  *(_QWORD *)(a2 + 16) = PpmConvertTimeTo(*((_QWORD *)a1 + 2), 0xF4240uLL);
  v5 = PpmConvertTimeTo(*((_QWORD *)a1 + 3), 0xF4240uLL);
  v6 = 9LL;
  *(_QWORD *)(a2 + 24) = v5;
  v7 = (_QWORD *)(a2 + 32);
  v8 = (char *)a1 - a2;
  do
  {
    *v7 = *(_QWORD *)((char *)v7 + (_QWORD)v8);
    ++v7;
    --v6;
  }
  while ( v6 );
  v9 = (_QWORD *)(a2 + 104);
  v10 = 11LL;
  do
  {
    *v9 = *(_QWORD *)&v8[(_QWORD)v9];
    ++v9;
    --v10;
  }
  while ( v10 );
  for ( i = 0; i < 0x14u; ++i )
  {
    v12 = *(unsigned __int16 *)(a2 + 272);
    *(_WORD *)(a2 + 10 * v12 + 274) = i;
    if ( i >= *((_WORD *)a1 + 168) )
      v13 = 0LL;
    else
      v13 = *(_QWORD *)&a1[2 * i + 86];
    *(_QWORD *)(a2 + 10 * v12 + 276) = v13;
    if ( v13 )
      ++*(_WORD *)(a2 + 272);
  }
  v14 = (UNICODE_STRING *)(a2 + 192);
  if ( (unsigned int)v4 > 4 )
  {
    if ( (_DWORD)v4 == 6 )
    {
      v21 = *((_BYTE *)a1 + 200);
      if ( v21 >= 0x10u )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x40uLL, 0x67696450u);
        *(_QWORD *)(a2 + 200) = PoolWithTag;
        if ( PoolWithTag )
        {
          *(_BYTE *)(a2 + 208) = 1;
          *(_DWORD *)&v14->Length = 0x400000;
          return RtlUnicodeStringPrintf(
                   (PUNICODE_STRING)(a2 + 192),
                   L"Timer(Component:Index): %d:%d",
                   *((unsigned __int8 *)a1 + 200),
                   *((unsigned __int8 *)a1 + 202));
        }
        return -1073741670;
      }
      v23 = PopIrTimerDescriptions[v21];
      result = RtlStringCbLengthW(v23, 0xFFFFuLL, &pcbLength);
      if ( result < 0 )
        return result;
      if ( *((_BYTE *)a1 + 200) == 3 )
      {
        result = RtlStringCbLengthW((STRSAFE_PCNZWCH)a1 + 101, 0x80uLL, &v58);
        if ( result < 0 )
          return result;
        v25 = pcbLength + v58 + 42;
      }
      else
      {
        v25 = pcbLength + 48;
      }
      if ( v25 > v24 )
        return -2147483643;
      v26 = ExAllocatePoolWithTag(PagedPool, v25, 0x67696450u);
      *(_QWORD *)(a2 + 200) = v26;
      if ( v26 )
      {
        *(_BYTE *)(a2 + 208) = 1;
        v14->Length = 0;
        *(_WORD *)(a2 + 194) = v25;
        v27 = (UNICODE_STRING *)(a2 + 192);
        if ( *((_BYTE *)a1 + 200) == 3 )
          return RtlUnicodeStringPrintf(v27, L"Timer(Name:Index): %s:%s", v23, (char *)a1 + 202);
        else
          return RtlUnicodeStringPrintf(v27, L"Timer(Name:Index): %s:%d", v23, *((unsigned __int8 *)a1 + 202));
      }
    }
    else
    {
      if ( (_DWORD)v4 != 5 )
        return -1073741811;
      v28 = *(_OWORD *)(a1 + 50);
      v29 = (unsigned int *)(a2 + 216);
      v30 = *((_QWORD *)a1 + 27);
      *((_QWORD *)&v60[1] + 1) = a2 + 216;
      v60[0] = v28;
      *(_QWORD *)&v60[1] = v30;
      result = MmEnumerateSystemImages(
                 (__int64 (__fastcall *)(PVOID *, __int64))PopDiagIdleSystemImageCallback,
                 (__int64)v60);
      if ( result < 0 )
        return result;
      v31 = 0LL;
      v32 = 0;
      if ( *v29 )
      {
        v33 = (unsigned __int16 *)(a2 + 224);
        do
        {
          if ( v32 )
            v31 += 4LL;
          ++v32;
          v31 += *v33;
          v33 += 8;
        }
        while ( v32 < *v29 );
      }
      v34 = v31 + 24;
      if ( v34 > 0xFFFF )
        return -2147483643;
      v35 = ExAllocatePoolWithTag(PagedPool, v34, 0x67696450u);
      *(_QWORD *)(a2 + 200) = v35;
      if ( v35 )
      {
        *(_BYTE *)(a2 + 208) = 1;
        v14->Length = 0;
        *(_WORD *)(a2 + 194) = v34;
        result = RtlUnicodeStringValidateDestWorker((PCUNICODE_STRING)(a2 + 192), &ppszDest, &pcchDest, v36, v54, v55);
        if ( result >= 0 )
        {
          v37 = pcchDest;
          v38 = L"Interrupt: ";
          v39 = 0x7FFFLL;
          result = 0;
          v40 = 0;
          if ( !pcchDest )
            goto LABEL_57;
          v41 = (char *)ppszDest - (char *)L"Interrupt: ";
          do
          {
            if ( !v39 )
              break;
            if ( !*v38 )
              break;
            *(const wchar_t *)((char *)v38 + v41) = *v38;
            --v39;
            ++v38;
            ++v40;
            --v37;
          }
          while ( v37 );
          if ( !v37 && v39 && *v38 )
LABEL_57:
            result = -2147483643;
          v14->Length = 2 * v40;
        }
        v42 = 0;
        if ( *v29 )
        {
          v43 = L", ";
          ppszDest = L", ";
          do
          {
            if ( v42 )
            {
              MaximumLength = v14->MaximumLength;
              Length = v14->Length;
              if ( ((v14->Length | MaximumLength) & 1) == 0 && Length <= MaximumLength && MaximumLength != 0xFFFF )
              {
                Buffer = v14->Buffer;
                if ( Buffer || !Length && !MaximumLength )
                {
                  v47 = MaximumLength;
                  v48 = 0;
                  v49 = Length;
                  v50 = 0x7FFFLL;
                  v51 = v49 >> 1;
                  v52 = (v47 >> 1) - v51;
                  if ( v52 )
                  {
                    v53 = (char *)Buffer + 2 * v51 - (_QWORD)ppszDest;
                    do
                    {
                      if ( !v50 )
                        break;
                      if ( !*v43 )
                        break;
                      *(const wchar_t *)((char *)v43 + (_QWORD)v53) = *v43;
                      --v50;
                      ++v43;
                      ++v48;
                    }
                    while ( v52 + v50 - 0x7FFF );
                  }
                  v14->Length = 2 * (v51 + v48);
                }
              }
            }
            result = RtlUnicodeStringCat(v14, (PCUNICODE_STRING)&v29[4 * v42++ + 2]);
            v43 = L", ";
          }
          while ( v42 < *v29 );
        }
        return result;
      }
    }
    return -1073741670;
  }
  _mm_lfence();
  result = 0;
  v16 = PopDiagStaticWakeSourceDescriptions[v4];
  *(_QWORD *)&v14->Length = 0LL;
  *(_QWORD *)(a2 + 200) = 0LL;
  if ( v16 )
  {
    v17 = v16;
    v18 = 0x7FFFLL;
    do
    {
      if ( !*v17 )
        break;
      ++v17;
      --v18;
    }
    while ( v18 );
    result = v18 == 0 ? 0xC000000D : 0;
    v19 = v18 ? 0x7FFF - v18 : 0;
    if ( v18 )
    {
      if ( a2 != -192 )
      {
        v20 = 2 * v19;
        *(_QWORD *)(a2 + 200) = v16;
        v14->Length = v20;
        *(_WORD *)(a2 + 194) = v20 + 2;
        return result;
      }
      return -1073741811;
    }
  }
  return result;
}
