/*
 * XREFs of _CmSetInstallerClassMappedPropertyFromRegProp @ 0x1409009E8
 * Callers:
 *     _CmSetInstallerClassMappedProperty @ 0x140900740 (_CmSetInstallerClassMappedProperty.c)
 * Callees:
 *     _CmSetInstallerClassRegProp @ 0x1408F96A8 (_CmSetInstallerClassRegProp.c)
 */

__int64 __fastcall CmSetInstallerClassMappedPropertyFromRegProp(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        _BYTE *a6,
        int a7)
{
  DEVPROPKEY **v7; // rbx
  int *v8; // r10
  unsigned int v11; // esi
  int v12; // edi
  DEVPROPKEY *v13; // r14
  DEVPROPKEY **v14; // r11
  __int64 v15; // rcx
  int v17; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // r8d
  unsigned int v20; // eax
  int v21; // [rsp+40h] [rbp-38h] BYREF

  v7 = &CmClassRegPropMap;
  v8 = 0LL;
  v11 = 0;
  v12 = 1;
  do
  {
    v13 = *v7;
    v14 = v7;
    if ( *(_DWORD *)(a4 + 16) == (*v7)->pid )
    {
      v15 = *(_QWORD *)a4 - *(_QWORD *)&v13->fmtid.Data1;
      if ( *(_QWORD *)a4 == *(_QWORD *)&v13->fmtid.Data1 )
        v15 = *(_QWORD *)(a4 + 8) - *(_QWORD *)v13->fmtid.Data4;
      if ( !v15 )
        break;
    }
    ++v11;
    v7 += 3;
    v14 = 0LL;
  }
  while ( v11 < 9 );
  if ( !v14 )
    return 3221226032LL;
  v17 = *((_DWORD *)v14 + 2);
  v18 = *((_DWORD *)v14 + 3);
  if ( a5 != v17 )
  {
    if ( a5 == 25 )
    {
      if ( v17 != 18 )
        return 3221225485LL;
    }
    else if ( a5 >= 2 )
    {
      return 3221225485LL;
    }
  }
  v19 = *((_DWORD *)v14 + 4);
  if ( v18 == 25 )
    return 3221225659LL;
  if ( v18 != 27 )
    return CmSetInstallerClassRegProp(a1, a2, a3, v18, v19, (__int64)a6, a7 & (unsigned int)-(a6 != 0LL));
  if ( a6 )
  {
    if ( !a7 )
      return 3221225485LL;
    if ( *a6 != 0xFF )
    {
      if ( *a6 )
        return 3221225485LL;
      v12 = 0;
    }
    v21 = v12;
    v8 = &v21;
    v20 = 4;
  }
  else
  {
    v20 = 0;
  }
  return CmSetInstallerClassRegProp(a1, a2, a3, 0x1Bu, v19, (__int64)v8, v20);
}
