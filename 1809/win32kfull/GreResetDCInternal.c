/*
 * XREFs of GreResetDCInternal @ 0x1C0153DA8
 * Callers:
 *     NtGdiResetDC @ 0x1C0153C60 (NtGdiResetDC.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreResetDCInternal(HDC a1, __int64 a2, int *a3, __int64 a4, __int64 a5)
{
  HDC v5; // r14
  int *v6; // r13
  int v7; // r12d
  HDC v8; // r15
  unsigned int v9; // edi
  DC *v10; // rbx
  int v11; // r9d
  int v12; // esi
  __int64 v13; // rbx
  __int64 v14; // rax
  int v15; // r13d
  BOOL v16; // r14d
  HDC v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  ULONGLONG Ptr; // rdx
  __int64 v21; // rcx
  void (__fastcall *v22)(_QWORD, _QWORD); // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  DC *v25; // rcx
  HDC v26; // rdx
  __int64 v27; // rax
  bool v28; // zf
  void (__fastcall *v29)(__int64, _QWORD, _QWORD); // rax
  int cData; // [rsp+20h] [rbp-E0h]
  HDC v32; // [rsp+50h] [rbp-B0h] BYREF
  int *v33; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v34; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v35; // [rsp+68h] [rbp-98h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h]
  __int64 v37; // [rsp+78h] [rbp-88h]
  DC *v38[2]; // [rsp+80h] [rbp-80h] BYREF
  char v39[32]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+B0h] [rbp-50h] BYREF
  _BYTE v41[16]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  __int64 *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int **v46; // [rsp+F0h] [rbp-10h]
  __int64 v47; // [rsp+F8h] [rbp-8h]
  HDC *v48; // [rsp+100h] [rbp+0h]
  __int64 v49; // [rsp+108h] [rbp+8h]

  v37 = a2;
  v5 = a1;
  v32 = a1;
  v34 = a4;
  v6 = a3;
  v33 = a3;
  v35 = a5;
  v7 = 0;
  v8 = 0LL;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v38, a1);
  v10 = v38[0];
  if ( !v38[0] )
  {
LABEL_6:
    EngSetLastError(6u);
LABEL_7:
    v12 = (int)v32;
    goto LABEL_25;
  }
  if ( *((_WORD *)v38[0] + 6) > 1u )
  {
    if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
    {
      LODWORD(v34) = 67261;
      v42 = &v34;
      v44 = &v35;
      v46 = &v33;
      v48 = &v32;
      v43 = 4LL;
      v35 = 0x1000000LL;
      v45 = 8LL;
      LODWORD(v33) = v11;
      v47 = 4LL;
      LODWORD(v32) = 0;
      v49 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
    }
    goto LABEL_6;
  }
  v7 = *((_DWORD *)v38[0] + 9) & 0x800;
  if ( v7 )
  {
    DC::bMakeInfoDC(v38[0], 0);
    v10 = v38[0];
  }
  v13 = *((_QWORD *)v10 + 6);
  v14 = *(_QWORD *)(v13 + 1712);
  *(_QWORD *)(v13 + 1712) = 0LL;
  v36 = v14;
  if ( (*((_DWORD *)v38[0] + 9) & 0x100) != 0 || *((_DWORD *)v38[0] + 8) == 1 || (*(_DWORD *)(v13 + 40) & 0x80u) == 0 )
    goto LABEL_7;
  v15 = *((_DWORD *)v38[0] + 27);
  v16 = *((_QWORD *)v38[0] + 62) != 0LL;
  v12 = v16;
  if ( XDCOBJ::bCleanDC((XDCOBJ *)v38, 0) )
  {
    if ( *(_DWORD *)(v13 + 8) == 1 )
    {
      v17 = (HDC)hdcOpenDCW(&pwsz, v37, 0LL, 0LL, *(_QWORD *)(v13 + 2560), v36, v34, v35, 0);
      v8 = v17;
      if ( v17 )
      {
        *(_QWORD *)(v13 + 2560) = 0LL;
        DCOBJ::DCOBJ((DCOBJ *)&pData, v17);
        Ptr = pData.Ptr;
        if ( pData.Ptr )
        {
          if ( v15 > 0 )
          {
            *(_DWORD *)(pData.Ptr + 108) = *(_DWORD *)(pData.Ptr + 104);
            Ptr = pData.Ptr;
          }
          *(_QWORD *)(Ptr + 2080) = *((_QWORD *)v38[0] + 260);
          *((_QWORD *)v38[0] + 260) = 0LL;
          v21 = *((_QWORD *)v38[0] + 261);
          *(_QWORD *)(pData.Ptr + 2088) = v21;
          *((_QWORD *)v38[0] + 261) = 0LL;
          v22 = *(void (__fastcall **)(_QWORD, _QWORD))(v13 + 2744);
          if ( v22 )
            v22(*(_QWORD *)(v13 + 1800), *(_QWORD *)(*(_QWORD *)(pData.Ptr + 48) + 1800LL));
          GreAcquireHmgrSemaphore(v21, Ptr, v18, v19);
          LOBYTE(cData) = 1;
          HmgSwapLockedHandleContents(v32, 0LL, v8, 0LL, cData);
          GreReleaseHmgrSemaphore(v24, v23);
          v9 = 1;
        }
        else
        {
          EngSetLastError(6u);
        }
        MDCOBJ::~MDCOBJ((MDCOBJ *)&pData);
        UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v41);
        v12 = v16;
      }
    }
  }
  v6 = v33;
  v5 = v32;
LABEL_25:
  MDCOBJ::~MDCOBJ((MDCOBJ *)v38);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v39);
  if ( v9 )
  {
    bDeleteDCInternal(v8, 1LL, 0LL);
    DCOBJ::DCOBJ((DCOBJ *)&pData, v5);
    v25 = (DC *)pData.Ptr;
    if ( !pData.Ptr )
    {
      EngSetLastError(6u);
LABEL_28:
      v9 = 0;
LABEL_41:
      MDCOBJ::~MDCOBJ((MDCOBJ *)&pData);
      UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v41);
      return v9;
    }
    v32 = *(HDC *)(pData.Ptr + 48);
    if ( v12 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&v32, 0LL) )
        goto LABEL_28;
      DC::pSurface((DC *)pData.Ptr, *((struct SURFACE **)v32 + 319));
      v26 = v32;
      v27 = *((_QWORD *)v32 + 319);
      v28 = (*(_DWORD *)(v27 + 112) & 0x2000000) == 0;
      *v6 = *(_DWORD *)(v27 + 112) & 0x2000000;
      if ( !v28 )
        *(_QWORD *)(pData.Ptr + 512) = *(_QWORD *)(*((_QWORD *)v26 + 319) + 56LL);
      DC::bSetDefaultRegion((DC *)pData.Ptr);
      v29 = (void (__fastcall *)(__int64, _QWORD, _QWORD))*((_QWORD *)v32 + 371);
      if ( v29 )
        v29((*((_QWORD *)v32 + 319) + 24LL) & -(__int64)(*((_QWORD *)v32 + 319) != 0LL), 0LL, 0LL);
      else
        v9 = 0;
      v25 = (DC *)pData.Ptr;
    }
    else
    {
      *v6 = 0;
    }
    if ( v9 && v7 )
      DC::bMakeInfoDC(v25, 1);
    goto LABEL_41;
  }
  return v9;
}
