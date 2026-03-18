/*
 * XREFs of DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0272828
 * Callers:
 *     MagGetLensContextInformation @ 0x1C01CFF90 (MagGetLensContextInformation.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C0017338 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 __fastcall DwmSyncMagnUpdateWindowSharedTextures(
        PVOID Object,
        __int64 a2,
        __int64 a3,
        void *a4,
        __int128 *a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        _DWORD *a10)
{
  signed int v13; // edi
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  int v16; // eax
  int v17; // ecx
  int v18; // ecx
  __int64 v19; // rdx
  HANDLE v20; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v23; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v24[688]; // [rsp+50h] [rbp-B0h] BYREF

  Handle = a4;
  v13 = -1073741823;
  if ( Object )
  {
    v13 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v24, 0, sizeof(v24));
      v14 = *a5;
      v15 = a5[1];
      *(_WORD *)&v24[4] = 0x8000;
      *(_DWORD *)&v24[44] = a7;
      *(_DWORD *)&v24[112] = a8;
      *(_QWORD *)&v24[96] = Handle;
      *(_OWORD *)&v24[48] = v14;
      *(_QWORD *)&v14 = *((_QWORD *)a5 + 4);
      *(_QWORD *)&v24[104] = a6;
      *(_DWORD *)v24 = 7602252;
      *(_DWORD *)&v24[40] = 1073741925;
      *(_QWORD *)&v24[88] = a3;
      *(_OWORD *)&v24[64] = v15;
      *(_QWORD *)&v24[80] = v14;
      EtwUpdateEvent(0LL);
      v16 = LpcRequestWaitReplyPortEx(Object, v24, v24);
      v13 = SyncLpcCheckNtStatus(v16, (struct _PORT_MESSAGE *)v24);
      if ( v13 >= 0 )
      {
        v17 = *(_DWORD *)&v24[44];
        *(_DWORD *)a9 = *(_DWORD *)&v24[44];
        if ( v17 < 0 )
        {
          *(_QWORD *)(a9 + 4) = 0LL;
        }
        else
        {
          v18 = *(_DWORD *)&v24[48];
          *(_DWORD *)(a9 + 4) = *(_DWORD *)&v24[64];
          *(_QWORD *)(a9 + 12) = *(_QWORD *)&v24[68];
          *(_DWORD *)(a9 + 20) = *(_DWORD *)&v24[76];
          *(_DWORD *)(a9 + 8) = v18;
          if ( v18 )
          {
            v19 = *(_QWORD *)&v24[52];
            *(_DWORD *)(a9 + 36) = *(_DWORD *)&v24[60];
            if ( (int)ObDuplicateObject(a2, v19, 0LL, &Handle, 4, 512, 1, 0) >= 0 )
            {
              ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &v23, 0LL);
              v20 = Handle;
              *(_QWORD *)(a9 + 40) = v23;
              ZwClose(v20);
            }
          }
          else
          {
            *(_QWORD *)(a9 + 40) = 0LL;
            *(_DWORD *)(a9 + 36) = 0;
          }
          v13 = 0;
          *a10 = *(_DWORD *)&v24[80];
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
