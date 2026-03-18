/*
 * XREFs of xxxSwitchWndProc @ 0x1C01BD650
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01AD7A0 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     zzzSetCursor @ 0x1C001574C (zzzSetCursor.c)
 *     xxxSetWindowPos @ 0x1C0034CE4 (xxxSetWindowPos.c)
 *     xxxDefWindowProc @ 0x1C006CD90 (xxxDefWindowProc.c)
 *     xxxCancelCoolSwitch @ 0x1C0104D04 (xxxCancelCoolSwitch.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01BBEE4 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02AFC0C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r10
  __int64 v6; // r12
  unsigned int v7; // edi
  __int16 v10; // ax
  unsigned int v11; // edx
  unsigned int v12; // r8d
  unsigned int v13; // esi
  __int64 v14; // rbp
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  _QWORD v24[4]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a4;
  v5 = *((_QWORD *)a1 + 5);
  v6 = a3;
  v7 = a2;
  if ( (*(_DWORD *)(v5 + 232) & 0x800) != 0 )
    return 0LL;
  v10 = *(_WORD *)(v5 + 42);
  if ( v10 == 672 )
  {
LABEL_25:
    **((_QWORD **)a1 + 34) = a1;
    switch ( v7 )
    {
      case 1u:
        zzzSetCursor(*(_QWORD *)(*((_QWORD *)a1 + 14) + 88LL));
        break;
      case 0x10u:
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
        xxxCancelCoolSwitch();
        break;
      case 0x14u:
      case 0x3Au:
        v24[0] = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = v24;
        v24[1] = a1;
        _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
        xxxPaintSwitchWindow(a1);
        ThreadUnlock1(v22, v21, v23);
        return 0LL;
    }
    a4 = v4;
    a3 = v6;
    a2 = v7;
    return xxxDefWindowProc(a1, a2, a3, a4);
  }
  if ( v10 )
    return 0LL;
  if ( (_DWORD)a2 == 1 )
  {
    v11 = *(_DWORD *)(v5 + 252);
    v12 = *(unsigned __int16 *)(gpsi + 340LL);
    if ( v11 + 312 >= v12 )
    {
      v19 = *((_QWORD *)a1 + 34);
      if ( v19 )
      {
        v20 = 0LL;
        if ( v11 )
        {
          while ( !*(_BYTE *)((unsigned int)v20 + v19) )
          {
            v20 = (unsigned int)(v20 + 1);
            if ( (unsigned int)v20 >= v11 )
              goto LABEL_23;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v20);
        }
LABEL_23:
        memset(*((void **)a1 + 34), 0, *(unsigned int *)(*((_QWORD *)a1 + 5) + 252LL));
      }
    }
    else
    {
      if ( *(_DWORD *)(v5 + 200) + v11 + 312 < v12 )
        return 0LL;
      v13 = v12 - 312;
      v14 = Win32AllocPoolZInit(v12 - 312, 1937208149LL);
      if ( !v14 )
        return 0LL;
      v15 = *((_QWORD *)a1 + 34);
      if ( v15 )
      {
        v16 = 0LL;
        v17 = *(_DWORD *)(*((_QWORD *)a1 + 5) + 252LL);
        if ( v17 )
        {
          while ( !*(_BYTE *)((unsigned int)v16 + v15) )
          {
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= v17 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)a1 + 34));
      }
      v18 = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 34) = v14;
      *(_DWORD *)(v18 + 252) = v13;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = 672;
    goto LABEL_25;
  }
  return xxxDefWindowProc(a1, a2, a3, a4);
}
