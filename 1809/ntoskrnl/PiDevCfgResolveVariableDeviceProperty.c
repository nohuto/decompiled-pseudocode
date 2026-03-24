/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x1406F6DB0
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryString @ 0x14015D94C (PnpValidateRegistryString.c)
 *     PnpValidateMultiSzData @ 0x14015D984 (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x140194010 (__security_check_cookie.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 *     RtlStringFromGUIDEx @ 0x14058B238 (RtlStringFromGUIDEx.c)
 *     PnpGetObjectProperty @ 0x140599EC8 (PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x14059A5A0 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x140623790 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x1406804D4 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x1406F5B74 (PnpRegSzToString.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  int RegistryValue; // ebx
  unsigned int *v7; // r15
  int v8; // r14d
  __int64 v9; // r8
  int ObjectProperty; // eax
  unsigned int v11; // esi
  _DWORD *PoolWithTag; // rdi
  int v14; // ecx
  _DWORD *v15; // rax
  PVOID P; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING GuidString; // [rsp+68h] [rbp-21h] BYREF
  __int64 v18; // [rsp+78h] [rbp-11h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+80h] [rbp-9h] BYREF
  GUID Guid; // [rsp+90h] [rbp+7h] BYREF
  int v21; // [rsp+A0h] [rbp+17h]

  *(_QWORD *)&GuidString.Length = 0LL;
  P = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyGuid", 0, &GuidString);
  if ( RegistryValue < 0 )
    goto LABEL_59;
  v7 = *(unsigned int **)&GuidString.Length;
  if ( !PnpValidateRegistryString(*(_DWORD **)&GuidString.Length) )
    goto LABEL_21;
  PnpRegSzToString((unsigned int *)((char *)v7 + v7[2]), v7[3], (int *)&GuidString);
  GuidString.MaximumLength = *((_WORD *)v7 + 6);
  GuidString.Buffer = (wchar_t *)((char *)v7 + v7[2]);
  RegistryValue = RtlGUIDFromString(&GuidString, &Guid);
  if ( RegistryValue < 0 )
    goto LABEL_16;
  ExFreePoolWithTag(v7, 0);
  *(_QWORD *)&GuidString.Length = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyId", 0, &GuidString);
  if ( RegistryValue < 0 )
  {
LABEL_59:
    v7 = *(unsigned int **)&GuidString.Length;
  }
  else
  {
    v7 = *(unsigned int **)&GuidString.Length;
    if ( *(_DWORD *)(*(_QWORD *)&GuidString.Length + 4LL) != 4 || *(_DWORD *)(*(_QWORD *)&GuidString.Length + 12LL) != 4 )
      goto LABEL_21;
    v8 = 1;
    v9 = *a1;
    v21 = *(_DWORD *)(*(unsigned int *)(*(_QWORD *)&GuidString.Length + 8LL) + *(_QWORD *)&GuidString.Length);
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0LL,
                       *(_QWORD *)(v9 + 48),
                       1,
                       0LL,
                       0LL,
                       (__int64)&Guid,
                       (__int64)&v18,
                       &P,
                       &GuidString,
                       0);
    RegistryValue = ObjectProperty;
    if ( ObjectProperty < 0 )
    {
      if ( ObjectProperty == -1073741275 )
      {
        RegistryValue = 0;
        goto LABEL_58;
      }
    }
    else
    {
      if ( (unsigned int)v18 > 0x2012 )
        goto LABEL_47;
      if ( (_DWORD)v18 == 8210 )
      {
        v11 = *(_DWORD *)&GuidString.Length;
        if ( PnpValidateMultiSzData(P, *(unsigned int *)&GuidString.Length) )
        {
          v8 = 7;
          goto LABEL_48;
        }
        goto LABEL_21;
      }
      if ( (unsigned int)v18 > 0xD )
      {
        if ( (_DWORD)v18 == 18 )
        {
LABEL_12:
          v11 = *(_DWORD *)&GuidString.Length;
          if ( *(_DWORD *)&GuidString.Length >= 2u )
          {
            PoolWithTag = P;
            if ( !*((_WORD *)P + ((unsigned __int64)*(unsigned int *)&GuidString.Length >> 1) - 1) )
              goto LABEL_14;
          }
          goto LABEL_21;
        }
        if ( (_DWORD)v18 != 17 )
        {
          if ( (_DWORD)v18 == 20 )
            goto LABEL_12;
          if ( (unsigned int)v18 <= 0x15 )
            goto LABEL_47;
          if ( (unsigned int)v18 > 0x18 )
          {
            if ( (_DWORD)v18 == 25 )
              goto LABEL_12;
            goto LABEL_47;
          }
          goto LABEL_49;
        }
        if ( *(_DWORD *)&GuidString.Length != 1 )
          goto LABEL_21;
        v8 = 4;
        v11 = 4;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
        if ( PoolWithTag )
        {
          v14 = *(_BYTE *)P == 0xFF;
          goto LABEL_30;
        }
        goto LABEL_29;
      }
      if ( (_DWORD)v18 != 13 )
      {
        if ( (unsigned int)v18 <= 5 )
        {
          if ( (unsigned int)v18 >= 4 )
          {
            if ( *(_DWORD *)&GuidString.Length != 2 )
              goto LABEL_21;
            v8 = 4;
            v11 = 4;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
            if ( PoolWithTag )
            {
              v14 = *(unsigned __int16 *)P;
              goto LABEL_30;
            }
LABEL_29:
            RegistryValue = -1073741670;
            goto LABEL_16;
          }
          if ( (unsigned int)v18 > 1 )
          {
            if ( *(_DWORD *)&GuidString.Length != 1 )
              goto LABEL_21;
            v8 = 4;
            v11 = 4;
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
            if ( PoolWithTag )
            {
              v14 = *(unsigned __int8 *)P;
LABEL_30:
              *PoolWithTag = v14;
              goto LABEL_15;
            }
            goto LABEL_29;
          }
LABEL_58:
          PoolWithTag = 0LL;
          v11 = 0;
          v8 = 0;
          goto LABEL_15;
        }
        if ( (unsigned int)v18 <= 7 )
        {
LABEL_49:
          if ( *(_DWORD *)&GuidString.Length == 4 )
          {
            v8 = 4;
            v11 = 4;
            goto LABEL_48;
          }
          goto LABEL_21;
        }
        if ( (unsigned int)v18 <= 9 )
        {
          v11 = 8;
          if ( *(_DWORD *)&GuidString.Length == 8 )
          {
            v8 = 11;
LABEL_48:
            PoolWithTag = P;
LABEL_14:
            P = 0LL;
LABEL_15:
            *(_DWORD *)(a3 + 32) = v8;
            *(_DWORD *)(a3 + 36) = v11;
            *(_QWORD *)(a3 + 40) = PoolWithTag;
            goto LABEL_16;
          }
LABEL_21:
          RegistryValue = -1073741823;
          goto LABEL_16;
        }
LABEL_47:
        v11 = *(_DWORD *)&GuidString.Length;
        v8 = 3;
        goto LABEL_48;
      }
      if ( *(_DWORD *)&GuidString.Length != 16 )
        goto LABEL_21;
      RegistryValue = RtlStringFromGUIDEx((unsigned int *)P, (__int64)&UnicodeString, 1);
      if ( RegistryValue >= 0 )
      {
        v11 = UnicodeString.Length + 2;
        v15 = ExAllocatePoolWithTag(PagedPool, v11, 0x63647050u);
        PoolWithTag = v15;
        if ( v15 )
        {
          memmove(v15, UnicodeString.Buffer, v11);
          goto LABEL_15;
        }
        goto LABEL_29;
      }
    }
  }
LABEL_16:
  RtlFreeAnsiString(&UnicodeString);
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
