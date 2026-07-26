/*
 * XREFs of ndisReferenceProtocolByName @ 0x1C0138BCC
 * Callers:
 *     ?ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z @ 0x1C007BF3C (-ndisHandleProtocolUnloadNotification@@YAJPEBU_UNICODE_STRING@@@Z.c)
 *     ?ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z @ 0x1C0135CB8 (-ndisHandleProtocolReconfigNotification@@_Y2PAGENPNP@@AJPEAU_UNICODE_STRING@@0PEAXII@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_Z @ 0x1C001973C (WPP_RECORDER_SF_Z.c)
 *     ndisReferenceProtocol @ 0x1C0028420 (ndisReferenceProtocol.c)
 *     memcmp @ 0x1C0040FC0 (memcmp.c)
 */

__int64 __fastcall ndisReferenceProtocolByName(
        PCUNICODE_STRING SourceString,
        struct _NDIS_PROTOCOL_BLOCK **a2,
        char a3,
        unsigned __int8 a4)
{
  unsigned int v8; // edi
  int v9; // edx
  KIRQL v10; // al
  struct _NDIS_PROTOCOL_BLOCK *v11; // rbp
  KIRQL v12; // r12
  struct _NDIS_PROTOCOL_BLOCK *NextProtocol; // rbx
  unsigned __int16 Length; // si
  unsigned __int16 v15; // ax
  size_t v16; // r8
  wchar_t *Buffer; // rcx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-38h] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  v8 = -1073741772;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      5u,
      0x23u,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      &SourceString->Length);
  DestinationString.Length = SourceString->Length;
  DestinationString.MaximumLength = DestinationString.Length + 2;
  DestinationString.Buffer = (wchar_t *)ExAllocatePoolWithTag(
                                          NonPagedPoolNx,
                                          (unsigned __int16)(DestinationString.Length + 2),
                                          0x7473444Eu);
  if ( !DestinationString.Buffer )
  {
    *a2 = 0LL;
    v8 = -1073741670;
    goto LABEL_20;
  }
  RtlUpcaseUnicodeString(&DestinationString, SourceString, 0);
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisProtocolListLock);
  v11 = *a2;
  v12 = v10;
  NextProtocol = ndisProtocolList;
  if ( *a2 )
    NextProtocol = v11->NextProtocol;
  if ( NextProtocol )
  {
    Length = DestinationString.Length;
    do
    {
      if ( a3 )
      {
        if ( NextProtocol == v11 )
          goto LABEL_18;
        v15 = NextProtocol->Name.Length;
        if ( Length == v15 )
          goto LABEL_18;
        if ( Length < v15 )
          v15 = Length;
        v16 = v15;
      }
      else
      {
        if ( Length != NextProtocol->Name.Length )
          goto LABEL_18;
        v16 = Length;
      }
      if ( !memcmp(DestinationString.Buffer, NextProtocol->Name.Buffer, v16) )
      {
        if ( ndisReferenceProtocol((__int64)NextProtocol, a4) )
          v8 = 0;
        else
          NextProtocol = 0LL;
        break;
      }
LABEL_18:
      NextProtocol = NextProtocol->NextProtocol;
    }
    while ( NextProtocol );
  }
  KeReleaseSpinLock(&ndisProtocolListLock, v12);
  Buffer = DestinationString.Buffer;
  *a2 = NextProtocol;
  ExFreePoolWithTag(Buffer, 0);
LABEL_20:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v9,
      5,
      36,
      (struct _GUID *)&WPP_8eff094606dc365e3cd879b7a6c5bbc9_Traceguids,
      (char)*a2,
      v8);
  }
  return v8;
}
