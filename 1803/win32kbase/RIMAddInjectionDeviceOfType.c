/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C00DFD50
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C00F37B0 (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C00F39F8 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0055980 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     DeviceTypeToRimInputType @ 0x1C00DF1B0 (DeviceTypeToRimInputType.c)
 *     RIMCreateDev @ 0x1C00F7534 (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1C00F78F4 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        char *a1,
        struct _UNICODE_STRING *a2,
        int a3,
        __int128 *a4,
        int a5,
        ULONG64 a6)
{
  _QWORD *v10; // r12
  int v12; // ebx
  char *v13; // rdi
  _QWORD *v14; // r14
  __int64 v15; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v17; // r8
  _BYTE **v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int16 v21; // r9
  __int64 v22; // [rsp+28h] [rbp-160h]
  PVOID Object; // [rsp+48h] [rbp-140h] BYREF
  __int64 v24; // [rsp+50h] [rbp-138h] BYREF
  int v25; // [rsp+58h] [rbp-130h]
  int v26; // [rsp+60h] [rbp-128h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-120h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-118h] BYREF
  ULONG64 v29; // [rsp+80h] [rbp-108h]
  ULONG64 v30; // [rsp+88h] [rbp-100h]
  UNICODE_STRING SourceString; // [rsp+98h] [rbp-F0h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-D8h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-C8h]
  __int128 v34; // [rsp+D0h] [rbp-B8h]
  __int128 v35; // [rsp+E0h] [rbp-A8h]
  __int128 v36; // [rsp+F0h] [rbp-98h]
  __int128 v37; // [rsp+100h] [rbp-88h]
  __int128 v38; // [rsp+110h] [rbp-78h]
  __int128 v39; // [rsp+120h] [rbp-68h]
  __int128 v40; // [rsp+130h] [rbp-58h]

  v29 = a6;
  v30 = a6;
  v26 = a3;
  v10 = (_QWORD *)a6;
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x27u,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
  if ( !a4 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      0x28u,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
    return 3221225485LL;
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v12 >= 0 )
  {
    v13 = (char *)Object;
    RIMLockExclusive((__int64)Object + 96);
    if ( v13[73] || v13[75] )
    {
      v12 = -1073741637;
      v21 = 42;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v13 + 19)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( !a5 )
        {
          p_DestinationString = a2;
          v32 = *a4;
          v33 = a4[1];
          v34 = a4[2];
          v35 = a4[3];
          v36 = a4[4];
          v37 = a4[5];
          v38 = a4[6];
          v39 = a4[7];
          v40 = a4[8];
          v14 = (_QWORD *)a6;
LABEL_24:
          if ( v12 >= 0 )
          {
            v12 = RIMCreateDev(v13, 1, (__int64)&v32, (__int64)&v24);
            if ( v12 >= 0 )
            {
              if ( a5 )
              {
                v19 = v24;
                if ( a6 >= MmUserProbeAddress )
                  v10 = (_QWORD *)MmUserProbeAddress;
                *v10 = *(_QWORD *)(v24 + 16);
              }
              else
              {
                v19 = v24;
                if ( (BYTE12(v32) & 4) != 0 )
                  v20 = *(_QWORD *)(v24 + 24);
                else
                  v20 = *(_QWORD *)(v24 + 16);
                *v14 = v20;
              }
              if ( *((_QWORD *)v13 + 78) || *((_DWORD *)v13 + 212) )
                *(_DWORD *)(v19 + 184) |= 0x20000u;
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_42;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v15 = *(unsigned int *)&a2->Length;
        v25 = v15;
        *(_DWORD *)&SourceString.Length = v15;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v17 = (ULONG64)Buffer + (unsigned __int16)v15 + 2;
        v18 = (_BYTE **)MmUserProbeAddress;
        if ( v17 < MmUserProbeAddress && (unsigned __int16)v15 <= HIWORD(v25) )
        {
          if ( (v15 & 1) != 0 )
            goto LABEL_18;
          if ( v17 > (unsigned __int64)Buffer )
          {
LABEL_20:
            DestinationString.MaximumLength = SourceString.Length;
            DestinationString.Length = SourceString.Length;
            DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
            if ( DestinationString.Buffer )
            {
              RtlCopyUnicodeString(&DestinationString, &SourceString);
              p_DestinationString = &DestinationString;
            }
            else
            {
              v12 = -1073741801;
            }
            v13 = (char *)Object;
            v14 = (_QWORD *)v29;
            goto LABEL_24;
          }
        }
        if ( (v15 & 1) == 0 )
        {
LABEL_19:
          **v18 = 0;
          goto LABEL_20;
        }
LABEL_18:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, Buffer);
        v18 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_19;
      }
      v12 = -1073741637;
      v21 = 41;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x13u,
      v21,
      (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids);
LABEL_42:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v13 + 96));
    ObfDereferenceObject(v13);
  }
  LODWORD(v22) = v12;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x2Bu,
    (__int64)&WPP_6b2f809fb36834de968d7798a4905e6c_Traceguids,
    v22);
  return (unsigned int)v12;
}
