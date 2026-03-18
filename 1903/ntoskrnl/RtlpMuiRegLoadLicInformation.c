/*
 * XREFs of RtlpMuiRegLoadLicInformation @ 0x14018E308
 * Callers:
 *     RtlpMuiRegLoadRegistryInfo @ 0x140765814 (RtlpMuiRegLoadRegistryInfo.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 *     wcspbrk @ 0x1401A2920 (wcspbrk.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     RtlCultureNameToLCID @ 0x140766B70 (RtlCultureNameToLCID.c)
 *     RtlpGetWindowsPolicy @ 0x140766C44 (RtlpGetWindowsPolicy.c)
 */

__int64 __fastcall RtlpMuiRegLoadLicInformation(__int64 a1)
{
  __int64 v1; // rsi
  ULONG_PTR v2; // r13
  ULONG_PTR v3; // rdi
  int v4; // r14d
  ULONG_PTR v5; // r15
  unsigned int v6; // eax
  PVOID PoolWithTag; // rax
  const WCHAR *v8; // r12
  int v9; // ebx
  wchar_t *v10; // r14
  wchar_t *v11; // rax
  unsigned int v12; // eax
  PVOID v13; // rax
  int v14; // ebx
  const WCHAR *v15; // r12
  wchar_t *v16; // r14
  wchar_t *v17; // rax
  unsigned int v18; // eax
  PVOID v19; // rax
  int v20; // ebx
  const WCHAR *v21; // r12
  wchar_t *v22; // r14
  wchar_t *v23; // rax
  unsigned int v24; // ebx
  __int64 result; // rax
  int v26; // [rsp+20h] [rbp-48h]
  int v27; // [rsp+24h] [rbp-44h]
  int v28; // [rsp+28h] [rbp-40h]
  BOOL v29; // [rsp+2Ch] [rbp-3Ch]
  int v30; // [rsp+30h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-20h] BYREF
  unsigned int Size; // [rsp+B8h] [rbp+50h]
  char v34; // [rsp+C0h] [rbp+58h] BYREF

  v30 = -1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  v1 = a1;
  DestinationString.Buffer = 0LL;
  v2 = 0LL;
  v27 = 0;
  v3 = 0LL;
  v26 = 0;
  v4 = 0;
  v28 = 0;
  v5 = 0LL;
  v29 = 0;
  if ( !a1 )
  {
    v24 = -1073741811;
    goto LABEL_49;
  }
  v29 = (int)RtlpGetWindowsPolicy(L"WindowsExcludedProcs") >= 0;
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Number-Allowed") >= 0 )
  {
    v30 = MEMORY[0];
    ExFreeHeapPool(0LL);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Allowed") >= 0 )
  {
    v6 = Size;
    if ( Size != -4 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size + 4, 0x72746C6Du);
      v2 = (ULONG_PTR)PoolWithTag;
      if ( PoolWithTag )
        memset(PoolWithTag, 0, Size + 4);
      v6 = Size;
    }
    if ( !v2 )
    {
      v27 = 0;
      goto LABEL_53;
    }
    memmove((void *)v2, 0LL, v6);
    v8 = (const WCHAR *)v2;
    v9 = 0;
    v10 = wcspbrk((const wchar_t *)v2, L";");
    LOWORD(v11) = 0;
    if ( v10 )
    {
      do
      {
        *v10 = 0;
        RtlInitUnicodeString(&DestinationString, v8);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
          ++v9;
        v8 = v10 + 1;
        v11 = wcspbrk(v10 + 1, L";");
        v10 = v11;
      }
      while ( v11 );
      v1 = a1;
    }
    if ( *v8 != (_WORD)v11 )
    {
      RtlInitUnicodeString(&DestinationString, v8);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
        ++v9;
    }
    if ( !v9 )
      ExFreeHeapPool(v2);
    v27 = v9 != 0 ? Size + 4 : 0;
    v2 &= -(__int64)(v9 != 0);
    v4 = 0;
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-Disallowed") >= 0 )
  {
    v12 = Size;
    if ( Size == -4 )
    {
      v3 = 0LL;
    }
    else
    {
      v13 = ExAllocatePoolWithTag(PagedPool, Size + 4, 0x72746C6Du);
      v3 = (ULONG_PTR)v13;
      if ( v13 )
        memset(v13, 0, Size + 4);
      v12 = Size;
    }
    if ( !v3 )
    {
      v4 = 0;
      goto LABEL_53;
    }
    memmove((void *)v3, 0LL, v12);
    v14 = 0;
    v15 = (const WCHAR *)v3;
    v16 = wcspbrk((const wchar_t *)v3, L";");
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
      v1 = a1;
    }
    if ( *v15 != (_WORD)v17 )
    {
      RtlInitUnicodeString(&DestinationString, v15);
      if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
        ++v14;
    }
    if ( !v14 )
      ExFreeHeapPool(v3);
    v4 = v14 != 0 ? Size + 4 : 0;
    v26 = v4;
    v3 &= -(__int64)(v14 != 0);
  }
  if ( (int)RtlpGetWindowsPolicy(L"Kernel-MUI-Language-SKU") >= 0 )
  {
    v18 = Size;
    if ( Size == -4 )
    {
      v5 = 0LL;
    }
    else
    {
      v19 = ExAllocatePoolWithTag(PagedPool, Size + 4, 0x72746C6Du);
      v5 = (ULONG_PTR)v19;
      if ( v19 )
        memset(v19, 0, Size + 4);
      v18 = Size;
    }
    if ( v5 )
    {
      memmove((void *)v5, 0LL, v18);
      v20 = 0;
      v21 = (const WCHAR *)v5;
      v22 = wcspbrk((const wchar_t *)v5, L";");
      LOWORD(v23) = 0;
      if ( v22 )
      {
        do
        {
          *v22 = 0;
          RtlInitUnicodeString(&DestinationString, v21);
          if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
            ++v20;
          v21 = v22 + 1;
          v23 = wcspbrk(v22 + 1, L";");
          v22 = v23;
        }
        while ( v23 );
        v1 = a1;
      }
      if ( *v21 != (_WORD)v23 )
      {
        RtlInitUnicodeString(&DestinationString, v21);
        if ( (unsigned __int8)RtlCultureNameToLCID(&DestinationString, &v34) )
          ++v20;
      }
      if ( !v20 )
        ExFreeHeapPool(v5);
      v28 = v20 != 0 ? Size + 4 : 0;
      v5 &= -(__int64)(v20 != 0);
      v4 = v26;
      goto LABEL_47;
    }
    v28 = 0;
LABEL_53:
    v24 = -1073741801;
    goto LABEL_48;
  }
LABEL_47:
  v24 = 0;
LABEL_48:
  if ( v2 && v3 )
  {
    ExFreeHeapPool(v3);
    v3 = 0LL;
    v4 = 0;
  }
LABEL_49:
  *(_DWORD *)v1 |= 0x800u;
  *(_DWORD *)(v1 + 116) = v29;
  *(_DWORD *)(v1 + 120) = v30;
  *(_DWORD *)(v1 + 148) = v27;
  *(_DWORD *)(v1 + 144) = v28;
  result = v24;
  *(_QWORD *)(v1 + 128) = v2;
  *(_QWORD *)(v1 + 152) = v3;
  *(_DWORD *)(v1 + 160) = v4;
  *(_QWORD *)(v1 + 136) = v5;
  return result;
}
