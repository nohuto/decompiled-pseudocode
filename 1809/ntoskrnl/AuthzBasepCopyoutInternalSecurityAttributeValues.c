/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140014820
 * Callers:
 *     AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405C110C (AuthzBasepCopyoutInternalSecurityAttributes.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x140584BD8 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributeValues(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        _DWORD *a5)
{
  int v5; // r13d
  unsigned __int64 v6; // r14
  int inserted; // r10d
  _DWORD *v9; // rdx
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 *v12; // r15
  __int64 *v13; // rdi
  wchar_t *v14; // rbx
  unsigned __int64 v15; // rsi
  unsigned __int16 v16; // ax
  size_t v17; // rax
  wchar_t *v18; // r15
  __int64 v19; // r15
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-10h] BYREF

  v5 = a3;
  v6 = a3 + a4;
  inserted = 0;
  if ( v6 < a3 )
    return (unsigned int)-2147483643;
  v9 = a5;
  v10 = (a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v11 = (unsigned int)(*(_DWORD *)(a1 + 60) << 6);
  *a5 = 0;
  if ( v10 + v11 > v6 )
    return (unsigned int)-2147483643;
  v12 = (__int64 *)(a1 + 72);
  v13 = *(__int64 **)(a1 + 72);
  v14 = (wchar_t *)(v11 + v10);
  if ( v13 == (__int64 *)(a1 + 72) )
    goto LABEL_28;
  v15 = ((a3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) + 40;
  while ( 1 )
  {
    *(_DWORD *)(v15 - 8) = 0;
    v16 = *(_WORD *)(a1 + 48);
    if ( !v16 )
      break;
    if ( v16 <= 2u )
      goto LABEL_21;
    if ( v16 == 3 )
    {
      v19 = *((unsigned __int16 *)v13 + 20);
      if ( (unsigned __int64)v14 + v19 > v6 )
        return (unsigned int)-2147483643;
      DestinationString.Buffer = v14;
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v19;
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v13 + 5));
      *(UNICODE_STRING *)v15 = DestinationString;
      goto LABEL_19;
    }
    if ( v16 == 4 )
    {
      v19 = *((unsigned __int16 *)v13 + 24);
      if ( (unsigned __int64)v14 + v19 > v6 )
        return (unsigned int)-2147483643;
      *(_QWORD *)v15 = v13[5];
      *(_QWORD *)&DestinationString.Length = 0LL;
      DestinationString.MaximumLength = v19;
      DestinationString.Buffer = v14;
      RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)v13 + 3);
      *(UNICODE_STRING *)(v15 + 8) = DestinationString;
LABEL_19:
      v14 = (wchar_t *)((char *)v14 + v19);
      goto LABEL_20;
    }
    if ( v16 != 5 )
    {
      if ( v16 == 6 )
      {
LABEL_21:
        *(_QWORD *)v15 = v13[5];
        goto LABEL_22;
      }
      if ( v16 != 16 )
        break;
    }
    v17 = *((unsigned int *)v13 + 12);
    v18 = (wchar_t *)((char *)v14 + v17);
    if ( (unsigned __int64)v14 + v17 > v6 )
      return (unsigned int)-2147483643;
    *(_DWORD *)(v15 + 8) = v17;
    *(_QWORD *)v15 = v14;
    memmove(v14, (const void *)v13[5], v17);
    v14 = v18;
LABEL_20:
    v12 = (__int64 *)(a1 + 72);
LABEL_22:
    inserted = AuthzBasepProbeAndInsertTailList(a2 + 72, v15 - 40);
    if ( inserted < 0 )
      return (unsigned int)inserted;
    v15 += 64LL;
    ++*(_DWORD *)(a2 + 60);
    v13 = (__int64 *)*v13;
    if ( v13 == v12 )
      goto LABEL_26;
  }
  inserted = -1073741811;
LABEL_26:
  if ( inserted >= 0 )
  {
    v9 = a5;
LABEL_28:
    *v9 = (_DWORD)v14 - v5;
  }
  return (unsigned int)inserted;
}
