/*
 * XREFs of ?SendPointerDelta@ControllerProcessor@@AEAAJUtagPOINT@@@Z @ 0x180036138
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x180035A74 (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z @ 0x180034F24 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAULegacyInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

__int64 __fastcall ControllerProcessor::SendPointerDelta(ControllerProcessor *this, struct tagPOINT a2)
{
  LONG x; // ebx
  DWORD TickCount; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  struct tagPOINT v7; // [rsp+28h] [rbp-D8h]
  _DWORD v8[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v9; // [rsp+40h] [rbp-C0h]
  int v10; // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+218h] [rbp+118h]
  __int16 v12; // [rsp+23Ah] [rbp+13Ah]
  LONG v13; // [rsp+244h] [rbp+144h]
  LONG y; // [rsp+248h] [rbp+148h]

  v7 = a2;
  x = a2.x;
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v8, 0, 0x640uLL);
  v10 = 1600;
  v8[0] = 2;
  TickCount = GetTickCount();
  v13 = x;
  v8[2] = TickCount;
  v9 = PerformanceCount;
  v11 = *((_QWORD *)this + 218);
  v12 = 0;
  y = v7.y;
  return ControllerProcessor::SendMouseInputInfo(this, (struct LegacyInputInfo *)v8);
}
