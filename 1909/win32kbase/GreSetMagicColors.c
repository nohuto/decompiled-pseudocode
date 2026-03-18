/*
 * XREFs of GreSetMagicColors @ 0x1C012D79C
 * Callers:
 *     SetSysColor @ 0x1C0050768 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C012DA80 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0017A44 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001B230 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0020EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029F78 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029FFC (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C002BB10 (EngAcquireSemaphore.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002E230 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C003FD3C (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C006AE10 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070850 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C007CBF0 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00AE4E4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C012D654 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
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
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v29; // [rsp+30h] [rbp-59h] BYREF
  struct PALETTE *v30; // [rsp+38h] [rbp-51h] BYREF
  struct _ERESOURCE *v31; // [rsp+40h] [rbp-49h] BYREF
  struct _ERESOURCE *v32; // [rsp+48h] [rbp-41h] BYREF
  struct _ERESOURCE *v33; // [rsp+50h] [rbp-39h] BYREF
  char v34[8]; // [rsp+58h] [rbp-31h] BYREF
  _QWORD v35[2]; // [rsp+60h] [rbp-29h] BYREF
  _BYTE v36[32]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v37; // [rsp+90h] [rbp+7h] BYREF
  int v38; // [rsp+98h] [rbp+Fh]
  int v39; // [rsp+9Ch] [rbp+13h]
  __int16 v40; // [rsp+A0h] [rbp+17h]
  __int64 v41; // [rsp+108h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v35, a1);
  v5 = v35[0];
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( !v35[0] || a3 - 8 > 1 && a3 - 246 > 1 )
    goto LABEL_43;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v41);
  if ( (a2 & 0xFD000000) == 0 )
  {
    v10 = *(_QWORD *)(v5 + 48);
    v41 = v10;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v34, (struct PDEVOBJ *)&v41);
    v33 = *(struct _ERESOURCE **)(v10 + 64);
    EngAcquireSemaphore((HSEMAPHORE)v33);
    v37 = 0LL;
    v38 = 0;
    v39 = 0;
    v40 = 256;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v36, (struct PDEVOBJ *)&v41);
    if ( (*(_DWORD *)(v10 + 2172) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v10 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v36);
        v24 = v37;
        if ( v37 )
        {
          if ( (_BYTE)v40 )
          {
            *(_DWORD *)(v37 + 40) &= ~2u;
            v24 = v37;
            LOBYTE(v40) = 0;
          }
          if ( v24 )
            XDCOBJ::vUnlockFast((XDCOBJ *)&v37);
        }
        SEMOBJ::vUnlock(&v33, v22, v23);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v34, v25, v26);
        goto LABEL_41;
      }
      v11 = *(_QWORD *)(v10 + 1800);
      v12 = *(_QWORD **)v11;
      v13 = *(_DWORD *)(v11 + 16);
      while ( 1 )
      {
        v10 = v12[6];
        v41 = v10;
        if ( (*(_DWORD *)(v10 + 2172) & 0x100) != 0 )
          break;
        v12 = (_QWORD *)*v12;
        if ( !--v13 )
          goto LABEL_35;
      }
      v8 = 1;
    }
    v29 = *(_QWORD *)(v10 + 1808);
    v32 = (struct _ERESOURCE *)ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v31 = (struct _ERESOURCE *)ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v30 = ppalDefault;
    v14 = XEPALOBJ::ulDispatchGFPEFunction(&v30, *((_DWORD *)ppalDefault + 25), a2);
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
        v19 = bSetMagicColor((__int64)&v41, v29, a3, v18);
        goto LABEL_28;
      }
    }
    v19 = bSetMagicColor((__int64)&v41, v29, a3, a2);
    v6 = v19;
LABEL_28:
    v7 = v19;
LABEL_29:
    SEMOBJ::vUnlock(&v31, v15, v16);
    if ( v7 && (*(_DWORD *)(v10 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v10 + 1768) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v10 + 1768))(
          *(_QWORD *)(*(_QWORD *)(v10 + 24) + 1800LL),
          &v29,
          0LL,
          0LL,
          *(_DWORD *)(v29 + 28));
      else
        v6 = 0;
    }
    SEMOBJ::vUnlock(&v32, v20, v21);
    goto LABEL_35;
  }
LABEL_41:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v9);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v27);
  }
LABEL_43:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v35);
  return v6;
}
