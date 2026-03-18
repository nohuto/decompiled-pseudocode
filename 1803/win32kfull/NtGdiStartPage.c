/*
 * XREFs of NtGdiStartPage @ 0x1C011AF50
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bValidSurf@XDCOBJ@@QEAAHXZ @ 0x1C008F8E0 (-bValidSurf@XDCOBJ@@QEAAHXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C008FC84 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C00BA764 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C011B134 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C011C0E4 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C011C264 (-vRestoreAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C013B460 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiStartPage(HDC a1)
{
  unsigned int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdx
  struct _EPROCESS *CurrentProcess; // rax
  _QWORD v8[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v9; // [rsp+58h] [rbp+28h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v8, a1);
  v2 = 0;
  if ( !(unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v8)
    || ((unsigned int)a1 & 0x7F0000) == 0x10000
    || ((unsigned int)a1 & 0x7F0000) == 0x660000 )
  {
    EngSetLastError(6u);
  }
  else
  {
    v3 = *(_QWORD *)(v8[0] + 504LL);
    if ( v3 )
    {
      v4 = *(_QWORD *)(v8[0] + 48LL);
      if ( *(_QWORD *)(v4 + 2552) )
      {
        if ( (*(_DWORD *)(v4 + 40) & 0x8000) != 0 )
        {
          v9 = (XDCOBJ *)v8;
          XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v8);
          if ( gUMPDSecurityLevel == 2
            || gUMPDSecurityLevel
            && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v5),
                (unsigned int)bIsProcessLocalSystem(CurrentProcess))
            || *(_QWORD *)(v4 + 2944) )
          {
            v2 = (*(__int64 (__fastcall **)(__int64))(v4 + 2944))((v3 + 24) & -(__int64)(v3 != 0));
          }
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v9);
          if ( v2 )
          {
            *(_DWORD *)(v8[0] + 36LL) |= 0x100u;
            *(_DWORD *)(v8[0] + 2496LL) = 0;
            *(_DWORD *)(v8[0] + 2500LL) = 0;
          }
          else
          {
            bEndDocInternal(a1, 1u, 2u);
          }
          if ( v9 )
            XDCOBJ::vSaveAttributesAlways(v9);
        }
      }
    }
  }
  if ( v8[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v8);
  return v2;
}
