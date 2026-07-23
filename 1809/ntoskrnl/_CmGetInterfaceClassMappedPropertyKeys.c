/*
 * XREFs of _CmGetInterfaceClassMappedPropertyKeys @ 0x1408FFFF4
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x14059EFC0 (_PnpDispatchInterfaceClass.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1408F937C (_CmDeleteInterfaceClassWorker.c)
 * Callees:
 *     _CmGetInterfaceClassMappedPropertyFromRegValue @ 0x14059F1B8 (_CmGetInterfaceClassMappedPropertyFromRegValue.c)
 *     _CmGetInterfaceClassMappedPropertyFromComposite @ 0x1408FFEEC (_CmGetInterfaceClassMappedPropertyFromComposite.c)
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyKeys(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 result; // rax
  char v10; // di
  __int64 v11; // rax
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // ebp
  __int64 *v16; // rsi
  __int64 v17; // r14
  char v18; // di
  __int64 v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // edx
  int v22; // eax
  unsigned int v23; // ecx
  _DWORD v24[18]; // [rsp+40h] [rbp-48h] BYREF

  v7 = a7;
  result = 0LL;
  *a7 = 0;
  v10 = 0;
  if ( &DEVPKEY_DeviceInterfaceClass_DefaultInterface )
  {
    if ( a4 )
      goto LABEL_39;
    result = CmGetInterfaceClassMappedPropertyFromRegValue(
               a1,
               a2,
               a3,
               (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
               v24,
               0LL,
               0,
               &a7);
    if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
    {
      v10 = 1;
    }
    else if ( (_DWORD)result == -1073741772 )
    {
LABEL_6:
      *v7 = 0;
      return result;
    }
    result = 0LL;
    if ( v10 )
    {
LABEL_39:
      if ( a5 )
      {
        v11 = *v7;
        if ( (unsigned int)v11 < a6 )
          *(DEVPROPKEY *)(a5 + 20 * v11) = DEVPKEY_DeviceInterfaceClass_DefaultInterface;
      }
      v12 = *v7;
      v13 = -1;
      v14 = *v7 + 1;
      if ( v14 >= *v7 )
        v13 = *v7 + 1;
      *v7 = v13;
      result = v14 < v12 ? 0xC0000095 : 0;
      if ( v14 < v12 )
        *v7 = 0;
    }
  }
  if ( (int)result >= 0 )
  {
    v15 = 0;
    v16 = (__int64 *)&off_140909F48;
    while ( 1 )
    {
      v17 = *v16;
      v18 = 0;
      if ( a4 )
        goto LABEL_40;
      result = CmGetInterfaceClassMappedPropertyFromComposite(a1, a2, a3, *v16, v24, 0LL, 0, &a7);
      if ( (_DWORD)result == -1073741789 || !(_DWORD)result )
      {
        v18 = 1;
      }
      else if ( (_DWORD)result == -1073741772 )
      {
        goto LABEL_6;
      }
      result = 0LL;
      if ( v18 )
      {
LABEL_40:
        if ( a5 )
        {
          v19 = *v7;
          if ( (unsigned int)v19 < a6 )
          {
            v20 = 5 * v19;
            *(_OWORD *)(a5 + 4 * v20) = *(_OWORD *)v17;
            *(_DWORD *)(a5 + 4 * v20 + 16) = *(_DWORD *)(v17 + 16);
          }
        }
        v21 = *v7;
        v22 = -1;
        v23 = *v7 + 1;
        if ( v23 >= *v7 )
          v22 = *v7 + 1;
        *v7 = v22;
        result = v23 < v21 ? 0xC0000095 : 0;
        if ( v23 < v21 )
          break;
      }
      ++v15;
      v16 += 2;
      if ( v15 )
        goto LABEL_35;
    }
    *v7 = 0;
LABEL_35:
    if ( (int)result >= 0 )
      return a6 < *v7 ? 0xC0000023 : 0;
  }
  return result;
}
