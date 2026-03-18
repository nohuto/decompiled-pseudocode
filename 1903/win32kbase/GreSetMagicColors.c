/*
 * XREFs of GreSetMagicColors @ 0x1C012FF4C
 * Callers:
 *     SetSysColor @ 0x1C00521EC (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C0130230 (NtGdiSetMagicColors.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0014600 (EngAcquireSemaphore.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00151C0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0018218 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C00200C0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C003AE70 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C003C27C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003DDAC (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C004D430 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C004D8D0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00547C0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0077760 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00B1414 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C012FE04 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  int v8; // r12d
  __int64 v9; // r8
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v27; // [rsp+30h] [rbp-59h] BYREF
  struct PALETTE *v28; // [rsp+38h] [rbp-51h] BYREF
  PERESOURCE v29; // [rsp+40h] [rbp-49h] BYREF
  struct _ERESOURCE *v30; // [rsp+48h] [rbp-41h] BYREF
  struct _ERESOURCE *v31; // [rsp+50h] [rbp-39h] BYREF
  PERESOURCE v32; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v33[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v34[32]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v35; // [rsp+90h] [rbp+7h] BYREF
  int v36; // [rsp+98h] [rbp+Fh]
  int v37; // [rsp+9Ch] [rbp+13h]
  __int16 v38; // [rsp+A0h] [rbp+17h]
  __int64 v39; // [rsp+108h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v33, a1);
  v5 = v33[0];
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( !v33[0] || a3 - 8 > 1 && a3 - 246 > 1 )
    goto LABEL_43;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v39);
  if ( (a2 & 0xFD000000) == 0 )
  {
    v10 = *(_QWORD *)(v5 + 48);
    v39 = v10;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v32, (struct PDEVOBJ *)&v39);
    v31 = *(struct _ERESOURCE **)(v10 + 64);
    EngAcquireSemaphore((HSEMAPHORE)v31);
    v35 = 0LL;
    v36 = 0;
    v37 = 0;
    v38 = 256;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v34, (struct PDEVOBJ *)&v39);
    if ( (*(_DWORD *)(v10 + 2172) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v10 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v34);
        v24 = v35;
        if ( v35 )
        {
          if ( (_BYTE)v38 )
          {
            *(_DWORD *)(v35 + 40) &= ~2u;
            v24 = v35;
            LOBYTE(v38) = 0;
          }
          if ( v24 )
            XDCOBJ::vUnlockFast((XDCOBJ *)&v35);
        }
        SEMOBJ::vUnlock(&v31, v22, v23);
        NEEDGRELOCK::vUnlock(&v32);
        goto LABEL_41;
      }
      v11 = *(_QWORD *)(v10 + 1800);
      v12 = *(_QWORD **)v11;
      v13 = *(_DWORD *)(v11 + 16);
      while ( 1 )
      {
        v10 = v12[6];
        v39 = v10;
        if ( (*(_DWORD *)(v10 + 2172) & 0x100) != 0 )
          break;
        v12 = (_QWORD *)*v12;
        if ( !--v13 )
          goto LABEL_35;
      }
      v8 = 1;
    }
    v27 = *(_QWORD *)(v10 + 1808);
    v30 = (struct _ERESOURCE *)ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v29 = ghsemPalette;
    EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
    v28 = ppalDefault;
    v14 = XEPALOBJ::ulDispatchGFPEFunction(&v28, *((_DWORD *)ppalDefault + 25), a2);
    v17 = v14;
    if ( v14 != -1 )
    {
      if ( v14 >= 0xA )
        v17 = v14 + 236;
      if ( v17 == a3 )
      {
        if ( !v8 )
        {
          v6 = 1;
          goto LABEL_29;
        }
      }
      else if ( v17 - 8 > 1 && v17 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v18 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v18 = 15780518;
        }
        else
        {
          v18 = 10789024;
          if ( a3 == 246 )
            v18 = 15793151;
        }
        v19 = bSetMagicColor((__int64)&v39, v27, a3, v18);
        goto LABEL_28;
      }
    }
    v19 = bSetMagicColor((__int64)&v39, v27, a3, a2);
    v6 = v19;
LABEL_28:
    v7 = v19;
LABEL_29:
    SEMOBJ::vUnlock(&v29, v15, v16);
    if ( v7 && (*(_DWORD *)(v10 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v10 + 1768) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v10 + 1768))(
          *(_QWORD *)(*(_QWORD *)(v10 + 24) + 1800LL),
          &v27,
          0LL,
          0LL,
          *(_DWORD *)(v27 + 28));
      else
        v6 = 0;
    }
    SEMOBJ::vUnlock(&v30, v20, v21);
    goto LABEL_35;
  }
LABEL_41:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v9);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v25);
  }
LABEL_43:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v33);
  return v6;
}
