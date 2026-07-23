/*
 * XREFs of PnpDeleteLockedDeviceNodes @ 0x1406EF0B8
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1406F0920 (PipRemoveDevicesInRelationList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1406F0A30 (PnpProcessQueryRemoveAndEject.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1408419B0 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14015A028 (PoFxIdleDevice.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1406EDD04 (PipIsDeviceInDeviceObjectList.c)
 *     IopEnumerateRelations @ 0x1406EF354 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNode @ 0x1406EF3D4 (PnpDeleteLockedDeviceNode.c)
 */

__int64 __fastcall PnpDeleteLockedDeviceNodes(
        __int64 a1,
        __int64 a2,
        int a3,
        char a4,
        int a5,
        int a6,
        ULONG_PTR a7,
        __int64 a8)
{
  unsigned int v8; // ebx
  __int64 v12; // r14
  ULONG_PTR v13; // rdi
  int v14; // eax
  __int64 v16; // r11
  unsigned int *v17; // rax
  ULONG_PTR v18; // rcx
  int v19; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+34h] [rbp-Ch]
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF
  int v22; // [rsp+78h] [rbp+38h] BYREF

  v8 = 0;
  if ( *(_BYTE *)(a2 + 8) )
  {
    v20 = 0;
    v19 = 1;
    while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v19, (unsigned int)&v21, (unsigned int)&v22, 0LL) )
    {
      if ( v22 || a4 )
      {
        v12 = v21;
        v13 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
        if ( a3 != 2 || (*(_DWORD *)(v13 + 704) & 2) == 0 )
        {
          v14 = PnpDeleteLockedDeviceNode(v13, a7, a8);
          v8 = v14;
          if ( !a3 && a5 == 54 && v14 == -1073740537 )
          {
            if ( PipIsDeviceInDeviceObjectList(*(unsigned int **)a2, *(_QWORD *)(*(_QWORD *)(v13 + 16) + 32LL), 0LL) )
              *(_DWORD *)(v16 + 704) |= 2u;
            v8 = 0;
          }
          else if ( v14 < 0 )
          {
            if ( (*(_DWORD *)(v13 + 704) & 4) == 0 )
              KeBugCheckEx(0xCAu, 0xDuLL, v13, 4uLL, 0LL);
            PoFxIdleDevice(*(_QWORD *)(v13 + 32));
            *(_DWORD *)(v13 + 704) &= ~4u;
            if ( v19 == 1 && v20 )
            {
              v17 = *(unsigned int **)a2;
              v19 = 2;
              v20 = *v17 - v20;
            }
            else
            {
              v20 = 0;
              v19 = 3;
            }
            while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v19, (unsigned int)&v21, 0, 0LL) )
            {
              if ( v12 != v21 )
              {
                if ( v21 )
                  v18 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
                else
                  v18 = 0LL;
                PnpDeleteLockedDeviceNode(v18, a7, a8);
              }
            }
            return (unsigned int)-2147483608;
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
