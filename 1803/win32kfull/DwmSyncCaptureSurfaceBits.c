/*
 * XREFs of DwmSyncCaptureSurfaceBits @ 0x1C0057790
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C0057248 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C006D634 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 */

__int64 __fastcall DwmSyncCaptureSurfaceBits(
        PVOID Object,
        __int64 a2,
        int a3,
        float a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        _DWORD *a10,
        _QWORD *a11)
{
  signed int v14; // ebx
  int v15; // eax
  _BYTE v17[688]; // [rsp+28h] [rbp-E0h] BYREF

  v14 = -1073741823;
  if ( Object )
  {
    v14 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v17, 0, sizeof(v17));
      *(_DWORD *)v17 = 6029364;
      *(_WORD *)&v17[4] = 0x8000;
      *(_DWORD *)&v17[52] = a5;
      *(_DWORD *)&v17[56] = a6;
      *(_DWORD *)&v17[60] = a7;
      *(_DWORD *)&v17[64] = a8;
      *(_DWORD *)&v17[68] = *a10;
      *(_QWORD *)&v17[72] = a9;
      *(_DWORD *)&v17[40] = -2147483642;
      *(_QWORD *)&v17[80] = a2;
      *(double *)&v17[44] = a4;
      *(_DWORD *)&v17[88] = a3;
      EtwUpdateEvent(0LL);
      v15 = LpcRequestWaitReplyPortEx(Object, v17, v17);
      v14 = SyncLpcCheckNtStatus(v15, (struct _PORT_MESSAGE *)v17);
      if ( v14 >= 0 && *(_WORD *)v17 == 20 )
      {
        if ( *(int *)&v17[44] < 0 )
        {
          v14 = -1073741823;
        }
        else
        {
          *a10 = *(_DWORD *)&v17[48];
          *a11 = *(_QWORD *)&v17[52];
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v14;
}
