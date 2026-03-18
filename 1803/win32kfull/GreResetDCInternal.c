/*
 * XREFs of GreResetDCInternal @ 0x1C0117BA0
 * Callers:
 *     NtGdiResetDC @ 0x1C0117A70 (NtGdiResetDC.c)
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C008BC3C (-vInheritSurfaceDpiScale@DC@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
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
  int v16; // esi
  HDC v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rdx
  __int64 v21; // rcx
  void (__fastcall *v22)(_QWORD, _QWORD); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  DC *v25; // rbx
  __int64 v27; // rax
  __int64 v28; // rcx
  bool v29; // zf
  int v30; // [rsp+20h] [rbp-58h]
  _QWORD v31[2]; // [rsp+50h] [rbp-28h] BYREF
  DC *v32[3]; // [rsp+60h] [rbp-18h] BYREF

  v5 = a1;
  v6 = a3;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v32, a1);
  v10 = v32[0];
  if ( !v32[0] )
  {
    EngSetLastError(6u);
    v13 = v32[0];
LABEL_36:
    v16 = v31[0];
    goto LABEL_18;
  }
  v7 = *((_DWORD *)v32[0] + 9) & 0x800;
  if ( v7 )
  {
    DC::bMakeInfoDC(v32[0], 0);
    v10 = v32[0];
  }
  v11 = *((_QWORD *)v10 + 6);
  v12 = *(_QWORD *)(v11 + 1704);
  *(_QWORD *)(v11 + 1704) = 0LL;
  v13 = v32[0];
  v31[0] = v12;
  if ( (*((_DWORD *)v32[0] + 9) & 0x100) != 0 || *((_DWORD *)v32[0] + 8) == 1 || (*(_DWORD *)(v11 + 40) & 0x80u) == 0 )
    goto LABEL_36;
  v14 = *((_DWORD *)v32[0] + 29);
  v15 = *((_QWORD *)v32[0] + 63) != 0LL;
  v16 = v15;
  if ( XDCOBJ::bCleanDC((XDCOBJ *)v32, 0) )
  {
    if ( *(_DWORD *)(v11 + 8) == 1 )
    {
      v17 = (HDC)hdcOpenDCW(&pwsz, a2, 0LL, 0LL, *(_QWORD *)(v11 + 2552), v31[0], a4, a5, 0);
      v8 = v17;
      if ( v17 )
      {
        *(_QWORD *)(v11 + 2552) = 0LL;
        MDCOBJ::MDCOBJ((MDCOBJ *)v31, v17);
        v20 = (_QWORD *)v31[0];
        if ( v31[0] )
        {
          if ( v14 > 0 )
            *(_DWORD *)(v31[0] + 116LL) = *(_DWORD *)(v31[0] + 112LL);
          v20[308] = *((_QWORD *)v32[0] + 308);
          *((_QWORD *)v32[0] + 308) = 0LL;
          v21 = *((_QWORD *)v32[0] + 309);
          v20[309] = v21;
          *((_QWORD *)v32[0] + 309) = 0LL;
          v22 = *(void (__fastcall **)(_QWORD, _QWORD))(v11 + 2736);
          if ( v22 )
            v22(*(_QWORD *)(v11 + 1792), *(_QWORD *)(v20[6] + 1792LL));
          GreAcquireHmgrSemaphore(v21, v20, v18, v19);
          LOBYTE(v30) = 1;
          HmgSwapLockedHandleContents(a1, 0LL, v8, 0LL, v30);
          GreReleaseHmgrSemaphore(v24, v23);
          v9 = 1;
          XDCOBJ::vUnlockFast((XDCOBJ *)v31);
        }
        else
        {
          EngSetLastError(6u);
        }
        v16 = v15;
      }
    }
  }
  v13 = v32[0];
  v5 = a1;
  v6 = a3;
LABEL_18:
  if ( v13 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v32);
  if ( v9 )
  {
    bDeleteDCInternal(v8, 1LL, 0LL);
    MDCOBJ::MDCOBJ((MDCOBJ *)v32, v5);
    v25 = v32[0];
    if ( !v32[0] )
    {
      EngSetLastError(6u);
      return 0;
    }
    v31[0] = *((_QWORD *)v32[0] + 6);
    if ( v16 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)v31, 0LL) )
      {
        v9 = 0;
LABEL_27:
        XDCOBJ::vUnlockFast((XDCOBJ *)v32);
        return v9;
      }
      *((_QWORD *)v25 + 63) = *(_QWORD *)(v31[0] + 2544LL);
      DC::vInheritSurfaceDpiScale(v25);
      v27 = v31[0];
      v28 = *(_QWORD *)(v31[0] + 2544LL);
      v29 = (*(_DWORD *)(v28 + 112) & 0x2000000) == 0;
      *v6 = *(_DWORD *)(v28 + 112) & 0x2000000;
      if ( !v29 )
      {
        *((_QWORD *)v25 + 65) = *(_QWORD *)(*(_QWORD *)(v27 + 2544) + 56LL);
        DC::bSetDefaultRegion(v25);
        v27 = v31[0];
      }
      if ( *(_QWORD *)(v27 + 2960) )
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v27 + 2960))(
          (*(_QWORD *)(v27 + 2544) + 24LL) & -(__int64)(*(_QWORD *)(v27 + 2544) != 0LL),
          0LL,
          0LL);
      else
        v9 = 0;
    }
    else
    {
      *v6 = 0;
    }
    if ( v9 && v7 )
      DC::bMakeInfoDC(v25, 1);
    goto LABEL_27;
  }
  return v9;
}
