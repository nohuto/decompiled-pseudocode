/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x14073C9E4
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14073DFA8 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140907D58 (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     _MuiRegAllocArray @ 0x14018254C (_MuiRegAllocArray.c)
 *     ZwClose @ 0x1401B8350 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B83B0 (ZwOpenKey.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     LdrpQueryValueKey @ 0x14073E390 (LdrpQueryValueKey.c)
 *     RtlCultureNameToLCID @ 0x14073EF20 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  WCHAR *v5; // rsi
  WCHAR *v6; // rax
  NTSTATUS v7; // ebx
  WCHAR v9; // ax
  const WCHAR *v10; // rdi
  WCHAR *v11; // rcx
  WCHAR i; // ax
  HANDLE KeyHandle; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-48h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  int v16; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v17; // [rsp+C8h] [rbp+48h] BYREF

  KeyHandle = 0LL;
  v5 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (WCHAR *)MuiRegAllocArray(a1, 0xACu);
    v5 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x158uLL);
      *a2 = 0;
      v16 = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      KeyHandle = 0LL;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v7 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
      if ( v7 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        LODWORD(v17) = 8;
        v7 = LdrpQueryValueKey(KeyHandle, &DestinationString, (__int64)&v17);
        if ( v7 >= 0 )
        {
          if ( v16 != 1 )
            goto LABEL_15;
          v9 = *v5;
          v10 = v5;
          while ( v9 )
          {
            v11 = (WCHAR *)(v10 + 1);
            if ( v9 == 44 )
            {
              *v10++ = 0;
              for ( i = *v11; i == 32; i = *v10 )
                ++v10;
              break;
            }
            v9 = *v11;
            ++v10;
          }
          RtlInitUnicodeString(&DestinationString, v5);
          if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v16) )
          {
            *a2 = v16;
            if ( *v10 )
            {
              RtlInitUnicodeString(&DestinationString, v10);
              if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v16) )
              {
                *a3 = v16;
              }
              else
              {
                v7 = -1073741823;
                *a2 = 0;
              }
            }
          }
          else
          {
LABEL_15:
            v7 = -1073741823;
          }
        }
      }
    }
    else
    {
      v7 = -1073741801;
    }
  }
  else
  {
    v7 = -1073741811;
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v7;
}
