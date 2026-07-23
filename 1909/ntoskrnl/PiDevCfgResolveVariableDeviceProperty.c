/*
 * XREFs of PiDevCfgResolveVariableDeviceProperty @ 0x14071E970
 * Callers:
 *     <none>
 * Callees:
 *     PnpValidateRegistryString @ 0x14014535C (PnpValidateRegistryString.c)
 *     PnpValidateMultiSzData @ 0x140145394 (PnpValidateMultiSzData.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpGetObjectProperty @ 0x1405BC608 (PnpGetObjectProperty.c)
 *     RtlGUIDFromString @ 0x1405C1AC0 (RtlGUIDFromString.c)
 *     RtlFreeAnsiString @ 0x14060D250 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x14069DD28 (RtlStringFromGUIDEx.c)
 *     IopGetRegistryValue @ 0x1406DA724 (IopGetRegistryValue.c)
 *     PnpRegSzToString @ 0x1406FEAD8 (PnpRegSzToString.c)
 */

__int64 __fastcall PiDevCfgResolveVariableDeviceProperty(__int64 *a1, void *a2, __int64 a3)
{
  NTSTATUS RegistryValue; // ebx
  unsigned int *v7; // r15
  wchar_t *v8; // rax
  int v9; // r14d
  __int64 v10; // r8
  int ObjectProperty; // eax
  unsigned int v12; // esi
  _DWORD *p_Data1; // rdi
  int Data1_low; // ecx
  _DWORD *PoolWithTag; // rax
  PVOID P; // [rsp+60h] [rbp-39h] BYREF
  PGUID v18; // [rsp+68h] [rbp-31h] BYREF
  __int64 v19; // [rsp+70h] [rbp-29h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+78h] [rbp-21h] BYREF
  UNICODE_STRING GuidString; // [rsp+88h] [rbp-11h] BYREF
  GUID Guid; // [rsp+98h] [rbp-1h] BYREF
  int v23; // [rsp+A8h] [rbp+Fh]

  P = 0LL;
  *(_DWORD *)(&GuidString.MaximumLength + 1) = 0;
  *(_QWORD *)&Guid.Data1 = 0LL;
  *(_QWORD *)Guid.Data4 = 0LL;
  v23 = 0;
  v18 = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyGuid", 0, &P);
  if ( RegistryValue < 0 )
    goto LABEL_59;
  v7 = (unsigned int *)P;
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_21;
  PnpRegSzToString((unsigned int *)((char *)v7 + v7[2]), v7[3], (int *)&P);
  GuidString.MaximumLength = *((_WORD *)v7 + 6);
  v8 = (wchar_t *)((char *)v7 + v7[2]);
  GuidString.Length = (unsigned __int16)P;
  GuidString.Buffer = v8;
  RegistryValue = RtlGUIDFromString(&GuidString, &Guid);
  if ( RegistryValue < 0 )
    goto LABEL_16;
  ExFreePoolWithTag(v7, 0);
  P = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"PropertyId", 0, &P);
  if ( RegistryValue < 0 )
  {
LABEL_59:
    v7 = (unsigned int *)P;
  }
  else
  {
    v7 = (unsigned int *)P;
    if ( *((_DWORD *)P + 1) != 4 || *((_DWORD *)P + 3) != 4 )
      goto LABEL_21;
    v9 = 1;
    v10 = *a1;
    v23 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    ObjectProperty = PnpGetObjectProperty(
                       0x47706E50u,
                       0LL,
                       *(_QWORD *)(v10 + 48),
                       1,
                       0LL,
                       0LL,
                       (__int64)&Guid,
                       (__int64)&v19,
                       (PVOID *)&v18,
                       &P,
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
      if ( (unsigned int)v19 > 0x2012 )
        goto LABEL_47;
      if ( (_DWORD)v19 == 8210 )
      {
        v12 = (unsigned int)P;
        if ( PnpValidateMultiSzData(v18, (unsigned int)P) )
        {
          v9 = 7;
          goto LABEL_48;
        }
        goto LABEL_21;
      }
      if ( (unsigned int)v19 > 0xD )
      {
        if ( (_DWORD)v19 == 18 )
        {
LABEL_12:
          v12 = (unsigned int)P;
          if ( (unsigned int)P >= 2 )
          {
            p_Data1 = &v18->Data1;
            if ( !*((_WORD *)v18 + ((unsigned __int64)(unsigned int)P >> 1) - 1) )
              goto LABEL_14;
          }
          goto LABEL_21;
        }
        if ( (_DWORD)v19 != 17 )
        {
          if ( (_DWORD)v19 == 20 )
            goto LABEL_12;
          if ( (unsigned int)v19 <= 0x15 )
            goto LABEL_47;
          if ( (unsigned int)v19 > 0x18 )
          {
            if ( (_DWORD)v19 == 25 )
              goto LABEL_12;
            goto LABEL_47;
          }
          goto LABEL_49;
        }
        if ( (_DWORD)P != 1 )
          goto LABEL_21;
        v9 = 4;
        v12 = 4;
        p_Data1 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
        if ( p_Data1 )
        {
          Data1_low = LOBYTE(v18->Data1) == 0xFF;
          goto LABEL_30;
        }
        goto LABEL_29;
      }
      if ( (_DWORD)v19 != 13 )
      {
        if ( (unsigned int)v19 <= 5 )
        {
          if ( (unsigned int)v19 >= 4 )
          {
            if ( (_DWORD)P != 2 )
              goto LABEL_21;
            v9 = 4;
            v12 = 4;
            p_Data1 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
            if ( p_Data1 )
            {
              Data1_low = LOWORD(v18->Data1);
              goto LABEL_30;
            }
LABEL_29:
            RegistryValue = -1073741670;
            goto LABEL_16;
          }
          if ( (unsigned int)v19 > 1 )
          {
            if ( (_DWORD)P != 1 )
              goto LABEL_21;
            v9 = 4;
            v12 = 4;
            p_Data1 = ExAllocatePoolWithTag(PagedPool, 4uLL, 0x63647050u);
            if ( p_Data1 )
            {
              Data1_low = LOBYTE(v18->Data1);
LABEL_30:
              *p_Data1 = Data1_low;
              goto LABEL_15;
            }
            goto LABEL_29;
          }
LABEL_58:
          p_Data1 = 0LL;
          v12 = 0;
          v9 = 0;
          goto LABEL_15;
        }
        if ( (unsigned int)v19 <= 7 )
        {
LABEL_49:
          if ( (_DWORD)P == 4 )
          {
            v9 = 4;
            v12 = 4;
            goto LABEL_48;
          }
          goto LABEL_21;
        }
        if ( (unsigned int)v19 <= 9 )
        {
          v12 = 8;
          if ( (_DWORD)P == 8 )
          {
            v9 = 11;
LABEL_48:
            p_Data1 = &v18->Data1;
LABEL_14:
            v18 = 0LL;
LABEL_15:
            *(_DWORD *)(a3 + 32) = v9;
            *(_DWORD *)(a3 + 36) = v12;
            *(_QWORD *)(a3 + 40) = p_Data1;
            goto LABEL_16;
          }
LABEL_21:
          RegistryValue = -1073741823;
          goto LABEL_16;
        }
LABEL_47:
        v12 = (unsigned int)P;
        v9 = 3;
        goto LABEL_48;
      }
      if ( (_DWORD)P != 16 )
        goto LABEL_21;
      RegistryValue = RtlStringFromGUIDEx(v18, &UnicodeString, 1u);
      if ( RegistryValue >= 0 )
      {
        v12 = UnicodeString.Length + 2;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v12, 0x63647050u);
        p_Data1 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, UnicodeString.Buffer, v12);
          goto LABEL_15;
        }
        goto LABEL_29;
      }
    }
  }
LABEL_16:
  RtlFreeAnsiString(&UnicodeString);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)RegistryValue;
}
