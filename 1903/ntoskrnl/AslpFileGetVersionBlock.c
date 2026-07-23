/*
 * XREFs of AslpFileGetVersionBlock @ 0x14092A66C
 * Callers:
 *     AslpFileGetVersionAttributes @ 0x14092A5B8 (AslpFileGetVersionAttributes.c)
 * Callees:
 *     RtlFileMapFree @ 0x140153E28 (RtlFileMapFree.c)
 *     RtlVerifyVersionInfo @ 0x14017D870 (RtlVerifyVersionInfo.c)
 *     VerSetConditionMask @ 0x14017F3E0 (VerSetConditionMask.c)
 *     _wcsicmp @ 0x1401A0100 (_wcsicmp.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     RtlFileMapMapView @ 0x140345920 (RtlFileMapMapView.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     LdrResSearchResource @ 0x14067B1D0 (LdrResSearchResource.c)
 *     AslLogCallPrintf @ 0x140708C54 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14070CCDC (AslAlloc.c)
 *     AslFileMappingEnsure @ 0x1409266A8 (AslFileMappingEnsure.c)
 */

__int64 __fastcall AslpFileGetVersionBlock(_QWORD *a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // r8
  int v7; // ebx
  int v8; // eax
  ULONGLONG v9; // rax
  ULONGLONG v10; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  void *v13; // r13
  size_t v14; // rbx
  unsigned __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  _WORD *v18; // rax
  _WORD *v19; // r12
  __int64 v20; // rcx
  size_t Size; // [rsp+48h] [rbp-1D0h] BYREF
  _WORD *v23; // [rsp+50h] [rbp-1C8h]
  unsigned __int64 v24; // [rsp+58h] [rbp-1C0h]
  __int64 v25; // [rsp+60h] [rbp-1B8h]
  _QWORD v26[3]; // [rsp+68h] [rbp-1B0h] BYREF
  _QWORD v27[8]; // [rsp+80h] [rbp-198h] BYREF
  _OSVERSIONINFOEXW VersionInfo; // [rsp+C0h] [rbp-158h] BYREF
  void *Src; // [rsp+238h] [rbp+20h] BYREF

  Src = 0LL;
  v23 = 0LL;
  Size = 0LL;
  memset(v27, 0, 0x38uLL);
  v6 = *(_QWORD *)(a3 + 72);
  if ( v6 )
  {
    if ( *(_WORD *)(v6 + 2) >= 0x34u )
      *a2 = v6 + 40;
    else
      *a2 = 0LL;
    *a1 = v6;
    v7 = 0;
    goto LABEL_47;
  }
  v7 = AslFileMappingEnsure(a3);
  if ( v7 < 0 )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_47;
  }
  if ( *(_DWORD *)(a3 + 64) != 6 )
  {
    v7 = -1073741687;
    goto LABEL_47;
  }
  v26[0] = 16LL;
  v26[1] = 1LL;
  v26[2] = 0LL;
  v24 = *(_QWORD *)(a3 + 32);
  v25 = *(_QWORD *)(a3 + 40);
  v8 = LdrResSearchResource(v24, v26, 3u, *(_BYTE *)(a3 + 59) == 0 ? 0x200 : 0, &Src, (__int64 *)&Size, 0LL, 0LL);
  v7 = v8;
  if ( v8 >= 0 )
  {
    v12 = v25;
  }
  else
  {
    if ( (unsigned int)(v8 + 1073741687) <= 2 )
      goto LABEL_47;
    if ( v8 != -1073741701 || *(_BYTE *)(a3 + 59) || *(_DWORD *)(a3 + 84) )
      goto LABEL_46;
    memset(&VersionInfo, 0, sizeof(VersionInfo));
    VersionInfo.dwOSVersionInfoSize = 284;
    VersionInfo.dwMajorVersion = 6;
    VersionInfo.dwMinorVersion = 2;
    v9 = VerSetConditionMask(0LL, 2u, 3u);
    v10 = VerSetConditionMask(v9, 1u, 3u);
    if ( RtlVerifyVersionInfo(&VersionInfo, 3u, v10) < 0 )
    {
LABEL_16:
      v7 = -1073741687;
      goto LABEL_47;
    }
    v11 = *(_QWORD *)(a3 + 8);
    LOBYTE(v27[6]) = 0;
    v27[0] = v11;
    v7 = RtlFileMapMapView((__int64)v27, 1);
    if ( v7 < 0
      || (AslLogCallPrintf(3LL),
          v24 = v27[3],
          v7 = LdrResSearchResource(v27[3], v26, 3u, 0, &Src, (__int64 *)&Size, 0LL, 0LL),
          AslLogCallPrintf(2LL),
          v7 < 0) )
    {
LABEL_46:
      AslLogCallPrintf(1LL);
      goto LABEL_47;
    }
    v12 = v27[4];
  }
  v13 = Src;
  if ( !Src )
  {
    AslLogCallPrintf(1LL);
    goto LABEL_16;
  }
  v14 = Size;
  v15 = (unsigned __int64)Src + Size;
  if ( (char *)Src + Size < Src )
  {
    v15 = -1LL;
    v16 = -1073741675;
  }
  else
  {
    v16 = 0;
  }
  if ( v16 < 0
    || (unsigned __int64)Src < v24
    || v15 > v12 + v24
    || !*(_BYTE *)(a3 + 59) && !v27[1] && v15 > *(_QWORD *)(a3 + 24) + v24 )
  {
    v7 = -1073741687;
    goto LABEL_46;
  }
  if ( Size < 0x26 || wcsicmp((const wchar_t *)Src + 3, L"VS_VERSION_INFO") )
  {
    v7 = -1073741595;
    goto LABEL_46;
  }
  v18 = AslAlloc(v17, v14);
  v19 = v18;
  v23 = v18;
  if ( !v18 )
  {
    v7 = -1073741801;
    goto LABEL_46;
  }
  memmove(v18, v13, v14);
  if ( v14 < (unsigned __int16)*v19 )
    *v19 = v14;
  *(_QWORD *)(a3 + 72) = v19;
  v23 = 0LL;
  v20 = *(_QWORD *)(a3 + 72);
  if ( *(_WORD *)(v20 + 2) >= 0x34u )
    *a2 = v20 + 40;
  else
    *a2 = 0LL;
  *a1 = v20;
  v7 = 0;
LABEL_47:
  RtlFileMapFree(v27);
  return (unsigned int)v7;
}
