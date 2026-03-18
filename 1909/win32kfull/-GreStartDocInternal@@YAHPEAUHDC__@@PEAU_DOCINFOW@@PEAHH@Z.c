/*
 * XREFs of ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C00F8214
 * Callers:
 *     NtGdiStartDoc @ 0x1C00F7C50 (NtGdiStartDoc.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AB2B4 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C00AD64C (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00AD68C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C00F85C0 (-vDone@RESTORESAVEDCATTRS@@QEAAXXZ.c)
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C00F85E8 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C00F8610 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreExtEscape @ 0x1C0123CDC (GreExtEscape.c)
 *     _guard_dispatch_icall_nop @ 0x1C01680F0 (_guard_dispatch_icall_nop.c)
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C0285014 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 */

__int64 __fastcall GreStartDocInternal(HDC a1, struct _DOCINFOW *a2, int *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  DC *v9; // r10
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 (__fastcall *v16)(__int64, LPCWSTR, _QWORD); // rdi
  int v17; // edi
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  XDCOBJ *v21; // [rsp+40h] [rbp-20h] BYREF
  DC *v22[3]; // [rsp+48h] [rbp-18h] BYREF

  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22, a1);
  v9 = v22[0];
  if ( !v22[0] )
    return v8;
  if ( ((unsigned int)a1 & 0x7F0000) != 0x10000 && ((unsigned int)a1 & 0x7F0000) != 0x660000 )
  {
    v10 = *((_QWORD *)v22[0] + 6);
    v20 = v10;
    v11 = *(_DWORD *)(v10 + 40);
    if ( (v11 & 1) == 0 && *(_QWORD *)(v10 + 2560) && !*((_DWORD *)v22[0] + 8) && !*((_QWORD *)v22[0] + 62) )
    {
      if ( (v11 & 0x8000) != 0 )
      {
        if ( PDEVOBJ::bMakeSurface((PDEVOBJ *)&v20, 0LL) )
        {
          v12 = v20;
          *a3 = *(_DWORD *)(*(_QWORD *)(v20 + 2552) + 112LL) & 0x2000000;
          DC::pSurface(v22[0], *(struct SURFACE **)(v12 + 2552));
          if ( *a3 )
          {
            *((_QWORD *)v22[0] + 64) = *(_QWORD *)(*(_QWORD *)(v20 + 2552) + 56LL);
            DC::bSetDefaultRegion(v22[0]);
          }
          v21 = 0LL;
          v16 = *(__int64 (__fastcall **)(__int64, LPCWSTR, _QWORD))(v20 + 2968);
          if ( (*(_DWORD *)(v20 + 40) & 0x8000) != 0 )
          {
            v21 = (XDCOBJ *)v22;
            if ( (*((_DWORD *)v22[0] + 11) & 2) != 0 )
            {
              XDCOBJ::RestoreAttributesHelper((XDCOBJ *)v22);
              *((_DWORD *)v22[0] + 11) &= ~2u;
            }
          }
          if ( gUMPDSecurityLevel == 2
            || gUMPDSecurityLevel
            && (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(gUMPDSecurityLevel, v13, v14, v15),
                (unsigned int)bIsProcessLocalSystem(CurrentProcess))
            || v16 )
          {
            v17 = v16(
                    (*(_QWORD *)(v20 + 2552) + 24LL) & -(__int64)(*(_QWORD *)(v20 + 2552) != 0LL),
                    a2->lpszDocName,
                    a4);
          }
          else
          {
            if ( gfUMPDDebug )
              DbgPrint("windows\\core\\ntgdi\\gre\\windows\\print.cxx:%d:GreStartDocInternal:!pfnDrvstartDoc\n", 1713);
            v17 = 0;
          }
          RESTORESAVEDCATTRS::vDone((RESTORESAVEDCATTRS *)&v21);
          v9 = v22[0];
          if ( *((_DWORD *)v22[0] + 519) != -1 )
          {
            GreExtEscape(a1, 0, 0LL);
            *((_DWORD *)v22[0] + 519) = -1;
            v9 = v22[0];
          }
          if ( (*((_DWORD *)v9 + 9) & 0x400) != 0 )
          {
            GreExtEscape(a1, 0, 0LL);
            *((_DWORD *)v22[0] + 9) &= ~0x400u;
            v9 = v22[0];
          }
          if ( v17 )
          {
            v8 = a4;
            *((_DWORD *)v9 + 27) = *((_DWORD *)v9 + 26);
            v9 = v22[0];
          }
          if ( !v21 )
            goto LABEL_26;
          XDCOBJ::vSaveAttributesAlways(v21);
        }
        v9 = v22[0];
      }
      else
      {
        v8 = -1;
      }
    }
  }
LABEL_26:
  if ( v9 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  return v8;
}
