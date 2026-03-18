/*
 * XREFs of GreGetRandomRgn @ 0x1C010DA60
 * Callers:
 *     NtGdiGetRandomRgn @ 0x1C0056BC0 (NtGdiGetRandomRgn.c)
 *     _ExcludeUpdateRgn @ 0x1C010D904 (_ExcludeUpdateRgn.c)
 *     ?GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z @ 0x1C0154250 (-GetTrueClipRgn@@YAHPEAUHDC__@@PEAUHRGN__@@@Z.c)
 *     DrawTextExWorker @ 0x1C024239C (DrawTextExWorker.c)
 * Callees:
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C0055B68 (--1RGNOBJAPI@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x1C0057424 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     UserGetRedirectedWindowOrigin @ 0x1C007A680 (UserGetRedirectedWindowOrigin.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C0137840 (--0DCOBJ@@QEAA@XZ.c)
 *     ?TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z @ 0x1C015EF38 (-TraceLoggingWriteUnsupportedGdiUsage@@YAXW4UnsupportedReason@@_K111@Z.c)
 *     wil::details::lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___::_lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___ @ 0x1C015F458 (wil--details--lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___--_lambda_call__lambda_d150.c)
 *     DC::AcquireDcVisRgnShared @ 0x1C015F480 (DC--AcquireDcVisRgnShared.c)
 *     _lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator() @ 0x1C0160E34 (_lambda_6307e9d0c45e74b0794dfefaa8f58e1d_--operator().c)
 */

__int64 __fastcall GreGetRandomRgn(HDC a1, HRGN a2, int a3)
{
  unsigned int v6; // ebx
  unsigned __int16 v7; // ax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // rcx
  struct _POINTL v12; // rax
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // r8
  _QWORD v17[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v18[7]; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD v19[7]; // [rsp+80h] [rbp-88h] BYREF
  _BYTE v20[32]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v21[80]; // [rsp+D8h] [rbp-30h] BYREF
  struct _POINTL v22; // [rsp+160h] [rbp+58h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  v6 = 0;
  if ( !v19[0] )
    goto LABEL_4;
  v7 = *(_WORD *)(v19[0] + 12LL);
  if ( v7 == 1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v21);
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v19, 1);
    if ( (v20[24] & 1) == 0 )
    {
      v6 = -1;
LABEL_33:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
      goto LABEL_34;
    }
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, a2, 0, 0);
    if ( !v18[0] )
    {
      v6 = -1;
LABEL_32:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
      goto LABEL_33;
    }
    if ( a3 == 4 && (*(_DWORD *)(v19[0] + 36LL) & 0x4000) != 0 )
    {
      DC::AcquireDcVisRgnShared(v19[0], v17);
      v10 = lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator()(v9, v18, *(_QWORD *)(v19[0] + 1144LL));
      wil::details::lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___::_lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___(v17);
      if ( v10 == 1 )
      {
        v22 = 0LL;
        if ( (unsigned int)UserGetRedirectedWindowOrigin((__int64)a1, (__int64)&v22)
          && RGNOBJ::bOffset((RGNOBJ *)v18, &v22) )
        {
          v10 = 1;
        }
        else
        {
          v10 = -1;
        }
      }
    }
    else
    {
      switch ( a3 )
      {
        case 1:
          v15 = *(_QWORD *)(v19[0] + 160LL);
          break;
        case 2:
          v15 = *(_QWORD *)(v19[0] + 168LL);
          break;
        case 3:
          v12 = *(struct _POINTL *)(v19[0] + 168LL);
          v13 = *(_QWORD *)(v19[0] + 160LL);
          if ( v12 )
          {
            v14 = v13 == 0;
            if ( v13 )
            {
              v17[0] = *(_QWORD *)(v19[0] + 160LL);
              v22 = v12;
              v6 = RGNOBJAPI::iCombine((RGNOBJAPI *)v18, (struct RGNOBJ *)v17, (struct RGNOBJ *)&v22, 1) != 0 ? 1 : -1;
              goto LABEL_32;
            }
          }
          else
          {
            v14 = v13 == 0;
          }
          if ( !v14 )
            v12 = *(struct _POINTL *)(v19[0] + 160LL);
          v6 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator())(
                 v13,
                 v18,
                 v12);
          goto LABEL_32;
        default:
          if ( (unsigned int)(a3 - 4) <= 1 )
          {
            DC::AcquireDcVisRgnShared(v19[0], v17);
            v6 = lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator()(v11, v18, *(_QWORD *)(v19[0] + 1144LL));
            wil::details::lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___::_lambda_call__lambda_d150346b5c71168d09061e3033a04ee6___(v17);
          }
          goto LABEL_32;
      }
      v10 = lambda_6307e9d0c45e74b0794dfefaa8f58e1d_::operator()(v8, v18, v15);
    }
    v6 = v10;
    goto LABEL_32;
  }
  TraceLoggingWriteUnsupportedGdiUsage(21LL, 0LL, v7);
LABEL_4:
  EngSetLastError(6u);
  v6 = -1;
LABEL_34:
  DCOBJ::~DCOBJ((DCOBJ *)v19);
  return v6;
}
