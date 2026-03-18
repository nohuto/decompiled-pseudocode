/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00E2D90
 * Callers:
 *     NtGdiStartDoc @ 0x1C00E25D0 (NtGdiStartDoc.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0056E10 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bValid@RFONTOBJ@@QEBAHXZ @ 0x1C0057D8C (-bValid@RFONTOBJ@@QEBAHXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0094930 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     GreExtEscape @ 0x1C0098E04 (GreExtEscape.c)
 *     _TlgKeywordOn @ 0x1C00DA1F0 (_TlgKeywordOn.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C00E3330 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C00E3370 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C00E3398 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00E340C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // r9d
  __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64, LPCWSTR, _QWORD); // rdi
  struct _EPROCESS *CurrentProcess; // rax
  int v18; // edi
  DC *v19; // rcx
  int v21; // [rsp+30h] [rbp-99h] BYREF
  __int64 v22; // [rsp+38h] [rbp-91h] BYREF
  char v23[8]; // [rsp+40h] [rbp-89h] BYREF
  XDCOBJ *v24; // [rsp+48h] [rbp-81h] BYREF
  DC *v25[6]; // [rsp+50h] [rbp-79h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+80h] [rbp-49h] BYREF
  int *v27; // [rsp+A0h] [rbp-29h]
  __int64 v28; // [rsp+A8h] [rbp-21h]
  XDCOBJ **v29; // [rsp+B0h] [rbp-19h]
  __int64 v30; // [rsp+B8h] [rbp-11h]
  __int64 *v31; // [rsp+C0h] [rbp-9h]
  __int64 v32; // [rsp+C8h] [rbp-1h]
  char *v33; // [rsp+D0h] [rbp+7h]
  __int64 v34; // [rsp+D8h] [rbp+Fh]

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v25, a1);
  if ( RFONTOBJ::bValid((RFONTOBJ *)v25) )
  {
    if ( *((_WORD *)v25[0] + 6) != 1 )
    {
      if ( hProvider > 5u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000000uLL) )
      {
        v21 = 74780;
        v27 = &v21;
        v29 = &v24;
        v31 = &v22;
        v33 = v23;
        v28 = 4LL;
        v24 = (XDCOBJ *)0x1000000;
        v30 = 8LL;
        LODWORD(v22) = v9;
        v32 = 4LL;
        *(_DWORD *)v23 = 0;
        v34 = 4LL;
        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C02D707D, 0LL, 0LL, 6u, &pData);
      }
      goto LABEL_13;
    }
    if ( ((unsigned int)a1 & 0x7F0000) != 0x10000 && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
    {
      v10 = *((_QWORD *)v25[0] + 6);
      v22 = v10;
      v11 = *(_DWORD *)(v10 + 40);
      if ( (v11 & 1) == 0 && *(_QWORD *)(v10 + 2560) && !*((_DWORD *)v25[0] + 8) && !*((_QWORD *)v25[0] + 62) )
      {
        if ( (v11 & 0x8000) == 0 )
        {
LABEL_13:
          v8 = -1;
          goto LABEL_36;
        }
        if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v22, 0LL) )
        {
          v12 = v22;
          *a3 = *(_DWORD *)(*(_QWORD *)(v22 + 2552) + 112LL) & 0x2000000;
          DC::pSurface(v25[0], *(struct SURFACE **)(v12 + 2552));
          if ( *a3 )
            *((_QWORD *)v25[0] + 64) = *(_QWORD *)(*(_QWORD *)(v22 + 2552) + 56LL);
          DC::bSetDefaultRegion(v25[0]);
          v24 = 0LL;
          v16 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v22 + 2968);
          if ( (*(_DWORD *)(v22 + 40) & 0x8000) != 0 )
          {
            v24 = (XDCOBJ *)v25;
            if ( (*((_DWORD *)v25[0] + 11) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v25);
              *((_DWORD *)v25[0] + 11) &= ~2u;
            }
          }
          if ( gUMPDSecurityLevel == 2
            || gUMPDSecurityLevel
            && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v13, v14, v15),
                (unsigned int)bIsProcessLocalSystem(CurrentProcess))
            || v16 )
          {
            v18 = v16(
                    -(__int64)(*(_QWORD *)(v22 + 2552) != 0LL) & (*(_QWORD *)(v22 + 2552) + 24LL),
                    a2->lpszDocName,
                    a4);
          }
          else
          {
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n", 1730);
            v18 = 0;
          }
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v24);
          v19 = v25[0];
          if ( *((_DWORD *)v25[0] + 525) != -1 )
          {
            *(_DWORD *)v23 = *((_DWORD *)v25[0] + 525);
            GreExtEscape(a1, 0x11u, 4u, v23, 0, 0LL);
            *((_DWORD *)v25[0] + 525) = -1;
            v19 = v25[0];
          }
          if ( (*((_DWORD *)v19 + 9) & 0x400) != 0 )
          {
            LOWORD(v21) = 1;
            GreExtEscape(a1, 0x21u, 2u, (char *)&v21, 0, 0LL);
            *((_DWORD *)v25[0] + 9) &= ~0x400u;
            v19 = v25[0];
          }
          if ( v18 )
          {
            v8 = a4;
            *((_DWORD *)v19 + 27) = *((_DWORD *)v19 + 26);
          }
          if ( v24 )
            XDCOBJ::vSaveAttributesAlways(v24);
        }
      }
    }
  }
LABEL_36:
  DCOBJ::~DCOBJ((DCOBJ *)v25);
  return v8;
}
