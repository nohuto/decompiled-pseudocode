/*
 * XREFs of _CmGetDeviceMappedPropertyLocales @ 0x1408FF080
 * Callers:
 *     _PnpDispatchDevice @ 0x14059BFF0 (_PnpDispatchDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmGetDeviceMappedPropertyLocales(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        _WORD *a5,
        int a6,
        _DWORD *a7)
{
  DEVPROPKEY **v7; // r8
  unsigned int v8; // r11d
  unsigned int v9; // r10d
  DEVPROPKEY *v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r10d
  DEVPROPKEY **v13; // r8
  DEVPROPKEY *v14; // rdx
  __int64 v15; // rcx
  DEVPROPKEY **v16; // rdx
  unsigned int v17; // r8d
  DEVPROPKEY *v18; // r10
  __int64 v19; // rcx

  v7 = &CmDeviceRegPropMap;
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
    v7 += 3;
    if ( v9 >= 0x21 )
    {
      v12 = 0;
      v13 = &off_14090A5C0;
      while ( 1 )
      {
        v14 = *v13;
        if ( *v13 && *(_DWORD *)(a4 + 16) == v14->pid )
        {
          v15 = *(_QWORD *)a4 - *(_QWORD *)&v14->fmtid.Data1;
          if ( *(_QWORD *)a4 == *(_QWORD *)&v14->fmtid.Data1 )
            v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v14->fmtid.Data4;
          if ( !v15 )
            goto LABEL_22;
        }
        ++v12;
        v13 += 4;
        if ( v12 >= 2 )
        {
          v16 = &off_14090C4C0;
          v17 = 0;
          while ( 1 )
          {
            v18 = *v16;
            if ( *(_DWORD *)(a4 + 16) == (*v16)->pid )
            {
              v19 = *(_QWORD *)a4 - *(_QWORD *)&v18->fmtid.Data1;
              if ( *(_QWORD *)a4 == *(_QWORD *)&v18->fmtid.Data1 )
                v19 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v18->fmtid.Data4;
              if ( !v19 )
                break;
            }
            ++v17;
            v16 += 2;
            if ( v17 >= 0x19 )
              return v8;
          }
          goto LABEL_22;
        }
      }
    }
  }
LABEL_22:
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
