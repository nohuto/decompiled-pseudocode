/*
 * XREFs of ExpParseSignatureName @ 0x1408D2698
 * Callers:
 *     ExpConvertSignatureName @ 0x1408D10A4 (ExpConvertSignatureName.c)
 * Callees:
 *     wcsncpy_s @ 0x14019BFB0 (wcsncpy_s.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlGUIDFromString @ 0x14059B5A0 (RtlGUIDFromString.c)
 *     ExpTranslateHexStringToGUID @ 0x1408D3E64 (ExpTranslateHexStringToGUID.c)
 *     ExpTranslateHexStringToULONG @ 0x1408D3FEC (ExpTranslateHexStringToULONG.c)
 *     ExpTranslateHexStringToULONGLONG @ 0x1408D4090 (ExpTranslateHexStringToULONGLONG.c)
 */

NTSTATUS __fastcall ExpParseSignatureName(
        wchar_t *Src,
        unsigned int a2,
        GUID *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char *a7,
        char *a8)
{
  wchar_t v8; // r10
  bool v12; // r8
  char v13; // dl
  char v14; // r12
  __int64 v15; // rdi
  wchar_t v16; // cx
  char v17; // r15
  NTSTATUS result; // eax
  wchar_t *PoolWithTag; // rax
  wchar_t *v20; // r14
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rdi
  wchar_t *v24; // r14
  int v25; // eax
  const wchar_t *v26; // r8
  unsigned int v27; // ecx
  __int64 v28; // rbx
  __int64 v29; // rdi
  int v30; // edx
  const wchar_t *v31; // r8
  unsigned int v32; // ecx
  __int64 v33; // rbx
  int v34; // eax
  int v35; // r9d
  const wchar_t *v36; // r8
  unsigned int v37; // ecx
  __int64 v38; // rbx
  UNICODE_STRING GuidString; // [rsp+20h] [rbp-48h] BYREF

  v8 = *Src;
  v12 = *Src == 123;
  v13 = 0;
  v14 = 0;
  LODWORD(v15) = 0;
  if ( a2 )
  {
    do
    {
      v16 = Src[(unsigned int)v15];
      if ( v16 == 41 )
        break;
      if ( v8 == 123 )
      {
        if ( v16 == 125 )
        {
          v13 = 1;
          break;
        }
      }
      else if ( v16 == 45 )
      {
        break;
      }
      LODWORD(v15) = v15 + 1;
    }
    while ( (unsigned int)v15 < a2 );
  }
  if ( v8 == 123 && !v13 )
    return -1073741811;
  v17 = v12;
  if ( (unsigned int)v15 > 8 )
    v17 = 1;
  if ( v17 != 1 || v13 != 1 )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 2LL * (unsigned int)(v15 + 1), 0x72766E45u);
    v20 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    wcsncpy_s(PoolWithTag, (unsigned int)(v15 + 1), Src, (unsigned int)v15);
    v14 = 0;
    v20[(unsigned int)v15] = 0;
    if ( v17 )
      v21 = ExpTranslateHexStringToGUID(v20, a3);
    else
      v21 = ExpTranslateHexStringToULONG(v20, a3);
    v22 = v21;
    ExFreePoolWithTag(v20, 0);
    if ( v22 < 0 )
      return v22;
LABEL_23:
    if ( (unsigned int)v15 < a2 )
    {
      if ( Src[(unsigned int)v15] != 45 )
      {
LABEL_45:
        if ( (unsigned int)v15 < a2 && Src[(unsigned int)v15] == 41 && (v17 || v14) )
        {
          *a7 = v17;
          *a8 = v14;
          return 0;
        }
        return -1073741811;
      }
      v23 = (unsigned int)(v15 + 1);
      v14 = 1;
      if ( (unsigned int)v23 < a2 )
      {
        v24 = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x22uLL, 0x72766E45u);
        if ( v24 )
        {
          v25 = v23;
          v26 = &Src[v23];
          do
          {
            if ( Src[v23] == 45 )
              break;
            v23 = (unsigned int)(v23 + 1);
          }
          while ( (unsigned int)v23 < a2 );
          v27 = v23 - v25;
          if ( (unsigned int)(v23 - v25 - 1) > 7 )
            goto LABEL_50;
          v28 = v27;
          wcsncpy_s(v24, 0x11uLL, v26, v27);
          v24[v28] = 0;
          v22 = ExpTranslateHexStringToULONG(v24, a4);
          if ( v22 < 0 )
          {
LABEL_51:
            ExFreePoolWithTag(v24, 0);
            return v22;
          }
          v29 = (unsigned int)(v23 + 1);
          if ( (unsigned int)v29 >= a2 )
            goto LABEL_50;
          v30 = v29;
          v31 = &Src[v29];
          do
          {
            if ( Src[v29] == 45 )
              break;
            v29 = (unsigned int)(v29 + 1);
          }
          while ( (unsigned int)v29 < a2 );
          v32 = v29 - v30;
          if ( (unsigned int)(v29 - v30 - 1) > 0xF )
            goto LABEL_50;
          v33 = v32;
          wcsncpy_s(v24, 0x11uLL, v31, v32);
          v24[v33] = 0;
          v34 = ExpTranslateHexStringToULONGLONG(v24, a5);
          if ( v34 < 0 )
          {
            v22 = v34;
            goto LABEL_51;
          }
          v15 = (unsigned int)(v29 + 1);
          if ( (unsigned int)v15 >= a2 )
            goto LABEL_50;
          v35 = v15;
          v36 = &Src[v15];
          do
          {
            if ( Src[v15] == 41 )
              break;
            v15 = (unsigned int)(v15 + 1);
          }
          while ( (unsigned int)v15 < a2 );
          v37 = v15 - v35;
          if ( (unsigned int)(v15 - v35 - 1) > 0xF )
          {
LABEL_50:
            v22 = -1073741811;
            goto LABEL_51;
          }
          v38 = v37;
          wcsncpy_s(v24, 0x11uLL, v36, v37);
          v24[v38] = 0;
          v22 = ExpTranslateHexStringToULONGLONG(v24, a6);
          ExFreePoolWithTag(v24, 0);
          if ( v22 < 0 )
            return v22;
          goto LABEL_45;
        }
        return -1073741670;
      }
    }
    return -1073741811;
  }
  LODWORD(v15) = v15 + 1;
  GuidString.Buffer = Src;
  GuidString.Length = 2 * v15;
  GuidString.MaximumLength = 2 * v15;
  result = RtlGUIDFromString(&GuidString, a3);
  if ( result >= 0 )
    goto LABEL_23;
  return result;
}
