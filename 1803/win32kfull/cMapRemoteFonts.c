/*
 * XREFs of cMapRemoteFonts @ 0x1C025B3FC
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C025B0F0 (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C025B1F0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C007DA90 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C007EF68 (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     Win32CreateSection @ 0x1C0107778 (Win32CreateSection.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall cMapRemoteFonts(unsigned __int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned int v8; // r15d
  unsigned int v9; // r12d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  char *v14; // rcx
  _DWORD *v16; // r13
  __int64 v17; // rax
  _DWORD *v18; // rcx
  _DWORD *v19; // rcx
  _DWORD *v20; // rcx
  ULONG64 v21; // rcx
  ULONG64 v22; // rdx
  _DWORD *v23; // rcx
  _DWORD *v24; // r8
  _DWORD *v25; // rcx
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // r8
  char *v29; // rbx
  int v30; // ecx
  enum _SECTION_INHERIT v31; // [rsp+30h] [rbp-B8h]
  unsigned int v32; // [rsp+38h] [rbp-B0h]
  unsigned int v33; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  int v35; // [rsp+60h] [rbp-88h]
  unsigned int v36; // [rsp+64h] [rbp-84h]
  void *v37; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 v38; // [rsp+70h] [rbp-78h] BYREF
  int v39; // [rsp+78h] [rbp-70h]
  int v40; // [rsp+7Ch] [rbp-6Ch]
  void *v41; // [rsp+80h] [rbp-68h]
  union _LARGE_INTEGER v42; // [rsp+88h] [rbp-60h] BYREF
  unsigned __int64 v43; // [rsp+90h] [rbp-58h]
  unsigned __int64 v44; // [rsp+98h] [rbp-50h]
  _DWORD *v45; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v46[8]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = a2;
  v40 = a4;
  v39 = 0;
  v7 = *a1;
  v44 = *a1;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 )
    return 0LL;
  Object = 0LL;
  v37 = 0LL;
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
      v39 = 1;
      v8 = 2;
    }
  }
  else
  {
    v8 = 1;
  }
  v9 = (4 * v8 + 15) & 0xFFFFFFF8;
  v36 = v9;
  if ( (unsigned int)v6 < v9 )
    return 0LL;
  v43 = v6;
  if ( (int)Win32CreateSection(&Object) < 0 )
    return 0LL;
  v42.QuadPart = 0LL;
  v38 = v6;
  CurrentProcess = PsGetCurrentProcess(v11, v10);
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v37, 0LL, v38, &v42, &v38, 2, 0x400000, 4) < 0 )
  {
LABEL_16:
    ObfDereferenceObject(Object);
    return 0LL;
  }
  v16 = v37;
  v41 = v37;
  v45 = v37;
  if ( (unsigned __int64)v37 > v7 )
    goto LABEL_21;
  v14 = (char *)v37 + v38;
  if ( v7 < (unsigned __int64)v37 + v38 )
  {
LABEL_22:
    v17 = PsGetCurrentProcess(v14, v13);
    MmUnmapViewOfSection(v17, v16);
    goto LABEL_16;
  }
  if ( (unsigned __int64)v37 >= v7 )
  {
LABEL_21:
    if ( (unsigned __int64)v37 < v7 + v6 )
      goto LABEL_22;
  }
  if ( a4 == 2 )
  {
    LODWORD(v6) = v6 - 16;
    v37 = (char *)v37 + 16;
    v18 = v16;
    if ( (unsigned __int64)v16 >= MmUserProbeAddress )
      v18 = (_DWORD *)MmUserProbeAddress;
    *v18 = 0;
    v19 = v16 + 1;
    if ( (unsigned __int64)(v16 + 1) >= MmUserProbeAddress )
      v19 = (_DWORD *)MmUserProbeAddress;
    *v19 = v8;
    v20 = v16 + 2;
    if ( (unsigned __int64)(v16 + 2) >= MmUserProbeAddress )
      v20 = (_DWORD *)MmUserProbeAddress;
    *v20 = v6;
    v35 = 1;
  }
  if ( (_DWORD)v6 )
  {
    v21 = v7 + (unsigned int)v6;
    if ( v21 > MmUserProbeAddress || v21 < v7 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v37, (const void *)v7, (unsigned int)v6);
  v35 = 1;
  if ( v39 )
  {
    v22 = MmUserProbeAddress;
    v24 = v45;
    v25 = v45;
    if ( (unsigned __int64)v45 >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = 0;
    v23 = v24 + 1;
    if ( (unsigned __int64)(v24 + 1) >= MmUserProbeAddress )
      v23 = (_DWORD *)MmUserProbeAddress;
    *v23 = v8;
  }
  v26 = PsGetCurrentProcess(v23, v22);
  if ( (int)MmUnmapViewOfSection(v26, v16) < 0 )
    goto LABEL_16;
  v37 = 0LL;
  v38 = 0LL;
  v42.QuadPart = 0LL;
  UmfdHostLifeTimeManager::EnsureUmfdHost();
  *(_DWORD *)(a3 + 40) |= 0x20u;
  v27 = -1073741823;
  if ( UmfdHostLifeTimeManager::EnsureUmfdHost() )
    v27 = UmfdHostLifeTimeManager::MmMapViewOfSection(Object, &v37, v28, v38, &v42, &v38, v31, v32, v33, v46);
  if ( v27 < 0 )
    goto LABEL_16;
  v29 = (char *)v37;
  *(_QWORD *)(a3 + 104) = v37;
  *(_QWORD *)(a3 + 16) = &v29[v9];
  v30 = v6 + 16;
  if ( v40 != 2 )
    v30 = v6;
  *(_DWORD *)(a3 + 24) = v30 - v9;
  *(_QWORD *)(a3 + 88) = v38;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  *(_QWORD *)(a3 + 32) = Object;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v46[0];
  *a1 = (unsigned __int64)v29;
  return v8;
}
