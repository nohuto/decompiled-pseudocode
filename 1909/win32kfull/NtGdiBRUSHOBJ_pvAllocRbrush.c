/*
 * XREFs of NtGdiBRUSHOBJ_pvAllocRbrush @ 0x1C02AAA00
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C00A0FAC (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00A1218 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00AC2AC (W32GetThreadWin32Thread.c)
 *     ?BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z @ 0x1C026A554 (-BRUSHOBJ_pvAllocRbrushUMPD@@YAPEAXPEAU_BRUSHOBJ@@K@Z.c)
 */

PVOID __fastcall NtGdiBRUSHOBJ_pvAllocRbrush(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // esi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v7; // rbx
  struct _BRUSHOBJ *v8; // rax
  PVOID result; // rax

  v4 = a2;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v7 = ThreadCurrentObj;
  if ( ThreadCurrentObj
    && (++*((_DWORD *)ThreadCurrentObj + 105),
        (v8 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)ThreadCurrentObj, a1)) != 0LL) )
  {
    result = BRUSHOBJ_pvAllocRbrushUMPD(v8, v4);
  }
  else
  {
    result = 0LL;
  }
  if ( v7 )
    --*((_DWORD *)v7 + 105);
  return result;
}
