/*
 * XREFs of DwmSyncMagnUpdateWindowSharedTextures @ 0x1C0259658
 * Callers:
 *     MagGetLensContextInformation @ 0x1C01BC4E0 (MagGetLensContextInformation.c)
 * Callees:
 *     ?SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z @ 0x1C00BA814 (-SyncLpcCheckNtStatus@@YAJJPEAU_PORT_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
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
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // eax
  int v19; // ecx
  int v20; // ecx
  __int64 v21; // rdx
  HANDLE v22; // rcx
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  PVOID v25; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v26[688]; // [rsp+50h] [rbp-B0h] BYREF

  Handle = a4;
  v13 = -1073741823;
  if ( Object )
  {
    v13 = gbInVideoPnpCallout != 0 ? 0xC0000001 : 0;
    if ( !gbInVideoPnpCallout )
    {
      memset(v26, 0, sizeof(v26));
      v14 = *a5;
      v15 = a5[1];
      *(_WORD *)&v26[4] = 0x8000;
      *(_DWORD *)&v26[44] = a7;
      *(_DWORD *)&v26[112] = a8;
      *(_QWORD *)&v26[96] = Handle;
      *(_OWORD *)&v26[48] = v14;
      *(_QWORD *)&v14 = *((_QWORD *)a5 + 4);
      *(_QWORD *)&v26[104] = a6;
      *(_DWORD *)v26 = 7602252;
      *(_DWORD *)&v26[40] = 1073741925;
      *(_QWORD *)&v26[88] = a3;
      *(_OWORD *)&v26[64] = v15;
      *(_QWORD *)&v26[80] = v14;
      EtwUpdateEvent(0LL, 1073741925LL, v16, v17);
      v18 = LpcRequestWaitReplyPortEx(Object, v26, v26);
      v13 = SyncLpcCheckNtStatus(v18, (struct _PORT_MESSAGE *)v26);
      if ( v13 >= 0 )
      {
        v19 = *(_DWORD *)&v26[44];
        *(_DWORD *)a9 = *(_DWORD *)&v26[44];
        if ( v19 < 0 )
        {
          *(_QWORD *)(a9 + 4) = 0LL;
        }
        else
        {
          v20 = *(_DWORD *)&v26[48];
          *(_DWORD *)(a9 + 4) = *(_DWORD *)&v26[64];
          *(_QWORD *)(a9 + 12) = *(_QWORD *)&v26[68];
          *(_DWORD *)(a9 + 20) = *(_DWORD *)&v26[76];
          *(_DWORD *)(a9 + 8) = v20;
          if ( v20 )
          {
            v21 = *(_QWORD *)&v26[52];
            *(_DWORD *)(a9 + 36) = *(_DWORD *)&v26[60];
            if ( (int)ObDuplicateObject(a2, v21, 0LL, &Handle, 4, 512, 1, 0) >= 0 )
            {
              ObReferenceObjectByHandle(Handle, 4u, MmSectionObjectType, 0, &v25, 0LL);
              v22 = Handle;
              *(_QWORD *)(a9 + 40) = v25;
              ZwClose(v22);
            }
          }
          else
          {
            *(_QWORD *)(a9 + 40) = 0LL;
            *(_DWORD *)(a9 + 36) = 0;
          }
          v13 = 0;
          *a10 = *(_DWORD *)&v26[80];
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v13;
}
