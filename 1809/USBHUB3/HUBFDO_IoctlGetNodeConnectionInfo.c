/*
 * XREFs of HUBFDO_IoctlGetNodeConnectionInfo @ 0x1C000BBB8
 * Callers:
 *     HUBFDO_EvtIoDeviceControl @ 0x1C006DEA0 (HUBFDO_EvtIoDeviceControl.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0pqq @ 0x1C000A8F8 (McTemplateK0pqq.c)
 *     HUBFDO_GetPortStatusForDebugging @ 0x1C000B96C (HUBFDO_GetPortStatusForDebugging.c)
 *     __security_check_cookie @ 0x1C003C520 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 *     HUBFDO_IoctlValidateParameters @ 0x1C006B6D0 (HUBFDO_IoctlValidateParameters.c)
 */

__int64 __fastcall HUBFDO_IoctlGetNodeConnectionInfo(__int64 a1, __int64 a2, size_t a3, int a4, char a5)
{
  __int64 v5; // r12
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // eax
  unsigned int v12; // esi
  _QWORD *i; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rdi
  _WORD *v17; // rcx
  char v18; // al
  KIRQL v19; // al
  KIRQL v20; // r11
  __int64 v21; // rcx
  char v22; // dl
  unsigned __int64 v23; // r15
  _QWORD *v24; // rcx
  __int64 v25; // r9
  unsigned int v26; // r12d
  unsigned int j; // r10d
  _BYTE *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // r8
  struct _MCGEN_TRACE_CONTEXT *v35; // rcx
  int v36; // edx
  bool v37; // sf
  const EVENT_DESCRIPTOR *v38; // rdx
  int v39; // edx
  PKSPIN_LOCK *v40; // r8
  __int64 v42; // [rsp+20h] [rbp-48h]
  __int64 v43; // [rsp+28h] [rbp-40h]
  void *v44; // [rsp+30h] [rbp-38h] BYREF
  unsigned int v45; // [rsp+38h] [rbp-30h]
  __int64 v46; // [rsp+40h] [rbp-28h]
  PKSPIN_LOCK SpinLock[2]; // [rsp+48h] [rbp-20h] BYREF

  v5 = a2;
  v46 = a2;
  v8 = 0;
  v9 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1256))(WdfDriverGlobals, a1);
  v10 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
          WdfDriverGlobals,
          v9,
          off_1C005F0E0);
  v11 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, size_t, void **, _QWORD))(WdfFunctions_01015 + 2160))(
          WdfDriverGlobals,
          v5,
          a3,
          &v44,
          0LL);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v12 = HUBFDO_IoctlValidateParameters(v10, 4, a4, (_DWORD)v44, 35LL, a3);
    if ( (v12 & 0x80000000) == 0 )
    {
      v8 = *(unsigned __int16 *)v44;
      memset(v44, 0, a3);
      for ( i = *(_QWORD **)(v10 + 2360); ; i = (_QWORD *)*i )
      {
        v14 = i - 31;
        if ( (_QWORD *)(v10 + 2360) == i )
          goto LABEL_8;
        if ( *((unsigned __int16 *)v14 + 100) == v8 )
          break;
      }
      if ( i == (_QWORD *)248 )
      {
LABEL_8:
        *(_DWORD *)((char *)v44 + 31) = 3;
        goto LABEL_9;
      }
      *(_DWORD *)((char *)v44 + 31) = *((_DWORD *)v14 + 356);
LABEL_9:
      if ( *(_BYTE *)(v10 + 12) )
        HUBFDO_GetPortStatusForDebugging((_QWORD *)v10, v8);
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1072))(
        WdfDriverGlobals,
        *(_QWORD *)(v10 + 16));
      v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, __int64))(WdfFunctions_01015 + 1080))(
              WdfDriverGlobals,
              *(_QWORD *)(v10 + 16),
              0LL,
              1LL);
      if ( !v15 )
        goto LABEL_38;
      do
      {
        if ( v15 != *(_QWORD *)(v10 + 2616)
          && *(unsigned __int16 *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                                     WdfDriverGlobals,
                                     v15,
                                     off_1C005F040)
                                 + 48) == v8 )
        {
          break;
        }
        v15 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01015 + 1080))(
                WdfDriverGlobals,
                *(_QWORD *)(v10 + 16),
                v15,
                1LL);
      }
      while ( v15 );
      if ( v15 )
      {
        v16 = *(_QWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                            WdfDriverGlobals,
                            v15,
                            off_1C005F040)
                        + 24);
        *(_DWORD *)v44 = v8;
        v17 = v44;
        *(_OWORD *)((char *)v44 + 4) = *(_OWORD *)(v16 + 1988);
        v17[10] = *(_WORD *)(v16 + 2004);
        *(_DWORD *)((char *)v44 + 27) = 0;
        if ( a5 )
        {
          v18 = *(_DWORD *)(v16 + 172);
          if ( *(_DWORD *)(v16 + 172) == 3 )
            v18 = 2;
          *((_BYTE *)v44 + 23) = v18;
        }
        else
        {
          *((_BYTE *)v44 + 23) = *(_DWORD *)(v16 + 172) == 0;
        }
        *(_WORD *)((char *)v44 + 25) = *(_WORD *)(v16 + 1648);
        if ( (*(_DWORD *)(v16 + 1632) & 2) != 0 )
          *((_BYTE *)v44 + 24) = 1;
        SpinLock[0] = (PKSPIN_LOCK)(v16 + 40);
        v19 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v16 + 40));
        v20 = v19;
        if ( (*(_DWORD *)(v16 + 1636) & 0x10) != 0 && (v21 = *(_QWORD *)(v16 + 48)) != 0 )
        {
          v22 = *(_BYTE *)(v21 + 37);
          v23 = a3 - 35;
          v45 = 0;
          *((_BYTE *)v44 + 22) = v22;
          *(_DWORD *)((char *)v44 + 27) = *(_DWORD *)(*(_QWORD *)(v16 + 48) + 8LL);
          v24 = (_QWORD *)(*(_QWORD *)(v16 + 48) + 16LL);
          v25 = *v24 - 8LL;
          if ( v24 != (_QWORD *)*v24 )
          {
            v26 = v45;
            do
            {
              if ( v23 < 0xB )
                break;
              for ( j = 0; j < *(_DWORD *)(v25 + 24); *(_DWORD *)((char *)v44 + v30 + 42) = 0 )
              {
                if ( v23 < 0xB )
                  break;
                v28 = v44;
                v23 -= 11LL;
                v29 = v26++;
                v30 = 11 * v29;
                v31 = j++;
                v32 = *(_QWORD *)(v25 + 72 * (v31 + 1));
                *(_DWORD *)((char *)v44 + v30 + 35) = *(_DWORD *)v32;
                *(_WORD *)&v28[v30 + 39] = *(_WORD *)(v32 + 4);
                v28[v30 + 41] = *(_BYTE *)(v32 + 6);
              }
              v33 = *(_QWORD *)(v25 + 8);
              v25 = v33 - 8;
            }
            while ( *(_QWORD *)(v16 + 48) + 16LL != v33 );
            v5 = v46;
          }
          KeReleaseSpinLock(SpinLock[0], v20);
          v34 = a3 - v23;
        }
        else
        {
          KeReleaseSpinLock((PKSPIN_LOCK)(v16 + 40), v19);
          v34 = 35LL;
        }
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          v5,
          v34);
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
      }
      else
      {
LABEL_38:
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 1088))(
          WdfDriverGlobals,
          *(_QWORD *)(v10 + 16));
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 2200))(
          WdfDriverGlobals,
          v5,
          35LL);
        v12 = 0;
      }
    }
  }
  else
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v10 + 2520),
      2u,
      3u,
      0x25u,
      (__int64)&WPP_0e53b71dd48e35ef915a1bb9371a4353_Traceguids,
      v11);
  }
  if ( a5 == 1 )
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v35 = (struct _MCGEN_TRACE_CONTEXT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015
                                                                                                 + 2280))(
                                           WdfDriverGlobals,
                                           v5);
    v36 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(struct _MCGEN_TRACE_CONTEXT *, PKSPIN_LOCK *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
            v35,
            SpinLock)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v37 = v36 < 0;
    v38 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_EX_COMPLETE;
  }
  else
  {
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v35 = (struct _MCGEN_TRACE_CONTEXT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015
                                                                                                 + 2280))(
                                           WdfDriverGlobals,
                                           v5);
    v39 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters
        ? (*(__int64 (__fastcall **)(struct _MCGEN_TRACE_CONTEXT *, PKSPIN_LOCK *))&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters)(
            v35,
            SpinLock)
        : -1073741275;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 4) == 0 )
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
               WdfDriverGlobals,
               v5,
               v12);
    v37 = v39 < 0;
    v38 = (const EVENT_DESCRIPTOR *)&USBHUB3_ETW_EVENT_HUB_IOCTL_USB_GET_NODE_CONNECTION_INFORMATION_COMPLETE;
  }
  v40 = SpinLock;
  if ( v37 )
    v40 = 0LL;
  LODWORD(v43) = v12;
  LODWORD(v42) = v8;
  McTemplateK0pqq(v35, v38, (const GUID *)v40, *(_QWORD *)(v10 + 248), v42, v43);
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2104))(
           WdfDriverGlobals,
           v5,
           v12);
}
