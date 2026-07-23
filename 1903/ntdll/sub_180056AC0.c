/*
 * XREFs of sub_180056AC0 @ 0x180056AC0
 * Callers:
 *     LdrResSearchResource @ 0x180056760 (LdrResSearchResource.c)
 *     LdrResGetRCConfig @ 0x180058E50 (LdrResGetRCConfig.c)
 * Callees:
 *     sub_18000A590 @ 0x18000A590 (sub_18000A590.c)
 *     RtlLcidToLocaleName @ 0x180016AF0 (RtlLcidToLocaleName.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180017900 (LdrLoadAlternateResourceModuleEx.c)
 *     sub_180018610 @ 0x180018610 (sub_180018610.c)
 *     RtlGetCurrentServiceSessionId @ 0x180040780 (RtlGetCurrentServiceSessionId.c)
 *     sub_1800549C0 @ 0x1800549C0 (sub_1800549C0.c)
 *     LdrpResGetResourceDirectory @ 0x1800571D0 (LdrpResGetResourceDirectory.c)
 *     sub_1800575E0 @ 0x1800575E0 (sub_1800575E0.c)
 *     LdrpResGetMappingSize @ 0x180058740 (LdrpResGetMappingSize.c)
 *     sub_180058950 @ 0x180058950 (sub_180058950.c)
 *     LdrResGetRCConfig @ 0x180058E50 (LdrResGetRCConfig.c)
 *     sub_180067D14 @ 0x180067D14 (sub_180067D14.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     _wcsicmp @ 0x18008E1D0 (_wcsicmp.c)
 *     memmove @ 0x1800A32C0 (memmove.c)
 *     sub_1800E0820 @ 0x1800E0820 (sub_1800E0820.c)
 */

__int64 __fastcall sub_180056AC0(
        void *a1,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        __int64 *a7,
        void *a8,
        unsigned int *a9)
{
  unsigned int v10; // r15d
  __int64 v11; // rcx
  __int64 v12; // r12
  int v13; // ebx
  int v14; // esi
  int v15; // r14d
  bool v16; // dl
  bool v17; // r12
  PVOID v18; // rbx
  bool v19; // cl
  bool v20; // r12
  NTSTATUS MappingSize; // esi
  unsigned int i; // ebx
  unsigned __int16 *v23; // r11
  int v24; // r10d
  __int64 *v25; // rax
  __int64 v26; // rdx
  int v27; // r9d
  int v28; // r8d
  int v29; // ecx
  __int64 v30; // r14
  __int64 result; // rax
  char v32; // al
  bool v33; // zf
  int v34; // eax
  unsigned int *v35; // rcx
  __int16 v36; // cx
  int RCConfig; // eax
  __int64 v38; // r8
  LANGID v39; // cx
  NTSTATUS v40; // eax
  __int64 v41; // r9
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rax
  unsigned int v45; // r13d
  unsigned __int16 v46; // [rsp+70h] [rbp-3D8h] BYREF
  int v47; // [rsp+74h] [rbp-3D4h]
  char v48; // [rsp+78h] [rbp-3D0h]
  char v49; // [rsp+79h] [rbp-3CFh]
  char v50; // [rsp+7Ah] [rbp-3CEh]
  bool v51; // [rsp+7Bh] [rbp-3CDh]
  bool v52; // [rsp+7Ch] [rbp-3CCh]
  PVOID DllHandle; // [rsp+80h] [rbp-3C8h]
  ULONG_PTR ResourceOffset; // [rsp+88h] [rbp-3C0h] BYREF
  PVOID ResourceDllBase; // [rsp+90h] [rbp-3B8h] BYREF
  __int64 v56; // [rsp+98h] [rbp-3B0h]
  __int64 *v57; // [rsp+A0h] [rbp-3A8h]
  int v58; // [rsp+A8h] [rbp-3A0h]
  _QWORD *v59; // [rsp+B0h] [rbp-398h]
  unsigned int *v60; // [rsp+B8h] [rbp-390h]
  __int64 v61; // [rsp+C0h] [rbp-388h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-380h] BYREF
  __int64 v63; // [rsp+D0h] [rbp-378h]
  __int64 v64; // [rsp+D8h] [rbp-370h]
  __int64 *v65; // [rsp+E0h] [rbp-368h]
  __int64 v66; // [rsp+E8h] [rbp-360h] BYREF
  void *v67; // [rsp+F0h] [rbp-358h]
  __int64 v68; // [rsp+F8h] [rbp-350h] BYREF
  __int64 v69; // [rsp+100h] [rbp-348h] BYREF
  int v70; // [rsp+108h] [rbp-340h] BYREF
  const wchar_t *v71; // [rsp+110h] [rbp-338h]
  _UNICODE_STRING LocaleName; // [rsp+118h] [rbp-330h] BYREF
  int v73; // [rsp+128h] [rbp-320h] BYREF
  const wchar_t *v74; // [rsp+130h] [rbp-318h]
  _WORD v75[2]; // [rsp+140h] [rbp-308h] BYREF
  _WORD v76[262]; // [rsp+144h] [rbp-304h]
  _WORD Src[88]; // [rsp+350h] [rbp-F8h] BYREF

  v57 = (__int64 *)a4;
  v10 = a3;
  v56 = a2;
  DllHandle = a1;
  v59 = a6;
  v65 = a7;
  v67 = a8;
  v60 = a9;
  ResourceDllBase = 0LL;
  v63 = 0LL;
  v64 = 0LL;
  v61 = 0LL;
  v62 = 0LL;
  v48 = 0;
  v58 = a3 & 0x40;
  v49 = 0;
  v50 = 0;
  v70 = 4980810;
  v71 = L"LdrpResSearchResourceMappedFile Enter";
  v73 = 4849736;
  v74 = L"LdrpResSearchResourceMappedFile Exit";
  if ( RtlGetCurrentServiceSessionId() )
    v11 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
  else
    v11 = 2147353477LL;
  if ( (*(_BYTE *)v11 & 1) != 0 )
  {
    v12 = 2147353476LL;
    if ( RtlGetCurrentServiceSessionId() )
      v42 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
    else
      v42 = 2147353476LL;
    sub_1800E0820(&v70, *(unsigned __int8 *)v42);
  }
  else
  {
    v12 = 2147353476LL;
  }
  v46 = 0;
  v13 = v10 & 0x80;
  v14 = a5;
  if ( a5 == 3 )
  {
    v46 = *(_WORD *)(a4 + 16);
    if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) == 0
      || (v33 = wcsicmp(*(const wchar_t **)a4, L"MUI") == 0, v32 = 1, !v33) )
    {
      v32 = 0;
    }
    v48 = v32;
  }
  v15 = v10 & 0x80;
  if ( (v10 & 0x10) == 0 )
  {
    v15 = v10 & 0x80;
    if ( a5 >= 1 && a5 <= 3 )
    {
      if ( a5 == 3 )
        v36 = *((_WORD *)v57 + 8);
      else
        v36 = 0;
      if ( (v10 & 0x1000000) == 0
        && (((*v57 - 16) & 0xFFFFFFFFFFFFFFF7uLL) != 0 && !v48
         || (~(_BYTE)v10 & 8) == 0
         || (v36 & 0xF3FF) != 0
         || v36 == 3072) )
      {
        RCConfig = LdrResGetRCConfig((_DWORD)DllHandle, v56, 0, v10, 1);
        MappingSize = RCConfig;
        v47 = RCConfig;
        if ( RCConfig >= 0 )
        {
          v15 = v13 | sub_180018610(DllHandle, (const wchar_t **)v57, v38, v10);
        }
        else
        {
          if ( RCConfig != -1073741686 )
          {
LABEL_39:
            v30 = 2147353477LL;
            goto LABEL_40;
          }
          v15 = v13 | 0x80000;
        }
        v14 = a5;
      }
      else
      {
        v10 |= 0x10u;
        v15 = v13;
      }
    }
  }
  if ( (v15 & 0x60000) == 0x60000 )
  {
    MappingSize = -1073741686;
    v47 = -1073741686;
    goto LABEL_39;
  }
  v16 = (~v15 & 0x20000) != 0 && (~v15 & 0x80000) != 0 && (~(_BYTE)v10 & 0x10) != 0;
  v17 = v16;
  v75[0] = 1;
  v76[0] = 0;
  if ( !v16 && v14 != 3 || (v10 & 0x10) != 0 && (v10 & 0x20) != 0 )
  {
    v18 = DllHandle;
  }
  else
  {
    v34 = v15 | 4;
    if ( (v10 & 4) == 0 )
      v34 = v15;
    v15 = v34;
    v18 = DllHandle;
    result = sub_180058950((_DWORD)DllHandle, v56, v46, v34, (__int64)v75);
    if ( (int)result < 0 && (v10 & 0x1000) != 0 )
      return result;
  }
  if ( (v10 & 0x10) != 0 || (~v15 & 0x40000) != 0 || (v15 & 0x80000) != 0 )
  {
    result = LdrpResGetResourceDirectory(v18, (__int64)&v61);
    if ( (int)result < 0 )
      return result;
  }
  while ( 2 )
  {
    v19 = 0;
    if ( (v15 & 0x20000) == 0 )
      v19 = v17;
    v20 = v19;
    v52 = v19;
    v51 = v19;
    MappingSize = 0;
    v47 = 0;
    ResourceOffset = 0LL;
    v46 = 0;
    for ( i = 0; ; ++i )
    {
      if ( i >= v75[0] )
        goto LABEL_34;
      if ( !v20 )
        break;
      ResourceDllBase = 0LL;
      ResourceOffset = 0LL;
      v39 = v76[4 * i];
      if ( !v39 )
      {
        if ( *(_DWORD *)&v76[4 * i + 2] == 2 )
          continue;
LABEL_83:
        MappingSize = -1073741811;
LABEL_84:
        v47 = MappingSize;
        continue;
      }
      if ( *(_DWORD *)&v76[4 * i + 2] == 10 )
        goto LABEL_83;
      v46 = v76[4 * i];
      v40 = LdrLoadAlternateResourceModuleEx(DllHandle, v39, &ResourceDllBase, &ResourceOffset, v15 | 0x1000);
      MappingSize = v40;
      v47 = v40;
      if ( v40 < 0 )
      {
        if ( v40 == -1073741772 || v40 == -1073741766 )
        {
          MappingSize = -1073020927;
          goto LABEL_84;
        }
      }
      else
      {
        v49 = 1;
        if ( !ResourceOffset )
        {
          LOBYTE(v41) = 1;
          MappingSize = LdrpResGetMappingSize(ResourceDllBase, &ResourceOffset, 512LL, v41);
          v47 = MappingSize;
        }
        if ( (v10 & 0x1000) != 0 && MappingSize < 0 )
          goto LABEL_34;
        MappingSize = LdrpResGetResourceDirectory(ResourceDllBase, (__int64)&v62);
        v47 = MappingSize;
        if ( MappingSize >= 0 )
          break;
      }
LABEL_78:
      ;
    }
    v66 = 0LL;
    v23 = &v46;
    if ( v20 )
      v23 = 0LL;
    v24 = v10 | 0x20;
    if ( !v20 )
      v24 = v10;
    v25 = &v66;
    if ( v65 )
      v25 = v65;
    v26 = v61;
    if ( v20 )
      v26 = v62;
    v27 = v63;
    if ( v20 )
      v27 = v64;
    v28 = v56;
    if ( v20 )
      v28 = ResourceOffset;
    v29 = (int)DllHandle;
    if ( v20 )
      v29 = (int)ResourceDllBase;
    MappingSize = sub_1800575E0(
                    v29,
                    0,
                    v28,
                    v27,
                    v26,
                    0LL,
                    (__int64)v57,
                    a5,
                    (__int64)v75,
                    (__int64)v59,
                    (__int64)v25,
                    v24,
                    (__int64)v23);
    v47 = MappingSize;
    if ( v58 && (~v15 & 0x40000) != 0 )
    {
      if ( MappingSize < 0 )
        goto LABEL_33;
      if ( v59 && v20 )
      {
        if ( v65 )
          v43 = *v65;
        else
          LODWORD(v43) = v66;
        MappingSize = sub_180067D14((_DWORD)ResourceDllBase, *v59, v43, *((_DWORD *)v57 + 6), 1);
        v47 = MappingSize;
        if ( MappingSize < 0 )
        {
          *v59 = 0LL;
          if ( MappingSize == -1073741701 )
            goto LABEL_38;
        }
      }
    }
    if ( MappingSize < 0 )
    {
LABEL_33:
      if ( !v20 )
        goto LABEL_34;
      if ( (int)LdrResGetRCConfig((_DWORD)DllHandle, v56, (unsigned int)&v69, 4096, 1) >= 0
        && (int)LdrResGetRCConfig((_DWORD)ResourceDllBase, ResourceOffset, (unsigned int)&v68, 4096, 0) >= 0 )
      {
        v44 = *(_QWORD *)(v69 + 28) - *(_QWORD *)(v68 + 28);
        if ( !v44 )
          v44 = *(_QWORD *)(v69 + 36) - *(_QWORD *)(v68 + 36);
        if ( !v44 )
          goto LABEL_34;
      }
      goto LABEL_78;
    }
    v35 = v60;
    if ( !v60 )
    {
LABEL_34:
      if ( v20 && (v10 & 0x200000) == 0 )
        sub_18000A590(ResourceDllBase, ResourceOffset, v57, a5);
      if ( MappingSize >= 0 )
        goto LABEL_38;
      v17 = v52;
      if ( !v52 )
      {
LABEL_37:
        if ( v17 )
          continue;
        goto LABEL_38;
      }
      if ( v50 || v49 || (int)sub_1800549C0(DllHandle) < 0 )
      {
        if ( (v15 & 0x40000) != 0 )
        {
          v17 = 0;
          goto LABEL_37;
        }
        v15 |= 0x20000u;
      }
      else
      {
        v15 |= 0x400000u;
        v50 = 1;
      }
      v17 = v51;
      goto LABEL_37;
    }
    break;
  }
  if ( v46 )
  {
    LocaleName.Buffer = Src;
    LocaleName.MaximumLength = 172;
    MappingSize = RtlLcidToLocaleName(v46, &LocaleName, 2u, 0);
    v47 = MappingSize;
    if ( MappingSize >= 0 )
    {
      v45 = LocaleName.Length >> 1;
      v35 = v60;
      goto LABEL_130;
    }
LABEL_38:
    v12 = 2147353476LL;
    goto LABEL_39;
  }
  Src[0] = 0;
  v45 = 0;
LABEL_130:
  if ( v45 < *v35 && v67 )
  {
    memmove(v67, Src, 2LL * v45);
    *v60 = v45 + 1;
    *((_WORD *)v67 + v45) = 0;
    goto LABEL_34;
  }
  *v35 = v45 + 1;
  MappingSize = -1073741789;
  v47 = -1073741789;
  v12 = 2147353476LL;
  v30 = 2147353477LL;
LABEL_40:
  if ( RtlGetCurrentServiceSessionId() )
  {
    v30 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2] + 1;
    MappingSize = v47;
  }
  if ( (*(_BYTE *)v30 & 1) != 0 )
  {
    if ( RtlGetCurrentServiceSessionId() )
    {
      v12 = (__int64)&NtCurrentPeb()->SharedData->UserModeGlobalLogger[2];
      MappingSize = v47;
    }
    sub_1800E0820(&v73, *(unsigned __int8 *)v12);
  }
  return (unsigned int)MappingSize;
}
