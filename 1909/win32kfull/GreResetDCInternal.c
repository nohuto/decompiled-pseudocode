/*
 * XREFs of GreResetDCInternal @ 0x1C01594E8
 * Callers:
 *     NtGdiResetDC @ 0x1C01593A0 (NtGdiResetDC.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0059398 (_TlgKeywordOn.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _TlgWrite @ 0x1C00E93B8 (_TlgWrite.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00F8610 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, DC *a2, int *a3, __int64 a4, __int64 a5)
{
  HDC v5; // r14
  int *v6; // r15
  int v7; // r12d
  HDC v8; // r13
  unsigned int v9; // edi
  DC *v10; // rbx
  int v11; // r9d
  int v12; // esi
  DC *v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  int v16; // r15d
  BOOL v17; // r14d
  HDC v18; // rax
  DC *v19; // rdx
  void (__fastcall *v20)(_QWORD, _QWORD); // rax
  HDC v21; // rax
  __int64 v22; // rcx
  bool v23; // zf
  int cData; // [rsp+20h] [rbp-E0h]
  HDC v26; // [rsp+50h] [rbp-B0h] BYREF
  DC *v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  DC *v28[2]; // [rsp+68h] [rbp-98h] BYREF
  int *v29; // [rsp+78h] [rbp-88h] BYREF
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  __int64 v31; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+C8h] [rbp-38h]
  __int64 *v36; // [rsp+D0h] [rbp-30h]
  __int64 v37; // [rsp+D8h] [rbp-28h]
  int **v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+E8h] [rbp-18h]
  HDC *v40; // [rsp+F0h] [rbp-10h]
  __int64 v41; // [rsp+F8h] [rbp-8h]

  v27[0] = a2;
  v5 = a1;
  v26 = a1;
  v30 = a4;
  v6 = a3;
  v29 = a3;
  v31 = a5;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v28, a1);
  v10 = v28[0];
  if ( !v28[0] )
  {
LABEL_6:
    EngSetLastError(6u);
    v12 = (int)v26;
LABEL_7:
    v13 = v28[0];
    goto LABEL_8;
  }
  if ( *((_WORD *)v28[0] + 6) > 1u )
  {
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      LODWORD(v30) = 67261;
      v34 = &v30;
      v36 = &v31;
      v38 = &v29;
      v40 = &v26;
      v35 = 4LL;
      v31 = 0x1000000LL;
      v37 = 8LL;
      LODWORD(v29) = v11;
      v39 = 4LL;
      LODWORD(v26) = 0;
      v41 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02E93E3, 0LL, 0LL, 6u, &pData);
    }
    goto LABEL_6;
  }
  v7 = *((_DWORD *)v28[0] + 9) & 0x800;
  if ( v7 )
  {
    DC::bMakeInfoDC(v28[0], 0);
    v10 = v28[0];
  }
  v14 = *((_QWORD *)v10 + 6);
  v15 = *(_QWORD *)(v14 + 1712);
  *(_QWORD *)(v14 + 1712) = 0LL;
  v13 = v28[0];
  v32 = v15;
  if ( (*((_DWORD *)v28[0] + 9) & 0x100) == 0 && *((_DWORD *)v28[0] + 8) != 1 && (*(_DWORD *)(v14 + 40) & 0x80u) != 0 )
  {
    v16 = *((_DWORD *)v28[0] + 27);
    v17 = *((_QWORD *)v28[0] + 62) != 0LL;
    v12 = v17;
    if ( XDCOBJ::bCleanDC((XDCOBJ *)v28, 0) )
    {
      if ( *(_DWORD *)(v14 + 8) == 1 )
      {
        v18 = (HDC)hdcOpenDCW(&word_1C02D83A8, v27[0], 0LL, 0LL, *(_QWORD *)(v14 + 2560), v32, v30, v31, 0);
        v8 = v18;
        if ( v18 )
        {
          *(_QWORD *)(v14 + 2560) = 0LL;
          DCOBJ::DCOBJ((DCOBJ *)v27, v18);
          v19 = v27[0];
          if ( v27[0] )
          {
            if ( v16 > 0 )
            {
              *((_DWORD *)v27[0] + 27) = *((_DWORD *)v27[0] + 26);
              v19 = v27[0];
            }
            *((_QWORD *)v19 + 257) = *((_QWORD *)v28[0] + 257);
            *((_QWORD *)v28[0] + 257) = 0LL;
            *((_QWORD *)v27[0] + 258) = *((_QWORD *)v28[0] + 258);
            *((_QWORD *)v28[0] + 258) = 0LL;
            v20 = *(void (__fastcall **)(_QWORD, _QWORD))(v14 + 2744);
            if ( v20 )
              v20(*(_QWORD *)(v14 + 1800), *(_QWORD *)(*((_QWORD *)v27[0] + 6) + 1800LL));
            GreAcquireHmgrSemaphore();
            LOBYTE(cData) = 1;
            HmgSwapLockedHandleContents(v26, 0LL, v8, 0LL, cData);
            GreReleaseHmgrSemaphore();
            v9 = 1;
          }
          else
          {
            EngSetLastError(6u);
          }
          v12 = v17;
          if ( v27[0] )
            XDCOBJ::vUnlockFast((XDCOBJ *)v27);
        }
      }
    }
    v5 = v26;
    v6 = v29;
    goto LABEL_7;
  }
  v12 = (int)v26;
LABEL_8:
  if ( v13 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v28);
  if ( v9 )
  {
    bDeleteDCInternal(v8, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)v27, v5);
    if ( !v27[0] )
    {
      EngSetLastError(6u);
LABEL_13:
      v9 = 0;
LABEL_44:
      if ( v27[0] )
        XDCOBJ::vUnlockFast((XDCOBJ *)v27);
      return v9;
    }
    v26 = (HDC)*((_QWORD *)v27[0] + 6);
    if ( v12 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v26, 0LL) )
        goto LABEL_13;
      DC::pSurface(v27[0], *((struct SURFACE **)v26 + 319));
      v21 = v26;
      v22 = *((_QWORD *)v26 + 319);
      v23 = (*(_DWORD *)(v22 + 112) & 0x2000000) == 0;
      *v6 = *(_DWORD *)(v22 + 112) & 0x2000000;
      if ( !v23 )
      {
        *((_QWORD *)v27[0] + 64) = *(_QWORD *)(*((_QWORD *)v21 + 319) + 56LL);
        DC::bSetDefaultRegion(v27[0]);
        v21 = v26;
      }
      if ( *((_QWORD *)v21 + 371) )
        (*((void (__fastcall **)(__int64, _QWORD, _QWORD))v21 + 371))(
          (*((_QWORD *)v21 + 319) + 24LL) & -(__int64)(*((_QWORD *)v21 + 319) != 0LL),
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
      DC::bMakeInfoDC(v27[0], 1);
    goto LABEL_44;
  }
  return v9;
}
