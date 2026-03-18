/*
 * XREFs of WheaAddErrorSourceDeviceDriver @ 0x140340960
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     WheaConfigureErrorSource @ 0x1405A2F50 (WheaConfigureErrorSource.c)
 *     WheaAddErrorSource @ 0x140919650 (WheaAddErrorSource.c)
 */

__int64 __fastcall WheaAddErrorSourceDeviceDriver(__int64 a1, __int64 *a2, int a3, int a4)
{
  __int64 v8; // rax
  _DWORD v10[244]; // [rsp+28h] [rbp-E0h] BYREF

  if ( !byte_140509A88 )
    WheaConfigureErrorSource(16LL, &WheaDeviceDriverDefaultSourceConfig);
  memset(v10, 0, 0x3CCuLL);
  v8 = *a2;
  v10[7] = 0;
  v10[9] = 0;
  *(_QWORD *)&v10[11] = v8;
  *(_QWORD *)&v10[13] = a2[1];
  *(_QWORD *)&v10[15] = a2[2];
  *(_QWORD *)&v10[17] = WheapCorrectErrorSourceDeviceDriver;
  v10[0] = 972;
  v10[1] = 11;
  v10[2] = 16;
  v10[3] = 1;
  v10[5] = a3;
  v10[6] = 2;
  v10[4] = a4;
  return WheaAddErrorSource(v10, a1);
}
