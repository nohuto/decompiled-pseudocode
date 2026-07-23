/*
 * XREFs of _CmGetInstallerClassMappedPropertyKeys @ 0x1408FFA0C
 * Callers:
 *     _PnpDispatchInstallerClass @ 0x1406F1C50 (_PnpDispatchInstallerClass.c)
 *     _CmDeleteInstallerClassWorker @ 0x1408F8FAC (_CmDeleteInstallerClassWorker.c)
 * Callees:
 *     _CmGetInstallerClassMappedPropertyFromComposite @ 0x1406F1F90 (_CmGetInstallerClassMappedPropertyFromComposite.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406F238C (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _CmGetInstallerClassMappedPropertyFromRegValue @ 0x1406F28BC (_CmGetInstallerClassMappedPropertyFromRegValue.c)
 *     _CmGetInstallerClassMappedPropertyFromCoInstallers @ 0x1406F2A68 (_CmGetInstallerClassMappedPropertyFromCoInstallers.c)
 */

__int64 __fastcall CmGetInstallerClassMappedPropertyKeys(
        __int64 a1,
        const WCHAR *a2,
        void *a3,
        char a4,
        __int64 a5,
        unsigned int a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  __int64 *v8; // r14
  signed int v9; // r10d
  unsigned int v10; // r15d
  int v11; // r11d
  int v13; // eax
  __int64 v14; // r8
  __int64 v15; // rbp
  char v16; // si
  signed int InstallerClassMappedPropertyFromRegProp; // eax
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // ecx
  unsigned int v23; // r15d
  __int64 *v24; // r14
  __int64 v25; // rbp
  char v26; // si
  signed int InstallerClassMappedPropertyFromRegValue; // eax
  __int64 v28; // rax
  __int64 v29; // rcx
  unsigned int v30; // edx
  int v31; // eax
  unsigned int v32; // ecx
  unsigned int v33; // ebp
  __int64 *v34; // r14
  __int64 v35; // r15
  char v36; // si
  signed int InstallerClassMappedPropertyFromComposite; // eax
  __int64 v38; // rax
  __int64 v39; // rcx
  unsigned int v40; // edx
  int v41; // esi
  int v42; // eax
  unsigned int v43; // ecx
  int InstallerClassMappedPropertyFromCoInstallers; // eax
  __int64 v45; // rax
  unsigned int v46; // ecx
  unsigned int v47; // eax
  _DWORD v49[18]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v50; // [rsp+90h] [rbp+8h]

  v50 = a1;
  v7 = a7;
  v8 = (__int64 *)&CmClassRegPropMap;
  v9 = 0;
  v10 = 0;
  v11 = (int)a3;
  *a7 = 0;
  v13 = (int)a2;
  v14 = 0xFFFFFFFFLL;
  while ( 1 )
  {
    v15 = *v8;
    v16 = 0;
    if ( !*v8 )
      goto LABEL_17;
    if ( a4 )
      goto LABEL_73;
    InstallerClassMappedPropertyFromRegProp = CmGetInstallerClassMappedPropertyFromRegProp(
                                                a1,
                                                v13,
                                                v11,
                                                *v8,
                                                v49,
                                                0LL,
                                                0,
                                                (unsigned int *)&a7);
    v9 = InstallerClassMappedPropertyFromRegProp;
    if ( InstallerClassMappedPropertyFromRegProp == -1073741789 || !InstallerClassMappedPropertyFromRegProp )
    {
      v16 = 1;
    }
    else if ( InstallerClassMappedPropertyFromRegProp == -1073741772 )
    {
      goto LABEL_65;
    }
    v9 = 0;
    v14 = 0xFFFFFFFFLL;
    if ( v16 )
    {
LABEL_73:
      if ( a5 )
      {
        v18 = *v7;
        if ( (unsigned int)v18 < a6 )
        {
          v19 = 5 * v18;
          *(_OWORD *)(a5 + 4 * v19) = *(_OWORD *)v15;
          *(_DWORD *)(a5 + 4 * v19 + 16) = *(_DWORD *)(v15 + 16);
        }
      }
      v20 = *v7;
      v21 = -1;
      v22 = *v7 + 1;
      if ( v22 >= *v7 )
        v21 = *v7 + 1;
      v9 = v22 < v20 ? 0xC0000095 : 0;
      *v7 = v21;
      if ( v22 < v20 )
        break;
    }
    LODWORD(a1) = v50;
    v13 = (int)a2;
LABEL_17:
    ++v10;
    v8 += 3;
    if ( v10 >= 9 )
      goto LABEL_20;
    v11 = (int)a3;
  }
  *v7 = 0;
LABEL_20:
  if ( v9 < 0 )
    return (unsigned int)v9;
  v23 = 0;
  v24 = (__int64 *)&off_14090BEA0;
  while ( 1 )
  {
    v25 = *v24;
    v26 = 0;
    if ( *v24 )
    {
      if ( a4 )
        goto LABEL_74;
      InstallerClassMappedPropertyFromRegValue = CmGetInstallerClassMappedPropertyFromRegValue(
                                                   v50,
                                                   (int)a2,
                                                   a3,
                                                   *v24,
                                                   v49,
                                                   0LL,
                                                   0,
                                                   &a7);
      v9 = InstallerClassMappedPropertyFromRegValue;
      if ( InstallerClassMappedPropertyFromRegValue == -1073741789 || !InstallerClassMappedPropertyFromRegValue )
      {
        v26 = 1;
      }
      else if ( InstallerClassMappedPropertyFromRegValue == -1073741772 )
      {
        goto LABEL_65;
      }
      v9 = 0;
      if ( v26 )
      {
LABEL_74:
        if ( a5 )
        {
          v28 = *v7;
          if ( (unsigned int)v28 < a6 )
          {
            v29 = 5 * v28;
            *(_OWORD *)(a5 + 4 * v29) = *(_OWORD *)v25;
            *(_DWORD *)(a5 + 4 * v29 + 16) = *(_DWORD *)(v25 + 16);
          }
        }
        v30 = *v7;
        v31 = -1;
        v32 = *v7 + 1;
        if ( v32 >= *v7 )
          v31 = *v7 + 1;
        v9 = v32 < v30 ? 0xC0000095 : 0;
        *v7 = v31;
        if ( v32 < v30 )
          break;
      }
    }
    ++v23;
    v24 += 4;
    if ( v23 >= 0xD )
      goto LABEL_39;
  }
  *v7 = 0;
LABEL_39:
  if ( v9 < 0 )
    return (unsigned int)v9;
  v33 = 0;
  v34 = (__int64 *)&off_14090A6A0;
  while ( 2 )
  {
    v35 = *v34;
    v36 = 0;
    if ( !a4 )
    {
      InstallerClassMappedPropertyFromComposite = CmGetInstallerClassMappedPropertyFromComposite(
                                                    v50,
                                                    (__int64)a2,
                                                    (__int64)a3,
                                                    *v34,
                                                    v49,
                                                    0LL,
                                                    0,
                                                    (unsigned int *)&a7);
      v9 = InstallerClassMappedPropertyFromComposite;
      if ( InstallerClassMappedPropertyFromComposite == -1073741789 || !InstallerClassMappedPropertyFromComposite )
      {
        v36 = 1;
      }
      else if ( InstallerClassMappedPropertyFromComposite == -1073741772 )
      {
        goto LABEL_65;
      }
      v9 = 0;
      if ( !v36 )
      {
        v41 = -1;
        goto LABEL_67;
      }
    }
    if ( a5 )
    {
      v38 = *v7;
      if ( (unsigned int)v38 < a6 )
      {
        v39 = 5 * v38;
        *(_OWORD *)(a5 + 4 * v39) = *(_OWORD *)v35;
        *(_DWORD *)(a5 + 4 * v39 + 16) = *(_DWORD *)(v35 + 16);
      }
    }
    v40 = *v7;
    v41 = -1;
    v42 = -1;
    v43 = *v7 + 1;
    if ( v43 >= *v7 )
      v42 = *v7 + 1;
    v9 = v43 < v40 ? 0xC0000095 : 0;
    *v7 = v42;
    if ( v43 >= v40 )
    {
LABEL_67:
      ++v33;
      v34 += 2;
      if ( v33 >= 4 )
        goto LABEL_55;
      continue;
    }
    break;
  }
  *v7 = 0;
LABEL_55:
  if ( v9 >= 0 )
  {
    if ( !a4 )
    {
      InstallerClassMappedPropertyFromCoInstallers = CmGetInstallerClassMappedPropertyFromCoInstallers(
                                                       v50,
                                                       a2,
                                                       v14,
                                                       v49,
                                                       0LL,
                                                       0,
                                                       &a7);
      if ( InstallerClassMappedPropertyFromCoInstallers != -1073741789 )
      {
        if ( InstallerClassMappedPropertyFromCoInstallers )
          return a6 < *v7 ? 0xC0000023 : 0;
      }
    }
    if ( a5 )
    {
      v45 = *v7;
      if ( (unsigned int)v45 < a6 )
        *(DEVPROPKEY *)(a5 + 20 * v45) = DEVPKEY_DeviceClass_ClassCoInstallers;
    }
    v46 = *v7;
    v47 = *v7 + 1;
    if ( v47 >= *v7 )
      v41 = *v7 + 1;
    v9 = v47 < v46 ? 0xC0000095 : 0;
    *v7 = v41;
    if ( v47 < v46 )
LABEL_65:
      *v7 = 0;
    else
      return a6 < *v7 ? 0xC0000023 : 0;
  }
  return (unsigned int)v9;
}
