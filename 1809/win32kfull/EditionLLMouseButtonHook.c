/*
 * XREFs of EditionLLMouseButtonHook @ 0x1C00B47C0
 * Callers:
 *     <none>
 * Callees:
 *     MSGLUA_GPQFOREGROUND @ 0x1C0006948 (MSGLUA_GPQFOREGROUND.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00AE738 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C00AE7DC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     PhkFirstValid @ 0x1C00B5BC8 (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C015CB98 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01C7F24 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, int a5)
{
  unsigned __int64 v6; // r12
  __int64 v8; // rdi
  __int64 v9; // rcx
  BOOL v10; // esi
  struct tagHOOK *Valid; // r15
  bool v12; // dl
  __int64 v13; // r13
  _QWORD *v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+38h] [rbp-40h]
  int v20; // [rsp+80h] [rbp+8h] BYREF
  LPCWSTR *v21; // [rsp+88h] [rbp+10h] BYREF

  v6 = a3;
  if ( *(_DWORD *)(a1 + 84) == 2 )
    v8 = *(_QWORD *)(a1 + 72);
  else
    v8 = 0LL;
  if ( (unsigned __int8)IsInputThread() )
    v9 = gptiRit;
  else
    v9 = gptiCurrent;
  v10 = *(_DWORD *)(a2 + 12) & 1;
  Valid = (struct tagHOOK *)PhkFirstValid(v9, 14LL);
  if ( Valid )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v21, L"LowLevelMouseButtonHook", 0LL);
    v12 = 0;
    v13 = *(_QWORD *)(gptiCurrent + 1352LL);
    v18 = *(_QWORD *)(gptiCurrent + 1336LL);
    v19 = *(_QWORD *)(gptiCurrent + 1344LL);
    *(_QWORD *)(gptiCurrent + 1352LL) = a2;
    if ( v8 )
    {
      v14 = *(_QWORD **)(*(_QWORD *)(v8 + 16) + 424LL);
      if ( *v14 == gpepCSRSS )
      {
        *(_DWORD *)(gptiCurrent + 1348LL) = 0;
        *(_DWORD *)(gptiCurrent + 1344LL) = 0x2000;
      }
      else
      {
        *(_QWORD *)(gptiCurrent + 1344LL) = v14[110];
      }
      v12 = 1;
    }
    else
    {
      *(_DWORD *)(gptiCurrent + 1344LL) = -1;
      *(_DWORD *)(gptiCurrent + 1348LL) = -1;
    }
    if ( !v10 || *(_DWORD *)(a4 + 8) )
    {
      *(_DWORD *)(gptiCurrent + 1336LL) = -1;
      *(_DWORD *)(gptiCurrent + 1340LL) = -1;
    }
    else
    {
      *(_QWORD *)(gptiCurrent + 1336LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 880LL);
    }
    v15 = xxxCallHook2(Valid, 0, v6, a2, &v20, v12);
    *(_QWORD *)(gptiCurrent + 1336LL) = v18;
    *(_QWORD *)(gptiCurrent + 1344LL) = v19;
    *(_QWORD *)(gptiCurrent + 1352LL) = v13;
    if ( v15 )
      goto LABEL_22;
    if ( a5 && !IsGpqForegroundAccessibleOnInputThread(v10, (const struct tagUIPI_INFO_INT *)a4) )
    {
      MSGLUA_GPQFOREGROUND();
LABEL_22:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)&v21,
        v16);
      return 1LL;
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)&v21,
      v16);
  }
  return 0LL;
}
