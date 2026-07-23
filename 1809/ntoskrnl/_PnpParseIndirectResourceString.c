/*
 * XREFs of _PnpParseIndirectResourceString @ 0x1406969B4
 * Callers:
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x14059CFC8 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     _PnpRegQueryValueIndirect @ 0x1406A4260 (_PnpRegQueryValueIndirect.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F238C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 * Callees:
 *     RtlUnalignedStringCchLengthW @ 0x140015DA0 (RtlUnalignedStringCchLengthW.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlUnicodeStringToInteger @ 0x140696B10 (RtlUnicodeStringToInteger.c)
 */

char PnpParseIndirectResourceString(__int64 a1, __int64 a2, __int64 a3, ...)
{
  int v4; // ebp
  __int16 v6; // ax
  unsigned int v7; // ecx
  __int64 v8; // rsi
  __int16 v9; // ax
  __int64 i; // rcx
  __int16 v11; // dx
  int v12; // edi
  __int64 v13; // rdx
  __int16 v14; // cx
  __int64 v15; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-28h] BYREF
  size_t Value; // [rsp+68h] [rbp+20h] BYREF
  va_list Valuea; // [rsp+68h] [rbp+20h]
  va_list va1; // [rsp+70h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(Valuea, a3);
  Value = va_arg(va1, _QWORD);
  if ( RtlUnalignedStringCchLengthW((STRSAFE_PCUNZWCH)a1, 0x7FFFuLL, (size_t *)Valuea) < 0 )
    return 0;
  v4 = Value;
  if ( Value < 5 || *(_WORD *)a1 != 64 )
    return 0;
  v6 = *(_WORD *)(a1 + 2);
  v7 = 1;
  while ( v6 && v6 != 44 )
    v6 = *(_WORD *)(a1 + 2LL * ++v7);
  if ( *(_WORD *)(a1 + 2LL * v7) != 44 )
    return 0;
  v8 = v7 + 1;
  v9 = *(_WORD *)(a1 + 2 * v8);
  if ( v9 != 35 && v9 != 45 )
    return 0;
  for ( i = (unsigned int)(v8 + 1); ; i = (unsigned int)(i + 1) )
  {
    v11 = *(_WORD *)(a1 + 2 * i);
    if ( !v11 || v11 == 59 )
      break;
  }
  v12 = 0;
  if ( *(_WORD *)(a1 + 2 * i) == 59 )
    v12 = i;
  if ( RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)(a1 + 2 * (v8 + 1))) < 0 )
    return 0;
  if ( v12 )
  {
    DestinationString.Length = 2 * (v12 - v8) - 2;
    DestinationString.MaximumLength = DestinationString.Length;
  }
  if ( RtlUnicodeStringToInteger(&DestinationString, 0xAu, (PULONG)Valuea) < 0 )
    return 0;
  if ( v12 )
  {
    v13 = (unsigned int)(v12 + 1);
    v14 = *(_WORD *)(a1 + 2 * v13);
    if ( v14 )
    {
      v15 = (unsigned int)(v12 + 2);
      do
      {
        if ( v14 == 59 && *(_WORD *)(a1 + 2 * v15) == 40 && *(_WORD *)(a1 + 2LL * (unsigned int)(v4 - 1)) == 41 )
          break;
        v13 = (unsigned int)(v13 + 1);
        v15 = (unsigned int)(v15 + 1);
        v14 = *(_WORD *)(a1 + 2 * v13);
      }
      while ( v14 );
    }
  }
  return 1;
}
