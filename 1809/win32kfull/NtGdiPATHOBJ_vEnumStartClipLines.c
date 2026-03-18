/*
 * XREFs of NtGdiPATHOBJ_vEnumStartClipLines @ 0x1C0298E20
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0065998 (W32GetThreadWin32Thread.c)
 *     ??0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z @ 0x1C008F224 (--0UMPDSURFOBJ@@QEAA@PEAU_SURFOBJ@@PEAVUMPDOBJ@@@Z.c)
 *     ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1C008F510 (-GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C008F998 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C01208D4 (--1CAutoTGO@@QEAA@XZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C015EB5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x1C0162010 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 *     ?bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ @ 0x1C016211C (-bIncrementEngCallRecursionCount@UMPDOBJ@@AEAAEXZ.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C0295228 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 *     ?bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z @ 0x1C02955E8 (-bCaptureLINEATTRS@@YAHPEAPEAU_LINEATTRS@@PEAU1@@Z.c)
 *     ?vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ @ 0x1C0295A14 (-vDecrementEngCallRecursionCount@UMPDOBJ@@AEAAXXZ.c)
 *     PATHOBJ_vEnumStartClipLines @ 0x1C029F2C0 (PATHOBJ_vEnumStartClipLines.c)
 */

__int64 NtGdiPATHOBJ_vEnumStartClipLines(__int64 a1, struct _CLIPOBJ *a2, struct _SURFOBJ *a3, ...)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rbx
  unsigned int v8; // edi
  SURFOBJ *v10; // r14
  unsigned __int64 v11; // rax
  PATHOBJ *v12; // rbp
  struct _CLIPOBJ *DDIOBJ; // rax
  CLIPOBJ *v14; // rsi
  LINEATTRS *v15; // rdi
  PFLOAT_LONG pstyle; // rcx
  struct _LINEATTRS v17; // [rsp+20h] [rbp-88h] BYREF
  SURFOBJ *pso[3]; // [rsp+50h] [rbp-58h] BYREF
  _BYTE v19[40]; // [rsp+68h] [rbp-40h] BYREF
  LINEATTRS *pla; // [rsp+C8h] [rbp+20h] BYREF
  va_list plaa; // [rsp+C8h] [rbp+20h]
  va_list va1; // [rsp+D0h] [rbp+28h] BYREF

  va_start(va1, a3);
  va_start(plaa, a3);
  pla = va_arg(va1, LINEATTRS *);
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), (__int64)a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  if ( !ThreadCurrentObj )
    goto LABEL_5;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&g_Feature_1709650232_59778887_FeatureDescriptorDetails) )
  {
    if ( !UMPDOBJ::bIncrementEngCallRecursionCount(ThreadCurrentObj) )
    {
      ThreadCurrentObj = 0LL;
LABEL_5:
      v8 = -1073741811;
      goto LABEL_6;
    }
  }
  else
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
  }
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a3, (struct _SURFOBJ **)ThreadCurrentObj);
  v10 = pso[0];
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  v12 = (PATHOBJ *)v11;
  if ( v10 && v11 && (unsigned int)bCaptureLINEATTRS((struct _LINEATTRS **)plaa, &v17) )
  {
    DDIOBJ = UMPDOBJ::GetDDIOBJ(ThreadCurrentObj, a2, &v10->sizlBitmap);
    v14 = DDIOBJ;
    if ( (*((_DWORD *)ThreadCurrentObj + 103) & 0x100) == 0 )
    {
      v15 = pla;
      goto LABEL_24;
    }
    if ( !DDIOBJ && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pco == NULL\n",
        4090);
    v15 = pla;
    if ( !pla && gfUMPDDebug )
      DbgPrint(
        "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_vEnumStartClipLines:pla == NULL\n",
        4095);
    if ( !v14 )
      goto LABEL_25;
    if ( v15 )
    {
LABEL_24:
      PATHOBJ_vEnumStartClipLines(v12, v14, v10, v15);
LABEL_25:
      if ( v15 )
      {
        pstyle = v15->pstyle;
        if ( pstyle )
          Win32FreePool(pstyle);
      }
    }
  }
  v8 = 0;
  CAutoTGO::~CAutoTGO((CAutoTGO *)v19);
  UMPDSURFOBJ::Cleanup(pso);
  CAutoTGO::~CAutoTGO((CAutoTGO *)v19);
LABEL_6:
  if ( ThreadCurrentObj )
    UMPDOBJ::vDecrementEngCallRecursionCount(ThreadCurrentObj);
  return v8;
}
