/*
 * XREFs of DrvDbDeleteObjectSubKey @ 0x140902174
 * Callers:
 *     DrvDbDeleteObjectRegKey @ 0x14090200C (DrvDbDeleteObjectRegKey.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x14013DE50 (RtlStringCchCopyExW.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     wcsrchr @ 0x140197A00 (wcsrchr.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401B9D10 (ZwDeleteValueKey.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1405C8AFC (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegEnumValue @ 0x1406F6884 (_PnpCtxRegEnumValue.c)
 *     _PnpCtxRegQueryInfoKey @ 0x1406F68D4 (_PnpCtxRegQueryInfoKey.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406FB7E8 (_PnpGetGenericStorePropertyKeys.c)
 *     _PnpDeletePropertyWorker @ 0x140702234 (_PnpDeletePropertyWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x14070EEDC (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlDeleteKeyTransacted @ 0x140763330 (_RegRtlDeleteKeyTransacted.c)
 */

__int64 __fastcall DrvDbDeleteObjectSubKey(__int64 *a1, char *a2, const WCHAR *a3, unsigned int a4)
{
  __int64 v4; // rax
  unsigned int v5; // esi
  PVOID PoolWithTag; // r13
  unsigned int v9; // edi
  wchar_t *v10; // r12
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  int InfoKey; // ebx
  __int64 v15; // rcx
  signed int i; // eax
  __int64 v17; // rbx
  int v18; // eax
  __int64 v19; // rdi
  int v20; // eax
  __int64 v21; // rbx
  size_t v22; // rbx
  wchar_t *v23; // rax
  char *j; // rax
  __int64 v25; // rcx
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  int v30; // eax
  wchar_t *v31; // rax
  bool v32; // zf
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rcx
  unsigned int v37; // esi
  __int64 v38; // rcx
  WCHAR *v39; // rdi
  HANDLE v40; // r14
  __int64 dwFlags; // [rsp+28h] [rbp-38h]
  int v43; // [rsp+40h] [rbp-20h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-18h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v47; // [rsp+B8h] [rbp+58h] BYREF

  v4 = *a1;
  v5 = 0;
  Handle = 0LL;
  PoolWithTag = 0LL;
  v9 = 0;
  v10 = 0LL;
  if ( a4 <= 1 )
  {
    if ( v4 && (v11 = *(_QWORD *)(v4 + 224)) != 0 )
      v12 = *(_QWORD *)(v11 + 8);
    else
      v12 = 0LL;
    v13 = RegRtlDeleteTreeInternal(a2, a3, v12, 0);
    InfoKey = v13;
LABEL_7:
    if ( v13 == -1073741444 )
      InfoKey = 0;
    goto LABEL_86;
  }
  v15 = 0LL;
  if ( v4 )
    v15 = *(_QWORD *)(v4 + 224);
  v13 = SysCtxRegOpenKey(v15, (__int64)a2, (__int64)a3, 0, 0x3001Fu, (__int64)&Handle);
  InfoKey = v13;
  if ( v13 < 0 )
    goto LABEL_7;
  for ( i = PnpGetGenericStorePropertyKeys(*a1, (int)Handle, 0LL, 0, 0LL, 0, &v47);
        ;
        i = PnpGetGenericStorePropertyKeys(*a1, (int)Handle, 0LL, 0, (__int64)PoolWithTag, v17, &v47) )
  {
    InfoKey = i;
    if ( i != -1073741789 )
      break;
    v17 = v47;
    if ( v47 <= v9 )
    {
      InfoKey = -1073741595;
      break;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
    v9 = v17;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 20 * v17, 0x42444450u);
    if ( !PoolWithTag )
    {
      InfoKey = -1073741801;
      break;
    }
  }
  if ( (int)(InfoKey + 0x80000000) >= 0 && InfoKey != -1073741275 )
    goto LABEL_84;
  if ( InfoKey != -1073741275 )
    v5 = v9;
  v18 = 0;
  v19 = 0LL;
  if ( InfoKey != -1073741275 )
    v18 = InfoKey;
  InfoKey = v18;
  if ( v5 )
  {
    do
    {
      v20 = PnpDeletePropertyWorker(*a1, (int)Handle, 0LL, (__int64)PoolWithTag + 20 * v19, 0, dwFlags, 0);
      InfoKey = v20;
      if ( v20 == -1073741275 || v20 == -1073741790 )
      {
        InfoKey = 0;
      }
      else if ( v20 < 0 )
      {
        goto LABEL_84;
      }
      v19 = (unsigned int)(v19 + 1);
    }
    while ( (unsigned int)v19 < v5 );
  }
  if ( InfoKey < 0 )
    goto LABEL_84;
  if ( !wcschr(a3, 0x5Cu) )
  {
    if ( *a1 && (v33 = *(_QWORD *)(*a1 + 224)) != 0 )
      v34 = *(_QWORD *)(v33 + 8);
    else
      v34 = 0LL;
    v35 = RegRtlDeleteKeyTransacted((char *)Handle, 0LL, v34);
    InfoKey = v35;
    if ( v35 == -1073741444 )
    {
      InfoKey = 0;
      goto LABEL_84;
    }
    if ( v35 != -1073741535 )
      goto LABEL_84;
    InfoKey = PnpCtxRegQueryInfoKey(v36, (int)Handle, 0, 0, (__int64)&v47, (__int64)&v43, 0LL);
    if ( InfoKey < 0 )
      goto LABEL_84;
    v37 = v43 + 1;
    if ( !v47 )
      goto LABEL_84;
    v39 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * v37, 0x42444450u);
    if ( v39 )
    {
      while ( 1 )
      {
        v47 = v37;
        InfoKey = PnpCtxRegEnumValue(v38, (__int64)Handle, 0, (__int64)v39, (__int64)&v47, 0LL, 0LL, 0LL);
        if ( InfoKey < 0 )
          break;
        v40 = Handle;
        InfoKey = RtlInitUnicodeStringEx(&DestinationString, v39);
        if ( InfoKey >= 0 )
          InfoKey = ZwDeleteValueKey(v40, &DestinationString);
        if ( InfoKey != -1073741772 && InfoKey < 0 )
          goto LABEL_81;
      }
      if ( InfoKey == -2147483622 )
        InfoKey = 0;
LABEL_81:
      ExFreePoolWithTag(v39, 0);
      goto LABEL_82;
    }
LABEL_40:
    InfoKey = -1073741801;
    goto LABEL_84;
  }
  v21 = -1LL;
  do
    ++v21;
  while ( a3[v21] );
  v22 = v21 + 1;
  v23 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2 * v22, 0x42444450u);
  v10 = v23;
  if ( !v23 )
    goto LABEL_40;
  RtlStringCchCopyExW(v23, v22, a3, 0LL, 0LL, 0x900u);
  for ( j = (char *)Handle; ; j = 0LL )
  {
    if ( !j )
    {
      v25 = 0LL;
      if ( *a1 )
        v25 = *(_QWORD *)(*a1 + 224);
      v26 = SysCtxRegOpenKey(v25, (__int64)a2, (__int64)v10, 0, 0x3001Fu, (__int64)&Handle);
      InfoKey = v26;
      if ( v26 < 0 )
      {
        v32 = v26 == -1073741444;
        goto LABEL_60;
      }
      InfoKey = PnpCtxRegQueryInfoKey(v27, (int)Handle, (int)&v43, 0, (__int64)&v47, 0LL, 0LL);
      if ( InfoKey < 0 || v43 || v47 )
        goto LABEL_82;
      j = (char *)Handle;
    }
    if ( *a1 && (v28 = *(_QWORD *)(*a1 + 224)) != 0 )
      v29 = *(_QWORD *)(v28 + 8);
    else
      v29 = 0LL;
    v30 = RegRtlDeleteKeyTransacted(j, 0LL, v29);
    InfoKey = v30;
    if ( v30 == -1073741444 )
    {
      InfoKey = 0;
      goto LABEL_57;
    }
    if ( v30 < 0 )
      break;
LABEL_57:
    v31 = wcsrchr(v10, 0x5Cu);
    if ( !v31 )
      goto LABEL_82;
    *v31 = 0;
    ZwClose(Handle);
    Handle = 0LL;
  }
  v32 = v30 == -1073741535;
LABEL_60:
  if ( v32 )
    InfoKey = 0;
LABEL_82:
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
LABEL_84:
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
LABEL_86:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)InfoKey;
}
