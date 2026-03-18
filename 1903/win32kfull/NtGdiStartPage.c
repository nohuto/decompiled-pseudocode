/*
 * XREFs of NtGdiStartPage @ 0x1C010FB70
 * Callers:
 *     <none>
 * Callees:
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0035FE8 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C006110C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0061358 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C0072B7C (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C010FCC0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C010FCE8 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0164C44 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C01664D0 (_guard_dispatch_icall_nop.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C02856D4 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v11[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v12; // [rsp+58h] [rbp+28h] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v11)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
LABEL_17:
    v6 = v11[0];
    goto LABEL_18;
  }
  v6 = v11[0];
  v7 = *(_QWORD *)(v11[0] + 496LL);
  if ( v7 )
  {
    v8 = *(_QWORD *)(v11[0] + 48LL);
    if ( *(_QWORD *)(v8 + 2560) )
    {
      if ( (*(_DWORD *)(v8 + 40) & 0x8000) != 0 )
      {
        v12 = (XDCOBJ *)v11;
        if ( (*(_DWORD *)(v11[0] + 44LL) & 2) != 0 )
        {
          XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v11);
          *(_DWORD *)(v11[0] + 44LL) &= ~2u;
        }
        if ( gUMPDSecurityLevel == 2
          || gUMPDSecurityLevel
          && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3, v4, v5),
              (unsigned int)bIsProcessLocalSystem(CurrentProcess))
          || *(_QWORD *)(v8 + 2952) )
        {
          v2 = (*(__int64 (__fastcall **)(__int64))(v8 + 2952))((v7 + 24) & -(__int64)(v7 != 0));
        }
        RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v12);
        if ( v2 )
        {
          *(_DWORD *)(v11[0] + 36LL) |= 0x100u;
          *(_DWORD *)(v11[0] + 2088LL) = 0;
          *(_DWORD *)(v11[0] + 2092LL) = 0;
        }
        else
        {
          bEndDocInternal(a1, 1u, 2u);
        }
        if ( v12 )
          XDCOBJ::vSaveAttributesAlways(v12);
        goto LABEL_17;
      }
    }
  }
LABEL_18:
  if ( v6 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v11);
  return v2;
}
