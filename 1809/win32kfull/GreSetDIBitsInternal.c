/*
 * XREFs of GreSetDIBitsInternal @ 0x1C0100230
 * Callers:
 *     GreCreateDIBitmapComp @ 0x1C0100130 (GreCreateDIBitmapComp.c)
 *     GreSetDIBits @ 0x1C02A2B04 (GreSetDIBits.c)
 * Callees:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00524A0 (GreSetDIBitsToDeviceInternal.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0055808 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        HSURF a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        unsigned int *a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        void *a10)
{
  __int64 v10; // r15
  unsigned int v11; // r13d
  signed int v14; // esi
  HDC CompatibleDC; // rbx
  HDC v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // r14d
  __int64 v20; // rbp
  _BYTE v22[32]; // [rsp+80h] [rbp-98h] BYREF
  __int64 v23; // [rsp+A0h] [rbp-78h]
  _QWORD v24[2]; // [rsp+A8h] [rbp-70h] BYREF
  _BYTE v25[96]; // [rsp+B8h] [rbp-60h] BYREF
  unsigned int v27; // [rsp+130h] [rbp+18h]

  v10 = 0LL;
  v11 = 0;
  if ( a6 && (*a6 < 0x28 || a6[4] - 4 > 1) )
  {
    v14 = a6[2];
    v27 = a6[1];
    if ( v14 < 0 )
      v14 = -v14;
    GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    SURFREF::SURFREF((SURFREF *)v22, a2);
    if ( v23 && (*(_DWORD *)(v23 + 112) & 0x4000000) != 0 )
    {
      if ( *(_DWORD *)(v23 + 168) )
        CompatibleDC = *(HDC *)(v23 + 160);
      else
        CompatibleDC = 0LL;
      v16 = CompatibleDC;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
      if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1, v17, v18)) != 0LL )
      {
        v19 = 1;
        if ( !a1
          || a1 == CompatibleDC
          || ((DCOBJ::DCOBJ((DCOBJ *)v24, a1), v24[0])
            ? (v10 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v24[0] + 80LL), 1LL))
            : (EngSetLastError(6u), v19 = 0),
              MDCOBJ::~MDCOBJ((MDCOBJ *)v24),
              UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v25),
              v19) )
        {
          v20 = GreSelectBitmap(CompatibleDC, a2);
          if ( v20 )
          {
            v11 = GreSetDIBitsToDeviceInternal(CompatibleDC, 0, 0, v27, v14, 0, 0, 0, a4, a5, a6, a7, a8, a9, 0, a10);
            if ( v10 )
              GreSelectPalette(CompatibleDC, v10, 1LL);
            GreSelectBitmap(CompatibleDC, v20);
          }
        }
        if ( !v16 )
          bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
      }
    }
    else
    {
      EngSetLastError(6u);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    }
    if ( v23 )
      DEC_SHARE_REF_CNT(v23);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v22);
  }
  else
  {
    EngSetLastError(0x57u);
  }
  return v11;
}
