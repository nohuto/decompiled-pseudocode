/*
 * XREFs of GreSetMagicColors @ 0x1C00D820C
 * Callers:
 *     SetSysColor @ 0x1C005CA18 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C00D84A0 (NtGdiSetMagicColors.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0022C20 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0022CF8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002AAF0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002D39C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0031970 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0031A50 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00334E0 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0033588 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C003E520 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005AB30 (EtwTraceGreLockReleaseSemaphore.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C00D80C0 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  int v8; // r12d
  int v9; // r8d
  __int64 v10; // rbx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  int v13; // edx
  unsigned int v14; // eax
  __int64 v15; // rdx
  int v16; // r8d
  unsigned int v17; // ecx
  unsigned int v18; // r9d
  unsigned int v19; // eax
  __int64 v20; // rdx
  int v21; // r8d
  __int64 v22; // rdx
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v26; // [rsp+30h] [rbp-59h] BYREF
  struct PALETTE *v27; // [rsp+38h] [rbp-51h] BYREF
  struct _ERESOURCE *v28; // [rsp+40h] [rbp-49h] BYREF
  struct _ERESOURCE *v29; // [rsp+48h] [rbp-41h] BYREF
  struct _ERESOURCE *v30; // [rsp+50h] [rbp-39h] BYREF
  PERESOURCE v31; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v32[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v33[80]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v34; // [rsp+108h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v32, a1);
  v5 = v32[0];
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( v32[0] )
  {
    if ( a3 - 8 > 1 && a3 - 246 > 1 )
    {
LABEL_38:
      XDCOBJ::vUnlockFast((XDCOBJ *)v32);
      return v6;
    }
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v34);
    if ( (a2 & 0xFD000000) != 0 )
    {
LABEL_36:
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v9);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v24);
      }
      goto LABEL_38;
    }
    v10 = *(_QWORD *)(v5 + 48);
    v34 = v10;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v31, (struct PDEVOBJ *)&v34);
    v30 = *(struct _ERESOURCE **)(v10 + 56);
    EngAcquireSemaphore((HSEMAPHORE)v30);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v33, (struct PDEVOBJ *)&v34);
    if ( (*(_DWORD *)(v10 + 2164) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v10 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v33);
        SEMOBJ::vUnlock(&v30, v22, v23);
        NEEDGRELOCK::vUnlock(&v31);
        goto LABEL_36;
      }
      v11 = *(_QWORD *)(v10 + 1792);
      v12 = *(_QWORD **)v11;
      v13 = *(_DWORD *)(v11 + 16);
      while ( 1 )
      {
        v10 = v12[6];
        v34 = v10;
        if ( (*(_DWORD *)(v10 + 2164) & 0x100) != 0 )
          break;
        v12 = (_QWORD *)*v12;
        if ( !--v13 )
          goto LABEL_35;
      }
      v8 = 1;
    }
    v26 = *(_QWORD *)(v10 + 1800);
    v29 = (struct _ERESOURCE *)ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v28 = (struct _ERESOURCE *)ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v27 = ppalDefault;
    v14 = XEPALOBJ::ulDispatchGFPEFunction(&v27, *((_DWORD *)ppalDefault + 25), a2);
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
        v19 = bSetMagicColor((__int64)&v34, v26, a3, v18);
        goto LABEL_28;
      }
    }
    v19 = bSetMagicColor((__int64)&v34, v26, a3, a2);
    v6 = v19;
LABEL_28:
    v7 = v19;
LABEL_29:
    SEMOBJ::vUnlock(&v28, v15, v16);
    if ( v7 && (*(_DWORD *)(v10 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v10 + 1760) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v10 + 1760))(
          *(_QWORD *)(*(_QWORD *)(v10 + 24) + 1792LL),
          &v26,
          0LL,
          0LL,
          *(_DWORD *)(v26 + 28));
      else
        v6 = 0;
    }
    SEMOBJ::vUnlock(&v29, v20, v21);
    goto LABEL_35;
  }
  return v6;
}
