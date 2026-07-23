/*
 * XREFs of PiDevCfgResolveMultiSzValue @ 0x140706AC0
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PnpValidateMultiSzData @ 0x14015DA84 (PnpValidateMultiSzData.c)
 *     PnpValidateRegistryMultiSz @ 0x140169A18 (PnpValidateRegistryMultiSz.c)
 *     PnpMultiSzContainsString @ 0x14016B884 (PnpMultiSzContainsString.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x140626D60 (RtlEqualUnicodeString.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
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
  unsigned int v8; // esi
  size_t v9; // rbx
  _WORD *v11; // r14
  unsigned int *v13; // r15
  NTSTATUS RegistryValue; // eax
  unsigned int v15; // edi
  _WORD *v16; // rax
  unsigned int v17; // ecx
  _WORD *v18; // rbp
  int v19; // r12d
  const WCHAR *v20; // r15
  __int64 v21; // rax
  unsigned int v22; // r12d
  const WCHAR *v24; // r12
  unsigned int v25; // r15d
  bool v26; // zf
  unsigned int v27; // ebx
  unsigned int v28; // eax
  _WORD *PoolWithTag; // rax
  PVOID P; // [rsp+28h] [rbp-50h] BYREF
  UNICODE_STRING Src; // [rsp+30h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF
  unsigned int v33; // [rsp+80h] [rbp+8h]

  v8 = 0;
  v9 = a2;
  P = 0LL;
  v11 = a3;
  v13 = 0LL;
  *a7 = 0;
  *a8 = 0LL;
  if ( !a1 )
    goto LABEL_60;
  if ( a1 > 2 )
  {
    if ( a1 == 7 )
    {
      if ( PnpValidateMultiSzData(a3, a2) )
        goto LABEL_5;
      return (unsigned int)-1073741823;
    }
LABEL_60:
    v15 = -1073741823;
    goto LABEL_26;
  }
  if ( a2 < 2 || a3[((unsigned __int64)a2 >> 1) - 1] )
    return (unsigned int)-1073741823;
LABEL_5:
  RegistryValue = IopGetRegistryValue(KeyHandle, a6, 0, &P);
  v13 = (unsigned int *)P;
  v15 = RegistryValue;
  if ( RegistryValue < 0 )
  {
    if ( RegistryValue != -1073741772 )
      goto LABEL_26;
    v15 = 0;
    if ( (a4 & 0x40000) != 0 )
    {
      v28 = v9 + 2;
      if ( a1 == 7 )
        v28 = v9;
      v8 = v28;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v28, 0x63647050u);
      v18 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v13 = (unsigned int *)P;
        v15 = -1073741670;
        goto LABEL_26;
      }
      memmove(PoolWithTag, v11, v9);
    }
    else
    {
      v18 = 0LL;
    }
LABEL_23:
    if ( v18 )
      v18[((unsigned __int64)v8 >> 1) - 1] = 0;
    *a7 = v8;
    *a8 = v18;
    goto LABEL_26;
  }
  if ( !PnpValidateRegistryMultiSz(P) )
    goto LABEL_60;
  if ( (a4 & 0x40000) != 0 )
  {
    v8 = v13[3];
    *(_QWORD *)&Src.Length = (char *)v13 + v13[2];
    if ( !v8 )
      v8 = 2;
    v16 = ExAllocatePoolWithTag(PagedPool, v8 + (unsigned int)v9, 0x63647050u);
    v17 = 0;
    v18 = v16;
    if ( v16 )
    {
      if ( v8 > 2 )
      {
        memmove(v16, *(const void **)&Src.Length, v8);
        v17 = v8 - 2;
      }
      v19 = a4 & 0x20000;
      v33 = v17;
      if ( a1 == 7 )
      {
        if ( v19 )
        {
          memmove((char *)v18 + v17, v11, v9);
          v8 = v8 + v9 - 2;
        }
        else if ( *v11 )
        {
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
              memmove((char *)v18 + v33, v11, v22);
              v33 += v22;
              v8 += v22;
            }
            v11 += (unsigned __int64)v22 >> 1;
          }
          while ( *v11 );
          v13 = (unsigned int *)P;
        }
      }
      else if ( v19 || v8 == 2 || !PnpMultiSzContainsString(*(PCWSTR *)&Src.Length, v11) )
      {
        memmove((char *)v18 + v33, v11, v9);
        v8 += v9;
      }
      goto LABEL_23;
    }
  }
  else
  {
    v18 = ExAllocatePoolWithTag(PagedPool, v13[3], 0x63647050u);
    if ( v18 )
    {
      if ( a1 != 7 )
        RtlInitUnicodeString(&DestinationString, v11);
      v24 = (const WCHAR *)((char *)v13 + v13[2]);
      v8 = 2;
      if ( *v24 )
      {
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
            memmove((char *)v18 + v25, Src.Buffer, v27);
            v25 += v27;
            v8 += v27;
          }
          v24 += ((unsigned __int64)Src.Length >> 1) + 1;
        }
        while ( *v24 );
        v13 = (unsigned int *)P;
      }
      goto LABEL_23;
    }
  }
  v15 = -1073741670;
LABEL_26:
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return v15;
}
