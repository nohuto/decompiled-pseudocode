/*
 * XREFs of EditionLLMouseWheelHook @ 0x1C01DC7F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C001E610 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z @ 0x1C001E63C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBGPEBU01@@Z.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z @ 0x1C00A1D00 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JPEAH_N@Z.c)
 *     PhkFirstValid @ 0x1C00B4500 (PhkFirstValid.c)
 *     ?MSGLUA_GPQFOREGROUND@@YAXXZ @ 0x1C013A088 (-MSGLUA_GPQFOREGROUND@@YAXXZ.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z @ 0x1C01DB440 (-IsGpqForegroundAccessibleOnInputThread@@YA_N_NAEBUtagUIPI_INFO_INT@@@Z.c)
 */

__int64 __fastcall EditionLLMouseWheelHook(__int64 a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v5; // xmm0_8
  char v7; // bp
  char v8; // bp
  __int64 v9; // r12
  __int64 v10; // rcx
  struct tagHOOK *Valid; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  LPCWSTR *v19; // [rsp+30h] [rbp-68h] BYREF
  int v20; // [rsp+38h] [rbp-60h] BYREF
  __int64 v21; // [rsp+40h] [rbp-58h] BYREF
  int v22; // [rsp+48h] [rbp-50h]

  v5 = *a3;
  v7 = *(_BYTE *)(a1 + 12);
  v22 = *((_DWORD *)a3 + 2);
  v8 = v7 & 1;
  v9 = (unsigned int)a2;
  v21 = v5;
  if ( (unsigned __int8)IsInputThread(a1, a2, a3) )
    v10 = gptiRit;
  else
    v10 = gptiCurrent;
  Valid = (struct tagHOOK *)PhkFirstValid(v10, 14);
  if ( Valid )
  {
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v19, L"LowLevelMouseWheelHook", 0LL);
    v12 = *(_QWORD *)(gptiCurrent + 1376LL);
    *(_QWORD *)(gptiCurrent + 1376LL) = a1;
    v13 = xxxCallHook2(Valid, 0, v9, (int *)a1, &v20, 0);
    *(_QWORD *)(gptiCurrent + 1376LL) = v12;
    if ( v13 )
    {
LABEL_9:
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v19);
      return 1LL;
    }
    if ( a4 && !IsGpqForegroundAccessibleOnInputThread(v8, (const struct tagUIPI_INFO_INT *)&v21) )
    {
      MSGLUA_GPQFOREGROUND(v15, v14, v16, v17);
      goto LABEL_9;
    }
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v19);
  }
  return 0LL;
}
