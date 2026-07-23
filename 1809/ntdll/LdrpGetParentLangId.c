/*
 * XREFs of LdrpGetParentLangId @ 0x1800830D4
 * Callers:
 *     LdrResFallbackLangList @ 0x180039A78 (LdrResFallbackLangList.c)
 *     LdrpSearchResourceSection_U @ 0x18003D2E8 (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003E440 (LdrpLoadResourceFromAlternativeModule.c)
 * Callees:
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlGetParentLocaleName @ 0x18003B4B0 (RtlGetParentLocaleName.c)
 *     RtlLcidToLocaleName @ 0x180040700 (RtlLcidToLocaleName.c)
 *     RtlLocaleNameToLcid @ 0x180041310 (RtlLocaleNameToLcid.c)
 *     __security_check_cookie @ 0x18008FED0 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpGetParentLangId(unsigned __int16 a1, _WORD *a2)
{
  wchar_t *v2; // rdi
  LCID v4; // ebx
  NTSTATUS v5; // eax
  wchar_t *Buffer; // rsi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ebx
  _UNICODE_STRING ParentLocaleName; // [rsp+20h] [rbp-39h] BYREF
  _UNICODE_STRING LocaleName; // [rsp+30h] [rbp-29h] BYREF
  DWORD lcid; // [rsp+40h] [rbp-19h] BYREF
  _BYTE v13[32]; // [rsp+48h] [rbp-11h] BYREF
  _BYTE v14[32]; // [rsp+68h] [rbp+Fh] BYREF

  v2 = 0LL;
  *(_QWORD *)&ParentLocaleName.Length = 0LL;
  ParentLocaleName.Buffer = 0LL;
  *(_QWORD *)&LocaleName.Length = 0LL;
  LocaleName.Buffer = 0LL;
  if ( !a2 )
    return 3221225485LL;
  v4 = a1;
  *a2 = 0;
  LocaleName.Buffer = (wchar_t *)v14;
  LocaleName.MaximumLength = 30;
  v5 = RtlLcidToLocaleName(a1, &LocaleName, 2u, 0);
  if ( v5 >= 0 )
    goto LABEL_3;
  if ( v5 == -1073741789 )
  {
    LocaleName.Buffer = 0LL;
    LocaleName.MaximumLength = 0;
    v5 = RtlLcidToLocaleName(v4, &LocaleName, 2u, 1u);
  }
  if ( v5 >= 0 )
  {
LABEL_3:
    Buffer = LocaleName.Buffer;
    ParentLocaleName.Buffer = (wchar_t *)v13;
    ParentLocaleName.MaximumLength = 30;
    v7 = RtlGetParentLocaleName(LocaleName.Buffer, &ParentLocaleName, 6u, 0);
    v8 = v7;
    if ( v7 < 0 )
    {
      if ( v7 == -1073741789 )
      {
        ParentLocaleName.Buffer = 0LL;
        ParentLocaleName.MaximumLength = 0;
        v8 = RtlGetParentLocaleName(Buffer, &ParentLocaleName, 6u, 1u);
      }
      if ( v8 < 0 )
        goto LABEL_5;
    }
    if ( ParentLocaleName.Length )
    {
      v2 = ParentLocaleName.Buffer;
      v8 = RtlLocaleNameToLcid(ParentLocaleName.Buffer, &lcid, 3u);
      if ( v8 >= 0 )
        *a2 = lcid;
    }
    else
    {
LABEL_5:
      v2 = ParentLocaleName.Buffer;
    }
  }
  else
  {
    Buffer = LocaleName.Buffer;
    v8 = -1073741811;
  }
  if ( v2 != (wchar_t *)v13 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, ParentLocaleName.Buffer);
    Buffer = LocaleName.Buffer;
  }
  if ( Buffer != (wchar_t *)v14 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, LocaleName.Buffer);
  return (unsigned int)v8;
}
