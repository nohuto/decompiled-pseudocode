/*
 * XREFs of PiDmObjectCreate @ 0x1406F2ED0
 * Callers:
 *     PiDmAddCacheReferenceForObject @ 0x1406F2D80 (PiDmAddCacheReferenceForObject.c)
 *     PiDmObjectManagerPopulate @ 0x14072DAE0 (PiDmObjectManagerPopulate.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     RtlHashUnicodeString @ 0x140599BE0 (RtlHashUnicodeString.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     PiDmGetCacheKeys @ 0x140599E7C (PiDmGetCacheKeys.c)
 *     PiDmGetCachedKeyIndex @ 0x140599ECC (PiDmGetCachedKeyIndex.c)
 *     PnpAllocatePWSTR @ 0x14059B42C (PnpAllocatePWSTR.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14059FAFC (_CmSetDeviceInterfacePathFormat.c)
 *     PiDmCacheDataEncode @ 0x1406F391C (PiDmCacheDataEncode.c)
 *     _PnpValidateObjectName @ 0x1406F3A7C (_PnpValidateObjectName.c)
 */

__int64 __fastcall PiDmObjectCreate(unsigned int a1, const wchar_t *a2, _QWORD *a3)
{
  __int64 v5; // r13
  unsigned int v6; // ebx
  char *PoolWithTag; // rax
  char *v8; // rdi
  wchar_t **v9; // rsi
  __int64 v10; // rcx
  signed int PWSTR; // ebx
  wchar_t *v12; // rdx
  wchar_t *v13; // r8
  wchar_t *v14; // r8
  wchar_t *v15; // rax
  __int64 v16; // rdx
  __int16 v17; // cx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // r14d
  __int64 *v21; // rsi
  DEVPROPKEY **v22; // r15
  unsigned int CachedKeyIndex; // eax
  wchar_t *v25; // rax
  _QWORD *v26; // rax
  unsigned int v27; // [rsp+30h] [rbp-20h] BYREF
  DEVPROPKEY **v28; // [rsp+38h] [rbp-18h] BYREF
  UNICODE_STRING String; // [rsp+40h] [rbp-10h] BYREF
  char v31; // [rsp+A8h] [rbp+58h] BYREF

  *a3 = 0LL;
  v31 = 0;
  PiDmGetCacheKeys(a1, &v28, &v27);
  v5 = v27;
  v6 = 24 * v27 + 112;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v6, 0x5A706E50u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return (unsigned int)-1073741670;
  memset(PoolWithTag, 0, v6);
  *(_QWORD *)v8 = 0LL;
  v9 = (wchar_t **)(v8 + 16);
  *((_DWORD *)v8 + 2) = 1;
  *((_DWORD *)v8 + 7) = a1;
  PWSTR = PnpAllocatePWSTR(a2, 0x7FFFFFFFuLL, 0x5A706E50u, (PVOID *)v8 + 2);
  if ( PWSTR < 0 )
    goto LABEL_43;
  v12 = *v9;
  if ( a1 == 3 )
  {
    PWSTR = CmSetDeviceInterfacePathFormat(v10, v12, 0LL);
    if ( PWSTR < 0 )
      goto LABEL_43;
    v13 = *v9;
    *(_QWORD *)&String.Length = 0LL;
    PWSTR = 0;
    String.Buffer = 0LL;
    v14 = v13 + 4;
    if ( v14 )
    {
      v15 = v14;
      v16 = 0x7FFFLL;
      do
      {
        if ( !*v15 )
          break;
        ++v15;
        --v16;
      }
      while ( v16 );
      goto LABEL_9;
    }
  }
  else
  {
    PWSTR = PnpValidateObjectName(v10, v12, a1);
    if ( PWSTR < 0 )
      goto LABEL_43;
    v14 = *v9;
    *(_QWORD *)&String.Length = 0LL;
    PWSTR = 0;
    String.Buffer = 0LL;
    if ( v14 )
    {
      v25 = v14;
      v16 = 0x7FFFLL;
      do
      {
        if ( !*v25 )
          break;
        ++v25;
        --v16;
      }
      while ( v16 );
LABEL_9:
      PWSTR = v16 == 0 ? 0xC000000D : 0;
      if ( v16 )
        v17 = 0x7FFF - v16;
      else
        v17 = 0;
      if ( v16 )
      {
        String.Buffer = v14;
        String.Length = 2 * v17;
        String.MaximumLength = 2 * v17 + 2;
      }
    }
  }
  if ( PWSTR < 0 )
    goto LABEL_43;
  PWSTR = RtlHashUnicodeString(&String, 1u, 0, (PULONG)v8 + 6);
  if ( a1 == 1 )
  {
    v26 = v8 + 88;
    goto LABEL_37;
  }
  if ( a1 == 2 || a1 == 4 )
  {
    v26 = v8 + 40;
LABEL_37:
    *v26 = v26;
    v26[1] = v26;
    goto LABEL_18;
  }
  if ( a1 - 5 < 2 )
  {
    *((_QWORD *)v8 + 6) = v8 + 40;
    *((_QWORD *)v8 + 5) = v8 + 40;
    v26 = v8 + 64;
    goto LABEL_37;
  }
LABEL_18:
  if ( (_DWORD)v5 )
  {
    v18 = v8 + 112;
    v19 = v5;
    do
    {
      *v18 = 1;
      v18 += 6;
      --v19;
    }
    while ( v19 );
  }
  v20 = 0;
  v21 = (__int64 *)&off_140350298;
  v22 = v28;
  while ( a1 != *((_DWORD *)v21 - 2) )
  {
LABEL_23:
    ++v20;
    v21 += 7;
    if ( v20 >= 3 )
      goto LABEL_24;
  }
  CachedKeyIndex = PiDmGetCachedKeyIndex((__int64)v22, v5, *v21);
  if ( CachedKeyIndex < (unsigned int)v5 )
  {
    PWSTR = PiDmCacheDataEncode(
              17LL,
              &v31,
              1LL,
              LODWORD(v22[3 * CachedKeyIndex + 1]),
              HIDWORD(v22[3 * CachedKeyIndex + 1]),
              &v8[24 * CachedKeyIndex + 112]);
    if ( PWSTR < 0 )
      goto LABEL_43;
    goto LABEL_23;
  }
  PWSTR = -1073741595;
LABEL_24:
  if ( PWSTR < 0 )
  {
LABEL_43:
    PiDmObjectRelease((unsigned int *)v8);
    return (unsigned int)PWSTR;
  }
  *a3 = v8;
  return (unsigned int)PWSTR;
}
