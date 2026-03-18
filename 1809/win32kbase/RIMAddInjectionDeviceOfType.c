/*
 * XREFs of RIMAddInjectionDeviceOfType @ 0x1C010C710
 * Callers:
 *     RIMIDECreatePseudoHIDDevice @ 0x1C011E1AC (RIMIDECreatePseudoHIDDevice.c)
 *     RIMIDECreatePseudoMouseOrKeyboardDevice @ 0x1C011E450 (RIMIDECreatePseudoMouseOrKeyboardDevice.c)
 * Callees:
 *     Win32FreePool @ 0x1C001D8F0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C00257D0 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMCreateDev @ 0x1C004F7E4 (RIMCreateDev.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     DeviceTypeToRimInputType @ 0x1C0050820 (DeviceTypeToRimInputType.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C00514E0 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     RIMFreeDev @ 0x1C0121F30 (RIMFreeDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddInjectionDeviceOfType(
        char *a1,
        struct _UNICODE_STRING *a2,
        unsigned int a3,
        __int128 *a4,
        int a5,
        ULONG64 a6)
{
  _QWORD *v10; // r12
  int v12; // ebx
  CDeviceIdentity **v13; // rdi
  __int64 v14; // rdx
  _QWORD *v15; // r14
  __int64 v16; // rcx
  WCHAR *Buffer; // rdx
  ULONG64 v18; // r8
  _BYTE **v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax
  unsigned __int16 v22; // r9
  __int64 v23; // [rsp+28h] [rbp-160h]
  PVOID Object; // [rsp+48h] [rbp-140h] BYREF
  __int64 v26; // [rsp+50h] [rbp-138h] BYREF
  int v27; // [rsp+58h] [rbp-130h]
  unsigned int v28; // [rsp+60h] [rbp-128h]
  struct _UNICODE_STRING *p_DestinationString; // [rsp+68h] [rbp-120h]
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-118h] BYREF
  ULONG64 v31; // [rsp+80h] [rbp-108h]
  ULONG64 v32; // [rsp+88h] [rbp-100h]
  UNICODE_STRING SourceString; // [rsp+98h] [rbp-F0h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-D8h] BYREF
  __int128 v35; // [rsp+C0h] [rbp-C8h]
  __int128 v36; // [rsp+D0h] [rbp-B8h]
  __int128 v37; // [rsp+E0h] [rbp-A8h]
  __int128 v38; // [rsp+F0h] [rbp-98h]
  __int128 v39; // [rsp+100h] [rbp-88h]
  __int128 v40; // [rsp+110h] [rbp-78h]
  __int128 v41; // [rsp+120h] [rbp-68h]
  __int128 v42; // [rsp+130h] [rbp-58h]

  v31 = a6;
  v32 = a6;
  v28 = a3;
  v10 = (_QWORD *)a6;
  WPP_RECORDER_SF_(gRimLog, 3u, 0x15u, 0x27u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
  if ( !a4 )
  {
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, 0x28u, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
    return 3221225485LL;
  }
  v12 = RawInputManagerObjectResolveHandle(a1, 3u, 0, &Object);
  if ( v12 >= 0 )
  {
    v13 = (CDeviceIdentity **)Object;
    RIMLockExclusive((__int64)Object + 104);
    if ( *((_BYTE *)v13 + 81) || *((_BYTE *)v13 + 82) )
    {
      v12 = -1073741637;
      v22 = 42;
    }
    else
    {
      if ( ((unsigned int)DeviceTypeToRimInputType(a3) & *((_DWORD *)v13 + 21)) != 0 )
      {
        p_DestinationString = 0LL;
        *(_QWORD *)&DestinationString.Length = 0LL;
        DestinationString.Buffer = 0LL;
        if ( !a5 )
        {
          p_DestinationString = a2;
          v34 = *a4;
          v35 = a4[1];
          v36 = a4[2];
          v37 = a4[3];
          v38 = a4[4];
          v39 = a4[5];
          v40 = a4[6];
          v41 = a4[7];
          v42 = a4[8];
          v14 = a3;
          v15 = (_QWORD *)a6;
LABEL_24:
          if ( v12 >= 0 )
          {
            v12 = RIMCreateDev(v13, v14, (__int64)p_DestinationString, 0, 1, (__int64)&v34, &v26);
            if ( v12 >= 0 )
            {
              if ( a5 )
              {
                v20 = v26;
                if ( a6 >= MmUserProbeAddress )
                  v10 = (_QWORD *)MmUserProbeAddress;
                *v10 = *(_QWORD *)(v26 + 16);
              }
              else
              {
                v20 = v26;
                if ( (BYTE12(v34) & 4) != 0 )
                  v21 = *(_QWORD *)(v26 + 24);
                else
                  v21 = *(_QWORD *)(v26 + 16);
                *v15 = v21;
              }
              if ( v13[80] || *((_DWORD *)v13 + 216) )
                *(_DWORD *)(v20 + 184) |= 0x20000u;
            }
          }
          if ( DestinationString.Buffer )
            Win32FreePool((__int64)DestinationString.Buffer);
          goto LABEL_42;
        }
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (struct _UNICODE_STRING *)MmUserProbeAddress;
        v16 = *(unsigned int *)&a2->Length;
        v27 = v16;
        *(_DWORD *)&SourceString.Length = v16;
        Buffer = a2->Buffer;
        SourceString.Buffer = Buffer;
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v18 = (ULONG64)Buffer + (unsigned __int16)v16 + 2;
        v19 = (_BYTE **)MmUserProbeAddress;
        if ( v18 < MmUserProbeAddress && (unsigned __int16)v16 <= HIWORD(v27) )
        {
          if ( (v16 & 1) != 0 )
            goto LABEL_18;
          if ( v18 > (unsigned __int64)Buffer )
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
            v13 = (CDeviceIdentity **)Object;
            v14 = a3;
            v15 = (_QWORD *)v31;
            goto LABEL_24;
          }
        }
        if ( (v16 & 1) == 0 )
        {
LABEL_19:
          **v19 = 0;
          goto LABEL_20;
        }
LABEL_18:
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, Buffer, v18);
        v19 = (_BYTE **)MmUserProbeAddress;
        goto LABEL_19;
      }
      v12 = -1073741637;
      v22 = 41;
    }
    WPP_RECORDER_SF_(gRimLog, 3u, 0x14u, v22, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids);
LABEL_42:
    CInpPushLock::UnLockExclusive((CInpPushLock *)(v13 + 13));
    ObfDereferenceObject(v13);
  }
  LODWORD(v23) = v12;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0x2Bu, (__int64)&WPP_ff8d7d31783c3bc296050c767c63afe6_Traceguids, v23);
  return (unsigned int)v12;
}
