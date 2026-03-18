/*
 * XREFs of NtGdiPATHOBJ_bEnum @ 0x1C0285130
 * Callers:
 *     <none>
 * Callees:
 *     ?_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z @ 0x1C0018B80 (-_AllocUserMem@UMPDOBJ@@AEAAPEAXKH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     memmove @ 0x1C013D380 (memmove.c)
 *     ??$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z @ 0x1C0281DFC (--$GetDDIOBJ@U_PATHOBJ@@@UMPDOBJ@@QEAAPEAU_PATHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiPATHOBJ_bEnum(__int64 a1, __int64 a2)
{
  PATHDATA *v2; // r14
  unsigned int v4; // edi
  POINTFIX *v5; // rsi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v8; // rbx
  unsigned __int64 v10; // rax
  char *v11; // rax
  PATHDATA ppd; // [rsp+20h] [rbp-38h] BYREF

  v2 = (PATHDATA *)a2;
  *(_QWORD *)&ppd.flags = 0LL;
  ppd.pptfx = 0LL;
  v4 = 0;
  v5 = 0LL;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v8 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  v10 = UMPDOBJ::GetDDIOBJ<_PATHOBJ>((__int64)ThreadCurrentObj, a1);
  if ( v10 )
  {
    if ( (*((_DWORD *)v8 + 103) & 0x100) == 0 || *(_QWORD *)(v10 + 8) )
    {
      v4 = PATHOBJ_bEnum((PATHOBJ *)v10, &ppd);
    }
    else if ( gfUMPDDebug )
    {
      DbgPrint("windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiPATHOBJ_bEnum:ppath == NULL.\n", 3879);
    }
    if ( ppd.count > 0x4E2000 )
    {
      --*((_DWORD *)v8 + 105);
      return 0LL;
    }
    v11 = UMPDOBJ::_AllocUserMem(v8, 8 * ppd.count, 0);
    v5 = (POINTFIX *)v11;
    if ( v11 )
    {
      memmove(v11, ppd.pptfx, 8LL * ppd.count);
      ppd.pptfx = v5;
    }
    else
    {
      v4 = 0;
    }
  }
  if ( !v5 )
  {
    *(_QWORD *)&ppd.flags = 0LL;
    ppd.pptfx = 0LL;
  }
  if ( (unsigned __int64)v2 >= MmUserProbeAddress )
    v2 = (PATHDATA *)MmUserProbeAddress;
  *v2 = ppd;
  if ( v8 )
    --*((_DWORD *)v8 + 105);
  return v4;
}
