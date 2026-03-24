/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x140182AE0
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x14073D974 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A90 (RtlInitUnicodeString.c)
 *     wcspbrk @ 0x1401980D0 (wcspbrk.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     memset @ 0x1401D1880 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlCultureNameToLCID @ 0x14073EF00 (RtlCultureNameToLCID.c)
 *     RtlpGetWindowsPolicy @ 0x14073EFC4 (RtlpGetWindowsPolicy.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  unsigned int v1; // r14d
  void *v3; // r13
  void *v4; // r15
  unsigned int v5; // esi
  unsigned int v6; // eax
  PVOID PoolWithTag; // rax
  int v8; // ebx
  const WCHAR *v9; // r14
  wchar_t *v10; // rsi
  wchar_t *v11; // rax
  unsigned int v12; // eax
  PVOID v13; // rax
  int v14; // ebx
  const WCHAR *v15; // r14
  wchar_t *v16; // rsi
  wchar_t *v17; // rax
  unsigned int v18; // eax
  wchar_t *v19; // rcx
  const WCHAR *v20; // r14
  int v21; // ebx
  wchar_t *v22; // rsi
  wchar_t *v23; // rax
  unsigned int v24; // ebx
  __int64 result; // rax
  unsigned int v26; // [rsp+20h] [rbp-38h]
  unsigned int v27; // [rsp+24h] [rbp-34h]
  BOOL v28; // [rsp+28h] [rbp-30h]
  __int64 v29; // [rsp+2Ch] [rbp-2Ch]
  wchar_t *Str; // [rsp+38h] [rbp-20h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-18h] BYREF
  unsigned int Size; // [rsp+A0h] [rbp+48h]
  unsigned int v33; // [rsp+A8h] [rbp+50h]
  char v34; // [rsp+B0h] [rbp+58h] BYREF

  LODWORD(v29) = -1;
  v1 = 0;
  v33 = 0;
  v3 = 0LL;
  v26 = 0;
  v4 = 0LL;
  Str = 0LL;
  v5 = 0;
  v27 = 0;
  v28 = 0;
  if ( !a1 )
  {
    v24 = -1073741811;
    v1 = 0;
    goto LABEL_47;
  }
  v28 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v29 = MEMORY[0];
    ExFreePoolWithTag(0LL, 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    v6 = Size;
    v33 = Size + 4;
    if ( Size != -4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size + 4, 0x72746C6Du);
      v3 = PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, Size + 4);
      v6 = Size;
    }
    if ( !v3 )
    {
      v24 = -1073741801;
      goto LABEL_46;
    }
    memmove(v3, 0LL, v6);
    v8 = 0;
    v9 = (const WCHAR *)v3;
    v10 = wcspbrk((const wchar_t *)v3, L";");
    LOWORD(v11) = 0;
    if ( v10 )
    {
      do
      {
        *v10 = 0;
        RtlInitUnicodeString(&DestinationString, v9);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
          ++v8;
        v9 = v10 + 1;
        v11 = wcspbrk(v10 + 1, L";");
        v10 = v11;
      }
      while ( v11 );
    }
    if ( *v9 != (_WORD)v11 )
    {
      RtlInitUnicodeString(&DestinationString, v9);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
        ++v8;
    }
    if ( !v8 )
    {
      ExFreePoolWithTag(v3, 0);
      v33 = 0;
      v3 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") >= 0 )
  {
    v12 = Size;
    v26 = Size + 4;
    if ( Size == -4 )
    {
      v4 = 0LL;
    }
    else
    {
      v13 = ExAllocatePoolWithTag(PagedPool, Size + 4, 0x72746C6Du);
      v4 = v13;
      if ( v13 )
        memset(v13, 0, Size + 4);
      v12 = Size;
    }
    if ( !v4 )
    {
      v5 = 0;
      v24 = -1073741801;
      goto LABEL_45;
    }
    memmove(v4, 0LL, v12);
    v14 = 0;
    v15 = (const WCHAR *)v4;
    v16 = wcspbrk((const wchar_t *)v4, L";");
    LOWORD(v17) = 0;
    if ( v16 )
    {
      do
      {
        *v16 = 0;
        RtlInitUnicodeString(&DestinationString, v15);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
          ++v14;
        v15 = v16 + 1;
        v17 = wcspbrk(v16 + 1, L";");
        v16 = v17;
      }
      while ( v17 );
    }
    if ( *v15 != (_WORD)v17 )
    {
      RtlInitUnicodeString(&DestinationString, v15);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
        ++v14;
    }
    if ( !v14 )
    {
      ExFreePoolWithTag(v4, 0);
      v26 = 0;
      v4 = 0LL;
    }
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") >= 0 )
  {
    v18 = Size;
    v27 = Size + 4;
    if ( Size == -4 )
    {
      v19 = 0LL;
      Str = 0LL;
    }
    else
    {
      Str = (wchar_t *)ExAllocatePoolWithTag(PagedPool, Size + 4, 0x72746C6Du);
      v19 = Str;
      if ( Str )
      {
        memset(Str, 0, Size + 4);
        v19 = Str;
      }
      v18 = Size;
    }
    if ( !v19 )
    {
      v27 = 0;
      v24 = -1073741801;
      goto LABEL_44;
    }
    memmove(v19, 0LL, v18);
    v20 = Str;
    v21 = 0;
    v22 = wcspbrk(Str, L";");
    LOWORD(v23) = 0;
    if ( v22 )
    {
      do
      {
        *v22 = 0;
        RtlInitUnicodeString(&DestinationString, v20);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
          ++v21;
        v20 = v22 + 1;
        v23 = wcspbrk(v22 + 1, L";");
        v22 = v23;
      }
      while ( v23 );
    }
    if ( *v20 != (_WORD)v23 )
    {
      RtlInitUnicodeString(&DestinationString, v20);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
        ++v21;
    }
    if ( !v21 )
    {
      ExFreePoolWithTag(Str, 0);
      v27 = 0;
      Str = 0LL;
    }
  }
  v24 = 0;
LABEL_44:
  v5 = v26;
LABEL_45:
  v1 = v33;
LABEL_46:
  if ( v3 && v4 )
  {
    ExFreePoolWithTag(v4, 0);
    v4 = 0LL;
    v5 = 0;
  }
LABEL_47:
  *(_DWORD *)a1 |= 0x800u;
  *(_DWORD *)(a1 + 116) = v28;
  *(_DWORD *)(a1 + 120) = v29;
  *(_QWORD *)(a1 + 136) = Str;
  *(_DWORD *)(a1 + 144) = v27;
  result = v24;
  *(_QWORD *)(a1 + 128) = v3;
  *(_QWORD *)(a1 + 152) = v4;
  *(_DWORD *)(a1 + 148) = v1;
  *(_DWORD *)(a1 + 160) = v5;
  return result;
}
