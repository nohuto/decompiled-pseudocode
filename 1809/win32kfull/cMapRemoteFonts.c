/*
 * XREFs of cMapRemoteFonts @ 0x1C026EBE8
 * Callers:
 *     GreAddFontMemResourceEx @ 0x1C026E8CC (GreAddFontMemResourceEx.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C026E9D0 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTION_INHERIT@@KK4@Z @ 0x1C008CB9C (-MmMapViewOfSection@UmfdHostLifeTimeManager@@SAJPEAXPEAPEAX_K2PEAT_LARGE_INTEGER@@PEA_KW4_SECTIO.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C008FE00 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     Win32CreateSection @ 0x1C0127B8C (Win32CreateSection.c)
 *     memmove @ 0x1C0163300 (memmove.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 __fastcall cMapRemoteFonts(unsigned __int64 *a1, unsigned int a2, __int64 a3, int a4)
{
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // r14d
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 CurrentProcess; // rax
  __int64 v17; // rdx
  char *v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v22; // r15
  __int64 v23; // rax
  _DWORD *v24; // rcx
  _DWORD *v25; // rcx
  _DWORD *v26; // rcx
  ULONG64 v27; // rcx
  ULONG64 v28; // rdx
  _DWORD *v29; // rcx
  _DWORD *v30; // r8
  __int64 v31; // r9
  _DWORD *v32; // rcx
  __int64 v33; // rax
  int v34; // ebx
  __int64 v35; // r8
  char *v36; // rbx
  int v37; // ecx
  union _LARGE_INTEGER *v38; // [rsp+20h] [rbp-C8h]
  enum _SECTION_INHERIT v39; // [rsp+30h] [rbp-B8h]
  unsigned int v40; // [rsp+38h] [rbp-B0h]
  unsigned int v41; // [rsp+40h] [rbp-A8h]
  PVOID Object; // [rsp+58h] [rbp-90h] BYREF
  int v43; // [rsp+60h] [rbp-88h]
  unsigned int v44; // [rsp+64h] [rbp-84h]
  void *v45; // [rsp+68h] [rbp-80h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-78h] BYREF
  int v47; // [rsp+78h] [rbp-70h]
  int v48; // [rsp+7Ch] [rbp-6Ch]
  void *v49; // [rsp+80h] [rbp-68h]
  union _LARGE_INTEGER v50; // [rsp+88h] [rbp-60h] BYREF
  _QWORD v51[2]; // [rsp+90h] [rbp-58h] BYREF
  _DWORD *v52; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v53[8]; // [rsp+A8h] [rbp-40h] BYREF

  v6 = a2;
  v48 = a4;
  v47 = 0;
  v7 = *a1;
  v51[1] = *a1;
  *a1 = 0LL;
  if ( a2 - 12 > 0xFFFFFF4 )
    return 0LL;
  Object = 0LL;
  v45 = 0LL;
  if ( !a3 )
    return 0LL;
  memset((void *)a3, 0, 0x78uLL);
  if ( a4 == 1 )
  {
    if ( (v7 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v10 = *(_DWORD *)(v7 + 4);
    if ( v10 > 3 || (unsigned int)v6 > 0x10000000 || v7 < 0x10000 || v7 > (unsigned __int64)MmHighestUserAddress )
      return 0LL;
    if ( !v10 )
    {
      v47 = 1;
      v10 = 2;
    }
  }
  else
  {
    v10 = 1;
  }
  v11 = (4 * v10 + 15) & 0xFFFFFFF8;
  v44 = v11;
  if ( (unsigned int)v6 < v11 )
    return 0LL;
  v51[0] = v6;
  if ( (int)Win32CreateSection(&Object, v8, v9, (__int64)v51, (__int64)v38, 0x8000000) < 0 )
    return 0LL;
  v50.QuadPart = 0LL;
  v46 = v6;
  CurrentProcess = PsGetCurrentProcess(v13, v12, v14, v15);
  if ( (int)MmMapViewOfSection(Object, CurrentProcess, &v45, 0LL, v46, &v50, &v46, 2, 0x400000, 4) < 0 )
  {
LABEL_16:
    ObfDereferenceObject(Object);
    return 0LL;
  }
  v22 = v45;
  v49 = v45;
  v52 = v45;
  if ( (unsigned __int64)v45 > v7 )
    goto LABEL_21;
  v18 = (char *)v45 + v46;
  if ( v7 < (unsigned __int64)v45 + v46 )
  {
LABEL_22:
    v23 = PsGetCurrentProcess(v18, v17, v19, v20);
    MmUnmapViewOfSection(v23, v22);
    goto LABEL_16;
  }
  if ( (unsigned __int64)v45 >= v7 )
  {
LABEL_21:
    if ( (unsigned __int64)v45 < v7 + v6 )
      goto LABEL_22;
  }
  if ( a4 == 2 )
  {
    LODWORD(v6) = v6 - 16;
    v45 = (char *)v45 + 16;
    v24 = v22;
    if ( (unsigned __int64)v22 >= MmUserProbeAddress )
      v24 = (_DWORD *)MmUserProbeAddress;
    *v24 = 0;
    v25 = v22 + 1;
    if ( (unsigned __int64)(v22 + 1) >= MmUserProbeAddress )
      v25 = (_DWORD *)MmUserProbeAddress;
    *v25 = v10;
    v26 = v22 + 2;
    if ( (unsigned __int64)(v22 + 2) >= MmUserProbeAddress )
      v26 = (_DWORD *)MmUserProbeAddress;
    *v26 = v6;
    v43 = 1;
  }
  if ( (_DWORD)v6 )
  {
    v27 = v7 + (unsigned int)v6;
    if ( v27 > MmUserProbeAddress || v27 < v7 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  memmove(v45, (const void *)v7, (unsigned int)v6);
  v43 = 1;
  if ( v47 )
  {
    v28 = MmUserProbeAddress;
    v30 = v52;
    v32 = v52;
    if ( (unsigned __int64)v52 >= MmUserProbeAddress )
      v32 = (_DWORD *)MmUserProbeAddress;
    *v32 = 0;
    v29 = v30 + 1;
    if ( (unsigned __int64)(v30 + 1) >= MmUserProbeAddress )
      v29 = (_DWORD *)MmUserProbeAddress;
    *v29 = v10;
  }
  v33 = PsGetCurrentProcess(v29, v28, v30, v31);
  if ( (int)MmUnmapViewOfSection(v33, v22) < 0 )
    goto LABEL_16;
  v45 = 0LL;
  v46 = 0LL;
  v50.QuadPart = 0LL;
  v34 = -1073741823;
  if ( UmfdHostLifeTimeManager::EnsureUmfdHost() )
    v34 = UmfdHostLifeTimeManager::MmMapViewOfSection(Object, &v45, v35, v46, &v50, &v46, v39, v40, v41, v53);
  if ( v34 < 0 )
    goto LABEL_16;
  v36 = (char *)v45;
  *(_QWORD *)(a3 + 104) = v45;
  *(_QWORD *)(a3 + 16) = &v36[v11];
  v37 = v6 + 16;
  if ( v48 != 2 )
    v37 = v6;
  *(_DWORD *)(a3 + 24) = v37 - v11;
  *(_QWORD *)(a3 + 88) = v46;
  *(_DWORD *)(a3 + 96) = 0;
  *(_DWORD *)(a3 + 100) = 1;
  *(_QWORD *)(a3 + 32) = Object;
  *(_DWORD *)(a3 + 112) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
  *(_QWORD *)(a3 + 72) = v53[0];
  *a1 = (unsigned __int64)v36;
  return v10;
}
