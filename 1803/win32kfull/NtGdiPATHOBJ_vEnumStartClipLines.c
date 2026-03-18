/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C0285510
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C011F4AC (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C011F8C0 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C0281DFC (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C0282164 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C028BA90 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v8; // rbx
  unsigned int v9; // edi
  unsigned __int64 v10; // rax
  SURFOBJ *v11; // rbp
  PATHOBJ *v12; // r14
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v14; // rsi
  LINEATTRS *v15; // rdi
  PFLOAT_LONG pstyle; // rcx
  SURFOBJ *pso; // [rsp+20h] [rbp-58h] BYREF
  int v19; // [rsp+28h] [rbp-50h]
  struct _LINEATTRS v20; // [rsp+30h] [rbp-48h] BYREF
  LINEATTRS *pla; // [rsp+98h] [rbp+20h] BYREF
  va_list plaa; // [rsp+98h] [rbp+20h]
  va_list va1; // [rsp+A0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
  {
    v9 = -1073741811;
    goto LABEL_24;
  }
  ++*((_DWORD *)ThreadCurrentObj + 105);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)&pso, a3, ThreadCurrentObj);
  v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)v8, a1);
  v11 = pso;
  v12 = (PATHOBJ *)v10;
  if ( pso && v10 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v20) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v8, a2, &v11->sizlBitmap);
    v14 = DDIOBJ;
    if ( (*((_DWORD *)v8 + 103) & 0x100) == 0 )
    {
      v15 = pla;
      goto LABEL_18;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        3974);
    v15 = pla;
    if ( !pla && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        3979);
    if ( !v14 )
      goto LABEL_19;
    if ( v15 )
    {
LABEL_18:
      PATHOBJ_vEnumStartClipLines(v12, v14, v11, v15);
LABEL_19:
      if ( v15 )
      {
        pstyle = v15->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  v9 = 0;
  if ( v19 )
    EngUnlockSurface(v11);
LABEL_24:
  if ( v8 )
    --*((_DWORD *)v8 + 105);
  return v9;
}
