/*
 * XREFs of GreSetDIBitsInternal @ 0x1C0102E6C
 * Callers:
 *     GreCreateDIBitmapComp @ 0x1C0102D6C (GreCreateDIBitmapComp.c)
 *     GreSetDIBits @ 0x1C028F1B0 (GreSetDIBits.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C00A42B0 (GreSetDIBitsToDeviceInternal.c)
 */

__int64 __fastcall GreSetDIBitsInternal(
        HDC a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        __int64 a10)
{
  __int64 v10; // r15
  unsigned int v11; // r13d
  signed int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rbx
  HDC CompatibleDC; // rdi
  HDC v19; // r12
  __int64 v20; // r14
  _QWORD v22[9]; // [rsp+80h] [rbp-48h] BYREF
  unsigned int v24; // [rsp+E0h] [rbp+18h]

  v10 = 0LL;
  v11 = 0;
  if ( !a6 || *(_DWORD *)a6 >= 0x28u && (unsigned int)(*(_DWORD *)(a6 + 16) - 4) <= 1 )
  {
    EngSetLastError(0x57u);
    return v11;
  }
  v14 = *(_DWORD *)(a6 + 8);
  v24 = *(_DWORD *)(a6 + 4);
  if ( v14 < 0 )
    v14 = -v14;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  LOBYTE(v15) = 5;
  v16 = HmgShareLockCheck(a2, v15);
  v17 = v16;
  if ( v16 && (*(_DWORD *)(v16 + 112) & 0x4000000) != 0 )
  {
    if ( *(_DWORD *)(v16 + 168) )
      CompatibleDC = *(HDC *)(v16 + 160);
    else
      CompatibleDC = 0LL;
    v19 = CompatibleDC;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(a1)) != 0LL )
    {
      if ( a1 )
      {
        MDCOBJ::MDCOBJ((MDCOBJ *)v22, a1);
        if ( !v22[0] )
        {
          EngSetLastError(6u);
LABEL_19:
          if ( !v19 )
            bDeleteDCInternal(CompatibleDC, 1LL, 0LL);
          goto LABEL_21;
        }
        v10 = GreSelectPalette(CompatibleDC, *(_QWORD *)(v22[0] + 88LL), 1LL);
        XDCOBJ::vUnlockFast((XDCOBJ *)v22);
      }
      v20 = GreSelectBitmap(CompatibleDC, a2);
      if ( v20 )
      {
        v11 = GreSetDIBitsToDeviceInternal(
                CompatibleDC,
                0,
                0,
                v24,
                v14,
                0,
                0,
                0,
                a4,
                a5,
                (struct tagRGBQUAD *)a6,
                a7,
                a8,
                a9,
                0,
                a10);
        if ( v10 )
          GreSelectPalette(CompatibleDC, v10, 1LL);
        GreSelectBitmap(CompatibleDC, v20);
      }
      goto LABEL_19;
    }
  }
  else
  {
    EngSetLastError(6u);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
  }
LABEL_21:
  if ( v17 )
    DEC_SHARE_REF_CNT(v17);
  return v11;
}
