/*
 * XREFs of GreSetMagicColors @ 0x1C01061E4
 * Callers:
 *     SetSysColor @ 0x1C0042D4C (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C01064A0 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C001C89C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C001DE38 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C001DE98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0029BC4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0029C48 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0029E50 (EngAcquireSemaphore.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C002B910 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C005D7E0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C005E110 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0070990 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C00A0594 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C0106004 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  int v7; // r12d
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  int v12; // edx
  unsigned int v13; // eax
  unsigned int v14; // ecx
  unsigned int v15; // r9d
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp-99h] BYREF
  struct PALETTE *v22; // [rsp+38h] [rbp-91h] BYREF
  HSEMAPHORE v23; // [rsp+40h] [rbp-89h] BYREF
  HSEMAPHORE v24; // [rsp+48h] [rbp-81h] BYREF
  HSEMAPHORE v25; // [rsp+50h] [rbp-79h] BYREF
  char v26[8]; // [rsp+58h] [rbp-71h] BYREF
  _QWORD v27[6]; // [rsp+60h] [rbp-69h] BYREF
  _BYTE v28[32]; // [rsp+90h] [rbp-39h] BYREF
  char v29[80]; // [rsp+B0h] [rbp-19h] BYREF
  __int64 v30; // [rsp+148h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( !v27[0] || a3 - 8 > 1 && a3 - 246 > 1 )
    goto LABEL_38;
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v30);
  if ( (a2 & 0xFD000000) == 0 )
  {
    v30 = *(_QWORD *)(v27[0] + 48LL);
    v9 = v30;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v26, (struct PDEVOBJ *)&v30);
    v25 = *(HSEMAPHORE *)(v9 + 64);
    EngAcquireSemaphore(v25);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v28, (struct PDEVOBJ *)&v30);
    if ( (*(_DWORD *)(v9 + 2172) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v9 + 40) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v28);
        DCOBJ::~DCOBJ((DCOBJ *)v29);
        SEMOBJ::vUnlock((PERESOURCE *)&v25);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v26, v17, v18);
        goto LABEL_36;
      }
      v10 = *(_QWORD *)(v9 + 1800);
      v11 = *(_QWORD **)v10;
      v12 = *(_DWORD *)(v10 + 16);
      while ( 1 )
      {
        v9 = v11[6];
        v30 = v9;
        if ( (*(_DWORD *)(v9 + 2172) & 0x100) != 0 )
          break;
        v11 = (_QWORD *)*v11;
        if ( !--v12 )
          goto LABEL_35;
      }
      v7 = 1;
    }
    v21 = *(_QWORD *)(v9 + 1808);
    v24 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v23 = ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v22 = ppalDefault;
    v13 = XEPALOBJ::ulDispatchGFPEFunction(&v22, *((_DWORD *)ppalDefault + 25), a2);
    v14 = v13;
    if ( v13 != -1 )
    {
      if ( v13 >= 0xA )
        v14 = v13 + 236;
      if ( v14 == a3 )
      {
        if ( !v7 )
        {
          v5 = 1;
          goto LABEL_29;
        }
      }
      else if ( v14 - 8 > 1 && v14 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v15 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v15 = 15780518;
        }
        else
        {
          v15 = 10789024;
          if ( a3 == 246 )
            v15 = 15793151;
        }
        v16 = bSetMagicColor((__int64)&v30, v21, a3, v15);
        goto LABEL_28;
      }
    }
    v16 = bSetMagicColor((__int64)&v30, v21, a3, a2);
    v5 = v16;
LABEL_28:
    v6 = v16;
LABEL_29:
    SEMOBJ::vUnlock((PERESOURCE *)&v23);
    if ( v6 && (*(_DWORD *)(v9 + 40) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v9 + 1768) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v9 + 1768))(
          *(_QWORD *)(*(_QWORD *)(v9 + 24) + 1800LL),
          &v21,
          0LL,
          0LL,
          *(_DWORD *)(v21 + 28));
      else
        v5 = 0;
    }
    SEMOBJ::vUnlock((PERESOURCE *)&v24);
    goto LABEL_35;
  }
LABEL_36:
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (__int64)ghsemDynamicModeChange, v8);
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion(v19);
  }
LABEL_38:
  DCOBJ::~DCOBJ((DCOBJ *)v27);
  return v5;
}
