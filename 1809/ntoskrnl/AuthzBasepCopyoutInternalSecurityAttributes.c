/*
 * XREFs of AuthzBasepCopyoutInternalSecurityAttributes @ 0x1405C110C
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1405C0698 (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepCopyoutInternalSecurityAttributeValues @ 0x140014820 (AuthzBasepCopyoutInternalSecurityAttributeValues.c)
 *     RtlCopyUnicodeString @ 0x1400B97D0 (RtlCopyUnicodeString.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     AuthzBasepProbeAndInsertTailList @ 0x140584BD8 (AuthzBasepProbeAndInsertTailList.c)
 */

__int64 __fastcall AuthzBasepCopyoutInternalSecurityAttributes(_DWORD *a1, _DWORD *a2, unsigned int a3)
{
  unsigned __int64 v6; // r15
  signed int inserted; // ebx
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rcx
  unsigned int v10; // eax
  unsigned __int64 v11; // rbp
  __int64 *v12; // r13
  __int64 v13; // r14
  _QWORD *v14; // rsi
  wchar_t *v15; // rbp
  __int64 v16; // rbx
  unsigned __int64 v17; // rbp
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v20; // [rsp+78h] [rbp+10h] BYREF

  if ( !a2 || !a3 )
  {
    inserted = -1073741811;
    goto LABEL_19;
  }
  v6 = (unsigned __int64)a2 + a3;
  if ( v6 < (unsigned __int64)a2 )
  {
    inserted = -1073741811;
    goto LABEL_20;
  }
  memset(a2, 0, a3);
  if ( (unsigned __int64)(a2 + 12) <= v6 )
  {
    *a2 = 0;
    v8 = (unsigned __int64)(a2 + 2);
    *((_QWORD *)a2 + 2) = a2 + 2;
    *((_QWORD *)a2 + 1) = a2 + 2;
    a2[6] = 0;
    *((_QWORD *)a2 + 5) = a2 + 8;
    *((_QWORD *)a2 + 4) = a2 + 8;
    v9 = 112LL * (unsigned int)*a1;
    v10 = -1;
    if ( v9 <= 0xFFFFFFFF )
      v10 = 112 * *a1;
    inserted = v9 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v9 <= 0xFFFFFFFF )
    {
      v11 = (unsigned __int64)a2 + v10 + 48;
      if ( v11 > v6 )
        goto LABEL_6;
      v12 = (__int64 *)(a1 + 2);
      v13 = *v12;
      if ( (__int64 *)*v12 != v12 )
      {
        v14 = a2 + 38;
        do
        {
          inserted = AuthzBasepProbeAndInsertTailList(v8, v14 - 13);
          if ( inserted < 0 )
            goto LABEL_20;
          ++*a2;
          *((_WORD *)v14 - 28) = *(_WORD *)(v13 + 48);
          v15 = (wchar_t *)((v11 + 1) & 0xFFFFFFFFFFFFFFFEuLL);
          *((_DWORD *)v14 - 13) = *(_DWORD *)(v13 + 52);
          *(v14 - 6) = 0LL;
          *((_DWORD *)v14 - 10) = 0;
          *(v14 - 3) = v14 - 4;
          *(v14 - 4) = v14 - 4;
          *((_DWORD *)v14 - 4) = 0;
          *v14 = v14 - 1;
          *(v14 - 1) = v14 - 1;
          v16 = *(unsigned __int16 *)(v13 + 32);
          v20 = *(unsigned __int16 *)(v13 + 32);
          if ( (unsigned __int64)v15 + v16 > v6 )
            goto LABEL_6;
          DestinationString.Buffer = v15;
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.MaximumLength = v16;
          RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)(v13 + 32));
          v17 = (unsigned __int64)v15 + v16;
          *(UNICODE_STRING *)(v14 - 9) = DestinationString;
          inserted = AuthzBasepCopyoutInternalSecurityAttributeValues(
                       v13,
                       (__int64)(v14 - 13),
                       v17,
                       (int)v6 - (int)v17,
                       &v20);
          if ( inserted < 0 )
            goto LABEL_20;
          v8 = (unsigned __int64)(a2 + 2);
          v13 = *(_QWORD *)v13;
          v11 = v20 + v17;
          v14 += 14;
        }
        while ( (__int64 *)v13 != v12 );
      }
    }
LABEL_19:
    if ( inserted >= 0 )
      return (unsigned int)inserted;
    goto LABEL_20;
  }
LABEL_6:
  inserted = -2147483643;
LABEL_20:
  if ( a3 >= 0x30 )
    memset(a2, 0, 0x30uLL);
  return (unsigned int)inserted;
}
