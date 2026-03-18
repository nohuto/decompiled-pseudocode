/*
 * XREFs of NtGdiXLATEOBJ_iXlate @ 0x1C02AE160
 * Callers:
 *     <none>
 * Callees:
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     ??$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z @ 0x1C00A1958 (--$GetDDIOBJ@U_XLATEOBJ@@@UMPDOBJ@@QEAAPEAU_XLATEOBJ@@PEAU1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     XLATEOBJ_iXlate @ 0x1C00C7500 (XLATEOBJ_iXlate.c)
 */

int __fastcall NtGdiXLATEOBJ_iXlate(__int64 a1, __int64 a2, __int64 a3)
{
  ULONG v4; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  XLATEOBJ *v8; // rax

  v4 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj )
  {
    ++*((_DWORD *)ThreadCurrentObj + 105);
    v8 = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)ThreadCurrentObj, a1);
    if ( v8 )
      LODWORD(v8) = XLATEOBJ_iXlate(v8, v4);
  }
  else
  {
    LODWORD(v8) = -1;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 105);
  return (int)v8;
}
