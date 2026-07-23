/*
 * XREFs of _CmGetDeviceInterfaceMappedPropertyKeys @ 0x1408FEA50
 * Callers:
 *     _PnpDispatchDeviceInterface @ 0x14059BE70 (_PnpDispatchDeviceInterface.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1408F7FF0 (_CmDeleteDeviceInterfaceWorker.c)
 * Callees:
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14059CAB4 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromRegValue @ 0x14059FE90 (_CmGetDeviceInterfaceMappedPropertyFromRegValue.c)
 */

__int64 __fastcall CmGetDeviceInterfaceMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  signed int v9; // r10d
  __int64 v11; // rax
  unsigned int v12; // ebp
  __int64 v13; // rsi
  char v14; // di
  signed int DeviceInterfaceMappedPropertyFromRegValue; // eax
  unsigned int v16; // ebp
  __int64 *v17; // rsi
  __int64 v18; // r14
  char v19; // di
  signed int DeviceInterfaceMappedPropertyFromComposite; // eax
  __int64 v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // edx
  int v25; // eax
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // edx
  int v30; // eax
  unsigned int v31; // ecx
  _DWORD v32[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v33; // [rsp+90h] [rbp+8h]
  __int64 v34; // [rsp+98h] [rbp+10h]

  v34 = a2;
  v33 = a1;
  v7 = a7;
  v8 = (__int64 *)&off_14090A1B8;
  v9 = 0;
  v11 = a3;
  *a7 = 0;
  v12 = 0;
  while ( 1 )
  {
    v13 = *v8;
    v14 = 0;
    if ( *v8 )
      break;
LABEL_29:
    ++v12;
    v8 += 2;
    if ( v12 >= 3 )
      goto LABEL_9;
  }
  if ( !a4 )
  {
    DeviceInterfaceMappedPropertyFromRegValue = CmGetDeviceInterfaceMappedPropertyFromRegValue(
                                                  a1,
                                                  a2,
                                                  v11,
                                                  *v8,
                                                  v32,
                                                  0LL,
                                                  0,
                                                  &a7);
    v9 = DeviceInterfaceMappedPropertyFromRegValue;
    if ( DeviceInterfaceMappedPropertyFromRegValue == -1073741789 || !DeviceInterfaceMappedPropertyFromRegValue )
    {
      v14 = 1;
    }
    else if ( DeviceInterfaceMappedPropertyFromRegValue == -1073741811
           || (unsigned int)(DeviceInterfaceMappedPropertyFromRegValue + 1073741767) <= 1 )
    {
      goto LABEL_8;
    }
    v9 = 0;
    if ( !v14 )
      goto LABEL_28;
  }
  if ( a5 )
  {
    v22 = *v7;
    if ( (unsigned int)v22 < a6 )
    {
      v23 = 5 * v22;
      *(_OWORD *)(a5 + 4 * v23) = *(_OWORD *)v13;
      *(_DWORD *)(a5 + 4 * v23 + 16) = *(_DWORD *)(v13 + 16);
    }
  }
  v24 = *v7;
  v25 = -1;
  v26 = *v7 + 1;
  if ( v26 >= *v7 )
    v25 = *v7 + 1;
  v9 = v26 < v24 ? 0xC0000095 : 0;
  *v7 = v25;
  if ( v26 >= v24 )
  {
LABEL_28:
    a1 = v33;
    a2 = v34;
    v11 = a3;
    goto LABEL_29;
  }
LABEL_8:
  *v7 = 0;
LABEL_9:
  if ( v9 >= 0 )
  {
    v16 = 0;
    v17 = (__int64 *)&off_14090A6E0;
    while ( 1 )
    {
      v18 = *v17;
      v19 = 0;
      if ( a4 )
        goto LABEL_43;
      DeviceInterfaceMappedPropertyFromComposite = CmGetDeviceInterfaceMappedPropertyFromComposite(
                                                     v33,
                                                     v34,
                                                     a3,
                                                     *v17,
                                                     v32,
                                                     0LL,
                                                     0,
                                                     &a7);
      v9 = DeviceInterfaceMappedPropertyFromComposite;
      if ( DeviceInterfaceMappedPropertyFromComposite == -1073741789 || !DeviceInterfaceMappedPropertyFromComposite )
      {
        v19 = 1;
      }
      else if ( DeviceInterfaceMappedPropertyFromComposite == -1073741811
             || (unsigned int)(DeviceInterfaceMappedPropertyFromComposite + 1073741767) <= 1 )
      {
        break;
      }
      v9 = 0;
      if ( v19 )
      {
LABEL_43:
        if ( a5 )
        {
          v27 = *v7;
          if ( (unsigned int)v27 < a6 )
          {
            v28 = 5 * v27;
            *(_OWORD *)(a5 + 4 * v28) = *(_OWORD *)v18;
            *(_DWORD *)(a5 + 4 * v28 + 16) = *(_DWORD *)(v18 + 16);
          }
        }
        v29 = *v7;
        v30 = -1;
        v31 = *v7 + 1;
        if ( v31 >= *v7 )
          v30 = *v7 + 1;
        v9 = v31 < v29 ? 0xC0000095 : 0;
        *v7 = v30;
        if ( v31 < v29 )
          break;
      }
      ++v16;
      v17 += 2;
      if ( v16 >= 4 )
        goto LABEL_17;
    }
    *v7 = 0;
LABEL_17:
    if ( v9 >= 0 )
      return a6 < *v7 ? 0xC0000023 : 0;
  }
  return (unsigned int)v9;
}
