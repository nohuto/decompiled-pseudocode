/*
 * XREFs of PiDevCfgQueryObjectProperties @ 0x1406FEB14
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1406FB30C (PiDevCfgProcessDevice.c)
 *     PiDevCfgQueryDriverConfiguration @ 0x1406FD160 (PiDevCfgQueryDriverConfiguration.c)
 *     PiDevCfgGetDriverPackageId @ 0x1406FD5F4 (PiDevCfgGetDriverPackageId.c)
 *     PiDevCfgLogDeviceStarted @ 0x1406FD6CC (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406FD994 (PiDevCfgLogDeviceConfigured.c)
 *     PiDevCfgQueryDriverNode @ 0x1406FE080 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgInitDeviceContext @ 0x1406FF224 (PiDevCfgInitDeviceContext.c)
 *     PiDevCfgConfigureDevice @ 0x140705DE4 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x140865460 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1408665C0 (PiDevCfgFindDeviceMigrationNode.c)
 *     PpDevCfgProcessDeviceClass @ 0x14086B78C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14086BB08 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14086C244 (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgInit @ 0x1409F780C (PpDevCfgInit.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043CD0 (RtlInitUnicodeString.c)
 *     PnpValidateMultiSzData @ 0x140145394 (PnpValidateMultiSzData.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     _PnpOpenObjectRegKey @ 0x1405BC2A0 (_PnpOpenObjectRegKey.c)
 *     _PnpGetObjectProperty @ 0x1405BC748 (_PnpGetObjectProperty.c)
 *     ExpAllocateStringRoutine @ 0x1406D4640 (ExpAllocateStringRoutine.c)
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
  HANDLE v15; // r9
  SIZE_T v17; // rdx
  PVOID PoolWithTag; // rax
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
      goto LABEL_23;
  }
  v24 = 0;
  if ( !a6 )
    goto LABEL_23;
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
        goto LABEL_9;
      }
      ObjectProperty = -1073741670;
      goto LABEL_23;
    }
    while ( 1 )
    {
      v15 = Handle;
      if ( v31 )
        v15 = v31;
      ObjectProperty = PnpGetObjectProperty(
                         v26,
                         v29,
                         v30,
                         (__int64)v15,
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
        goto LABEL_14;
      }
      if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
        goto LABEL_66;
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
LABEL_14:
        if ( ObjectProperty == -1073741670 )
          goto LABEL_21;
        if ( ObjectProperty < 0 )
          goto LABEL_16;
        v17 = Size;
        if ( v23 )
        {
          if ( v23 != *(_DWORD *)v10 )
          {
            ObjectProperty = -1073741823;
            goto LABEL_16;
          }
          if ( v23 == 18 || v23 == 20 || v23 == 25 )
          {
            if ( Size >= 2 && !*(_WORD *)(v12 + 2 * ((unsigned __int64)Size >> 1) - 2) )
              goto LABEL_32;
          }
          else if ( v23 != 8210 || PnpValidateMultiSzData((_WORD *)v12, Size) )
          {
            goto LABEL_32;
          }
          ObjectProperty = -1073741823;
        }
        else
        {
          *(_DWORD *)v10 = 0;
        }
LABEL_32:
        if ( ObjectProperty < 0 )
          goto LABEL_16;
        if ( v13 && (unsigned int)v17 > 0xFFFE )
          ObjectProperty = -2147483643;
        if ( ObjectProperty < 0 )
          goto LABEL_16;
        if ( (*(_DWORD *)(v10 + 20) & 2) == 0 )
        {
LABEL_36:
          if ( v13 )
          {
            v13->Length = v17;
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
              LODWORD(v17) = Size;
            }
            *(_DWORD *)(v10 + 16) = v17;
          }
          goto LABEL_16;
        }
        if ( v13 )
        {
          StringRoutine = (wchar_t *)ExpAllocateStringRoutine(v17);
          v13->Buffer = StringRoutine;
          if ( StringRoutine )
          {
            v13->MaximumLength = Size;
LABEL_49:
            memmove(StringRoutine, v8, Size);
            LODWORD(v17) = Size;
            v6 = 0LL;
            goto LABEL_36;
          }
        }
        else
        {
          StringRoutine = (wchar_t *)ExAllocatePoolWithTag(PagedPool, v17, 0x63647050u);
          v12 = (__int64)StringRoutine;
          if ( StringRoutine )
            goto LABEL_49;
        }
        ObjectProperty = -1073741670;
        goto LABEL_21;
      }
      v12 = (__int64)v22;
LABEL_9:
      MaximumLength = v9;
    }
    ObjectProperty = -1073741595;
LABEL_66:
    v6 = 0LL;
LABEL_16:
    *(_DWORD *)(v10 + 24) = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( (*(_DWORD *)(v10 + 20) & 8) == 0 )
        goto LABEL_18;
      if ( v13 )
      {
        RtlInitUnicodeString(v13, 0LL);
        goto LABEL_78;
      }
      if ( v12 )
      {
        memset((void *)v12, 0, MaximumLength);
LABEL_78:
        v6 = 0LL;
      }
LABEL_18:
      if ( (*(_DWORD *)(v10 + 20) & 1) != 0 )
        break;
      ObjectProperty = v6;
    }
    v10 += 40LL;
    if ( ++v24 < a6 )
      continue;
    break;
  }
LABEL_21:
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
LABEL_23:
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)ObjectProperty;
}
