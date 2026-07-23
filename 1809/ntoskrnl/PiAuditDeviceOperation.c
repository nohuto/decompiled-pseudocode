/*
 * XREFs of PiAuditDeviceOperation @ 0x14083E1F8
 * Callers:
 *     PiPnpRtlSetObjectProperty @ 0x1406E64F0 (PiPnpRtlSetObjectProperty.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14083E184 (PiAuditDeviceEnableDisableAction.c)
 *     PiAuditDeviceEnableDisableRequest @ 0x14083E1B8 (PiAuditDeviceEnableDisableRequest.c)
 *     PiAuditDeviceStart @ 0x14083E7D0 (PiAuditDeviceStart.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PnpFindAlternateStringData @ 0x140588E34 (PnpFindAlternateStringData.c)
 *     _PnpGetObjectProperty @ 0x14059B008 (_PnpGetObjectProperty.c)
 *     SeAuditPlugAndPlay @ 0x14089E368 (SeAuditPlugAndPlay.c)
 */

__int64 __fastcall PiAuditDeviceOperation(__int64 a1, int a2, char a3)
{
  void *v4; // r12
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  int v9; // edx
  unsigned int v10; // ebx
  int v11; // r14d
  SIZE_T i; // rdx
  PVOID PoolWithTag; // rax
  void *v14; // r13
  int ObjectProperty; // eax
  __int16 v16; // ax
  SIZE_T v17; // rdx
  PVOID v18; // rax
  void *v19; // r15
  int v20; // eax
  __int16 v21; // ax
  SIZE_T v22; // rdx
  PVOID v23; // rax
  int v24; // eax
  __int16 v25; // ax
  __int64 v26; // rdx
  SIZE_T j; // rdx
  PVOID v28; // rax
  void *v29; // rsi
  int v30; // eax
  _WORD *v31; // rax
  _WORD *v32; // rdi
  int k; // eax
  _WORD *v34; // rax
  int AlternateStringData; // eax
  const WCHAR *v36; // rdx
  int v38; // [rsp+68h] [rbp-69h] BYREF
  char v39; // [rsp+6Ch] [rbp-65h]
  unsigned int NumberOfBytes; // [rsp+70h] [rbp-61h] BYREF
  unsigned int NumberOfBytes_4; // [rsp+74h] [rbp-5Dh] BYREF
  unsigned int v42; // [rsp+78h] [rbp-59h] BYREF
  unsigned int v43; // [rsp+7Ch] [rbp-55h] BYREF
  unsigned int v44; // [rsp+80h] [rbp-51h] BYREF
  int v45; // [rsp+84h] [rbp-4Dh] BYREF
  __int64 v46; // [rsp+88h] [rbp-49h]
  int v47; // [rsp+90h] [rbp-41h] BYREF
  const WCHAR *v48; // [rsp+98h] [rbp-39h] BYREF
  _WORD v49[4]; // [rsp+A0h] [rbp-31h] BYREF
  void *v50; // [rsp+A8h] [rbp-29h]
  _WORD v51[4]; // [rsp+B0h] [rbp-21h] BYREF
  void *v52; // [rsp+B8h] [rbp-19h]
  _WORD v53[4]; // [rsp+C0h] [rbp-11h] BYREF
  void *v54; // [rsp+C8h] [rbp-9h]
  UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-1h] BYREF
  UNICODE_STRING v56; // [rsp+E0h] [rbp+Fh] BYREF
  _QWORD v57[2]; // [rsp+F0h] [rbp+1Fh] BYREF

  v39 = a3;
  v46 = a1;
  v4 = 0LL;
  if ( a2 )
  {
    v5 = a2 - 1;
    if ( v5 )
    {
      v6 = v5 - 1;
      if ( v6 )
      {
        v7 = v6 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            v9 = v8 - 1;
            if ( v9 )
            {
              if ( v9 != 1 )
                return (unsigned int)-1073741823;
              v11 = 6;
            }
            else
            {
              v11 = 5;
            }
          }
          else
          {
            v11 = 4;
          }
        }
        else
        {
          v11 = 3;
        }
      }
      else
      {
        v11 = 2;
      }
    }
    else
    {
      v11 = 1;
    }
  }
  else
  {
    v11 = 0;
  }
  NumberOfBytes = 512;
  for ( i = 512LL; ; i = NumberOfBytes )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, i, 0x20207050u);
    v14 = PoolWithTag;
    if ( !PoolWithTag )
      return (unsigned int)-1073741670;
    ObjectProperty = PnpGetObjectProperty(
                       *(__int64 *)&PiPnpRtlCtx,
                       *(_QWORD *)(a1 + 8),
                       1u,
                       0LL,
                       0LL,
                       (__int64)&DEVPKEY_Device_HardwareIds,
                       (__int64)&v38,
                       (__int64)PoolWithTag,
                       NumberOfBytes,
                       (__int64)&NumberOfBytes,
                       0);
    if ( ObjectProperty != -1073741789 )
      break;
    ExFreePoolWithTag(v14, 0);
  }
  if ( ObjectProperty >= 0 && v38 == 8210 )
  {
    v16 = NumberOfBytes;
  }
  else
  {
    ExFreePoolWithTag(v14, 0);
    v16 = 0;
    v14 = 0LL;
    NumberOfBytes = 0;
  }
  v53[0] = v16;
  v17 = 512LL;
  v53[1] = v16;
  v54 = v14;
  for ( NumberOfBytes_4 = 512; ; v17 = NumberOfBytes_4 )
  {
    v18 = ExAllocatePoolWithTag(PagedPool, v17, 0x20207050u);
    v19 = v18;
    if ( !v18 )
    {
      v10 = -1073741670;
      goto LABEL_74;
    }
    v20 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(a1 + 8),
            1u,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_CompatibleIds,
            (__int64)&v38,
            (__int64)v18,
            NumberOfBytes_4,
            (__int64)&NumberOfBytes_4,
            0);
    if ( v20 != -1073741789 )
      break;
    ExFreePoolWithTag(v19, 0);
  }
  if ( v20 >= 0 && v38 == 8210 )
  {
    v21 = NumberOfBytes_4;
  }
  else
  {
    ExFreePoolWithTag(v19, 0);
    v21 = 0;
    v19 = 0LL;
    NumberOfBytes_4 = 0;
  }
  v22 = 64LL;
  v51[0] = v21;
  v42 = 64;
  v51[1] = v21;
  v52 = v19;
  while ( 1 )
  {
    v23 = ExAllocatePoolWithTag(PagedPool, v22, 0x20207050u);
    v4 = v23;
    if ( !v23 )
      break;
    v24 = PnpGetObjectProperty(
            *(__int64 *)&PiPnpRtlCtx,
            *(_QWORD *)(a1 + 8),
            1u,
            0LL,
            0LL,
            (__int64)&DEVPKEY_Device_LocationInfo,
            (__int64)&v38,
            (__int64)v23,
            v42,
            (__int64)&v42,
            0);
    if ( v24 != -1073741789 )
    {
      if ( v24 >= 0 && v38 == 18 )
      {
        v25 = v42;
      }
      else
      {
        ExFreePoolWithTag(v4, 0);
        v25 = 0;
        v4 = 0LL;
        v42 = 0;
      }
      v26 = *(_QWORD *)(a1 + 8);
      v49[0] = v25;
      v49[1] = v25;
      v45 = 16;
      v50 = v4;
      if ( (int)PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  v26,
                  1u,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_Device_ClassGuid,
                  (__int64)&v38,
                  (__int64)v57,
                  16,
                  (__int64)&v45,
                  0) < 0
        || v38 != 13
        || v45 != 16 )
      {
        v57[0] = 0LL;
        v57[1] = 0LL;
      }
      v44 = 32;
      for ( j = 32LL; ; j = v44 )
      {
        v28 = ExAllocatePoolWithTag(PagedPool, j, 0x20207050u);
        v29 = v28;
        if ( !v28 )
          goto LABEL_35;
        v30 = PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                *(_QWORD *)(a1 + 8),
                1u,
                0LL,
                0LL,
                (__int64)&DEVPKEY_Device_Class,
                (__int64)&v38,
                (__int64)v28,
                v44,
                (__int64)&v44,
                0);
        if ( v30 != -1073741789 )
          break;
        ExFreePoolWithTag(v29, 0);
      }
      if ( v30 < 0 || v38 != 18 )
      {
        ExFreePoolWithTag(v29, 0);
        v29 = 0LL;
        v44 = 0;
      }
      RtlInitUnicodeString(&DestinationString, (PCWSTR)v29);
      v43 = 32;
      v31 = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x20207050u);
      v32 = v31;
      if ( !v31 )
      {
LABEL_54:
        v10 = -1073741670;
LABEL_70:
        if ( v29 )
          ExFreePoolWithTag(v29, 0);
        goto LABEL_72;
      }
      for ( k = PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(a1 + 8),
                  1u,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_NAME,
                  (__int64)&v38,
                  (__int64)v31,
                  v43,
                  (__int64)&v43,
                  0);
            ;
            k = PnpGetObjectProperty(
                  *(__int64 *)&PiPnpRtlCtx,
                  *(_QWORD *)(v46 + 8),
                  1u,
                  0LL,
                  0LL,
                  (__int64)&DEVPKEY_NAME,
                  (__int64)&v38,
                  (__int64)v34,
                  v43,
                  (__int64)&v43,
                  0) )
      {
        v10 = k;
        if ( k != -1073741789 )
          break;
        ExFreePoolWithTag(v32, 0);
        v34 = ExAllocatePoolWithTag(PagedPool, v43, 0x20207050u);
        v32 = v34;
        if ( !v34 )
          goto LABEL_54;
      }
      if ( k < 0 )
        goto LABEL_67;
      if ( v38 == 25 )
      {
        AlternateStringData = PnpFindAlternateStringData(v32, v43, &v48, &v47);
        v38 = 18;
        v36 = v32;
        if ( AlternateStringData )
          v36 = v48;
        goto LABEL_68;
      }
      if ( v38 == 18 )
      {
        v36 = v32;
      }
      else
      {
LABEL_67:
        v10 = 0;
        ExFreePoolWithTag(v32, 0);
        v43 = 0;
        v32 = 0LL;
        v36 = 0LL;
      }
LABEL_68:
      RtlInitUnicodeString(&v56, v36);
      SeAuditPlugAndPlay(
        v46,
        (unsigned int)&v56,
        (unsigned int)v53,
        (unsigned int)v51,
        (__int64)v49,
        (__int64)v57,
        (__int64)&DestinationString,
        v11,
        v39);
      if ( v32 )
        ExFreePoolWithTag(v32, 0);
      goto LABEL_70;
    }
    ExFreePoolWithTag(v4, 0);
    v22 = v42;
  }
LABEL_35:
  v10 = -1073741670;
LABEL_72:
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
LABEL_74:
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  return v10;
}
