/*
 * XREFs of ?DropInput@Pointer@InputTraceLogging@@SAXPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@W4DropReason@12@@Z @ 0x1C0166484
 * Callers:
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C016EBBC (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLETEFRAME@@@Z @ 0x1C016F2EC (-PopulateReferencedInputFrame@CTouchProcessor@@QEAAPEBUCPointerInputFrame@@PEAU2@KPEAURIMCOMPLET.c)
 *     ?PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerInfoNode@@_KIKHH@Z @ 0x1C016F63C (-PostPointerMessage@CTouchProcessor@@AEAAHAEBVCInputDest@@PEBUCPointerInputFrame@@PEBUCPointerIn.c)
 *     ?UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInputDest@@PEAV4@PEAKPEAGPEAIK@Z @ 0x1C0175A5C (-UpdateActivePointer@CTouchProcessor@@QEAAGPEBUCPointerInputFrame@@PEBUtagPOINTEREVENTINT@@VCInp.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0032BB0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0088074 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     _TlgCreateSz @ 0x1C0112260 (_TlgCreateSz.c)
 */

void InputTraceLogging::Pointer::DropInput()
{
  int v0; // r9d
  __int64 v1; // r10
  __int64 v2; // r11
  int v3; // r9d
  int v4; // r9d
  int v5; // r9d
  int v6; // r9d
  const CHAR *v7; // rdx
  __int64 v8; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  __int64 *v11; // [rsp+60h] [rbp+7h]
  __int64 v12; // [rsp+68h] [rbp+Fh]
  __int64 *v13; // [rsp+70h] [rbp+17h]
  __int64 v14; // [rsp+78h] [rbp+1Fh]
  __int64 v15; // [rsp+80h] [rbp+27h]
  __int64 v16; // [rsp+88h] [rbp+2Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+37h] BYREF

  if ( dword_1C020FB50 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C020FB50, 0x20uLL) )
  {
    v8 = *(_QWORD *)(v1 + 104);
    v11 = &v8;
    v9 = *(_QWORD *)(v1 + 72);
    v13 = &v9;
    v12 = 8LL;
    v14 = 8LL;
    v15 = v2;
    v16 = 2LL;
    if ( v0 )
    {
      v3 = v0 - 1;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          v5 = v4 - 1;
          if ( v5 )
          {
            v6 = v5 - 1;
            if ( v6 )
            {
              if ( v6 == 1 )
                v7 = "UIPI";
              else
                v7 = "UNKNOWN";
            }
            else
            {
              v7 = "InvalidStateTransition";
            }
          }
          else
          {
            v7 = "PointerTypeChanged";
          }
        }
        else
        {
          v7 = "CreateNodeFailed";
        }
      }
      else
      {
        v7 = "NoPointerFlags";
      }
    }
    else
    {
      v7 = "Suppressed";
    }
    TlgCreateSz(&pDesc, v7);
    TlgWrite((TraceLoggingHProvider)&dword_1C020FB50, &unk_1C01E6E7E, 0LL, 0LL, 6u, &pData);
  }
}
