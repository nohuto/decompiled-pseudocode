/*
 * XREFs of BiConvertElementToRegistryData @ 0x14073E294
 * Callers:
 *     BcdSetElementDataWithFlags @ 0x14073D70C (BcdSetElementDataWithFlags.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x14060B740 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1406A11E8 (RtlStringFromGUIDEx.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14073E70C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x14092EC9C (BiConvertQualifiedPartitionToBootEnvironment.c)
 */

__int64 __fastcall BiConvertElementToRegistryData(
        unsigned int a1,
        char *a2,
        unsigned int a3,
        __int64 a4,
        _QWORD *a5,
        unsigned int *a6)
{
  int v6; // ebx
  size_t v7; // r14
  unsigned int *v9; // r13
  int v10; // edi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // r15d
  _BYTE *Buffer; // rsi
  _WORD *v19; // rcx
  unsigned int v20; // eax
  _BYTE *v21; // rax
  int v23; // eax
  _OWORD *PoolWithTag; // rax
  _BYTE *v25; // rax
  _QWORD *v26; // rax
  unsigned int v27; // r14d
  int v28; // r15d
  _WORD *v29; // rax
  __int64 v30; // rcx
  size_t v31; // rbx
  void *Src; // [rsp+20h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+28h] [rbp-18h] BYREF
  int v34; // [rsp+88h] [rbp+48h]

  v6 = 0;
  v7 = a3;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Src = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = (HIBYTE(a1) & 0xF) - 1;
  if ( !v11 )
  {
    if ( *(_DWORD *)a2 == 6 )
      v23 = BiConvertQualifiedPartitionToBootEnvironment(a2, a3, &Src);
    else
      v23 = BiConvertNtDeviceToBootEnvironment(a2, a3, 0LL, &Src);
    v9 = (unsigned int *)Src;
    v10 = v23;
    if ( v23 < 0 )
      goto LABEL_23;
    v17 = *((_DWORD *)Src + 2) + 16;
    if ( *((_DWORD *)Src + 2) >= 0xFFFFFFF0 )
    {
      v10 = -1073741811;
    }
    else
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(*((_DWORD *)Src + 2) + 16), 0x4B444342u);
      Buffer = PoolWithTag;
      if ( PoolWithTag )
      {
        *PoolWithTag = *(_OWORD *)(a2 + 4);
        memmove(PoolWithTag + 1, v9, v9[2]);
        ExFreePoolWithTag(v9, 0x4B444342u);
        v9 = 0LL;
        goto LABEL_21;
      }
      v10 = -1073741801;
    }
LABEL_23:
    if ( v9 )
      ExFreePoolWithTag(v9, 0x4B444342u);
    return (unsigned int)v10;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( (a3 & 1) != 0 )
      return (unsigned int)-1073741788;
    v19 = a2;
    v20 = a3 >> 1;
    if ( a3 >> 1 )
    {
      while ( *v19 )
      {
        ++v19;
        if ( !--v20 )
          goto LABEL_16;
      }
      LOBYTE(v6) = 1;
    }
LABEL_16:
    v17 = a3;
    if ( !(_BYTE)v6 )
    {
      if ( a3 + 2 < a3 )
        return (unsigned int)-1073741675;
      v17 = a3 + 2;
    }
    v21 = ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
    Buffer = v21;
    if ( !v21 )
      return (unsigned int)-1073741801;
    memmove(v21, a2, v7);
    if ( !(_BYTE)v6 )
      *(_WORD *)&Buffer[v17 - 2] = 0;
    v10 = 0;
    goto LABEL_21;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( a3 != 16 )
      return (unsigned int)-1073741788;
    v10 = RtlStringFromGUIDEx((unsigned int *)a2, (__int64)&DestinationString, 1);
    if ( v10 < 0 )
      return (unsigned int)v10;
    Buffer = DestinationString.Buffer;
    v17 = DestinationString.Length + 2;
    goto LABEL_21;
  }
  v14 = v13 - 1;
  if ( v14 )
  {
    v15 = v14 - 1;
    if ( v15 )
    {
      v16 = v15 - 1;
      if ( v16 )
      {
        if ( v16 != 1 || (a3 & 7) == 0 )
        {
          v17 = a3;
          v25 = ExAllocatePoolWithTag(PagedPool, a3, 0x4B444342u);
          Buffer = v25;
          if ( v25 )
          {
            memmove(v25, a2, v7);
            goto LABEL_22;
          }
          return (unsigned int)-1073741801;
        }
      }
      else if ( a3 - 1 <= 1 )
      {
        v17 = 1;
        Buffer = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x4B444342u);
        if ( Buffer )
        {
          *Buffer = *a2 != 0;
LABEL_22:
          v10 = 0;
          *a5 = Buffer;
          *a6 = v17;
          goto LABEL_23;
        }
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      v17 = 8;
      if ( a3 == 8 )
      {
        v26 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x4B444342u);
        Buffer = v26;
        if ( v26 )
        {
          *v26 = *(_QWORD *)a2;
          goto LABEL_22;
        }
        return (unsigned int)-1073741801;
      }
    }
    return (unsigned int)-1073741788;
  }
  if ( (a3 & 0xF) != 0 )
    return (unsigned int)-1073741788;
  v27 = a3 >> 4;
  v28 = 0;
  if ( !(a3 >> 4) )
  {
LABEL_48:
    v17 = v28 + 2;
    v29 = ExAllocatePoolWithTag(PagedPool, v17, 0x4B444342u);
    Buffer = v29;
    if ( !v29 )
      return (unsigned int)-1073741801;
    v30 = 0LL;
    v34 = 0;
    Src = v29;
    if ( v27 )
    {
      while ( 1 )
      {
        v10 = RtlStringFromGUIDEx((unsigned int *)&a2[16 * v30], (__int64)&DestinationString, 1);
        if ( v10 < 0 )
          goto LABEL_60;
        v31 = (unsigned int)DestinationString.Length + 2;
        memmove(Src, DestinationString.Buffer, v31);
        Src = (char *)Src + v31;
        RtlFreeAnsiString(&DestinationString);
        v30 = (unsigned int)(v34 + 1);
        v34 = v30;
        if ( (unsigned int)v30 >= v27 )
        {
          v29 = Src;
          break;
        }
      }
    }
    *v29 = 0;
LABEL_21:
    if ( v10 >= 0 )
      goto LABEL_22;
LABEL_60:
    if ( !Buffer )
      return (unsigned int)v10;
    ExFreePoolWithTag(Buffer, 0x4B444342u);
    goto LABEL_23;
  }
  while ( 1 )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v10 = RtlStringFromGUIDEx((unsigned int *)&a2[16 * v6], (__int64)&DestinationString, 1);
    if ( v10 < 0 )
      return (unsigned int)v10;
    v28 += DestinationString.Length + 2;
    RtlFreeAnsiString(&DestinationString);
    if ( ++v6 >= v27 )
      goto LABEL_48;
  }
}
