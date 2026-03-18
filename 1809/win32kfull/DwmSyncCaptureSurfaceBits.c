/*
 * XREFs of DwmSyncCaptureSurfaceBits @ 0x1C00B9D4C
 * Callers:
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00B9734 (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00BA814 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  _BYTE v19[688]; // [rsp+28h] [rbp-E0h] BYREF

  v14 = -1073741823;
  if ( Object )
  {
    v14 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v19, 0, sizeof(v19));
      *(_DWORD *)v19 = 6029364;
      *(_WORD *)&v19[4] = 0x8000;
      *(_DWORD *)&v19[52] = a5;
      *(_DWORD *)&v19[56] = a6;
      *(_DWORD *)&v19[60] = a7;
      *(_DWORD *)&v19[64] = a8;
      *(_DWORD *)&v19[68] = *a10;
      *(_QWORD *)&v19[72] = a9;
      *(_DWORD *)&v19[40] = -2147483642;
      *(_QWORD *)&v19[80] = a2;
      *(double *)&v19[44] = a4;
      *(_DWORD *)&v19[88] = a3;
      EtwUpdateEvent(0LL, 2147483654LL, v15, v16);
      v17 = LpcRequestWaitReplyPortEx(Object, v19, v19);
      v14 = SyncLpcCheckNtStatus(v17, (struct _PORT_MESSAGE *)v19);
      if ( v14 >= 0 && *(_WORD *)v19 == 20 )
      {
        if ( *(int *)&v19[44] < 0 )
        {
          v14 = -1073741823;
        }
        else
        {
          *a10 = *(_DWORD *)&v19[48];
          *a11 = *(_QWORD *)&v19[52];
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v14;
}
