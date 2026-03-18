/*
 * XREFs of NtGdiStartPage @ 0x1C00E3160
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
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C015F82C (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01632C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r14
  __int64 v7; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-30h] BYREF
  _BYTE v11[32]; // [rsp+30h] [rbp-20h] BYREF
  XDCOBJ *v12; // [rsp+78h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v10)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
  }
  else
  {
    v6 = *(_QWORD *)(v10[0] + 496LL);
    if ( v6 )
    {
      v7 = *(_QWORD *)(v10[0] + 48LL);
      if ( *(_QWORD *)(v7 + 2560) )
      {
        if ( (*(_DWORD *)(v7 + 40) & 0x8000) != 0 )
        {
          v12 = (XDCOBJ *)v10;
          if ( (*(_DWORD *)(v10[0] + 44LL) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v10);
            *(_DWORD *)(v10[0] + 44LL) &= ~2u;
          }
          if ( gUMPDSecurityLevel == 2
            || gUMPDSecurityLevel
            && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3, v4, v5),
                (unsigned int)bIsProcessLocalSystem(CurrentProcess))
            || *(_QWORD *)(v7 + 2952) )
          {
            v2 = (*(__int64 (__fastcall **)(__int64))(v7 + 2952))((v6 + 24) & -(__int64)(v6 != 0));
          }
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v12);
          if ( v2 )
          {
            *(_DWORD *)(v10[0] + 36LL) |= 0x100u;
            *(_DWORD *)(v10[0] + 2112LL) = 0;
            *(_DWORD *)(v10[0] + 2116LL) = 0;
          }
          else
          {
            bEndDocInternal(a1, 1u, 2u);
          }
          if ( v12 )
            XDCOBJ::vSaveAttributesAlways(v12);
        }
      }
    }
  }
  MDCOBJ::~MDCOBJ((MDCOBJ *)v10);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v11);
  return v2;
}
