/*
 * XREFs of LdrResSearchResource @ 0x1406764C0
 * Callers:
 *     PspLocateInPEManifest @ 0x1406763BC (PspLocateInPEManifest.c)
 *     LdrResFindResource @ 0x140746C60 (LdrResFindResource.c)
 *     LdrResFindResourceDirectory @ 0x140748BA0 (LdrResFindResourceDirectory.c)
 *     SeRegisterElamCertResources @ 0x140769138 (SeRegisterElamCertResources.c)
 *     RtlLoadString @ 0x1408CF720 (RtlLoadString.c)
 *     AslpFileGetVersionBlock @ 0x14092A0CC (AslpFileGetVersionBlock.c)
 *     KeHwPolicyLocateResource @ 0x140A18240 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DFAA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpResSearchResourceMappedFile @ 0x1400E00CC (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x140177FB4 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x14018F064 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     LdrpResGetMappingSize @ 0x140676720 (LdrpResGetMappingSize.c)
 */

__int64 __fastcall LdrResSearchResource(
        unsigned __int64 a1,
        const void *a2,
        unsigned int a3,
        int a4,
        unsigned int **a5,
        ULONGLONG *a6,
        void *a7,
        __int64 a8)
{
  unsigned int v8; // esi
  void *v10; // r14
  int v11; // ecx
  unsigned int v12; // edi
  bool v13; // zf
  unsigned int v14; // ebx
  __int64 result; // rax
  __int64 v16; // r15
  unsigned __int16 v17; // ax
  ULONGLONG v18; // [rsp+50h] [rbp-88h] BYREF
  PVOID ResourceDllBase; // [rsp+58h] [rbp-80h] BYREF
  int v20; // [rsp+60h] [rbp-78h]
  unsigned int **v21; // [rsp+68h] [rbp-70h]
  __int64 v22; // [rsp+70h] [rbp-68h]
  _QWORD v23[2]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v24; // [rsp+88h] [rbp-50h]

  v8 = a3;
  v21 = a5;
  v22 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v11 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v11 = a4;
  v12 = v11 | 0x1000;
  if ( (v11 & 0x2000) != 0 )
    v12 = v11;
  if ( (v12 & 0xFFF80000) != 0 )
    return (unsigned int)-1073741582;
  if ( a3 < 3 && (v12 & 2) == 0 || a3 > 4 )
    return (unsigned int)-1073741583;
  if ( (v12 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_14;
  }
  if ( (v12 & 0x41) == 0 )
    return 3221225714LL;
LABEL_14:
  if ( (v12 & 0x100) != 0 )
  {
    v13 = (v12 & 0xE00) == 0;
    goto LABEL_16;
  }
  if ( (v12 & 0x200) != 0 )
  {
    v13 = (v12 & 0xC00) == 0;
LABEL_16:
    if ( v13 )
      goto LABEL_17;
    return (unsigned int)-1073741582;
  }
  if ( (v12 & 0xC00) == 0xC00 )
    return (unsigned int)-1073741582;
LABEL_17:
  if ( (v12 & 0x8000) != 0 && (~(_WORD)v12 & 0x810) != 0 || (v12 & 0x3000) == 0x3000 || (v12 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v18 = 0LL;
  if ( (v12 & 0x20000) != 0 )
  {
    if ( (v12 & 0x400) == 0 || !a6 || !*a6 )
    {
      v14 = -1073741811;
      v20 = -1073741811;
      return v14;
    }
    v18 = *a6;
  }
  memmove(v23, a2, 8LL * a3);
  if ( v8 > 3 )
  {
    v8 = 3;
  }
  else if ( v8 != 3 )
  {
    goto LABEL_28;
  }
  if ( v24 >= 0x10000 )
  {
    if ( *(_WORD *)v24 )
    {
      v17 = DownLevelLanguageNameToLangID((const void *)v24, 2);
      LODWORD(ResourceDllBase) = v17;
    }
    else
    {
      v17 = 0;
      LODWORD(ResourceDllBase) = 0;
    }
    v24 = v17;
  }
  else if ( v24 && ((v24 & 0x3FF) == 0 || v24 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v24, 0LL, 0, 2)) )
  {
    return (unsigned int)-1073741811;
  }
LABEL_28:
  if ( (v12 & 0x300) == 0 )
    goto LABEL_31;
  v10 = (void *)a1;
  if ( (v12 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
  }
  result = LdrpResGetMappingSize(v10, &v18, v12);
  if ( (int)result >= 0 || (v12 & 0x1000) == 0 )
  {
LABEL_31:
    v16 = v22;
    v14 = LdrpResSearchResourceMappedFile(v10, v18, v12, (__int64)v23, v8, v21, a6, a7, v22);
    if ( v14 == -1073741686
      && ((v23[0] - 16LL) & 0xFFFFFFFFFFFFFFF7uLL) != 0
      && LdrLoadAlternateResourceModuleEx(v10, 0xF2EEu, &ResourceDllBase, 0LL, 0x1000000u) >= 0 )
    {
      v18 = 0LL;
      if ( (int)LdrpResGetMappingSize(ResourceDllBase, &v18, v12) >= 0 )
        return (unsigned int)LdrpResSearchResourceMappedFile(
                               ResourceDllBase,
                               v18,
                               v12 | 0x1000000,
                               (__int64)v23,
                               v8,
                               v21,
                               a6,
                               a7,
                               v16);
    }
    return v14;
  }
  return result;
}
