/*
 * XREFs of AslpFileGetVersionBlock @ 0x14072106C
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x140720710 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x1400F51C4 (RtlFileMapFree.c)
 *     RtlVerifyVersionInfo @ 0x140174760 (RtlVerifyVersionInfo.c)
 *     VerSetConditionMask @ 0x140175EA0 (VerSetConditionMask.c)
 *     RtlFileMapMapView @ 0x140178D58 (RtlFileMapMapView.c)
 *     _wcsicmp @ 0x140195A70 (_wcsicmp.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     AslAlloc @ 0x14067D940 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 *     LdrResSearchResource @ 0x14068BEF0 (LdrResSearchResource.c)
 *     AslFileMappingEnsure @ 0x140721A20 (AslFileMappingEnsure.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // eax
  __int64 v9; // r8
  void *v10; // r13
  size_t v11; // rbx
  unsigned __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rcx
  _WORD *v15; // rax
  _WORD *v16; // r15
  __int64 v17; // rcx
  ULONGLONG v18; // rax
  ULONGLONG v19; // rax
  __int64 v20; // rbx
  unsigned __int16 v22; // ax
  __int64 v23; // rcx
  __int64 v24; // rdx
  size_t Size; // [rsp+48h] [rbp-1D0h] BYREF
  _WORD *v26; // [rsp+50h] [rbp-1C8h]
  unsigned __int64 v27; // [rsp+58h] [rbp-1C0h]
  __int64 v28; // [rsp+60h] [rbp-1B8h]
  _QWORD v29[3]; // [rsp+68h] [rbp-1B0h] BYREF
  _QWORD v30[8]; // [rsp+80h] [rbp-198h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+C0h] [rbp-158h] BYREF
  void *Src; // [rsp+238h] [rbp+20h] BYREF

  Src = 0LL;
  v26 = 0LL;
  Size = 0LL;
  memset(v30, 0, 0x38uLL);
  v6 = *(_QWORD *)(a3 + 72);
  if ( !v6 )
  {
    v7 = AslFileMappingEnsure(a3);
    if ( v7 < 0 )
    {
      AslLogCallPrintf(1LL);
      goto LABEL_44;
    }
    if ( *(_DWORD *)(a3 + 64) != 6 )
    {
      v7 = -1073741687;
      goto LABEL_44;
    }
    v29[0] = 16LL;
    v29[1] = 1LL;
    v29[2] = 0LL;
    v27 = *(_QWORD *)(a3 + 32);
    v28 = *(_QWORD *)(a3 + 40);
    v8 = LdrResSearchResource(
           v27,
           v29,
           3u,
           *(_BYTE *)(a3 + 59) == 0 ? 0x200 : 0,
           (unsigned int **)&Src,
           &Size,
           0LL,
           0LL);
    v7 = v8;
    if ( v8 < 0 )
    {
      if ( (unsigned int)(v8 + 1073741687) <= 2 )
        goto LABEL_44;
      if ( v8 != -1073741701 || *(_BYTE *)(a3 + 59) || *(_DWORD *)(a3 + 84) )
        goto LABEL_43;
      memset(&VersionInfo, 0, sizeof(VersionInfo));
      VersionInfo.dwOSVersionInfoSize = 284;
      VersionInfo.dwMajorVersion = 6;
      VersionInfo.dwMinorVersion = 2;
      v18 = VerSetConditionMask(0LL, 2u, 3u);
      v19 = VerSetConditionMask(v18, 1u, 3u);
      if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v19) < 0 )
        goto LABEL_31;
      v20 = *(_QWORD *)(a3 + 8);
      memset(v30, 0, 0x38uLL);
      LOBYTE(v30[6]) = 0;
      v30[0] = v20;
      v7 = RtlFileMapMapView((__int64)v30, 1);
      if ( v7 < 0 )
        goto LABEL_43;
      AslLogCallPrintf(3LL);
      v27 = v30[3];
      v7 = LdrResSearchResource(v30[3], v29, 3u, 0, (unsigned int **)&Src, &Size, 0LL, 0LL);
      AslLogCallPrintf(2LL);
      if ( v7 < 0 )
        goto LABEL_43;
      v9 = v30[4];
    }
    else
    {
      v9 = v28;
    }
    v10 = Src;
    if ( Src )
    {
      v11 = Size;
      v12 = (unsigned __int64)Src + Size;
      if ( (char *)Src + Size < Src )
      {
        v12 = -1LL;
        v13 = -1073741675;
      }
      else
      {
        v13 = 0;
      }
      if ( v13 >= 0
        && (unsigned __int64)Src >= v27
        && v12 <= v9 + v27
        && (*(_BYTE *)(a3 + 59) || v30[1] || v12 <= *(_QWORD *)(a3 + 24) + v27) )
      {
        if ( Size < 0x26 || wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
        {
          v7 = -1073741595;
        }
        else
        {
          v15 = AslAlloc(v14, v11);
          v16 = v15;
          v26 = v15;
          if ( v15 )
          {
            memmove(v15, v10, v11);
            if ( v11 < (unsigned __int16)*v16 )
              *v16 = v11;
            *(_QWORD *)(a3 + 72) = v16;
            v26 = 0LL;
            v17 = *(_QWORD *)(a3 + 72);
            if ( *(_WORD *)(v17 + 2) < 0x34u )
              *a2 = 0LL;
            else
              *a2 = v17 + 40;
            *a1 = v17;
            v7 = 0;
            goto LABEL_44;
          }
          v7 = -1073741801;
        }
      }
      else
      {
        v7 = -1073741687;
      }
LABEL_43:
      AslLogCallPrintf(1LL);
      goto LABEL_44;
    }
    AslLogCallPrintf(1LL);
LABEL_31:
    v7 = -1073741687;
    goto LABEL_44;
  }
  v22 = *(_WORD *)(v6 + 2);
  v23 = v6 + 40;
  v24 = 0LL;
  if ( v22 >= 0x34u )
    v24 = v23;
  *a2 = v24;
  *a1 = *(_QWORD *)(a3 + 72);
  v7 = 0;
LABEL_44:
  RtlFileMapFree(v30);
  return (unsigned int)v7;
}
