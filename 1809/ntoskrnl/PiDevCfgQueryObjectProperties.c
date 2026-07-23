/*
 * XREFs of PiDevCfgQueryObjectProperties @ 0x1406F74E0
 * Callers:
 *     PiDevCfgConfigureDevice @ 0x1406E40D4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x1406F4938 (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406F4C00 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406F5284 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgProcessDevice @ 0x1406F56C4 (PiDevCfgProcessDevice.c)
 *     PiDevCfgInitDeviceContext @ 0x1406F5CB8 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406F6914 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgQueryDriverNode @ 0x1406F6E50 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14082C75C (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14082D898 (PiDevCfgFindDeviceMigrationNode.c)
 *     PpDevCfgProcessDeviceClass @ 0x140832934 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x140832CA4 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x1408333E0 (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgInit @ 0x1409C975C (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PnpValidateMultiSzData @ 0x14015DA84 (PnpValidateMultiSzData.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _PnpOpenObjectRegKey @ 0x140598118 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     ExpAllocateStringRoutine @ 0x1406B33A0 (ExpAllocateStringRoutine.c)
 */

__int64 __fastcall PiDevCfgQueryObjectProperties(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int a6)
{
  __int64 v6; // r10
  int ObjectProperty; // ebx
  void *v8; // r15
  unsigned int v9; // r13d
  __int64 v10; // rdi
  int v11; // eax
  __int64 v12; // r14
  UNICODE_STRING *v13; // rsi
  unsigned int MaximumLength; // r12d
  PVOID PoolWithTag; // rax
  HANDLE v16; // r9
  SIZE_T v18; // rdx
  wchar_t *StringRoutine; // rax
  wchar_t *Buffer; // rdx
  int v21; // eax
  PVOID v22; // rax
  int v23; // [rsp+68h] [rbp-19h] BYREF
  int v24; // [rsp+6Ch] [rbp-15h]
  HANDLE Handle; // [rsp+70h] [rbp-11h] BYREF
  __int64 v26; // [rsp+78h] [rbp-9h]
  unsigned int Size; // [rsp+D8h] [rbp+57h] BYREF
  int Size_4; // [rsp+DCh] [rbp+5Bh]
  __int64 v29; // [rsp+E0h] [rbp+5Fh]
  unsigned int v30; // [rsp+E8h] [rbp+67h]
  void *v31; // [rsp+F0h] [rbp+6Fh]

  v31 = a4;
  v30 = a3;
  v29 = a2;
  Size_4 = HIDWORD(a1);
  v6 = 0LL;
  v26 = *(_QWORD *)&PiPnpRtlCtx;
  ObjectProperty = 0;
  Handle = 0LL;
  v8 = 0LL;
  v23 = 1;
  v9 = 0;
  Size = 0;
  if ( !a4 )
  {
    v21 = PnpOpenObjectRegKey(*(__int64 *)&PiPnpRtlCtx, a2, a3, 33554433, 0, (__int64)&Handle);
    v6 = 0LL;
    ObjectProperty = v21;
    if ( v21 < 0 )
      goto LABEL_24;
  }
  v24 = 0;
  if ( !a6 )
    goto LABEL_24;
  v10 = a5 + 8;
  while ( 2 )
  {
    v11 = *(_DWORD *)(v10 + 20);
    v12 = *(_QWORD *)(v10 + 8);
    if ( (v11 & 4) != 0 )
    {
      v13 = *(UNICODE_STRING **)(v10 + 8);
      v12 = *(_QWORD *)(v12 + 8);
      MaximumLength = v13->MaximumLength;
    }
    else
    {
      MaximumLength = *(_DWORD *)(v10 + 16);
      v13 = (UNICODE_STRING *)v6;
    }
    if ( (v11 & 2) != 0 )
    {
      if ( v8
        || (v9 = 260,
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x104uLL, 0x63647050u),
            v6 = 0LL,
            (v8 = PoolWithTag) != 0LL) )
      {
        v12 = (__int64)v8;
        goto LABEL_10;
      }
      ObjectProperty = -1073741670;
      goto LABEL_24;
    }
    while ( 1 )
    {
      v16 = Handle;
      if ( v31 )
        v16 = v31;
      ObjectProperty = PnpGetObjectProperty(
                         v26,
                         v29,
                         v30,
                         (__int64)v16,
                         v6,
                         *(_QWORD *)(v10 - 8),
                         (__int64)&v23,
                         v12,
                         MaximumLength,
                         (__int64)&Size,
                         v6);
      if ( ObjectProperty != -1073741789 )
      {
        v6 = 0LL;
        goto LABEL_15;
      }
      if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
        goto LABEL_65;
      if ( Size <= MaximumLength )
        break;
      ExFreePoolWithTag(v8, 0);
      v9 = Size;
      v22 = ExAllocatePoolWithTag(PagedPool, Size, 0x63647050u);
      v6 = 0LL;
      v8 = v22;
      if ( !v22 )
      {
        ObjectProperty = -1073741670;
LABEL_15:
        if ( ObjectProperty == -1073741670 )
          goto LABEL_22;
        if ( ObjectProperty < 0 )
          goto LABEL_17;
        v18 = Size;
        if ( v23 )
        {
          if ( v23 != *(_DWORD *)v10 )
          {
            ObjectProperty = -1073741823;
            goto LABEL_17;
          }
          if ( v23 == 18 || v23 == 20 || v23 == 25 )
          {
            if ( Size >= 2 && !*(_WORD *)(v12 + 2 * ((unsigned __int64)Size >> 1) - 2) )
              goto LABEL_34;
          }
          else if ( v23 != 8210 || PnpValidateMultiSzData((_WORD *)v12, Size) )
          {
            goto LABEL_34;
          }
          ObjectProperty = -1073741823;
        }
        else
        {
          *(_DWORD *)v10 = 0;
        }
LABEL_34:
        if ( ObjectProperty < 0 )
          goto LABEL_17;
        if ( v13 && (unsigned int)v18 > 0xFFFE )
          ObjectProperty = -2147483643;
        if ( ObjectProperty < 0 )
          goto LABEL_17;
        if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
        {
LABEL_38:
          if ( v13 )
          {
            v13->Length = v18;
            if ( v23 != 8210 )
            {
              Buffer = v13->Buffer;
              if ( Buffer )
              {
                if ( (unsigned __int16)Size >= 2u
                  && Buffer[((unsigned __int64)(unsigned __int16)Size >> 1) - 1] == (_WORD)v6 )
                {
                  v13->Length = Size - 2;
                }
              }
            }
          }
          else
          {
            if ( (*(_DWORD *)(v10 + 20) & 2) != 0 )
            {
              **(_QWORD **)(v10 + 8) = v12;
              LODWORD(v18) = Size;
            }
            *(_DWORD *)(v10 + 16) = v18;
          }
          goto LABEL_17;
        }
        if ( v13 )
        {
          StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v18);
          v13->Buffer = StringRoutine;
          if ( StringRoutine )
          {
            v13->MaximumLength = Size;
LABEL_48:
            memmove(StringRoutine, v8, Size);
            LODWORD(v18) = Size;
            v6 = 0LL;
            goto LABEL_38;
          }
        }
        else
        {
          StringRoutine = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v18, 0x63647050u);
          v12 = (__int64)StringRoutine;
          if ( StringRoutine )
            goto LABEL_48;
        }
        ObjectProperty = -1073741670;
        goto LABEL_22;
      }
      v12 = (__int64)v22;
LABEL_10:
      MaximumLength = v9;
    }
    ObjectProperty = -1073741595;
LABEL_65:
    v6 = 0LL;
LABEL_17:
    *(_DWORD *)(v10 + 24) = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( (*(_DWORD *)(v10 + 20) & 8) == 0 )
        goto LABEL_19;
      if ( v13 )
      {
        RtlInitUnicodeString(v13, 0LL);
        goto LABEL_77;
      }
      if ( v12 )
      {
        memset((void *)v12, 0, MaximumLength);
LABEL_77:
        v6 = 0LL;
      }
LABEL_19:
      if ( (*(_DWORD *)(v10 + 20) & 1) != 0 )
        break;
      ObjectProperty = v6;
    }
    v10 += 40LL;
    if ( ++v24 < a6 )
      continue;
    break;
  }
LABEL_22:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_24:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperty;
}
