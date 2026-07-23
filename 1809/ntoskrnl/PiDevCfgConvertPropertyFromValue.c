/*
 * XREFs of PiDevCfgConvertPropertyFromValue @ 0x14082D4F4
 * Callers:
 *     PiDevCfgCopyDeviceKey @ 0x1406F3F74 (PiDevCfgCopyDeviceKey.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 */

__int64 __fastcall PiDevCfgConvertPropertyFromValue(
        unsigned int a1,
        int a2,
        wchar_t *a3,
        unsigned int a4,
        int *a5,
        _QWORD *a6)
{
  unsigned int v6; // edi
  int v8; // esi
  _BYTE *PoolWithTag; // rbx
  bool v10; // zf
  int v11; // ebp
  _WORD *v12; // rax
  int v13; // ebp
  _BYTE *v14; // rax
  bool v15; // zf
  __int64 v16; // rbp
  _QWORD *v17; // rax
  GUID *v18; // rax
  int v19; // ebp
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-18h] BYREF

  v6 = 0;
  v8 = 0;
  PoolWithTag = 0LL;
  if ( a4 > 0x1003 )
  {
    if ( a4 != 8210 )
      goto LABEL_58;
    v15 = a1 == 7;
LABEL_55:
    if ( !v15 )
      goto LABEL_58;
    goto LABEL_56;
  }
  if ( a4 == 4099 )
  {
LABEL_56:
    v8 = a2;
LABEL_57:
    PoolWithTag = a3;
    goto LABEL_58;
  }
  if ( a4 > 0x11 )
  {
    if ( a4 != 18 )
    {
      if ( a4 == 19 )
      {
        v10 = a1 == 3;
        goto LABEL_34;
      }
      if ( a4 != 20 )
      {
        if ( a4 <= 0x15 )
          goto LABEL_58;
        if ( a4 <= 0x18 )
          goto LABEL_10;
        if ( a4 != 25 )
          goto LABEL_58;
      }
    }
    if ( a1 - 1 > 1 )
      goto LABEL_58;
    goto LABEL_56;
  }
  if ( a4 == 17 )
  {
    if ( a1 == 4 )
    {
      v19 = *(_DWORD *)a3;
      v8 = 1;
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x63647050u);
      if ( !PoolWithTag )
        return (unsigned int)-1073741670;
      *PoolWithTag = -(v19 != 0);
    }
    goto LABEL_58;
  }
  if ( a4 <= 9 )
  {
    if ( a4 < 8 )
    {
      if ( a4 >= 2 )
      {
        if ( a4 <= 3 )
        {
          if ( a1 == 4 )
          {
            v13 = *(_DWORD *)a3;
            if ( *(_DWORD *)a3 <= 0xFFu )
            {
              v8 = 1;
              v14 = ExAllocatePoolWithTag(PagedPool, 1uLL, 0x63647050u);
              PoolWithTag = v14;
              if ( !v14 )
                return (unsigned int)-1073741670;
              *v14 = v13;
            }
          }
        }
        else
        {
          if ( a4 > 5 )
          {
LABEL_10:
            v10 = a1 == 4;
            goto LABEL_34;
          }
          if ( a1 == 4 )
          {
            v11 = *(_DWORD *)a3;
            if ( *(_DWORD *)a3 <= 0xFFFFu )
            {
              v8 = 2;
              v12 = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x63647050u);
              PoolWithTag = v12;
              if ( !v12 )
                return (unsigned int)-1073741670;
              *v12 = v11;
            }
          }
        }
      }
LABEL_58:
      *a5 = v8;
      *a6 = PoolWithTag;
      return v6;
    }
    if ( a1 == 4 )
    {
      v16 = *(unsigned int *)a3;
      v8 = 8;
      v17 = ExAllocatePoolWithTag(PagedPool, 8uLL, 0x63647050u);
      PoolWithTag = v17;
      if ( !v17 )
        return (unsigned int)-1073741670;
      *v17 = v16;
      goto LABEL_58;
    }
    v15 = a1 == 11;
    goto LABEL_55;
  }
  if ( a4 != 13 )
  {
    if ( a4 != 16 || a1 != 3 && a1 != 11 || a2 != 8 )
      goto LABEL_58;
    v8 = 8;
    goto LABEL_57;
  }
  if ( !a1 )
    goto LABEL_58;
  if ( a1 > 2 )
  {
    if ( a1 != 3 )
      goto LABEL_58;
    v10 = a2 == 16;
LABEL_34:
    v8 = a2;
    PoolWithTag = a3;
    if ( !v10 )
    {
      v8 = 0;
      PoolWithTag = 0LL;
    }
    goto LABEL_58;
  }
  if ( a2 != 78 )
    goto LABEL_58;
  v8 = 16;
  v18 = (GUID *)ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x63647050u);
  PoolWithTag = v18;
  if ( v18 )
  {
    GuidString.Buffer = a3;
    *(_DWORD *)&GuidString.Length = 5111884;
    if ( RtlGUIDFromString(&GuidString, v18) < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
      PoolWithTag = 0LL;
    }
    goto LABEL_58;
  }
  return (unsigned int)-1073741670;
}
