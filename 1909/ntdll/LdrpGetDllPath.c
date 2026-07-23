/*
 * XREFs of LdrpGetDllPath @ 0x180031F48
 * Callers:
 *     LdrpComputeLazyDllPath @ 0x18002E8CC (LdrpComputeLazyDllPath.c)
 *     LdrGetDllPath @ 0x180031F20 (LdrGetDllPath.c)
 * Callees:
 *     RtlDetermineDosPathNameType_U @ 0x18002F020 (RtlDetermineDosPathNameType_U.c)
 *     LdrpLogDllStateEx2 @ 0x180032198 (LdrpLogDllStateEx2.c)
 *     RtlpGetCachedPath @ 0x1800321F8 (RtlpGetCachedPath.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x18007DB34 (LdrpLogRelativePathWithAlteredSearchError.c)
 */

__int64 __fastcall LdrpGetDllPath(LPCWSTR pwsz, int a2, _QWORD *a3, _QWORD *a4, _DWORD *a5, _OWORD *a6, _QWORD *a7)
{
  bool v9; // r12
  bool v10; // di
  unsigned int v11; // ebx
  char v12; // r14
  LPCWSTR v13; // r13
  __int64 CachedPath; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rdx
  RTL_PATH_TYPE v18; // eax
  __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax

  v9 = (a2 & 0x2000) != 0;
  v10 = 0;
  v11 = a2 & 0xFFFFDFFF;
  if ( (a2 & 8) != 0 )
  {
    if ( v11 != 8 )
      return 3221225485LL;
    v11 = 0;
    v12 = 1;
  }
  else
  {
    v12 = 0;
    if ( v11 )
      goto LABEL_4;
  }
  if ( LdrpDefaultDllDirectories )
  {
    v9 = (a2 & 0x2000) != 0 || (LdrpDefaultDllDirectories & 0x2000) != 0;
    v11 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_4:
  v13 = 0LL;
  if ( (v11 & 0x100) != 0 || v12 )
  {
    v18 = RtlDetermineDosPathNameType_U(pwsz);
    if ( (unsigned int)(v18 - 1) > 1 )
      v10 = v18 != RtlPathTypeLocalDevice
         || pwsz[2] != 63
         || RtlDetermineDosPathNameType_U(pwsz + 4) != RtlPathTypeDriveAbsolute;
    v13 = pwsz;
    if ( v10 )
    {
      if ( v12 )
      {
        LdrpLogRelativePathWithAlteredSearchError(pwsz);
        if ( (LdrpPolicyBits & 0x40) != 0 )
        {
          v12 = 0;
          v10 = (v11 & 0x100) != 0;
        }
      }
      if ( v10 )
      {
        if ( v11 )
          return 3221225485LL;
        goto LABEL_7;
      }
    }
  }
  if ( !v11 )
  {
LABEL_7:
    CachedPath = RtlpGetCachedPath(&RtlpDllSearchPath, RtlpComputeDllPath, v13, 0LL);
    v15 = 0LL;
    goto LABEL_8;
  }
  if ( (v11 & 0x1000) != 0 )
  {
    v11 |= 0xA00u;
    if ( (LdrpPolicyBits & 4) != 0 )
      v11 |= 0x400u;
  }
  v20 = v11;
  LODWORD(v20) = v11 | 0x100;
  if ( !v12 )
    v20 = v11;
  v21 = RtlpGetCachedPath(&RtlpDllSearchPathWithOptions, RtlpComputeDllPathWithOptions, v20, v13);
  CachedPath = v21;
  if ( !v21 )
  {
    v16 = a7;
    goto LABEL_47;
  }
  v15 = *(_QWORD *)(v21 + 88);
LABEL_8:
  v16 = a7;
  *a7 = v15;
  if ( CachedPath )
  {
    if ( a6 )
    {
      *a6 = *(_OWORD *)CachedPath;
      a6[1] = *(_OWORD *)(CachedPath + 16);
      a6[2] = *(_OWORD *)(CachedPath + 32);
      a6[3] = *(_OWORD *)(CachedPath + 48);
      a6[4] = *(_OWORD *)(CachedPath + 64);
    }
    *a3 = CachedPath + 112;
    if ( a4 )
    {
      if ( v9 )
        v19 = *(_QWORD *)(CachedPath + 104);
      else
        v19 = 0LL;
      *a4 = v19;
    }
    if ( a5 )
      *a5 = *(_DWORD *)(CachedPath + 96);
    LdrpLogDllStateEx2(CachedPath, pwsz, *a3, 5313LL);
    return 0LL;
  }
LABEL_47:
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  *v16 = 0LL;
  return 3221225495LL;
}
