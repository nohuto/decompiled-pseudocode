/*
 * XREFs of NtGdiXLATEOBJ_iXlate @ 0x1C0285DA0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     XLATEOBJ_iXlate @ 0x1C00B2A20 (XLATEOBJ_iXlate.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C011FA1C (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 */

int __fastcall NtGdiXLATEOBJ_iXlate(__int64 a1, __int64 a2)
{
  ULONG v3; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v6; // rbx
  XLATEOBJ *v7; // rax

  v3 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v6 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v7 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v7 )
      LODWORD(v7) = XLATEOBJ_iXlate(v7, v3);
  }
  else
  {
    LODWORD(v7) = -1;
  }
  if ( v6 )
    --*((_DWORD *)v6 + 105);
  return (int)v7;
}
