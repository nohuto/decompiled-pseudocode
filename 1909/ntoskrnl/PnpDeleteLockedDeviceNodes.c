/*
 * XREFs of PnpDeleteLockedDeviceNodes @ 0x140732204
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140730890 (PnpProcessQueryRemoveAndEject.c)
 *     PipRemoveDevicesInRelationList @ 0x140733AD4 (PipRemoveDevicesInRelationList.c)
 *     PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x14087B850 (PipSendQueryRemoveIrpAndCheckOpenHandles.c)
 * Callees:
 *     PoFxIdleDevice @ 0x140145E7C (PoFxIdleDevice.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     PiUpdateGuestAssignedState @ 0x140703370 (PiUpdateGuestAssignedState.c)
 *     PipIsDeviceInDeviceObjectList @ 0x140731790 (PipIsDeviceInDeviceObjectList.c)
 *     IopEnumerateRelations @ 0x1407324D4 (IopEnumerateRelations.c)
 *     PnpDeleteLockedDeviceNode @ 0x140732554 (PnpDeleteLockedDeviceNode.c)
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
  unsigned int v8; // edi
  char v9; // bl
  int v12; // eax
  __int64 v13; // r13
  ULONG_PTR v14; // rbx
  __int64 v16; // r11
  unsigned int *v17; // rax
  ULONG_PTR v18; // rcx
  int v19; // [rsp+30h] [rbp-10h] BYREF
  int v20; // [rsp+34h] [rbp-Ch]
  __int64 v21; // [rsp+38h] [rbp-8h] BYREF
  int v22; // [rsp+88h] [rbp+48h] BYREF
  char v23; // [rsp+98h] [rbp+58h]

  v23 = a4;
  v8 = 0;
  v9 = a4;
  if ( *(_BYTE *)(a2 + 8) )
  {
    v20 = 0;
    v19 = 1;
    while ( (unsigned __int8)IopEnumerateRelations(a2, (unsigned int)&v19, (unsigned int)&v21, (unsigned int)&v22, 0LL) )
    {
      if ( v22 || v9 )
      {
        v13 = v21;
        if ( v21 )
          v14 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
        else
          v14 = 0LL;
        if ( (unsigned int)(a3 - 2) > 1
          || (PiUpdateGuestAssignedState(v14, 0LL), a3 != 2)
          || (*(_DWORD *)(v14 + 704) & 2) == 0 )
        {
          v12 = PnpDeleteLockedDeviceNode(v14, a7, a8);
          v8 = v12;
          if ( !a3 && a5 == 54 && v12 == -1073740537 )
          {
            if ( PipIsDeviceInDeviceObjectList(*(unsigned int **)a2, *(_QWORD *)(*(_QWORD *)(v14 + 16) + 32LL), 0LL) )
              *(_DWORD *)(v16 + 704) |= 2u;
            v8 = 0;
          }
          else if ( v12 < 0 )
          {
            if ( (*(_DWORD *)(v14 + 704) & 4) == 0 )
              KeBugCheckEx(0xCAu, 0xDuLL, v14, 4uLL, 0LL);
            PoFxIdleDevice(*(_QWORD *)(v14 + 32));
            *(_DWORD *)(v14 + 704) &= ~4u;
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
              if ( v13 != v21 )
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
        v9 = v23;
      }
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
