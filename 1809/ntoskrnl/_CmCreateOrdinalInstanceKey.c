/*
 * XREFs of _CmCreateOrdinalInstanceKey @ 0x1406E8F20
 * Callers:
 *     _CmGetDeviceSoftwareKey @ 0x1406B3704 (_CmGetDeviceSoftwareKey.c)
 * Callees:
 *     wcstoul @ 0x140197E00 (wcstoul.c)
 *     swprintf_s @ 0x14019A4A0 (swprintf_s.c)
 *     _ultow_s @ 0x14019A8B0 (_ultow_s.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _PnpCtxRegCreateKey @ 0x1406E7704 (_PnpCtxRegCreateKey.c)
 */

__int64 __fastcall CmCreateOrdinalInstanceKey(__int64 a1, char *a2, wchar_t *a3, ULONG a4, __int64 a5, HANDLE *a6)
{
  unsigned int v9; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // r15d
  unsigned int i; // edi
  wchar_t v13; // ax
  int v14; // esi
  wchar_t *v15; // rcx
  int v16; // eax
  bool v18; // zf
  __int64 v19; // rcx
  int v20; // eax
  HANDLE Handle; // [rsp+40h] [rbp-38h] BYREF
  ULONG v22; // [rsp+98h] [rbp+20h] BYREF

  v22 = a4;
  Handle = 0LL;
  v9 = 0;
  v10 = wcstoul(L"999A", 0LL, 36);
  v11 = wcstoul(L"ZZZZ", 0LL, 36);
  if ( v10 - 1 > 0xFFFFFFFD || v11 - 1 > 0xFFFFFFFD )
    return (unsigned int)-1073741595;
  for ( i = 0; ; i = v10 )
  {
LABEL_4:
    if ( i <= 0x270F )
    {
      if ( swprintf_s(a3, 5uLL, L"%04u", i) >= 0 )
        goto LABEL_6;
      return (unsigned int)-1073741595;
    }
    if ( i >= v10 )
      break;
  }
  if ( i > v11 )
    return (unsigned int)-2147483622;
  if ( ultow_s(i, a3, 5uLL, 36) )
    return (unsigned int)-1073741595;
LABEL_6:
  v13 = *a3;
  v14 = 1;
  v15 = a3;
  while ( 2 )
  {
    if ( v13 )
    {
      if ( v13 > 0x61u )
      {
        if ( v13 == 101 || v13 == 105 || v13 == 111 )
        {
LABEL_39:
          v19 = v15 - a3;
          v20 = 3 - v19;
          if ( (_DWORD)v19 != 3 )
          {
            do
            {
              v14 *= 36;
              --v20;
            }
            while ( v20 );
          }
          goto LABEL_20;
        }
        if ( v13 <= 0x74u )
          goto LABEL_15;
        if ( v13 <= 0x76u )
          goto LABEL_39;
        v18 = v13 == 121;
      }
      else
      {
        if ( v13 == 97 || v13 == 65 || v13 == 69 || v13 == 73 || v13 == 79 )
          goto LABEL_39;
        if ( v13 <= 0x54u )
          goto LABEL_15;
        if ( v13 <= 0x56u )
          goto LABEL_39;
        v18 = v13 == 89;
      }
      if ( v18 )
        goto LABEL_39;
LABEL_15:
      v13 = *++v15;
      continue;
    }
    break;
  }
  v16 = PnpCtxRegCreateKey(a1, a2, a3, 0, 1u, 0LL, &Handle, &v22);
  if ( v16 == -1073741444 )
    return (unsigned int)-1073741595;
  if ( v16 < 0 )
  {
    return (unsigned int)v16;
  }
  else
  {
    if ( v22 != 1 )
    {
      ZwClose(Handle);
      Handle = 0LL;
LABEL_20:
      i += v14;
      goto LABEL_4;
    }
    *a6 = Handle;
  }
  return v9;
}
