/*
 * XREFs of GreResetDCInternal @ 0x1C0158678
 * Callers:
 *     NtGdiResetDC @ 0x1C0158530 (NtGdiResetDC.c)
 * Callees:
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C010FD5C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  HDC v5; // r14
  int *v6; // r13
  int v7; // r15d
  HDC v8; // r12
  unsigned int v9; // edi
  DC *v10; // rbx
  __int64 v11; // rbx
  __int64 v12; // rax
  DC *v13; // rcx
  int v14; // r13d
  BOOL v15; // r14d
  BOOL v16; // esi
  HDC v17; // rax
  DC *v18; // rdx
  void (__fastcall *v19)(_QWORD, _QWORD); // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  int v24; // [rsp+28h] [rbp-51h]
  __int64 v25; // [rsp+58h] [rbp-21h] BYREF
  DC *v26[2]; // [rsp+60h] [rbp-19h] BYREF
  DC *v27[11]; // [rsp+70h] [rbp-9h] BYREF

  v5 = a1;
  v6 = a3;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v26, a1);
  v10 = v26[0];
  if ( !v26[0] )
  {
    EngSetLastError(6u);
    v13 = v26[0];
LABEL_38:
    v16 = v25;
    goto LABEL_19;
  }
  v7 = *((_DWORD *)v26[0] + 9) & 0x800;
  if ( v7 )
  {
    DC::bMakeInfoDC(v26[0], 0);
    v10 = v26[0];
  }
  v11 = *((_QWORD *)v10 + 6);
  v12 = *(_QWORD *)(v11 + 1712);
  *(_QWORD *)(v11 + 1712) = 0LL;
  v13 = v26[0];
  v25 = v12;
  if ( (*((_DWORD *)v26[0] + 9) & 0x100) != 0 || *((_DWORD *)v26[0] + 8) == 1 || (*(_DWORD *)(v11 + 40) & 0x80u) == 0 )
    goto LABEL_38;
  v14 = *((_DWORD *)v26[0] + 27);
  v15 = *((_QWORD *)v26[0] + 62) != 0LL;
  v16 = v15;
  if ( XDCOBJ::bCleanDC((XDCOBJ *)v26, 0) )
  {
    if ( *(_DWORD *)(v11 + 8) == 1 )
    {
      v17 = (HDC)hdcOpenDCW(&word_1C02DAB68, a2, 0LL, 0LL, *(_QWORD *)(v11 + 2560), v25, a4, a5, 0);
      v8 = v17;
      if ( v17 )
      {
        *(_QWORD *)(v11 + 2560) = 0LL;
        DCOBJ::DCOBJ((DCOBJ *)v27, v17);
        v18 = v27[0];
        if ( v27[0] )
        {
          if ( v14 > 0 )
          {
            *((_DWORD *)v27[0] + 27) = *((_DWORD *)v27[0] + 26);
            v18 = v27[0];
          }
          *((_QWORD *)v18 + 257) = *((_QWORD *)v26[0] + 257);
          *((_QWORD *)v26[0] + 257) = 0LL;
          *((_QWORD *)v27[0] + 258) = *((_QWORD *)v26[0] + 258);
          *((_QWORD *)v26[0] + 258) = 0LL;
          v19 = *(void (__fastcall **)(_QWORD, _QWORD))(v11 + 2744);
          if ( v19 )
            v19(*(_QWORD *)(v11 + 1800), *(_QWORD *)(*((_QWORD *)v27[0] + 6) + 1800LL));
          GreAcquireHmgrSemaphore();
          LOBYTE(v24) = 1;
          HmgSwapLockedHandleContents(a1, 0LL, v8, 0LL, v24);
          GreReleaseHmgrSemaphore();
          v9 = 1;
        }
        else
        {
          EngSetLastError(6u);
        }
        v16 = v15;
        if ( v27[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v27);
      }
    }
  }
  v13 = v26[0];
  v5 = a1;
  v6 = a3;
LABEL_19:
  if ( v13 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v26);
  if ( v9 )
  {
    bDeleteDCInternal(v8, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v27, v5);
    if ( v27[0] )
    {
      v25 = *((_QWORD *)v27[0] + 6);
      if ( !v16 )
      {
        *v6 = 0;
LABEL_25:
        if ( v9 && v7 )
          DC::bMakeInfoDC(v27[0], 1);
        goto LABEL_28;
      }
      if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v25, 0LL) )
      {
        DC::pSurface(v27[0], *(struct SURFACE **)(v25 + 2552));
        v21 = v25;
        v22 = *(_QWORD *)(v25 + 2552);
        v23 = (*(_DWORD *)(v22 + 112) & 0x2000000) == 0;
        *v6 = *(_DWORD *)(v22 + 112) & 0x2000000;
        if ( !v23 )
        {
          *((_QWORD *)v27[0] + 64) = *(_QWORD *)(*(_QWORD *)(v21 + 2552) + 56LL);
          DC::bSetDefaultRegion(v27[0]);
          v21 = v25;
        }
        if ( *(_QWORD *)(v21 + 2968) )
          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v21 + 2968))(
            (*(_QWORD *)(v21 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v21 + 2552) != 0LL),
            0LL,
            0LL);
        else
          v9 = 0;
        goto LABEL_25;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
    v9 = 0;
LABEL_28:
    if ( v27[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v27);
  }
  return v9;
}
