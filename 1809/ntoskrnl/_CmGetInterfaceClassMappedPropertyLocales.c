/*
 * XREFs of _CmGetInterfaceClassMappedPropertyLocales @ 0x140900204
 * Callers:
 *     _PnpDispatchInterfaceClass @ 0x14059EFC0 (_PnpDispatchInterfaceClass.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetInterfaceClassMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  DEVPROPKEY **v7; // r10
  unsigned int v8; // edx
  int v9; // r11d
  DEVPROPKEY *v10; // r8
  __int64 v11; // rcx
  DEVPROPKEY **v12; // r8
  int v13; // r10d
  DEVPROPKEY *v14; // r11
  __int64 v15; // rcx

  v7 = &off_140909E88;
  v8 = -1073741802;
  v9 = 0;
  *a7 = 0;
  while ( 1 )
  {
    v10 = *v7;
    if ( *v7 && *(_DWORD *)(a4 + 16) == v10->pid )
    {
      v11 = *(_QWORD *)a4 - *(_QWORD *)&v10->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v10->fmtid.Data1 )
        v11 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v10->fmtid.Data4;
      if ( !v11 )
        break;
    }
    ++v9;
    v7 += 2;
    if ( v9 )
    {
      v12 = &off_140909F48;
      v13 = 0;
      while ( 1 )
      {
        v14 = *v12;
        if ( *(_DWORD *)(a4 + 16) == (*v12)->pid )
        {
          v15 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
            v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
          if ( !v15 )
            break;
        }
        ++v13;
        v12 += 2;
        if ( v13 )
          return v8;
      }
      break;
    }
  }
  *a7 = 1;
  if ( a6 )
  {
    v8 = 0;
    *a5 = 0;
  }
  else
  {
    return (unsigned int)-1073741789;
  }
  return v8;
}
