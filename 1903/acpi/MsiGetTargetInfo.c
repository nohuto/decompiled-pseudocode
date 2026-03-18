/*
 * XREFs of MsiGetTargetInfo @ 0x1C009BA4C
 * Callers:
 *     IrqArbAddAllocation @ 0x1C0098B50 (IrqArbAddAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031700 (__security_check_cookie.c)
 *     memset @ 0x1C0031D40 (memset.c)
 *     ProcessorGetDestinationMode @ 0x1C009BB10 (ProcessorGetDestinationMode.c)
 */

__int64 __fastcall MsiGetTargetInfo(__int128 *a1, int a2, __int64 a3)
{
  __int128 v6; // xmm0
  int MessageRoutingInfo; // eax
  int v8; // edx
  int v10; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v11[56]; // [rsp+28h] [rbp-C0h] BYREF
  _QWORD v12[12]; // [rsp+60h] [rbp-88h] BYREF

  memset(v12, 0, sizeof(v12));
  memset(v11, 0, sizeof(v11));
  ProcessorGetDestinationMode(a1, &v10);
  v6 = *a1;
  *(_DWORD *)&v11[8] = a2;
  *(_OWORD *)&v11[16] = v6;
  *(_DWORD *)&v11[32] = v10;
  MessageRoutingInfo = HalGetMessageRoutingInfo(v11, v12);
  v8 = 0;
  if ( MessageRoutingInfo < 0 )
    v8 = MessageRoutingInfo;
  if ( v8 >= 0 )
  {
    *(_QWORD *)a3 = v12[10];
    *(_WORD *)(a3 + 8) = v12[11];
  }
  return (unsigned int)v8;
}
