/*
 * XREFs of AuthzBasepAddSecurityAttributeValues @ 0x1400D8F0C
 * Callers:
 *     AuthzBasepAddSecurityAttribute @ 0x1400D8E6C (AuthzBasepAddSecurityAttribute.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x1400CCBA0 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     AuthzBasepAddSecurityAttributeValueToLists @ 0x1400D90B8 (AuthzBasepAddSecurityAttributeValueToLists.c)
 *     AuthzBasepFindSecurityAttributeValue @ 0x1400D9104 (AuthzBasepFindSecurityAttributeValue.c)
 *     AuthzBasepRemoveSecurityAttributeValueFromLists @ 0x140134804 (AuthzBasepRemoveSecurityAttributeValueFromLists.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall AuthzBasepAddSecurityAttributeValues(__int64 a1, __int64 a2)
{
  _WORD *SecurityAttributeValue; // rdi
  int v5; // ebp
  unsigned int i; // esi
  unsigned __int16 v7; // r8
  __int64 v8; // rdx
  unsigned int v9; // edx
  __int64 v10; // r9
  unsigned __int16 v11; // ax
  void *v13; // rcx
  size_t v14; // r8
  const void *v15; // rdx
  int v16; // eax
  unsigned int v17; // edx

  SecurityAttributeValue = 0LL;
  if ( *(_WORD *)(a1 + 48) == *(_WORD *)(a2 + 16) )
  {
    v5 = 0;
    for ( i = 0; i < *(_DWORD *)(a2 + 24); ++i )
    {
      v7 = *(_WORD *)(a1 + 48);
      if ( v7 )
      {
        if ( v7 <= 2u )
          goto LABEL_5;
        switch ( v7 )
        {
          case 3u:
LABEL_21:
            v8 = *(_QWORD *)(a2 + 32) + 16LL * i;
            goto LABEL_6;
          case 6u:
LABEL_5:
            v8 = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * i);
LABEL_6:
            SecurityAttributeValue = (_WORD *)AuthzBasepFindSecurityAttributeValue(a1, v8);
            goto LABEL_7;
          case 4u:
            v8 = *(_QWORD *)(a2 + 32) + 24LL * i;
            goto LABEL_6;
          case 5u:
          case 0x10u:
            goto LABEL_21;
        }
      }
      v5 = -1073741811;
LABEL_7:
      if ( v5 < 0 )
        return (unsigned int)v5;
      if ( !SecurityAttributeValue )
      {
        v9 = 0;
        switch ( *(_WORD *)(a2 + 16) )
        {
          case 3:
            v9 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16LL * i);
            break;
          case 4:
            v9 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24LL * i + 8);
            break;
          case 5:
          case 0x10:
            v9 = *(_DWORD *)(*(_QWORD *)(a2 + 32) + 16LL * i + 8);
            break;
        }
        SecurityAttributeValue = AuthzBasepAllocateSecurityAttributeValue(v9);
        if ( !SecurityAttributeValue )
          return (unsigned int)-1073741670;
        v11 = *(_WORD *)(a2 + 16);
        if ( v11 )
        {
          if ( v11 <= 2u )
            goto LABEL_16;
          switch ( v11 )
          {
            case 3u:
              v13 = SecurityAttributeValue + 32;
              v14 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 16LL * i);
              SecurityAttributeValue[20] = v14;
              SecurityAttributeValue[21] = v14;
              *((_QWORD *)SecurityAttributeValue + 6) = SecurityAttributeValue + 32;
              v15 = *(const void **)(*(_QWORD *)(a2 + 32) + 16LL * i + 8);
              goto LABEL_24;
            case 6u:
LABEL_16:
              *((_QWORD *)SecurityAttributeValue + 5) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 8LL * i);
              break;
            case 4u:
              *((_QWORD *)SecurityAttributeValue + 5) = *(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL * i);
              v13 = SecurityAttributeValue + 32;
              v17 = *(unsigned __int16 *)(*(_QWORD *)(a2 + 32) + 24LL * i + 8);
              SecurityAttributeValue[24] = v17;
              v14 = v17;
              *((_QWORD *)SecurityAttributeValue + 7) = SecurityAttributeValue + 32;
              v15 = *(const void **)(*(_QWORD *)(a2 + 32) + 24LL * i + 16);
LABEL_24:
              memmove(v13, v15, v14);
              break;
            case 5u:
            case 0x10u:
              v13 = SecurityAttributeValue + 32;
              v14 = *(unsigned int *)(*(_QWORD *)(a2 + 32) + 16LL * i + 8);
              *((_DWORD *)SecurityAttributeValue + 12) = v14;
              *((_QWORD *)SecurityAttributeValue + 5) = SecurityAttributeValue + 32;
              v15 = *(const void **)(*(_QWORD *)(a2 + 32) + 16LL * i);
              goto LABEL_24;
          }
        }
        LOBYTE(v10) = 1;
        AuthzBasepAddSecurityAttributeValueToLists(a1, SecurityAttributeValue, 0LL, v10);
        continue;
      }
      v16 = *((_DWORD *)SecurityAttributeValue + 8);
      if ( (v16 & 4) == 0 )
        return (unsigned int)-1073741771;
      *((_DWORD *)SecurityAttributeValue + 8) = v16 & 0xFFFFFFFB;
      AuthzBasepRemoveSecurityAttributeValueFromLists(a1, SecurityAttributeValue, 0LL);
      --*(_DWORD *)(a1 + 64);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
