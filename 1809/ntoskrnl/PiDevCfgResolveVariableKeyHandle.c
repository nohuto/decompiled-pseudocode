/*
 * XREFs of PiDevCfgResolveVariableKeyHandle @ 0x140831A80
 * Callers:
 *     PiDevCfgResolveVariableKeyCopy @ 0x1408319A0 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140832250 (PiDevCfgResolveVariableKeyValue.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B99D0 (RtlInitUnicodeString.c)
 *     PnpValidateRegistryString @ 0x14015DA4C (PnpValidateRegistryString.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     wcschr @ 0x140197810 (wcschr.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _CmGetDeviceRegProp @ 0x1405C799C (_CmGetDeviceRegProp.c)
 *     _CmOpenDeviceRegKey @ 0x1405C7EF0 (_CmOpenDeviceRegKey.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     IopGetRegistryValue @ 0x140681694 (IopGetRegistryValue.c)
 *     PiDevCfgResolveVariable @ 0x1406F469C (PiDevCfgResolveVariable.c)
 *     PnpRegSzToString @ 0x1406F6E14 (PnpRegSzToString.c)
 *     _PnpCtxOpenContextBaseKey @ 0x140707540 (_PnpCtxOpenContextBaseKey.c)
 */

__int64 __fastcall PiDevCfgResolveVariableKeyHandle(_QWORD *a1, void *a2, _QWORD *a3)
{
  unsigned int v5; // r13d
  NTSTATUS RegistryValue; // eax
  unsigned int *v7; // r15
  int DeviceRegProp; // edi
  __int64 v9; // rbx
  const wchar_t *v10; // rdi
  const wchar_t **v11; // rsi
  __int64 v12; // rcx
  WCHAR *v13; // rsi
  wchar_t **v14; // rbx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // eax
  int v18; // edx
  wchar_t *v19; // rax
  NTSTATUS v20; // eax
  const wchar_t *v21; // rsi
  wchar_t *v22; // rax
  PVOID PoolWithTag; // rax
  const wchar_t *v24; // r12
  unsigned int v25; // r13d
  wchar_t *v26; // rax
  wchar_t *v27; // rbx
  __int64 v28; // rcx
  int v29; // esi
  int v30; // edx
  UNICODE_STRING **v31; // r14
  UNICODE_STRING *v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rdx
  const wchar_t *v35; // rbx
  __int64 v36; // rax
  unsigned int v37; // ebx
  wchar_t *Buffer; // r13
  unsigned int v39; // eax
  const wchar_t *v40; // r12
  wchar_t *v41; // rax
  wchar_t *v42; // r14
  __int64 v43; // rcx
  const wchar_t *v44; // r9
  unsigned int v45; // esi
  __int64 v46; // rcx
  unsigned int v47; // eax
  __int64 v48; // rsi
  const wchar_t *v49; // r14
  __int64 v50; // rax
  UNICODE_STRING v51; // xmm0
  HANDLE v52; // rax
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID P; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v57; // [rsp+60h] [rbp-A0h]
  _QWORD *v58; // [rsp+68h] [rbp-98h]
  const wchar_t *v59; // [rsp+70h] [rbp-90h]
  HANDLE v60; // [rsp+78h] [rbp-88h] BYREF
  PVOID v61; // [rsp+80h] [rbp-80h]
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-70h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  int v64; // [rsp+D0h] [rbp-30h] BYREF
  int v65; // [rsp+D4h] [rbp-2Ch] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp-28h] BYREF
  _QWORD *v67; // [rsp+E0h] [rbp-20h]
  _BYTE v68[76]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v69; // [rsp+13Ch] [rbp+3Ch]

  v67 = a3;
  *a3 = 0LL;
  v58 = a1;
  P = 0LL;
  Handle = 0LL;
  KeyHandle = 0LL;
  v60 = 0LL;
  v5 = 0;
  v61 = 0LL;
  *(_DWORD *)&UnicodeString.Length = 0;
  UnicodeString.Buffer = 0LL;
  RegistryValue = IopGetRegistryValue(a2, L"KeyRoot", 0, &P);
  v7 = (unsigned int *)P;
  DeviceRegProp = RegistryValue;
  if ( RegistryValue < 0 )
    goto LABEL_105;
  if ( !PnpValidateRegistryString(P) )
  {
LABEL_3:
    DeviceRegProp = -1073741823;
    goto LABEL_105;
  }
  v9 = 0LL;
  v10 = (const wchar_t *)((char *)v7 + v7[2]);
  v11 = (const wchar_t **)&off_14090C250;
  while ( wcsicmp(*v11, v10) )
  {
    v9 = (unsigned int)(v9 + 1);
    v11 += 4;
    if ( (unsigned int)v9 >= 7 )
      goto LABEL_7;
  }
  v14 = &(&off_14090C250)[4 * v9];
  if ( v14 )
  {
    v15 = *((unsigned int *)v14 + 4);
    v13 = 0LL;
    v16 = *a1;
    if ( !(_DWORD)v15 )
    {
      v18 = *((_DWORD *)v14 + 3);
      if ( !v18 )
      {
        DeviceRegProp = -1073741595;
        goto LABEL_105;
      }
      if ( v18 == 7 )
      {
        v64 = 78;
        DeviceRegProp = CmGetDeviceRegProp(
                          *(__int64 *)&PiPnpRtlCtx,
                          *(_QWORD *)(v16 + 48),
                          0LL,
                          9,
                          (__int64)&v65,
                          (__int64)v68,
                          (__int64)&v64,
                          0);
        if ( DeviceRegProp < 0 )
          goto LABEL_105;
        if ( v65 != 1 )
          goto LABEL_3;
        v18 = *((_DWORD *)v14 + 3);
        v69 = 0;
        v13 = (WCHAR *)v68;
      }
      else
      {
        v13 = v14[3];
      }
      DeviceRegProp = PnpCtxOpenContextBaseKey(v12, v18, v15, 0x20019u, (__int64)&Handle);
      if ( DeviceRegProp < 0 )
        goto LABEL_105;
      if ( v13 )
      {
        RtlInitUnicodeString(&DestinationString, v13);
        v13 = 0LL;
        ObjectAttributes.Attributes = 576;
        KeyHandle = 0LL;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = Handle;
        ObjectAttributes.ObjectName = &DestinationString;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        DeviceRegProp = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
        if ( DeviceRegProp < 0 )
          goto LABEL_105;
        ZwClose(Handle);
        Handle = KeyHandle;
      }
      goto LABEL_31;
    }
    v17 = CmOpenDeviceRegKey(*(__int64 *)&PiPnpRtlCtx, *(_QWORD *)(v16 + 48), v15, 0, 131097, 0, (__int64)&Handle, 0LL);
  }
  else
  {
LABEL_7:
    v13 = 0LL;
    if ( wcsicmp(v10, L"SYSTEM") )
    {
      if ( wcsicmp(v10, L"SOFTWARE") )
      {
        if ( wcsicmp(v10, L"HARDWARE") )
        {
          DeviceRegProp = -1073741772;
          goto LABEL_105;
        }
        v19 = L"\\Registry\\Machine\\HARDWARE";
      }
      else
      {
        v19 = L"\\Registry\\Machine\\SOFTWARE";
      }
      DestinationString.Buffer = v19;
      ObjectAttributes.Length = 48;
      *(_DWORD *)&DestinationString.Length = 3538996;
    }
    else
    {
      *(_DWORD *)&DestinationString.Length = 3276848;
      ObjectAttributes.Length = 48;
      DestinationString.Buffer = L"\\Registry\\Machine\\SYSTEM";
    }
    Handle = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v17 = ZwOpenKey(&Handle, 0x20019u, &ObjectAttributes);
  }
  DeviceRegProp = v17;
  if ( v17 < 0 )
    goto LABEL_105;
LABEL_31:
  ExFreePoolWithTag(v7, 0);
  P = v13;
  v20 = IopGetRegistryValue(a2, L"KeyPath", 0, &P);
  v7 = (unsigned int *)P;
  DeviceRegProp = v20;
  if ( v20 < 0 )
  {
    if ( v20 != -1073741772 )
      goto LABEL_105;
    v52 = Handle;
    DeviceRegProp = (int)v13;
    v60 = Handle;
    Handle = v13;
    goto LABEL_103;
  }
  if ( !PnpValidateRegistryString(P) )
    goto LABEL_3;
  v59 = (const wchar_t *)((char *)v7 + v7[2]);
  v21 = v59;
  v22 = wcschr(v59, 0x24u);
  if ( !v22 )
    goto LABEL_98;
  do
  {
    ++v5;
    v22 = wcschr(v22 + 1, 0x24u);
  }
  while ( v22 );
  LODWORD(P) = v5;
  if ( !v5 )
  {
LABEL_98:
    PnpRegSzToString((unsigned int *)((char *)v7 + v7[2]), v7[3], (int *)&P);
    DestinationString.Length = (unsigned __int16)P;
    DestinationString.MaximumLength = *((_WORD *)v7 + 6);
    DestinationString.Buffer = (wchar_t *)((char *)v7 + v7[2]);
LABEL_99:
    v60 = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    DeviceRegProp = ZwOpenKey(&v60, 0x20019u, &ObjectAttributes);
    if ( DeviceRegProp < 0 )
      goto LABEL_105;
    v52 = v60;
LABEL_103:
    *v67 = v52;
    goto LABEL_105;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 8LL * v5, 0x63647050u);
  v61 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_37:
    DeviceRegProp = -1073741670;
    goto LABEL_105;
  }
  memset(PoolWithTag, 0, 8LL * v5);
  v24 = v21;
  v25 = 0;
  if ( *v21 )
  {
    while ( v25 < (unsigned int)P )
    {
      v26 = wcschr(v24, 0x5Cu);
      v27 = v26;
      if ( v26 )
      {
        *v26 = 0;
        v28 = v26 - v24;
      }
      else
      {
        v28 = -1LL;
        do
          ++v28;
        while ( v24[v28] );
      }
      v29 = 2 * v28;
      v30 = 2 * v28;
      if ( *v24 == 36 )
      {
        v31 = (UNICODE_STRING **)((char *)v61 + 8 * v25);
        DeviceRegProp = PiDevCfgResolveVariable((__int64)v58, v24 + 1, v31);
        if ( DeviceRegProp < 0 )
        {
          if ( DeviceRegProp != -1073741772 )
            break;
          v30 = v29;
          DeviceRegProp = 0;
        }
        else
        {
          v32 = *v31;
          v30 = v29;
          v33 = *(_DWORD *)&(*v31)[2].Length;
          if ( v33 )
          {
            if ( v33 <= 2 )
            {
              v30 = *(_DWORD *)(&v32[2].MaximumLength + 1) - 2;
            }
            else
            {
              v30 = v29;
              if ( v33 == 7 )
              {
                v34 = -1LL;
                do
                  ++v34;
                while ( v32[2].Buffer[v34] );
                v30 = 2 * v34;
              }
            }
          }
        }
        ++v25;
      }
      if ( (unsigned __int64)(v30 + (unsigned int)UnicodeString.MaximumLength) + 2 >= 0xFFFE )
      {
        DeviceRegProp = -2147483643;
        break;
      }
      UnicodeString.MaximumLength += v30 + 2;
      if ( v27 )
      {
        *v27 = 92;
        v35 = v27 + 1;
      }
      else
      {
        v36 = -1LL;
        do
          ++v36;
        while ( v24[v36] );
        v35 = &v24[v36];
      }
      v24 = v35;
      if ( !*v35 )
        break;
    }
    v21 = v59;
  }
  if ( DeviceRegProp >= 0 )
  {
    LOWORD(v37) = UnicodeString.MaximumLength;
    UnicodeString.Length = UnicodeString.MaximumLength - 2;
    UnicodeString.Buffer = (wchar_t *)ExAllocatePoolWithTag(PagedPool, UnicodeString.MaximumLength, 0x63647050u);
    Buffer = UnicodeString.Buffer;
    if ( !UnicodeString.Buffer )
      goto LABEL_37;
    v37 = (unsigned __int16)v37;
    v39 = 0;
    v57 = (unsigned __int16)v37;
    v40 = v21;
    LODWORD(v58) = 0;
    if ( *v21 )
    {
      while ( v39 < (unsigned int)P )
      {
        v41 = wcschr(v40, 0x5Cu);
        v42 = v41;
        if ( v41 )
        {
          *v41 = 0;
          v43 = v41 - v40;
        }
        else
        {
          v43 = -1LL;
          do
            ++v43;
          while ( v40[v43] );
        }
        v44 = v40;
        if ( v40 != v21 )
        {
          if ( v37 <= 2 )
            goto LABEL_3;
          *Buffer++ = 92;
          v37 -= 2;
          v57 = v37;
        }
        v45 = 2 * v43;
        if ( *v40 == 36 )
        {
          v46 = *((_QWORD *)v61 + (unsigned int)v58);
          LODWORD(v58) = (_DWORD)v58 + 1;
          if ( v46 )
          {
            v47 = *(_DWORD *)(v46 + 32);
            if ( v47 )
            {
              if ( v47 <= 2 )
              {
                v44 = *(const wchar_t **)(v46 + 40);
                v45 = *(_DWORD *)(v46 + 36) - 2;
              }
              else if ( v47 == 7 )
              {
                v44 = *(const wchar_t **)(v46 + 40);
                v48 = -1LL;
                do
                  ++v48;
                while ( v44[v48] );
                v45 = 2 * v48;
              }
            }
          }
        }
        if ( v37 <= v45 )
        {
          DeviceRegProp = -1073741823;
          break;
        }
        memmove(Buffer, v44, v45);
        Buffer += (unsigned __int64)v45 >> 1;
        v37 = v57 - v45;
        v57 -= v45;
        if ( v42 )
        {
          *v42 = 92;
          v49 = v42 + 1;
        }
        else
        {
          v50 = -1LL;
          do
            ++v50;
          while ( v40[v50] );
          v49 = &v40[v50];
        }
        v40 = v49;
        if ( !*v49 )
          break;
        v39 = (unsigned int)v58;
        v21 = v59;
      }
    }
    if ( DeviceRegProp >= 0 )
    {
      if ( v37 != 2 )
        goto LABEL_3;
      v51 = UnicodeString;
      *Buffer = 0;
      DestinationString = v51;
      goto LABEL_99;
    }
  }
LABEL_105:
  RtlFreeAnsiString(&UnicodeString);
  if ( v61 )
    ExFreePoolWithTag(v61, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)DeviceRegProp;
}
