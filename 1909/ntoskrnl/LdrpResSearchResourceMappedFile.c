/*
 * XREFs of LdrpResSearchResourceMappedFile @ 0x1400E00CC
 * Callers:
 *     LdrResSearchResource @ 0x1406764C0 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x140745208 (LdrResGetRCConfig.c)
 * Callees:
 *     LdrpFindMessageInAlternateModule @ 0x1400DF1CC (LdrpFindMessageInAlternateModule.c)
 *     LdrIsResItemExist @ 0x1400DF610 (LdrIsResItemExist.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DFAA0 (LdrLoadAlternateResourceModuleEx.c)
 *     DownLevelLangIDToLanguageName @ 0x140177FB4 (DownLevelLangIDToLanguageName.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     _wcsicmp @ 0x1401A0820 (_wcsicmp.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     LdrResFallbackLangList @ 0x140676204 (LdrResFallbackLangList.c)
 *     LdrpResGetMappingSize @ 0x140676720 (LdrpResGetMappingSize.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x140676888 (LdrpResSearchResourceInsideDirectory.c)
 *     LdrpResGetResourceDirectory @ 0x140677530 (LdrpResGetResourceDirectory.c)
 *     LdrResGetRCConfig @ 0x140745208 (LdrResGetRCConfig.c)
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
  bool v11; // dl
  unsigned __int16 v12; // r12
  int v13; // r14d
  int v14; // edi
  int v15; // esi
  __int16 v16; // cx
  int v17; // edx
  int MappingSize; // edi
  unsigned int v19; // r12d
  int v20; // ecx
  unsigned int i; // r14d
  char v22; // di
  __int64 v23; // rdx
  __int64 v24; // r9
  ULONGLONG v25; // r8
  PVOID v26; // rcx
  int v27; // eax
  _DWORD *v28; // r14
  __int64 result; // rax
  int v30; // ecx
  int v31; // eax
  int RCConfig; // eax
  NTSTATUS v33; // eax
  ULONGLONG v34; // rdx
  unsigned __int64 v35; // r8
  __int64 v36; // rsi
  _WORD *v37; // r15
  char v38; // [rsp+70h] [rbp-2D8h]
  LANGID v39; // [rsp+74h] [rbp-2D4h]
  int v40; // [rsp+78h] [rbp-2D0h]
  ULONG_PTR ResourceOffset; // [rsp+80h] [rbp-2C8h] BYREF
  PVOID ResourceDllBase; // [rsp+88h] [rbp-2C0h] BYREF
  PVOID DllHandle; // [rsp+90h] [rbp-2B8h]
  int v44; // [rsp+98h] [rbp-2B0h]
  int v45; // [rsp+9Ch] [rbp-2ACh]
  ULONGLONG Size; // [rsp+A0h] [rbp-2A8h]
  unsigned int **v47; // [rsp+A8h] [rbp-2A0h]
  __int64 v48; // [rsp+B0h] [rbp-298h] BYREF
  __int64 v49; // [rsp+B8h] [rbp-290h] BYREF
  __int64 v50; // [rsp+C0h] [rbp-288h]
  __int64 v51; // [rsp+C8h] [rbp-280h]
  _QWORD *v52; // [rsp+D0h] [rbp-278h]
  __int64 v53; // [rsp+D8h] [rbp-270h]
  __int64 v54; // [rsp+E0h] [rbp-268h]
  void *v55; // [rsp+E8h] [rbp-260h]
  _DWORD Src[132]; // [rsp+F0h] [rbp-258h] BYREF

  Size = a2;
  DllHandle = a1;
  v47 = a6;
  v52 = a7;
  v55 = a8;
  v54 = a9;
  v50 = 0LL;
  v51 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  memset(Src, 0, 0x208uLL);
  v11 = 0;
  v44 = a3 & 0x40;
  v12 = 0;
  v13 = a3 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    v12 = *(_WORD *)(a4 + 16);
    v11 = (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0 && !wcsicmp(*(const wchar_t **)a4, L"MUI");
  }
  v15 = a3 & 0x80;
  if ( (a3 & 0x10) == 0 && a5 >= 1 && a5 <= 3 )
  {
    if ( a5 == 3 )
      v16 = *(_WORD *)(a4 + 16);
    else
      v16 = 0;
    if ( (a3 & 0x1000000) == 0
      && (((*(_QWORD *)a4 - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v11
       || (~(_BYTE)a3 & 8) == 0
       || (v16 & 0xF3FF) != 0
       || v16 == 3072) )
    {
      RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, Size, 0, a3, 1);
      MappingSize = RCConfig;
      if ( RCConfig < 0 )
      {
        if ( RCConfig != -1073741686 )
          return (unsigned int)MappingSize;
        v15 = v13 | 0x80000;
        v14 = a5;
      }
      else
      {
        v15 = v13 | LdrIsResItemExist(DllHandle, (_QWORD *)a4);
        v14 = a5;
      }
    }
    else
    {
      a3 |= 0x10u;
      v15 = v13;
    }
  }
  if ( (v15 & 0x60000) == 0x60000 )
    return (unsigned int)-1073741686;
  v17 = ~v15;
  LOWORD(Src[0]) = 1;
  LOWORD(Src[1]) = 0;
  if ( ((~v15 & 0x80000) != 0 && (~(_BYTE)a3 & 0x10) != 0 && (~v15 & 0x20000) != 0 || v14 == 3)
    && ((a3 & 0x10) == 0 || (a3 & 0x20) == 0) )
  {
    v30 = a3;
    v31 = v15 | 4;
    if ( (a3 & 4) == 0 )
      v31 = v15;
    v15 = v31;
    LOBYTE(v30) = a3 & 4;
    result = LdrResFallbackLangList(v30, v17, v12, v31, (__int64)Src);
    if ( (int)result < 0 && (a3 & 0x1000) != 0 )
      return result;
  }
  if ( (a3 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(DllHandle, Size, (__int64)&v48);
    if ( (int)result < 0 )
      return result;
  }
  MappingSize = 0;
  v19 = 0;
LABEL_24:
  if ( v19 >= LOWORD(Src[0]) )
    return (unsigned int)MappingSize;
  ResourceDllBase = 0LL;
  ResourceOffset = 0LL;
  v39 = Src[2 * v19 + 1];
  v20 = Src[2 * v19 + 2];
  v40 = v20;
  for ( i = 0; ; ++i )
  {
    if ( i >= 2 )
    {
LABEL_50:
      ++v19;
      goto LABEL_24;
    }
    if ( i )
      break;
    if ( v20 != 9 )
    {
      if ( (v15 & 0xA0000) == 0 && (a3 & 0x10) == 0 && v39 && PnPBootDriversInitialized )
      {
        v38 = 1;
        v33 = LdrLoadAlternateResourceModuleEx(DllHandle, v39, &ResourceDllBase, &ResourceOffset, v15 | 0x1000);
        MappingSize = v33;
        if ( v33 < 0 )
        {
          if ( v33 == -1073741772 || v33 == -1073741766 )
            MappingSize = -1073020927;
        }
        else
        {
          v34 = ResourceOffset;
          if ( !ResourceOffset )
          {
            MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL);
            v34 = ResourceOffset;
          }
          if ( (a3 & 0x1000) != 0 && MappingSize < 0 )
            goto LABEL_50;
          MappingSize = LdrpResGetResourceDirectory(ResourceDllBase, v34, (__int64)&v49);
          if ( MappingSize >= 0 )
          {
            v22 = 1;
            goto LABEL_29;
          }
        }
      }
LABEL_48:
      v20 = v40;
      continue;
    }
    LOWORD(a3) = a3 | 0x20;
  }
  v22 = 0;
  v38 = 0;
LABEL_29:
  if ( (~(_BYTE)a3 & 2) != 0 && a5 > 2 )
    *(_QWORD *)(a4 + 16) = v39;
  v53 = 0LL;
  v23 = v48;
  if ( v22 )
    v23 = v49;
  v24 = v50;
  if ( v22 )
    v24 = v51;
  v25 = Size;
  if ( v22 )
    v25 = ResourceOffset;
  v26 = DllHandle;
  if ( v22 )
    v26 = ResourceDllBase;
  v27 = LdrpResSearchResourceInsideDirectory(v26, v23, v25, v24, v23);
  MappingSize = v27;
  if ( v44 && v27 >= 0 && v47 && v38 )
  {
    v35 = v52 ? *v52 : v53;
    MappingSize = LdrpFindMessageInAlternateModule(ResourceDllBase, *v47, v35, *(_DWORD *)(a4 + 24), 1);
    if ( MappingSize < 0 )
    {
      *v47 = 0LL;
      if ( MappingSize == -1073741701 )
        return (unsigned int)MappingSize;
    }
  }
  if ( MappingSize < 0 )
    goto LABEL_48;
  v28 = (_DWORD *)v54;
  if ( !v54 )
    return (unsigned int)MappingSize;
  if ( v39 )
  {
    if ( (unsigned int)DownLevelLangIDToLanguageName(v39, Src, 86LL, 2LL) )
    {
      v36 = -1LL;
      do
        ++v36;
      while ( *((_WORD *)Src + v36) );
      goto LABEL_94;
    }
    return (unsigned int)-1073741823;
  }
  else
  {
    LOWORD(Src[0]) = 0;
    LODWORD(v36) = 0;
LABEL_94:
    if ( (unsigned int)v36 < *v28 && (v37 = v55) != 0LL )
    {
      memmove(v55, Src, 2LL * (unsigned int)v36);
      *v28 = v36 + 1;
      v37[(unsigned int)v36] = 0;
    }
    else
    {
      *v28 = v36 + 1;
      MappingSize = -1073741789;
      v45 = -1073741789;
    }
  }
  return (unsigned int)MappingSize;
}
