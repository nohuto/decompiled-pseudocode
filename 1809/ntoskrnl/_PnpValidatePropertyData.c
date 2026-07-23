/*
 * XREFs of _PnpValidatePropertyData @ 0x1406A4464
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x14059193C (PiDqQueryValidateQueryData.c)
 *     _PnpGetObjectPropertyWorker @ 0x14059B194 (_PnpGetObjectPropertyWorker.c)
 *     ValidFilter @ 0x1406A438C (ValidFilter.c)
 *     PiSwValidatePropertyArray @ 0x1406D8EB0 (PiSwValidatePropertyArray.c)
 *     _PnpSetObjectPropertyWorker @ 0x1406E6A3C (_PnpSetObjectPropertyWorker.c)
 * Callees:
 *     _GetBaseTypeSize @ 0x14011CA78 (_GetBaseTypeSize.c)
 *     _IsFixedSizeType @ 0x14011CB14 (_IsFixedSizeType.c)
 *     RtlStringCbLengthW @ 0x14011CB38 (RtlStringCbLengthW.c)
 *     RtlValidRelativeSecurityDescriptor @ 0x1405AE180 (RtlValidRelativeSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1405CB090 (RtlLengthSecurityDescriptor.c)
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
  size_t v12; // rax
  bool v13; // zf
  unsigned int v15; // ecx
  size_t v16; // r11
  __int64 v17; // r11
  size_t v18; // rax
  unsigned int v19; // esi
  unsigned int v20; // eax
  unsigned int v21; // r11d
  bool v22; // zf
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
    if ( v8 <= 1 || !IsFixedSizeType(v9) || (unsigned int)v4 < v21 )
      return (unsigned int)-1073741811;
    v22 = (unsigned int)v4 % v21 == 0;
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
    v22 = v8 == 20;
  }
  if ( !v22 )
    return (unsigned int)-1073741811;
LABEL_9:
  if ( v8 <= 1 )
  {
    v13 = (_DWORD)v4 == 0;
LABEL_22:
    if ( v13 )
      return v3;
    return (unsigned int)-1073741811;
  }
  switch ( v8 )
  {
    case 0x12u:
      goto LABEL_16;
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
        v19 = (unsigned int)v4 >> 3;
        v20 = 0;
        if ( !v19 )
          return v3;
        while ( *SecurityDescriptor >= 0 )
        {
          ++v20;
          ++SecurityDescriptor;
          if ( v20 >= v19 )
            return v3;
        }
      }
      return (unsigned int)-1073741811;
    case 0x19u:
      goto LABEL_16;
    case 0x13u:
      if ( !SecurityDescriptor || !RtlValidRelativeSecurityDescriptor(SecurityDescriptor, v4, 0) )
        return (unsigned int)-1073741811;
      v13 = RtlLengthSecurityDescriptor(SecurityDescriptor) == (_DWORD)v4;
      goto LABEL_22;
    case 0x14u:
LABEL_16:
      if ( !SecurityDescriptor || (unsigned int)v4 < 2 )
        return (unsigned int)-1073741811;
      if ( (v10 & 0x2000) != 0 )
      {
        v16 = 0LL;
        while ( *(_WORD *)SecurityDescriptor )
        {
          if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4 - v16, &pcbLength) < 0 )
            return (unsigned int)-1073741811;
          if ( (pcbLength & 1) != 0 )
            return (unsigned int)-1073741811;
          v18 = pcbLength + 2;
          pcbLength = v18;
          if ( v18 > 0xFFFE )
            return (unsigned int)-1073741811;
          v16 = v18 + v17;
          if ( v16 > v4 )
            return (unsigned int)-1073741811;
          SecurityDescriptor = (__int64 *)((char *)SecurityDescriptor + 2 * (v18 >> 1));
        }
        v12 = v16 + 2;
      }
      else
      {
        pcbLength = 0LL;
        if ( RtlStringCbLengthW((STRSAFE_PCNZWCH)SecurityDescriptor, v4, &pcbLength) < 0 )
          return (unsigned int)-1073741811;
        v12 = pcbLength + 2;
        if ( pcbLength + 2 > 0xFFFE )
          return (unsigned int)-1073741811;
      }
      v13 = v12 == v4;
      goto LABEL_22;
  }
  return v3;
}
