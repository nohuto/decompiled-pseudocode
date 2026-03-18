/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02ADD50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C0057988 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C0057F68 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C005812C (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0062084 (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA640 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AA9F8 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C02B5F30 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v11; // rbx
  unsigned int v12; // edi
  unsigned __int64 v13; // rax
  SURFOBJ *v14; // rbp
  PATHOBJ *v15; // r14
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v17; // rsi
  LINEATTRS *v18; // rdi
  PFLOAT_LONG pstyle; // rcx
  SURFOBJ *pso; // [rsp+20h] [rbp-58h] BYREF
  int v22; // [rsp+28h] [rbp-50h]
  struct _LINEATTRS v23; // [rsp+30h] [rbp-48h] BYREF
  LINEATTRS *pla; // [rsp+98h] [rbp+20h] BYREF
  va_list plaa; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  memset(&v23, 0, sizeof(v23));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7, v8);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
    v12 = -1073741811;
    goto LABEL_24;
  }
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a3, ThreadCurrentObj);
  v13 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v11, a1);
  v14 = pso;
  v15 = (PATHOBJ *)v13;
  if ( pso && v13 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v23) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v11, a2, &v14->sizlBitmap);
    v17 = DDIOBJ;
    if ( (*((_DWORD *)v11 + 103) & 0x100) == 0 )
    {
      v18 = pla;
      goto LABEL_18;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        3974);
    v18 = pla;
    if ( !pla && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        3979);
    if ( !v17 )
      goto LABEL_19;
    if ( v18 )
    {
LABEL_18:
      PATHOBJ_vEnumStartClipLines(v15, v17, v14, v18);
LABEL_19:
      if ( v18 )
      {
        pstyle = v18->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  v12 = 0;
  if ( v22 )
    EngUnlockSurface(v14);
LABEL_24:
  if ( v11 )
    --*((_DWORD *)v11 + 105);
  return v12;
}
