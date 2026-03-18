/*
 * XREFs of NtGdiEndPage @ 0x1C0248C70
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
 *     _guard_dispatch_icall_nop @ 0x1C013D370 (_guard_dispatch_icall_nop.c)
 *     GreDeleteWnd @ 0x1C0258760 (GreDeleteWnd.c)
 */

__int64 __fastcall NtGdiEndPage(HDC a1)
{
  int v1; // ebx
  unsigned int v2; // r14d
  __int64 v3; // rdx
  int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdi
  int v7; // eax
  XDCOBJ *v8; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  EWNDOBJ *v10; // rcx
  _QWORD v12[2]; // [rsp+20h] [rbp-10h] BYREF
  XDCOBJ *v13; // [rsp+58h] [rbp+28h] BYREF

  v1 = (int)a1;
  v2 = 0;
  MDCOBJ::MDCOBJ((MDCOBJ *)v12, a1);
  if ( (unsigned int)XDCOBJ::bValidSurf((XDCOBJ *)v12) )
  {
    v4 = v1 & 0x7F0000;
    if ( v4 != 0x10000 && v4 != 6684672 )
    {
      v5 = *(_QWORD *)(v12[0] + 504LL);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v12[0] + 48LL);
        v7 = *(_DWORD *)(v6 + 40);
        if ( (v7 & 1) == 0 )
        {
          if ( *(_QWORD *)(v6 + 2552) )
          {
            v8 = 0LL;
            v13 = 0LL;
            if ( (v7 & 0x8000) != 0 )
            {
              v8 = (XDCOBJ *)v12;
              v13 = (XDCOBJ *)v12;
              XDCOBJ::vRestoreAttributesAlways((XDCOBJ *)v12);
            }
            if ( gUMPDSecurityLevel == 2
              || gUMPDSecurityLevel
              && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v3),
                  (unsigned int)bIsProcessLocalSystem(CurrentProcess))
              || *(_QWORD *)(v6 + 2936) )
            {
              v2 = (*(__int64 (__fastcall **)(__int64))(v6 + 2936))((v5 + 24) & -(__int64)(v5 != 0));
              if ( v2 )
              {
                RESTORESAVEDCATTRS::vDone(&v13);
                if ( (*(_DWORD *)(v6 + 40) & 0x8000) != 0 )
                {
                  *(_DWORD *)(v12[0] + 36LL) &= ~0x100u;
                  v10 = *(EWNDOBJ **)(v5 + 136);
                  if ( v10 )
                  {
                    GreDeleteWnd(v10);
                    *(_QWORD *)(v5 + 136) = 0LL;
                  }
                  *(_WORD *)(v12[0] + 2480LL) = -1;
                }
                v8 = v13;
              }
            }
            else if ( gfUMPDDebug )
            {
              DbgPrint(
                "windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:NtGdiEndPage:!(PPFNVALID(po, SendPage))\n",
                2336);
            }
            if ( v8 )
              XDCOBJ::vSaveAttributesAlways(v8);
          }
        }
      }
    }
  }
  if ( v12[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v12);
  return v2;
}
