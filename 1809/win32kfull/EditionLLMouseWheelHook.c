/*
 * XREFs of EditionLLMouseWheelHook @ 0x1C01C8ED0
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

__int64 __fastcall EditionLLMouseWheelHook(__int64 a1, __int64 a2, struct tagUIPI_INFO_INT *a3, __int64 a4)
{
  int v4; // r14d
  __int64 v6; // r13
  char v8; // di
  __int64 v9; // rcx
  struct tagHOOK *Valid; // rbp
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rdx
  LPCWSTR *v15[2]; // [rsp+30h] [rbp-38h] BYREF
  int v16; // [rsp+70h] [rbp+8h] BYREF

  v4 = a4;
  v6 = (unsigned int)a2;
  v8 = *(_BYTE *)(a1 + 12) & 1;
  if ( (unsigned __int8)IsInputThread(a1, a2, a3, a4) )
    v9 = gptiRit;
  else
    v9 = gptiCurrent;
  Valid = (struct tagHOOK *)PhkFirstValid(v9, 14);
  if ( Valid )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v15, L"LowLevelMouseWheelHook", 0LL);
    v11 = *(_QWORD *)(gptiCurrent + 1352LL);
    *(_QWORD *)(gptiCurrent + 1352LL) = a1;
    v12 = xxxCallHook2(Valid, 0, v6, (unsigned int *)a1, &v16, 0);
    *(_QWORD *)(gptiCurrent + 1352LL) = v11;
    if ( v12 )
    {
LABEL_9:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
        (InputTraceLogging::ThreadLockedPerfRegion *)v15,
        v13);
      return 1LL;
    }
    if ( v4 && !IsGpqForegroundAccessibleOnInputThread(v8, a3) )
    {
      MSGLUA_GPQFOREGROUND();
      goto LABEL_9;
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion(
      (InputTraceLogging::ThreadLockedPerfRegion *)v15,
      v13);
  }
  return 0LL;
}
