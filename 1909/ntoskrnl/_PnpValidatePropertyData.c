/*
 * XREFs of _PnpValidatePropertyData @ 0x1405B5A64
 * Callers:
 *     ValidFilter @ 0x1405B5988 (ValidFilter.c)
 *     PiDqQueryValidateQueryData @ 0x1405B6C08 (PiDqQueryValidateQueryData.c)
 *     _PnpGetObjectPropertyWorker @ 0x1405BC8CC (_PnpGetObjectPropertyWorker.c)
 *     _PnpSetObjectPropertyWorker @ 0x14070854C (_PnpSetObjectPropertyWorker.c)
 *     PiSwValidatePropertyArray @ 0x14072193C (PiSwValidatePropertyArray.c)
 * Callees:
 *     _GetBaseTypeSize @ 0x140001AE8 (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x140001B84 (_IsFixedSizeType.c)
 *     RtlStringCbLengthW @ 0x140001BA8 (RtlStringCbLengthW.c)
 *     RtlLengthSecurityDescriptor @ 0x1405C7F30 (RtlLengthSecurityDescriptor.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1406407B0 (RtlValidRelativeSecurityDescriptor.c)
 */

__int64 __fastcall PnpValidatePropertyData(__int64 *SecurityDescriptor, ULONG SecurityDescriptorLength, int a3)
{
  unsigned int v3; // ebx
  size_t v4; // rsi
  unsigned int v6; // r8d
  int BaseTypeSize; // eax
  unsigned int v8; // r8d
  __int16 v9; // r9
  int v10; // r10d
  int v11; // r11d
  size_t v13; // rax
  bool v14; // zf
  unsigned int v15; // ecx
  unsigned int v16; // esi
  unsigned int v17; // eax
  unsigned int v18; // r11d
  bool v19; // zf
  size_t v20; // r11
  __int64 v21; // r11
  size_t v22; // rax
  size_t pcbLength; // [rsp+48h] [rbp+20h] BYREF

  v3 = 0;
  v4 = SecurityDescriptorLength;
  if ( (a3 & 0xFFFF0000) != 0 )
    return (unsigned int)-1073741811;
  v6 = a3 & 0xFFF;
  if ( v6 > 0x19 )
    return (unsigned int)-1073741811;
  BaseTypeSize = GetBaseTypeSize(v6);
  v10 = v9 & 0xF000;
  if ( !BaseTypeSize )
    goto LABEL_9;
  if ( v10 == 4096 )
  {
    if ( v8 <= 1 || !IsFixedSizeType(v9) || (unsigned int)v4 < v18 )
      return (unsigned int)-1073741811;
    v19 = (unsigned int)v4 % v18 == 0;
  }
  else
  {
    if ( v10 != 0x2000 )
    {
      if ( (v9 & 0xF000) != 0 || IsFixedSizeType(v9) && (_DWORD)v4 != v11 )
        return (unsigned int)-1073741811;
      goto LABEL_9;
    }
    if ( v8 == 18 )
      goto LABEL_9;
    v19 = v8 == 20;
  }
  if ( !v19 )
    return (unsigned int)-1073741811;
LABEL_9:
  if ( v8 <= 1 )
  {
    v14 = (_DWORD)v4 == 0;
LABEL_23:
    if ( v14 )
      return v3;
    return (unsigned int)-1073741811;
  }
  switch ( v8 )
  {
    case 0x12u:
      goto LABEL_17;
    case 0x11u:
      if ( SecurityDescriptor )
      {
        v15 = 0;
        if ( !(_DWORD)v4 )
          return v3;
        while ( *(_BYTE *)SecurityDescriptor == 0xFF || *(_BYTE *)SecurityDescriptor == 0 )
        {
          ++v15;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 1);
          if ( v15 >= (unsigned int)v4 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    case 0x10u:
      if ( SecurityDescriptor )
      {
        v16 = (unsigned int)v4 >> 3;
        v17 = 0;
        if ( !v16 )
          return v3;
        while ( *SecurityDescriptor >= 0 )
        {
          ++v17;
          ++SecurityDescriptor;
          if ( v17 >= v16 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    case 0x19u:
      goto LABEL_17;
    case 0x13u:
      if ( !SecurityDescriptor || !RtlValidRelativeSecurityDescriptor(SecurityDescriptor, v4, 0) )
        return (unsigned int)-1073741811;
      v14 = RtlLengthSecurityDescriptor(SecurityDescriptor) == (_DWORD)v4;
      goto LABEL_23;
    case 0x14u:
LABEL_17:
      if ( !SecurityDescriptor || (unsigned int)v4 < 2 )
        return (unsigned int)-1073741811;
      if ( (v10 & 0x2000) != 0 )
      {
        v20 = 0LL;
        while ( *(_WORD *)SecurityDescriptor )
        {
          if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4 - v20, &pcbLength) < 0 )
            return (unsigned int)-1073741811;
          if ( (pcbLength & 1) != 0 )
            return (unsigned int)-1073741811;
          v22 = pcbLength + 2;
          pcbLength = v22;
          if ( v22 > 0xFFFE )
            return (unsigned int)-1073741811;
          v20 = v22 + v21;
          if ( v20 > v4 )
            return (unsigned int)-1073741811;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 2 * (v22 >> 1));
        }
        v13 = v20 + 2;
      }
      else
      {
        pcbLength = 0LL;
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4, &pcbLength) < 0 )
          return (unsigned int)-1073741811;
        v13 = pcbLength + 2;
        if ( pcbLength + 2 > 0xFFFE )
          return (unsigned int)-1073741811;
      }
      v14 = v13 == v4;
      goto LABEL_23;
  }
  return v3;
}
