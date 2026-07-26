/*
 * XREFs of ?ndisDriverSystemDispatch@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0031E38
 * Callers:
 *     ?ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0019840 (-ndisDispatchRequest@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qqL @ 0x1C00065A0 (WPP_RECORDER_SF_qqL.c)
 *     ?ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z @ 0x1C0031F34 (-ndisEtwRegisterGuids@@YAJPEAUWMIREGINFOW@@KPEAK@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0032368 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall ndisDriverSystemDispatch(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v3; // ebx
  struct _IRP *v4; // rsi
  unsigned int LowPart; // r14d
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rdi
  LONGLONG v8; // rcx
  char v9; // [rsp+30h] [rbp-38h]
  unsigned int v10; // [rsp+78h] [rbp+10h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v4 = a2;
  v10 = 0;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      70,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      (char)a1,
      v9,
      CurrentStackLocation->MinorFunction);
  }
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 4u:
      if ( LowPart < 0x30 || !Parameters || Parameters->NamedPipeType < 0x30 )
        goto LABEL_29;
      v8 = Parameters->DefaultTimeout.QuadPart - *(_QWORD *)&ndisControlGuid.Data1;
      if ( !v8 )
        v8 = *(_QWORD *)&Parameters->TimeoutSpecified - *(_QWORD *)ndisControlGuid.Data4;
      if ( v8 )
      {
LABEL_29:
        v3 = -1073741811;
      }
      else
      {
        qword_1C00E8050 = *(_QWORD *)&Parameters->CompletionMode;
        byte_1C00E804C = BYTE2(qword_1C00E8050);
        ndisLogger = HIDWORD(qword_1C00E8050);
        if ( (qword_1C00E8050 & 0x800000000LL) != 0 )
          LOBYTE(dword_1C00E8058) = 1;
        if ( (qword_1C00E8050 & 0x100000000LL) != 0 )
          BYTE1(dword_1C00E8058) = 1;
        if ( (qword_1C00E8050 & 0x200000000LL) != 0 )
          BYTE2(dword_1C00E8058) = 1;
        if ( (qword_1C00E8050 & 0x400000000LL) != 0 )
          HIBYTE(dword_1C00E8058) = 1;
        if ( (qword_1C00E8050 & 0x1000000000LL) != 0 )
          LOBYTE(word_1C00E805C) = 1;
        if ( (qword_1C00E8050 & 0x2000000000LL) != 0 )
          HIBYTE(word_1C00E805C) = 1;
      }
      break;
    case 5u:
      byte_1C00E804C = 0;
      ndisLogger = 0;
      qword_1C00E8050 = 0LL;
      dword_1C00E8058 = 0;
      word_1C00E805C = 0;
      v4->IoStatus.Information = 0LL;
      break;
    case 0xBu:
      v3 = ndisEtwRegisterGuids((struct WMIREGINFOW *)Parameters, LowPart, &v10);
      v4->IoStatus.Information = v10;
      break;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      71,
      (struct _GUID *)&WPP_34b7afbc912539598d6d69098c3d2070_Traceguids,
      v3);
  }
  return v3;
}
