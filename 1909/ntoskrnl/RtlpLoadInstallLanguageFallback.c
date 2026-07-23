/*
 * XREFs of RtlpLoadInstallLanguageFallback @ 0x14076956C
 * Callers:
 *     _RtlpMuiRegLoadInstalled @ 0x14076AD64 (_RtlpMuiRegLoadInstalled.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140945E5C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     _MuiRegAllocArray @ 0x14018E518 (_MuiRegAllocArray.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     LdrpQueryValueKey @ 0x14076A8D0 (LdrpQueryValueKey.c)
 *     LdrpOpenKey @ 0x14076AE60 (LdrpOpenKey.c)
 *     RtlCultureNameToLCID @ 0x14076B670 (RtlCultureNameToLCID.c)
 */

__int64 __fastcall RtlpLoadInstallLanguageFallback(__int64 a1, _WORD *a2, _WORD *a3)
{
  WCHAR *v5; // rsi
  WCHAR *v6; // rax
  __int64 v7; // r8
  int v8; // ebx
  WCHAR v10; // ax
  const WCHAR *v11; // rdi
  WCHAR *v12; // rcx
  WCHAR i; // ax
  HANDLE Handle; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  DWORD Lcid; // [rsp+80h] [rbp+30h] BYREF
  __int64 v17; // [rsp+98h] [rbp+48h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Handle = 0LL;
  v5 = 0LL;
  if ( a1 && a2 && a3 )
  {
    v6 = (WCHAR *)MuiRegAllocArray(a1, 0xACu);
    v5 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0x158uLL);
      *a2 = 0;
      Lcid = 0;
      *a3 = 0;
      RtlInitUnicodeString(
        &DestinationString,
        L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\NLS\\Language");
      v8 = LdrpOpenKey(&DestinationString, 0LL, v7, &Handle);
      if ( v8 >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"InstallLanguageFallback");
        LODWORD(v17) = 8;
        v8 = LdrpQueryValueKey(Handle, &DestinationString, (__int64)&v17);
        if ( v8 >= 0 )
        {
          if ( Lcid != 1 )
            goto LABEL_15;
          v10 = *v5;
          v11 = v5;
          while ( v10 )
          {
            v12 = (WCHAR *)(v11 + 1);
            if ( v10 == 44 )
            {
              *v11++ = 0;
              for ( i = *v12; i == 32; i = *v11 )
                ++v11;
              break;
            }
            v10 = *v12;
            ++v11;
          }
          RtlInitUnicodeString(&DestinationString, v5);
          if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
          {
            *a2 = Lcid;
            if ( *v11 )
            {
              RtlInitUnicodeString(&DestinationString, v11);
              if ( RtlCultureNameToLCID(&DestinationString, &Lcid) )
              {
                *a3 = Lcid;
              }
              else
              {
                v8 = -1073741823;
                *a2 = 0;
              }
            }
          }
          else
          {
LABEL_15:
            v8 = -1073741823;
          }
        }
      }
    }
    else
    {
      v8 = -1073741801;
    }
  }
  else
  {
    v8 = -1073741811;
  }
  if ( Handle )
    ZwClose(Handle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v8;
}
