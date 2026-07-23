/*
 * XREFs of _PnpParseIndirectInfString @ 0x1406B8FD8
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059CFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A4260 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F238C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140015DA0 (RtlUnalignedStringCchLengthW.c)
 */

char PnpParseIndirectInfString(const wchar_t *a1, __int64 a2, __int64 a3, ...)
{
  _WORD *v3; // r11
  __int16 v4; // ax
  unsigned int v5; // ecx
  __int64 i; // rdx
  __int16 v8; // cx
  int v9; // ecx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int16 v12; // cx
  __int64 v13; // r8
  size_t pcchLength; // [rsp+48h] [rbp+20h] BYREF
  va_list pcchLengtha; // [rsp+48h] [rbp+20h]
  va_list va1; // [rsp+50h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(pcchLengtha, a3);
  pcchLength = va_arg(va1, _QWORD);
  if ( RtlUnalignedStringCchLengthW(a1, 0x7FFFuLL, (size_t *)pcchLengtha) < 0 || pcchLength < 5 || *v3 != 64 )
    return 0;
  v4 = v3[1];
  v5 = 1;
  while ( v4 && v4 != 44 )
    v4 = v3[++v5];
  if ( v3[v5] != 44 || v3[v5 + 1] != 37 )
    return 0;
  for ( i = v5 + 2; ; i = (unsigned int)(i + 1) )
  {
    v8 = v3[i];
    if ( !v8 || v8 == 59 )
      break;
  }
  v9 = 0;
  if ( v3[i] == 59 )
    v9 = i;
  if ( v9 )
  {
    v10 = (unsigned int)(v9 - 1);
  }
  else
  {
    if ( pcchLength > 0xFFFFFFFF )
      return 0;
    v10 = (unsigned int)(pcchLength - 1);
  }
  if ( v3[v10] != 37 )
    return 0;
  if ( v9 )
  {
    v11 = (unsigned int)(v9 + 1);
    v12 = v3[v11];
    if ( v12 )
    {
      v13 = (unsigned int)(v11 + 1);
      do
      {
        if ( v12 == 59 && v3[v13] == 40 && v3[(unsigned int)(pcchLength - 1)] == 41 )
          break;
        v11 = (unsigned int)(v11 + 1);
        v13 = (unsigned int)(v13 + 1);
        v12 = v3[v11];
      }
      while ( v12 );
    }
  }
  return 1;
}
