/*
 * XREFs of LdrResSearchResource @ 0x14068BEF0
 * Callers:
 *     PspLocateInPEManifest @ 0x14068C3A8 (PspLocateInPEManifest.c)
 *     LdrResFindResource @ 0x14071D1F0 (LdrResFindResource.c)
 *     LdrResFindResourceDirectory @ 0x14071F480 (LdrResFindResourceDirectory.c)
 *     AslpFileGetVersionBlock @ 0x14072106C (AslpFileGetVersionBlock.c)
 *     SeRegisterElamCertResources @ 0x14073D784 (SeRegisterElamCertResources.c)
 *     RtlLoadString @ 0x140892DF0 (RtlLoadString.c)
 *     KeHwPolicyLocateResource @ 0x1409D4CB0 (KeHwPolicyLocateResource.c)
 * Callees:
 *     LdrpResSearchResourceMappedFile @ 0x1400FDA8C (LdrpResSearchResourceMappedFile.c)
 *     DownLevelLangIDToLanguageName @ 0x140161130 (DownLevelLangIDToLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x140183040 (DownLevelLanguageNameToLangID.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     LdrpResGetMappingSize @ 0x14068C22C (LdrpResGetMappingSize.c)
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
  unsigned int v8; // r15d
  void *v10; // rsi
  int v12; // ecx
  unsigned int v13; // ebx
  __int64 result; // rax
  bool v15; // zf
  int v16; // eax
  int v17; // eax
  ULONGLONG v18; // [rsp+58h] [rbp-80h] BYREF
  int v19; // [rsp+60h] [rbp-78h]
  __int64 v20; // [rsp+68h] [rbp-70h]
  unsigned int **v21; // [rsp+70h] [rbp-68h]
  _BYTE v22[16]; // [rsp+78h] [rbp-60h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp-50h]

  v8 = a3;
  v21 = a5;
  v20 = a8;
  v10 = 0LL;
  if ( !a1 || !a2 || a7 && !a8 )
    return (unsigned int)-1073741811;
  if ( (a4 & 0xC00) != 0 )
    return (unsigned int)-1073741582;
  v12 = a4 | 0x100;
  if ( (a4 & 0xF00) != 0 )
    v12 = a4;
  v13 = v12 | 0x1000;
  if ( (v12 & 0x2000) != 0 )
    v13 = v12;
  if ( (v13 & 0xFFF00000) != 0 )
    return (unsigned int)-1073741582;
  if ( a3 < 3 && (v13 & 2) == 0 || a3 > 4 )
    return (unsigned int)-1073741583;
  if ( (v13 & 0x41) != 0 )
  {
    if ( a3 != 4 )
      return 3221225713LL;
  }
  else if ( a3 != 4 )
  {
    goto LABEL_22;
  }
  if ( (v13 & 0x41) == 0 )
    return 3221225714LL;
LABEL_22:
  if ( (v13 & 0x100) != 0 )
  {
    v15 = (v13 & 0xE00) == 0;
    goto LABEL_24;
  }
  v16 = v13 & 0xC00;
  if ( (v13 & 0x200) != 0 )
  {
    v15 = v16 == 0;
LABEL_24:
    if ( !v15 )
      return (unsigned int)-1073741582;
    goto LABEL_29;
  }
  if ( v16 == 3072 )
    return (unsigned int)-1073741582;
LABEL_29:
  if ( (v13 & 0x8000) != 0 && (~(_WORD)v13 & 0x810) != 0 || (v13 & 0x3000) == 0x3000 || (v13 & 0x18) == 0x18 )
    return (unsigned int)-1073741582;
  v18 = 0LL;
  if ( (v13 & 0x20000) != 0 )
  {
    if ( (v13 & 0x400) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v18 = *a6;
  }
  if ( (v13 & 0x80000) != 0 )
  {
    if ( (v13 & 0x300) == 0 || !a6 || !*a6 )
      return (unsigned int)-1073741811;
    v18 = *a6;
  }
  memmove(v22, a2, 8LL * a3);
  if ( v8 <= 3 )
  {
    if ( v8 != 3 )
      goto LABEL_57;
  }
  else
  {
    v8 = 3;
  }
  if ( v23 >= 0x10000 )
  {
    if ( *(_WORD *)v23 )
      v17 = (unsigned __int16)DownLevelLanguageNameToLangID((const void *)v23, 2);
    else
      v17 = 0;
    v19 = v17;
    v23 = (unsigned __int16)v17;
    goto LABEL_57;
  }
  if ( v23 && ((v23 & 0x3FF) == 0 || v23 == 127 || !(unsigned int)DownLevelLangIDToLanguageName(v23, 0LL, 0, 2)) )
    return (unsigned int)-1073741811;
LABEL_57:
  if ( (v13 & 0x300) == 0 )
    return (unsigned int)LdrpResSearchResourceMappedFile(v10, v18, v13, (__int64)v22, v8, v21, a6, a7, v20);
  v10 = (void *)a1;
  if ( (v13 & 0x200) != 0 )
  {
    v10 = (void *)(a1 | 1);
    if ( (a1 & 1) != 0 )
      v10 = (void *)a1;
    if ( (v13 & 0x1000) != 0 && !a1 )
      return 3221225485LL;
  }
  result = LdrpResGetMappingSize(v10, &v18, v13);
  if ( (int)result >= 0 || (v13 & 0x1000) == 0 )
    return (unsigned int)LdrpResSearchResourceMappedFile(v10, v18, v13, (__int64)v22, v8, v21, a6, a7, v20);
  return result;
}
