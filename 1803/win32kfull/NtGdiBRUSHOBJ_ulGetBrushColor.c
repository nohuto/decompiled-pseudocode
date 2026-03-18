/*
 * XREFs of NtGdiBRUSHOBJ_ulGetBrushColor @ 0x1C011E990
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026450 (W32GetThreadWin32Thread.c)
 *     ?GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z @ 0x1C00B13A0 (-GetThreadCurrentObj@UMPDOBJ@@SAPEAV1@PEAU_W32THREAD@@@Z.c)
 *     BRUSHOBJ_ulGetBrushColor @ 0x1C011EA90 (BRUSHOBJ_ulGetBrushColor.c)
 *     ??$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z @ 0x1C011F9A4 (--$GetDDIOBJ@U_BRUSHOBJ@@@UMPDOBJ@@QEAAPEAU_BRUSHOBJ@@PEAU1@@Z.c)
 */

__int64 __fastcall NtGdiBRUSHOBJ_ulGetBrushColor(ULONG64 a1, __int64 a2)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct UMPDOBJ *v5; // rbx
  ULONG BrushColor; // esi
  BRUSHOBJ *v7; // r8
  ULONG64 v8; // rax

  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2);
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v5 = ThreadCurrentObj;
  if ( !ThreadCurrentObj )
    return 0LL;
  ++*((_DWORD *)ThreadCurrentObj + 105);
  BrushColor = 0;
  v7 = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>(ThreadCurrentObj, a1);
  if ( v7 )
  {
    v8 = a1;
    if ( a1 >= MmUserProbeAddress )
      v8 = MmUserProbeAddress;
    if ( (*(_QWORD *)(v8 + 16) & 8) != 0 && (v7[5].iSolidColor & 0x10) != 0 )
      v7->flColorType |= 8u;
    BrushColor = BRUSHOBJ_ulGetBrushColor(v7);
    *(_DWORD *)(a1 + 16) &= ~8u;
  }
  if ( v5 )
    --*((_DWORD *)v5 + 105);
  return BrushColor;
}
