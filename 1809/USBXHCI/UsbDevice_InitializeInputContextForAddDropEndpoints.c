/*
 * XREFs of UsbDevice_InitializeInputContextForAddDropEndpoints @ 0x1C0004770
 * Callers:
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C0004240 (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C0004D7C (UsbDevice_QueueConfigureEndpointEvent.c)
 * Callees:
 *     UsbDevice_InitializeInputContextCommon @ 0x1C0004628 (UsbDevice_InitializeInputContextCommon.c)
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C00048C0 (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_InitializeInputContextForDropEndpoints @ 0x1C0004B58 (UsbDevice_InitializeInputContextForDropEndpoints.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00092C8 (WPP_RECORDER_SF_dd.c)
 */

__int64 __fastcall UsbDevice_InitializeInputContextForAddDropEndpoints(__int64 a1, __int64 a2, unsigned int a3)
{
  int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // r8
  unsigned int *v11; // r8
  int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // edx
  char v16; // [rsp+30h] [rbp-18h]

  v6 = -1073741823;
  UsbDevice_InitializeInputContextCommon(a1);
  v7 = 0;
  if ( a3 )
  {
    if ( a3 == 2 )
      goto LABEL_6;
    if ( a3 != 1 )
      return (unsigned int)-1073741595;
  }
  if ( (a3 & 0xFFFFFFFD) == 0 )
  {
LABEL_6:
    v6 = UsbDevice_InitializeInputContextForAddEndpoints(a1, a2);
    if ( v6 < 0 )
      return (unsigned int)v6;
  }
  if ( a3 > 1 || (v6 = UsbDevice_InitializeInputContextForDropEndpoints(a1, a2), v6 >= 0) )
  {
    v8 = *(_QWORD *)((*(_BYTE *)(a1 + 649) != 0 ? 8 : 0) + a1 + 632);
    if ( v8 )
      v9 = *(_DWORD **)(v8 + 16);
    else
      v9 = 0LL;
    v10 = -(__int64)((*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) + 100LL) & 4) != 0);
    *(_DWORD *)(a1 + 152) &= ~*v9;
    v11 = (_DWORD *)((char *)v9 + (v10 & 0x20) + 32);
    *(_DWORD *)(a1 + 152) |= v9[1];
    do
    {
      v12 = *(_DWORD *)(a1 + 152);
      v13 = *v11;
      if ( _bittest(&v12, v7) )
      {
        v13 = (v7 << 27) | v13 & 0x7FFFFFF;
        *v11 = v13;
      }
      ++v7;
    }
    while ( v7 < 0x20 );
    v14 = v13 >> 27;
    v16 = v14;
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v14,
      12,
      44,
      (__int64)&WPP_fc47e94f866b3ce951b07e0cf42a6662_Traceguids,
      *(_BYTE *)(a1 + 135),
      v16);
  }
  return (unsigned int)v6;
}
