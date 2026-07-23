/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x1400FDA8C
 * Callers:
 *     LdrResSearchResource @ 0x14068BEF0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x14071C424 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrIsResItemExist @ 0x1400F3D38 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F40EC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpFindMessageInAlternateModule @ 0x1400F46B4 (LdrpFindMessageInAlternateModule.c)
 *     DownLevelLangIDToLanguageName @ 0x140161130 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x14068A66C (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x14068BB5C (LdrpResGetResourceDirectory.c)
 *     LdrpResGetMappingSize @ 0x14068C22C (LdrpResGetMappingSize.c)
 *     LdrResFallbackLangList @ 0x14068C4A0 (LdrResFallbackLangList.c)
 *     LdrResGetRCConfig @ 0x14071C424 (LdrResGetRCConfig.c)
 */

__int64 __fastcall LdrpResSearchResourceMappedFile(
        void *a1,
        ULONGLONG a2,
        int a3,
        __int64 a4,
        int a5,
        unsigned int **a6,
        _QWORD *a7,
        void *a8,
        __int64 a9)
{
  int v10; // ebx
  int v11; // r11d
  int v12; // r10d
  bool v13; // cl
  unsigned __int16 v14; // r12
  int v15; // r14d
  int v16; // edi
  int v17; // esi
  int v18; // edx
  int MappingSize; // edi
  unsigned int v20; // r12d
  int v21; // ecx
  unsigned int i; // r14d
  char v23; // di
  __int64 v24; // rdx
  __int64 v25; // r9
  ULONGLONG v26; // r8
  PVOID v27; // rcx
  int v28; // eax
  _DWORD *v29; // r14
  __int64 result; // rax
  int v31; // ecx
  int v32; // eax
  __int16 v33; // dx
  int RCConfig; // eax
  NTSTATUS v35; // eax
  ULONGLONG v36; // rdx
  unsigned __int64 v37; // r8
  __int64 v38; // rsi
  _WORD *v39; // r15
  char v40; // [rsp+70h] [rbp-388h]
  LANGID v41; // [rsp+74h] [rbp-384h]
  int v42; // [rsp+78h] [rbp-380h]
  PVOID ResourceDllBase; // [rsp+80h] [rbp-378h] BYREF
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-370h] BYREF
  PVOID DllHandle; // [rsp+90h] [rbp-368h]
  int v46; // [rsp+98h] [rbp-360h]
  int v47; // [rsp+9Ch] [rbp-35Ch]
  ULONGLONG Size; // [rsp+A0h] [rbp-358h]
  unsigned int **v49; // [rsp+A8h] [rbp-350h]
  __int64 v50; // [rsp+B0h] [rbp-348h] BYREF
  __int64 v51; // [rsp+B8h] [rbp-340h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-338h]
  __int64 v53; // [rsp+C8h] [rbp-330h]
  _QWORD *v54; // [rsp+D0h] [rbp-328h]
  __int64 v55; // [rsp+D8h] [rbp-320h]
  __int64 v56; // [rsp+E0h] [rbp-318h]
  void *v57; // [rsp+E8h] [rbp-310h]
  unsigned __int16 v58[2]; // [rsp+F0h] [rbp-308h] BYREF
  _WORD v59[262]; // [rsp+F4h] [rbp-304h]
  _WORD Src[88]; // [rsp+300h] [rbp-F8h] BYREF

  v10 = a3;
  v11 = a2;
  Size = a2;
  v12 = (int)a1;
  DllHandle = a1;
  v49 = a6;
  v54 = a7;
  v57 = a8;
  v56 = a9;
  ResourceDllBase = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v50 = 0LL;
  v51 = 0LL;
  v13 = 0;
  v46 = a3 & 0x40;
  v14 = 0;
  v15 = a3 & 0x80;
  v16 = a5;
  if ( a5 == 3 )
  {
    v14 = *(_WORD *)(a4 + 16);
    v13 = (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*(const wchar_t **)a4, L"MUI");
    v12 = (int)DllHandle;
    v11 = Size;
  }
  v17 = v15;
  if ( (v10 & 0x10) == 0 )
  {
    v17 = v15;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v33 = *(_WORD *)(a4 + 16);
      else
        v33 = 0;
      if ( ((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v13
        || (~(_BYTE)v10 & 8) == 0
        || (v33 & 0xF3FF) != 0
        || v33 == 3072 )
      {
        RCConfig = LdrResGetRCConfig(v12, v11, 0, v10, 1);
        MappingSize = RCConfig;
        if ( RCConfig < 0 )
        {
          if ( RCConfig != -1073741686 )
            return (unsigned int)MappingSize;
          v17 = v15 | 0x80000;
          v16 = a5;
        }
        else
        {
          v17 = v15 | LdrIsResItemExist(DllHandle, (_QWORD *)a4);
          v16 = a5;
        }
      }
      else
      {
        v10 |= 0x10u;
        v17 = v15;
      }
    }
  }
  if ( (v17 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v18 = ~v17;
  v58[0] = 1;
  v59[0] = 0;
  if ( ((~v17 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0 && (~v17 & 0x20000) != 0 || v16 == 3)
    && ((v10 & 0x10) == 0 || (v10 & 0x20) == 0) )
  {
    v31 = v10;
    v32 = v17 | 4;
    if ( (v10 & 4) == 0 )
      v32 = v17;
    v17 = v32;
    LOBYTE(v31) = v10 & 4;
    result = LdrResFallbackLangList(v31, v18, v14, v32, (__int64)v58);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v17 & 0x40000) != 0 || (v17 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(DllHandle, Size, (__int64)&v50);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v20 = 0;
LABEL_15:
  if ( v20 >= v58[0] )
    return (unsigned int)MappingSize;
  ResourceDllBase = 0LL;
  ResourceOffset = 0LL;
  v41 = v59[4 * v20];
  v21 = *(_DWORD *)&v59[4 * v20 + 2];
  v42 = v21;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_41:
      ++v20;
      goto LABEL_15;
    }
    if ( i )
      break;
    if ( v21 != 9 )
    {
      if ( (v17 & 0xA0000) == 0 && (v10 & 0x10) == 0 && v41 && BYTE2(PnpShutdownEvent.Limit) )
      {
        v40 = 1;
        v35 = LdrLoadAlternateResourceModuleEx(DllHandle, v41, &ResourceDllBase, &ResourceOffset, v17 | 0x1000);
        MappingSize = v35;
        if ( v35 < 0 )
        {
          if ( v35 == -1073741772 || v35 == -1073741766 )
            MappingSize = -1073020927;
        }
        else
        {
          v36 = ResourceOffset;
          if ( !ResourceOffset )
          {
            MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL);
            v36 = ResourceOffset;
          }
          if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
            goto LABEL_41;
          MappingSize = LdrpResGetResourceDirectory(ResourceDllBase, v36, (__int64)&v51);
          if ( MappingSize >= 0 )
          {
            v23 = 1;
            goto LABEL_20;
          }
        }
      }
LABEL_39:
      v21 = v42;
      continue;
    }
    LOWORD(v10) = v10 | 0x20;
  }
  v23 = 0;
  v40 = 0;
LABEL_20:
  if ( (~(_BYTE)v10 & 2) != 0 && a5 > 2 )
    *(_QWORD *)(a4 + 16) = v41;
  v55 = 0LL;
  v24 = v50;
  if ( v23 )
    v24 = v51;
  v25 = v52;
  if ( v23 )
    v25 = v53;
  v26 = Size;
  if ( v23 )
    v26 = ResourceOffset;
  v27 = DllHandle;
  if ( v23 )
    v27 = ResourceDllBase;
  v28 = LdrpResSearchResourceInsideDirectory(v27, v24, v26, v25, v24);
  MappingSize = v28;
  if ( v46 && v28 >= 0 && v49 && v40 )
  {
    v37 = v54 ? *v54 : v55;
    MappingSize = LdrpFindMessageInAlternateModule(ResourceDllBase, *v49, v37, *(_DWORD *)(a4 + 24), 1);
    if ( MappingSize < 0 )
    {
      *v49 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_39;
  v29 = (_DWORD *)v56;
  if ( !v56 )
    return (unsigned int)MappingSize;
  if ( v41 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v41, Src, 86LL) )
    {
      v38 = -1LL;
      do
        ++v38;
      while ( Src[v38] );
      goto LABEL_94;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    Src[0] = 0;
    LODWORD(v38) = 0;
LABEL_94:
    if ( (unsigned int)v38 < *v29 && (v39 = v57) != 0LL )
    {
      memmove(v57, Src, 2LL * (unsigned int)v38);
      *v29 = v38 + 1;
      v39[(unsigned int)v38] = 0;
    }
    else
    {
      *v29 = v38 + 1;
      MappingSize = -1073741789;
      v47 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
