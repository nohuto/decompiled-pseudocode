/*
 * XREFs of xxxSwitchWndProc @ 0x1C01F6320
 * Callers:
 *     ?xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x1C01E5690 (-xxxWrapSwitchWndProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 * Callees:
 *     ?zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z @ 0x1C002E7F4 (-zzzSetCursor@@YAPEAUtagCURSOR@@PEAU1@@Z.c)
 *     xxxDefWindowProc @ 0x1C00B3E60 (xxxDefWindowProc.c)
 *     xxxSetWindowPos @ 0x1C00CB0E4 (xxxSetWindowPos.c)
 *     xxxCancelCoolSwitch @ 0x1C0130034 (xxxCancelCoolSwitch.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     ?xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z @ 0x1C01F4980 (-xxxPaintSwitchWindow@@YAXPEAUtagWND@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall xxxSwitchWndProc(struct tagWND *a1, __int64 a2, HWND a3, unsigned __int64 a4)
{
  __int64 v4; // r10
  unsigned __int64 v5; // r15
  HWND v6; // r12
  int v7; // edi
  __int16 v9; // ax
  unsigned int v11; // r8d
  unsigned int v12; // esi
  __int64 v13; // rbp
  __int64 v14; // rcx
  unsigned int v15; // edx
  unsigned int v16; // r9d
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // [rsp+40h] [rbp-48h] BYREF
  struct tagWND *v23; // [rsp+48h] [rbp-40h]
  __int64 v24; // [rsp+50h] [rbp-38h]

  v4 = *((_QWORD *)a1 + 5);
  v22 = 0LL;
  v5 = a4;
  v23 = 0LL;
  v6 = a3;
  v24 = 0LL;
  v7 = a2;
  if ( (*(_DWORD *)(v4 + 232) & 0x800) != 0 )
    return 0LL;
  v9 = *(_WORD *)(v4 + 42);
  if ( v9 == 672 )
    goto LABEL_25;
  if ( !v9 )
  {
    if ( (_DWORD)a2 != 1 )
      return xxxDefWindowProc(a1, a2, a3, a4);
    a2 = *(unsigned int *)(v4 + 252);
    v11 = *(unsigned __int16 *)(gpsi + 340LL);
    if ( (int)a2 + 320 >= v11 )
    {
      a3 = (HWND)*((_QWORD *)a1 + 35);
      if ( a3 )
      {
        v18 = 0LL;
        if ( (_DWORD)a2 )
        {
          while ( !*((_BYTE *)a3 + (unsigned int)v18) )
          {
            v18 = (unsigned int)(v18 + 1);
            if ( (unsigned int)v18 >= (unsigned int)a2 )
              goto LABEL_23;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v18);
          v4 = *((_QWORD *)a1 + 5);
        }
LABEL_23:
        memset(*((void **)a1 + 35), 0, *(unsigned int *)(v4 + 252));
      }
    }
    else
    {
      if ( *(_DWORD *)(v4 + 200) + (int)a2 + 320 < v11 )
        return 0LL;
      v12 = v11 - 320;
      v13 = Win32AllocPoolZInit(v11 - 320, 1937208149LL);
      if ( !v13 )
        return 0LL;
      a3 = (HWND)*((_QWORD *)a1 + 35);
      if ( a3 )
      {
        v14 = *((_QWORD *)a1 + 5);
        v15 = 0;
        v16 = *(_DWORD *)(v14 + 252);
        if ( v16 )
        {
          while ( !*((_BYTE *)a3 + v15) )
          {
            if ( ++v15 >= v16 )
              goto LABEL_15;
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
        }
LABEL_15:
        Win32FreePool(*((_QWORD *)a1 + 35));
      }
      v17 = *((_QWORD *)a1 + 5);
      *((_QWORD *)a1 + 35) = v13;
      *(_DWORD *)(v17 + 252) = v12;
    }
    *(_WORD *)(*((_QWORD *)a1 + 5) + 42LL) = 672;
LABEL_25:
    **((_QWORD **)a1 + 35) = a1;
    switch ( v7 )
    {
      case 1:
        zzzSetCursor(*(struct tagCURSOR **)(*((_QWORD *)a1 + 17) + 88LL), a2, (__int64)a3, a4);
        break;
      case 16:
        xxxSetWindowPos(a1, 0LL, 0LL, 0LL, 0, 0, 151);
        xxxCancelCoolSwitch();
        break;
      case 20:
      case 58:
        v22 = *(_QWORD *)(gptiCurrent + 408LL);
        *(_QWORD *)(gptiCurrent + 408LL) = &v22;
        v23 = a1;
        HMLockObject(a1);
        xxxPaintSwitchWindow(a1);
        ThreadUnlock1(v20, v19, v21);
        return 0LL;
    }
    a4 = v5;
    a3 = v6;
    LODWORD(a2) = v7;
    return xxxDefWindowProc(a1, a2, a3, a4);
  }
  return 0LL;
}
