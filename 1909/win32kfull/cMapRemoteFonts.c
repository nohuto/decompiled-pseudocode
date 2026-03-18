/*
 * XREFs of cMapRemoteFonts @ 0x1C0286E5C
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C0286AE8 (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C0286C00 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     Win32CreateSection @ 0x1C010BBE4 (Win32CreateSection.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C01219EC (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C0122A24 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall cMapRemoteFonts(unsigned __int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned int v8; // r14d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 CurrentProcess; // rax
  __int64 v15; // rdx
  char *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _DWORD *v20; // r15
  __int64 v21; // rax
  _DWORD *v22; // rcx
  _DWORD *v23; // rcx
  _DWORD *v24; // rcx
  ULONG64 v25; // rcx
  ULONG64 v26; // rdx
  _DWORD *v27; // rcx
  _DWORD *v28; // r8
  __int64 v29; // r9
  _DWORD *v30; // rcx
  __int64 v31; // rax
  int v32; // ebx
  __int64 v33; // r8
  char *v34; // rbx
  int v35; // ecx
  enum _SECTION_INHERIT v36; // [rsp+30h] [rbp-B8h]
  unsigned int v37; // [rsp+38h] [rbp-B0h]
  unsigned int v38; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  int v40; // [rsp+60h] [rbp-88h]
  unsigned int v41; // [rsp+64h] [rbp-84h]
  void *v42; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 v43; // [rsp+70h] [rbp-78h] BYREF
  int v44; // [rsp+78h] [rbp-70h]
  int v45; // [rsp+7Ch] [rbp-6Ch]
  void *v46; // [rsp+80h] [rbp-68h]
  union _LARGE_INTEGER v47; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 v48; // [rsp+90h] [rbp-58h]
  unsigned __int64 v49; // [rsp+98h] [rbp-50h]
  _DWORD *v50; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v51[8]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = a2;
  v45 = a4;
  v48 = 0LL;
  v47.QuadPart = 0LL;
  v44 = 0;
  v7 = *a1;
  v49 = *a1;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 )
    return 0LL;
  Object = 0LL;
  v42 = 0LL;
  if ( !a3 )
    return 0LL;
  memset((void *)a3, 0, 0x78uLL);
  if ( a4 == 1 )
  {
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v8 = *(_DWORD *)(v7 + 4);
    if ( v8 > 3 || (unsigned int)v6 > 0x10000000 || v7 < 0x10000 || v7 > (unsigned __int64)MmHighestUserAddress )
      return 0LL;
    if ( !v8 )
    {
      v44 = 1;
      v8 = 2;
    }
  }
  else
  {
    v8 = 1;
  }
  v9 = (4 * v8 + 15) & 0xFFFFFFF8;
  v41 = v9;
  if ( (unsigned int)v6 < v9 )
    return 0LL;
  v48 = v6;
  if ( (int)Win32CreateSection(&Object) < 0 )
    return 0LL;
  v43 = v6;
  CurrentProcess = PsGetCurrentProcess(v11, v10, v12, v13);
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v42, 0LL, v43, &v47, &v43, 2, 0x400000, 4) < 0 )
  {
LABEL_16:
    ObfDereferenceObject(Object);
    return 0LL;
  }
  v20 = v42;
  v46 = v42;
  v50 = v42;
  if ( (unsigned __int64)v42 > v7 )
    goto LABEL_21;
  v16 = (char *)v42 + v43;
  if ( v7 < (unsigned __int64)v42 + v43 )
  {
LABEL_22:
    v21 = PsGetCurrentProcess(v16, v15, v17, v18);
    MmUnmapViewOfSection(v21, v20);
    goto LABEL_16;
  }
  if ( (unsigned __int64)v42 >= v7 )
  {
LABEL_21:
    if ( (unsigned __int64)v42 < v7 + v6 )
      goto LABEL_22;
  }
  if ( a4 == 2 )
  {
    LODWORD(v6) = v6 - 16;
    v42 = (char *)v42 + 16;
    v22 = v20;
    if ( (unsigned __int64)v20 >= MmUserProbeAddress )
      v22 = (_DWORD *)MmUserProbeAddress;
    *v22 = 0;
    v23 = v20 + 1;
    if ( (unsigned __int64)(v20 + 1) >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = v8;
    v24 = v20 + 2;
    if ( (unsigned __int64)(v20 + 2) >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = v6;
    v40 = 1;
  }
  if ( (_DWORD)v6 )
  {
    v25 = v7 + (unsigned int)v6;
    if ( v25 > MmUserProbeAddress || v25 < v7 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v42, (const void *)v7, (unsigned int)v6);
  v40 = 1;
  if ( v44 )
  {
    v26 = MmUserProbeAddress;
    v28 = v50;
    v30 = v50;
    if ( (unsigned __int64)v50 >= MmUserProbeAddress )
      v30 = (_DWORD *)MmUserProbeAddress;
    *v30 = 0;
    v27 = v28 + 1;
    if ( (unsigned __int64)(v28 + 1) >= MmUserProbeAddress )
      v27 = (_DWORD *)MmUserProbeAddress;
    *v27 = v8;
  }
  v31 = PsGetCurrentProcess(v27, v26, v28, v29);
  if ( (int)MmUnmapViewOfSection(v31, v20) < 0 )
    goto LABEL_16;
  v42 = 0LL;
  v43 = 0LL;
  v47.QuadPart = 0LL;
  v32 = -1073741823;
  if ( UmfdHostLifeTimeManager::EnsureUmfdHost() )
    v32 = UmfdHostLifeTimeManager::MmMapViewOfSection(Object, &v42, v33, v43, &v47, &v43, v36, v37, v38, v51);
  if ( v32 < 0 )
    goto LABEL_16;
  v34 = (char *)v42;
  *(_QWORD *)(a3 + 104) = v42;
  *(_QWORD *)(a3 + 16) = &v34[v9];
  v35 = v6 + 16;
  if ( v45 != 2 )
    v35 = v6;
  *(_DWORD *)(a3 + 24) = v35 - v9;
  *(_QWORD *)(a3 + 88) = v43;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  *(_QWORD *)(a3 + 32) = Object;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v51[0];
  *a1 = (unsigned __int64)v34;
  return v8;
}
