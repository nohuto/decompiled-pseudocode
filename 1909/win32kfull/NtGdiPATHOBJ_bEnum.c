/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1C02AD4A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C00952BC (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C02AA190 (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, __int64 a2, __int64 a3)
{
  PATHDATA *v3; // r14
  unsigned int v5; // edi
  POINTFIX *v6; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v9; // rbx
  unsigned __int64 v11; // rax
  POINTFIX *v12; // rax
  PATHDATA ppd; // [rsp+20h] [rbp-38h] BYREF

  v3 = (PATHDATA *)a2;
  *(_QWORD *)&ppd.flags = 0LL;
  ppd.pptfx = 0LL;
  v5 = 0;
  v6 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v9 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v11 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v11 )
  {
    if ( (*((_DWORD *)v9 + 103) & 0x100) == 0 || *(_QWORD *)(v11 + 8) )
    {
      v5 = PATHOBJ_bEnum((PATHOBJ *)v11, &ppd);
    }
    else if ( gfUMPDDebug )
    {
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnum:ppath == NULL.\n", 3879);
    }
    if ( ppd.count > 0x4E2000 )
    {
      --*((_DWORD *)v9 + 105);
      return 0LL;
    }
    v12 = (POINTFIX *)UMPDOBJ::_AllocUserMem(v9, 8 * ppd.count, 0);
    v6 = v12;
    if ( v12 )
    {
      memmove(v12, ppd.pptfx, 8LL * ppd.count);
      ppd.pptfx = v6;
    }
    else
    {
      v5 = 0;
    }
  }
  if ( !v6 )
  {
    *(_QWORD *)&ppd.flags = 0LL;
    ppd.pptfx = 0LL;
  }
  if ( (unsigned __int64)v3 >= MmUserProbeAddress )
    v3 = (PATHDATA *)MmUserProbeAddress;
  *v3 = ppd;
  if ( v9 )
    --*((_DWORD *)v9 + 105);
  return v5;
}
