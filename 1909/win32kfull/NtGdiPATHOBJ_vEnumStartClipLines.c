/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C02AD8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C00A17F8 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C00A19BC (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     memset @ 0x1C0168440 (memset.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA190 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02AA548 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C02B5A80 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v10; // rbx
  unsigned int v11; // edi
  unsigned __int64 v12; // rax
  SURFOBJ *v13; // rbp
  PATHOBJ *v14; // r14
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v16; // rsi
  LINEATTRS *v17; // rdi
  PFLOAT_LONG pstyle; // rcx
  SURFOBJ *pso; // [rsp+20h] [rbp-58h] BYREF
  int v21; // [rsp+28h] [rbp-50h]
  struct _LINEATTRS v22; // [rsp+30h] [rbp-48h] BYREF
  LINEATTRS *pla; // [rsp+98h] [rbp+20h] BYREF
  va_list plaa; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  memset(&v22, 0, sizeof(v22));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v6, v7);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v10 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
    v11 = -1073741811;
    goto LABEL_24;
  }
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a3, ThreadCurrentObj);
  v12 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v10, a1);
  v13 = pso;
  v14 = (PATHOBJ *)v12;
  if ( pso && v12 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v22) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v10, a2, &v13->sizlBitmap);
    v16 = DDIOBJ;
    if ( (*((_DWORD *)v10 + 103) & 0x100) == 0 )
    {
      v17 = pla;
      goto LABEL_18;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        3974);
    v17 = pla;
    if ( !pla && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        3979);
    if ( !v16 )
      goto LABEL_19;
    if ( v17 )
    {
LABEL_18:
      PATHOBJ_vEnumStartClipLines(v14, v16, v13, v17);
LABEL_19:
      if ( v17 )
      {
        pstyle = v17->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  v11 = 0;
  if ( v21 )
    EngUnlockSurface(v13);
LABEL_24:
  if ( v10 )
    --*((_DWORD *)v10 + 105);
  return v11;
}
