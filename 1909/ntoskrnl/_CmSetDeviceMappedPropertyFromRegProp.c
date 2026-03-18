/*
 * XREFs of _CmSetDeviceMappedPropertyFromRegProp @ 0x1407039C0
 * Callers:
 *     _CmSetDeviceMappedProperty @ 0x1407035FC (_CmSetDeviceMappedProperty.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _PnpStringFromGuid @ 0x1407000C0 (_PnpStringFromGuid.c)
 *     _CmSetDeviceRegProp @ 0x1407059C0 (_CmSetDeviceRegProp.c)
 */

NTSTATUS __fastcall CmSetDeviceMappedPropertyFromRegProp(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        unsigned int a5,
        int *a6,
        unsigned int a7)
{
  int v7; // esi
  DEVPROPKEY **v8; // r10
  unsigned int v9; // ebx
  int v14; // r9d
  DEVPROPKEY *v15; // r11
  DEVPROPKEY **v16; // rdx
  __int64 v17; // r8
  int v18; // r8d
  int v19; // ebx
  int v20; // edi
  NTSTATUS result; // eax
  wchar_t *v22; // rax
  int v23; // ecx
  int *v24; // rax
  int v25; // ecx
  __int64 v26; // [rsp+28h] [rbp-B0h]
  int v27; // [rsp+30h] [rbp-A8h]
  int v28; // [rsp+40h] [rbp-98h] BYREF
  wchar_t v29[40]; // [rsp+50h] [rbp-88h] BYREF

  v7 = *(_DWORD *)(a4 + 16);
  v8 = &CmDeviceRegPropMap;
  v9 = 0;
  v14 = 1;
  do
  {
    v15 = *v8;
    v16 = v8;
    if ( v7 == (*v8)->pid )
    {
      v17 = *(_QWORD *)a4 - *(_QWORD *)&v15->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v15->fmtid.Data1 )
        v17 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v15->fmtid.Data4;
      if ( !v17 )
        break;
    }
    v16 = 0LL;
    ++v9;
    v8 += 3;
  }
  while ( v9 < 0x21 );
  if ( !v16 )
    return -1073741264;
  v18 = *((_DWORD *)v16 + 2);
  v19 = *((_DWORD *)v16 + 3);
  if ( a5 != v18 )
  {
    if ( a5 == 25 )
    {
      if ( v18 != 18 )
        return -1073741811;
    }
    else if ( a5 >= 2 )
    {
      return -1073741811;
    }
  }
  v20 = *((_DWORD *)v16 + 4);
  if ( v19 != 9 )
  {
    if ( v19 == 25 )
      return -1073741637;
    if ( v19 == 27 )
    {
      if ( a6 )
      {
        if ( !a7 )
          return -1073741811;
        if ( *(_BYTE *)a6 != 0xFF )
        {
          if ( *(_BYTE *)a6 )
            return -1073741811;
          v14 = 0;
        }
        v28 = v14;
        v24 = &v28;
        v25 = 4;
      }
      else
      {
        v24 = 0LL;
        v25 = 0;
      }
      return CmSetDeviceRegProp(a1, a2, a3, 27, v20, (__int64)v24, v25, 0);
    }
    if ( v19 != 37 )
    {
      v27 = a6 != 0LL ? a7 : 0;
      v26 = (unsigned __int64)a6 & -(__int64)(a6 != 0LL);
      return CmSetDeviceRegProp(a1, a2, a3, v19, v20, v26, v27, 0);
    }
  }
  if ( !a6 )
  {
    v22 = 0LL;
    v23 = 0;
    goto LABEL_21;
  }
  if ( a7 < 0x10 )
    return -1073741811;
  result = PnpStringFromGuid(a6, v29);
  if ( result >= 0 )
  {
    v22 = v29;
    v23 = 78;
LABEL_21:
    v27 = v23;
    v26 = (__int64)v22;
    return CmSetDeviceRegProp(a1, a2, a3, v19, v20, v26, v27, 0);
  }
  return result;
}
