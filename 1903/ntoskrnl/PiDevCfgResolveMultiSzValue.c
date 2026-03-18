/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x14072B300
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     PnpValidateMultiSzData @ 0x140144CF4 (PnpValidateMultiSzData.c)
 *     PnpMultiSzContainsString @ 0x14016F2A4 (PnpMultiSzContainsString.c)
 *     PnpValidateRegistryMultiSz @ 0x14016F324 (PnpValidateRegistryMultiSz.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140653D20 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x14069A450 (IopGetRegistryValue.c)
 */

__int64 __fastcall PiDevCfgResolveMultiSzValue(
        unsigned int a1,
        unsigned int a2,
        _WORD *a3,
        int a4,
        HANDLE KeyHandle,
        const WCHAR *a6,
        unsigned int *a7,
        _QWORD *a8)
{
  size_t v8; // rbx
  _WORD *v9; // r15
  _WORD *v11; // r14
  unsigned int *v13; // r13
  NTSTATUS RegistryValue; // eax
  unsigned int v15; // edi
  unsigned int v16; // esi
  _WORD *v17; // rax
  unsigned int v18; // ecx
  int v19; // r12d
  const WCHAR *v20; // r13
  __int64 v21; // rax
  unsigned int v22; // r12d
  const WCHAR *v24; // r12
  unsigned int v25; // edi
  bool v26; // zf
  unsigned int v27; // ebx
  unsigned int v28; // eax
  _WORD *PoolWithTag; // rax
  NTSTATUS v30; // [rsp+20h] [rbp-30h]
  unsigned int v31; // [rsp+20h] [rbp-30h]
  PVOID P; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING Src; // [rsp+30h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF

  v8 = a2;
  v9 = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&Src.Length = 0LL;
  v11 = a3;
  Src.Buffer = 0LL;
  v13 = 0LL;
  P = 0LL;
  *a7 = 0;
  *a8 = 0LL;
  if ( !a1 )
    goto LABEL_59;
  if ( a1 > 2 )
  {
    if ( a1 != 7 )
      goto LABEL_59;
    if ( PnpValidateMultiSzData(a3, a2) )
      goto LABEL_5;
    return (unsigned int)-1073741823;
  }
  if ( a2 < 2 || a3[((unsigned __int64)a2 >> 1) - 1] )
    return (unsigned int)-1073741823;
LABEL_5:
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &P);
  v13 = (unsigned int *)P;
  v15 = RegistryValue;
  v30 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue == -1073741772 )
    {
      v15 = 0;
      if ( (a4 & 0x40000) == 0 )
      {
        v16 = 0;
        goto LABEL_23;
      }
      v28 = v8 + 2;
      if ( a1 == 7 )
        v28 = v8;
      v16 = v28;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x63647050u);
      v9 = PoolWithTag;
      if ( PoolWithTag )
      {
        memmove(PoolWithTag, v11, v8);
        goto LABEL_23;
      }
      v13 = (unsigned int *)P;
      v15 = -1073741670;
    }
    goto LABEL_26;
  }
  if ( !PnpValidateRegistryMultiSz(P) )
  {
LABEL_59:
    v15 = -1073741823;
    goto LABEL_26;
  }
  if ( (a4 & 0x40000) != 0 )
  {
    v16 = v13[3];
    *(_QWORD *)&Src.Length = (char *)v13 + v13[2];
    if ( !v16 )
      v16 = 2;
    v17 = ExAllocatePoolWithTag(PagedPool, v16 + (unsigned int)v8, 0x63647050u);
    v18 = 0;
    v9 = v17;
    if ( v17 )
    {
      if ( v16 > 2 )
      {
        memmove(v17, *(const void **)&Src.Length, v16);
        v18 = v16 - 2;
      }
      v19 = a4 & 0x20000;
      v31 = v18;
      if ( a1 != 7 )
      {
        if ( v19 || v16 == 2 || !PnpMultiSzContainsString(*(PCWSTR *)&Src.Length, v11) )
        {
          memmove((char *)v9 + v31, v11, v8);
          v16 += v8;
        }
        goto LABEL_23;
      }
      if ( v19 )
      {
        memmove((char *)v9 + v18, v11, v8);
        v16 = v16 + v8 - 2;
        goto LABEL_23;
      }
      if ( !*v11 )
      {
LABEL_23:
        if ( v9 )
          v9[((unsigned __int64)v16 >> 1) - 1] = 0;
        *a7 = v16;
        *a8 = v9;
        goto LABEL_26;
      }
      v20 = *(const WCHAR **)&Src.Length;
      do
      {
        v21 = -1LL;
        do
          ++v21;
        while ( v11[v21] );
        v22 = 2 * v21 + 2;
        if ( !PnpMultiSzContainsString(v20, v11) )
        {
          memmove((char *)v9 + v31, v11, v22);
          v31 += v22;
          v16 += v22;
        }
        v11 += (unsigned __int64)v22 >> 1;
      }
      while ( *v11 );
LABEL_22:
      v13 = (unsigned int *)P;
      goto LABEL_23;
    }
  }
  else
  {
    v9 = ExAllocatePoolWithTag(PagedPool, v13[3], 0x63647050u);
    if ( v9 )
    {
      if ( a1 != 7 )
        RtlInitUnicodeString(&DestinationString, v11);
      v16 = 2;
      v24 = (const WCHAR *)((char *)v13 + v13[2]);
      if ( !*v24 )
        goto LABEL_23;
      v25 = 0;
      do
      {
        RtlInitUnicodeString(&Src, v24);
        if ( a1 == 7 )
          v26 = PnpMultiSzContainsString(v11, Src.Buffer) == 0LL;
        else
          v26 = RtlEqualUnicodeString(&DestinationString, &Src, 1u) == 0;
        if ( v26 )
        {
          v27 = Src.Length + 2;
          memmove((char *)v9 + v25, Src.Buffer, v27);
          v25 += v27;
          v16 += v27;
        }
        v24 += ((unsigned __int64)Src.Length >> 1) + 1;
      }
      while ( *v24 );
      v15 = v30;
      goto LABEL_22;
    }
  }
  v15 = -1073741670;
LABEL_26:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return v15;
}
