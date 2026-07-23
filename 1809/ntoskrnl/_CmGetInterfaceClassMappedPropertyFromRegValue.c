/*
 * XREFs of _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x14059F1B8
 * Callers:
 *     _CmGetInterfaceClassMappedProperty @ 0x14059F0C8 (_CmGetInterfaceClassMappedProperty.c)
 *     _CmGetInterfaceClassMappedPropertyKeys @ 0x1408FFFF4 (_CmGetInterfaceClassMappedPropertyKeys.c)
 * Callees:
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     _PnpOpenPropertiesKey @ 0x14059BA2C (_PnpOpenPropertiesKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x14059FB44 (_CmOpenInterfaceClassRegKey.c)
 *     _RegRtlQueryValue @ 0x1405C89A8 (_RegRtlQueryValue.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyFromRegValue(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        _DWORD *a5,
        __int64 a6,
        int a7,
        _DWORD *a8)
{
  _DWORD *v8; // r13
  int v9; // ebx
  _DWORD *v10; // rax
  int v13; // esi
  unsigned int v14; // r8d
  int v15; // r10d
  DEVPROPKEY **v16; // rdx
  DEVPROPKEY *v17; // rdi
  DEVPROPKEY **v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int Value; // edi
  __int64 v24; // [rsp+28h] [rbp-28h]
  HANDLE Handle[2]; // [rsp+40h] [rbp-10h] BYREF
  HANDLE KeyHandle; // [rsp+A8h] [rbp+58h] BYREF

  v8 = a5;
  v9 = 0;
  v10 = a8;
  Handle[0] = 0LL;
  KeyHandle = 0LL;
  *a5 = 0;
  *v10 = 0;
  if ( a6 )
    v13 = a7;
  else
    v13 = 0;
  v14 = *(_DWORD *)(a4 + 16);
  if ( v14 < 2 )
    return (unsigned int)-1073741264;
  v15 = 0;
  v16 = &off_140909E88;
  do
  {
    v17 = *v16;
    v18 = v16;
    if ( v14 == (*v16)->pid )
    {
      v19 = *(_QWORD *)a4 - *(_QWORD *)&v17->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v17->fmtid.Data1 )
        v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v17->fmtid.Data4;
      if ( !v19 )
        break;
    }
    v18 = 0LL;
    ++v15;
    v16 += 2;
  }
  while ( !v15 );
  if ( !v18 )
    return (unsigned int)-1073741264;
  if ( v14 == 2 )
  {
    v20 = *(_QWORD *)a4 - *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1;
    if ( *(_QWORD *)a4 == *(_QWORD *)&DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data1 )
      v20 = *(_QWORD *)(a4 + 8) - *(_QWORD *)DEVPKEY_DeviceInterfaceClass_DefaultInterface.fmtid.Data4;
    if ( !v20 )
    {
      if ( !a3 )
      {
        v9 = CmOpenInterfaceClassRegKey(a1, a2, 2, a4, 1, 0, (__int64)Handle, 0LL);
        if ( v9 < 0 )
          goto LABEL_17;
        LODWORD(a3) = Handle[0];
      }
      v21 = PnpOpenPropertiesKey(a1, a3, 0LL, 1, 0, v24, &KeyHandle);
      v9 = v21;
      if ( v21 == -1073741772 )
      {
LABEL_16:
        v9 = -1073741275;
        goto LABEL_17;
      }
      if ( v21 >= 0 )
      {
        LODWORD(a5) = v13;
        Value = RegRtlQueryValue(KeyHandle, (__int64)&a5);
        ZwClose(KeyHandle);
        if ( Value != -1073741772 && Value != -1073741444 )
        {
          if ( !Value || Value == -1073741789 )
          {
            *a8 = (_DWORD)a5;
            *v8 = 18;
            if ( Value || !v13 )
              v9 = -1073741789;
          }
          else
          {
            v9 = Value;
          }
          goto LABEL_17;
        }
        goto LABEL_16;
      }
LABEL_17:
      if ( Handle[0] )
        ZwClose(Handle[0]);
    }
  }
  return (unsigned int)v9;
}
