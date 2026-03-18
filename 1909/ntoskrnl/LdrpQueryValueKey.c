/*
 * XREFs of LdrpQueryValueKey @ 0x14076A8D0
 * Callers:
 *     RtlpMuiRegAddAlternateCodePage @ 0x14018E614 (RtlpMuiRegAddAlternateCodePage.c)
 *     _RtlpMuiRegLoadInstalledFromKey @ 0x14018E768 (_RtlpMuiRegLoadInstalledFromKey.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14076956C (RtlpLoadInstallLanguageFallback.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1409447C0 (RtlpLoadPolicyLanguageSpec.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x140945BB0 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x140945E5C (_RtlpMuiRegPopulateBaseLanguages.c)
 * Callees:
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall LdrpQueryValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName, _DWORD *a3, void *a4, ULONG *a5)
{
  ULONG *v5; // rdi
  ULONG v10; // ebp
  ULONG Length; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v13; // rbx
  NTSTATUS v14; // esi
  ULONG v16; // eax
  ULONG ResultLength; // [rsp+78h] [rbp+20h] BYREF

  v5 = a5;
  if ( !a4 )
  {
    if ( !a5 )
    {
      v10 = 0;
LABEL_4:
      ResultLength = 0;
      Length = v10 + 12;
      if ( Length )
      {
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, Length, 0x72746C6Du);
        v13 = PoolWithTag;
        if ( PoolWithTag )
          memset(PoolWithTag, 0, Length);
      }
      else
      {
        v13 = 0LL;
      }
      if ( !v13 )
        return (unsigned int)-1073741670;
      v14 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, v13, Length, &ResultLength);
      if ( v14 != -1073741772 )
      {
        if ( v14 < 0 )
        {
LABEL_10:
          if ( v14 != -2147483643 )
          {
LABEL_11:
            ExFreePoolWithTag(v13, 0);
            return (unsigned int)v14;
          }
LABEL_21:
          if ( v5 )
            *v5 = v13[2];
          if ( a3 )
            *a3 = v13[1];
          goto LABEL_11;
        }
        if ( a4 && v5 )
        {
          v16 = v13[2];
          if ( v16 > *v5 )
          {
            v14 = -2147483643;
            goto LABEL_21;
          }
          if ( v16 <= Length )
            memmove(a4, v13 + 3, v16);
        }
      }
      if ( v14 >= 0 )
        goto LABEL_21;
      goto LABEL_10;
    }
LABEL_3:
    v10 = *a5;
    goto LABEL_4;
  }
  if ( a5 )
    goto LABEL_3;
  return 3221225485LL;
}
