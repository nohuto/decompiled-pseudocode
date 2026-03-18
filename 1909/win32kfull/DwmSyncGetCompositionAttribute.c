/*
 * XREFs of DwmSyncGetCompositionAttribute @ 0x1C001736C
 * Callers:
 *     NtUserGetWindowCompositionAttribute @ 0x1C0027E10 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0017338 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0168100 (memmove.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall DwmSyncGetCompositionAttribute(PVOID Object, __int64 a2, int a3, _QWORD *a4)
{
  __int64 v4; // r15
  signed int v8; // ebx
  __int128 v9; // xmm0
  __int64 v10; // xmm1_8
  __int16 v11; // ax
  int v12; // eax
  _BYTE v14[688]; // [rsp+20h] [rbp-E0h] BYREF

  v4 = a3;
  v8 = -1073741823;
  if ( Object )
  {
    v8 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v14, 0, sizeof(v14));
      v9 = *(_OWORD *)a4;
      v10 = a4[2];
      *(_DWORD *)&v14[2] = -2147483560;
      *(_DWORD *)&v14[40] = 1073741867;
      *(_DWORD *)&v14[44] = 1;
      *(_QWORD *)&v14[48] = a2;
      v11 = qword_1C02DF5F8[2 * v4];
      *(_DWORD *)&v14[56] = v4;
      *(_WORD *)v14 = v11 + 24;
      *(_DWORD *)&v14[60] = qword_1C02DF5F8[2 * v4];
      *(_OWORD *)&v14[64] = v9;
      *(_QWORD *)&v14[80] = v10;
      v12 = LpcRequestWaitReplyPortEx(Object, v14, v14);
      v8 = SyncLpcCheckNtStatus(v12, (struct _PORT_MESSAGE *)v14);
      if ( v8 >= 0 )
        memmove(a4, &v14[64], qword_1C02DF5F8[2 * v4]);
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v8;
}
