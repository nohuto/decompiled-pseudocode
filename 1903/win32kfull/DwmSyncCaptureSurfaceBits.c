/*
 * XREFs of DwmSyncCaptureSurfaceBits @ 0x1C0085978
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0085390 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0086F78 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     memset @ 0x1C0166840 (memset.c)
 */

__int64 __fastcall DwmSyncCaptureSurfaceBits(
        PVOID Object,
        __int64 a2,
        float a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        _DWORD *a9,
        _QWORD *a10)
{
  signed int v13; // ebx
  int v14; // eax
  _BYTE v16[688]; // [rsp+28h] [rbp-E0h] BYREF

  v13 = -1073741823;
  if ( Object )
  {
    v13 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v16, 0, sizeof(v16));
      *(_DWORD *)v16 = 5767216;
      *(_WORD *)&v16[4] = 0x8000;
      *(_DWORD *)&v16[56] = a5;
      *(_DWORD *)&v16[60] = a6;
      *(_DWORD *)&v16[64] = a7;
      *(_DWORD *)&v16[68] = *a9;
      *(_QWORD *)&v16[72] = a8;
      *(_DWORD *)&v16[40] = -2147483642;
      *(_DWORD *)&v16[52] = a4;
      *(double *)&v16[44] = a3;
      *(_QWORD *)&v16[80] = a2;
      EtwUpdateEvent(0LL);
      v14 = LpcRequestWaitReplyPortEx(Object, v16, v16);
      v13 = SyncLpcCheckNtStatus(v14, (struct _PORT_MESSAGE *)v16);
      if ( v13 >= 0 && *(_WORD *)v16 == 20 )
      {
        if ( *(int *)&v16[44] < 0 )
        {
          v13 = -1073741823;
        }
        else
        {
          *a9 = *(_DWORD *)&v16[48];
          *a10 = *(_QWORD *)&v16[52];
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
