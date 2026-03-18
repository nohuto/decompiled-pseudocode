/*
 * XREFs of EtwTraceAutoBoostSetFloor @ 0x14032D768
 * Callers:
 *     KiAbApplyWakeupBoost @ 0x14009E94C (KiAbApplyWakeupBoost.c)
 *     KiAbSetMinimumThreadPriority @ 0x14009F06C (KiAbSetMinimumThreadPriority.c)
 * Callees:
 *     EtwTraceSiloKernelEvent @ 0x14001D360 (EtwTraceSiloKernelEvent.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostSetFloor(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        char a10)
{
  char DpcRequestSummary; // cl
  __int64 v12; // rcx
  __int64 v14; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+38h] [rbp-28h]
  char v16; // [rsp+3Ch] [rbp-24h]
  char v17; // [rsp+3Dh] [rbp-23h]
  char v18; // [rsp+3Eh] [rbp-22h]
  _BYTE v19[9]; // [rsp+3Fh] [rbp-21h] BYREF
  __int64 v20; // [rsp+48h] [rbp-18h]

  v14 = a2;
  v20 = 0LL;
  *(_QWORD *)&v19[1] = 0LL;
  v15 = *(_DWORD *)(a1 + 1616);
  v17 = a6;
  v16 = a3;
  v18 = a4 & 7 | (8 * (a7 & 7 | (8 * ((2 * a8) | a5 & 1))));
  DpcRequestSummary = KeGetPcr()->Prcb.DpcRequestSummary;
  LODWORD(v20) = 16;
  *(_QWORD *)v19 = (unsigned __int8)((a9 != 0 ? 2 : 0) | (4 * (a10 & 3)) | DpcRequestSummary & 1);
  v12 = *(_QWORD *)(a1 + 544);
  *(_QWORD *)&v19[1] = &v14;
  return EtwTraceSiloKernelEvent(*(_QWORD *)(v12 + 1776), (int)&v19[1], 1, 0x20000200u, 1346, 5245442);
}
