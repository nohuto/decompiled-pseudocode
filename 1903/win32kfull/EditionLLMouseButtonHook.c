/*
 * XREFs of EditionLLMouseButtonHook @ 0x1C00B5980
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E610 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E63C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstValid @ 0x1C00B4500 (PhkFirstValid.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C013A088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01DB440 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseButtonHook(__int64 a1, int *a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 v6; // r12
  __int64 v8; // rdi
  __int64 v9; // rcx
  BOOL v10; // esi
  struct tagHOOK *Valid; // r15
  bool v13; // dl
  __int64 v14; // r13
  _QWORD *v15; // rdx
  __int64 v16; // rax
  LPCWSTR *v17; // [rsp+30h] [rbp-58h] BYREF
  int v18; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-48h]
  __int64 v20; // [rsp+48h] [rbp-40h]

  v6 = a3;
  if ( *(_DWORD *)(a1 + 92) == 2 )
    v8 = *(_QWORD *)(a1 + 80);
  else
    v8 = 0LL;
  if ( (unsigned __int8)IsInputThread() )
    v9 = gptiRit;
  else
    v9 = gptiCurrent;
  v10 = a2[3] & 1;
  Valid = (struct tagHOOK *)PhkFirstValid(v9, 14);
  if ( !Valid )
    return 0LL;
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v17, L"LowLevelMouseButtonHook", 0LL);
  v13 = 0;
  v14 = *(_QWORD *)(gptiCurrent + 1376LL);
  v19 = *(_QWORD *)(gptiCurrent + 1360LL);
  v20 = *(_QWORD *)(gptiCurrent + 1368LL);
  *(_QWORD *)(gptiCurrent + 1376LL) = a2;
  if ( v8 )
  {
    v15 = *(_QWORD **)(*(_QWORD *)(v8 + 16) + 416LL);
    if ( *v15 == gpepCSRSS )
    {
      *(_DWORD *)(gptiCurrent + 1372LL) = 0;
      *(_DWORD *)(gptiCurrent + 1368LL) = 0x2000;
    }
    else
    {
      *(_QWORD *)(gptiCurrent + 1368LL) = v15[109];
    }
    v13 = 1;
  }
  else
  {
    *(_DWORD *)(gptiCurrent + 1368LL) = -1;
    *(_DWORD *)(gptiCurrent + 1372LL) = -1;
  }
  if ( !v10 || *(_DWORD *)(a4 + 8) )
  {
    *(_DWORD *)(gptiCurrent + 1360LL) = -1;
    *(_DWORD *)(gptiCurrent + 1364LL) = -1;
  }
  else
  {
    *(_QWORD *)(gptiCurrent + 1360LL) = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 416LL) + 872LL);
  }
  v16 = xxxCallHook2(Valid, 0, v6, a2, &v18, v13);
  *(_QWORD *)(gptiCurrent + 1360LL) = v19;
  *(_QWORD *)(gptiCurrent + 1368LL) = v20;
  *(_QWORD *)(gptiCurrent + 1376LL) = v14;
  if ( !v16 )
  {
    if ( !a5 || IsGpqForegroundAccessibleOnInputThread(v10, (const struct tagUIPI_INFO_INT *)a4) )
    {
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v17);
      return 0LL;
    }
    MSGLUA_GPQFOREGROUND();
  }
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v17);
  return 1LL;
}
