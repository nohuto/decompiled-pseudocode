/*
 * XREFs of NtGdiEndPage @ 0x1C0260D10
 * Callers:
 *     <none>
 * Callees:
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C004CA70 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0056C48 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0094930 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C00E3330 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C00E3370 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C00E3398 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C015E8E8 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??1MDCOBJ@@QEAA@XZ @ 0x1C015EAE8 (--1MDCOBJ@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C026B980 (GreDeleteWnd.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // r14d
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // ebx
  __int64 v7; // rsi
  __int64 v8; // rdi
  int v9; // ecx
  XDCOBJ *v10; // rbx
  int v11; // eax
  struct _EPROCESS *CurrentProcess; // rax
  EWNDOBJ *v13; // rcx
  _QWORD v15[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v16[32]; // [rsp+30h] [rbp-20h] BYREF
  XDCOBJ *v17; // [rsp+78h] [rbp+28h] BYREF

  v1 = (int)a1;
  v2 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v15) )
  {
    v6 = v1 & 0x7F0000;
    if ( v6 != 0x10000 && v6 != 6684672 )
    {
      v7 = *(_QWORD *)(v15[0] + 496LL);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v15[0] + 48LL);
        v9 = *(_DWORD *)(v8 + 40);
        if ( (v9 & 1) == 0 )
        {
          if ( *(_QWORD *)(v8 + 2560) )
          {
            v10 = 0LL;
            v17 = 0LL;
            if ( (v9 & 0x8000) != 0 )
            {
              v11 = *(_DWORD *)(v15[0] + 44LL);
              v10 = (XDCOBJ *)v15;
              v17 = (XDCOBJ *)v15;
              if ( (v11 & 2) != 0 )
              {
                XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v15);
                *(_DWORD *)(v15[0] + 44LL) &= ~2u;
              }
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3, v4, v5),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || *(_QWORD *)(v8 + 2944) )
            {
              v2 = (*(__int64 (__fastcall **)(__int64))(v8 + 2944))((v7 + 24) & -(__int64)(v7 != 0));
              if ( v2 )
              {
                RESTORESAVEDCATTRS::vDone(&v17);
                if ( (*(_DWORD *)(v8 + 40) & 0x8000) != 0 )
                {
                  *(_DWORD *)(v15[0] + 36LL) &= ~0x100u;
                  v13 = *(EWNDOBJ **)(v7 + 136);
                  if ( v13 )
                  {
                    GreDeleteWnd(v13);
                    *(_QWORD *)(v7 + 136) = 0LL;
                  }
                  *(_WORD *)(v15[0] + 2096LL) = -1;
                }
                v10 = v17;
              }
            }
            else if ( gfUMPDDebug )
            {
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:NtGdiEndPage:!(PPFNVALID(po, SendPage))\n",
                2355);
            }
            if ( v10 )
              XDCOBJ::vSaveAttributesAlways(v10);
          }
        }
      }
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v15);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v16);
  return v2;
}
