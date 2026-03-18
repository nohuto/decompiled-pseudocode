/*
 * XREFs of ?FindDigitizerForDevice@InteractiveControlParser@@CAJPEAVInteractiveControlDevice@@@Z @ 0x1C021663C
 * Callers:
 *     ?BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInteractiveControlDevice@@@Z @ 0x1C0216110 (-BuildDeviceAttributes@InteractiveControlParser@@CAJPEAU_INTERACTIVECTRL_CAPABILITIES@@PEAVInter.c)
 *     ?ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1C0216A58 (-ParseInputReport@InteractiveControlParser@@SAJPEAVInteractiveControlDevice@@PEAEKPEAUtagINTERAC.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@Z @ 0x1C0216970 (-GetScaledComponentValue@InteractiveControlParser@@SAJPEAUtagINTERACTIVECTRL_COMPONENT_ENTRY@@J@.c)
 */

__int64 __fastcall InteractiveControlParser::FindDigitizerForDevice(struct InteractiveControlDevice *a1)
{
  unsigned int v1; // edi
  char *v2; // rsi
  char *v3; // rbx
  char *v5; // rcx
  __int16 v6; // ax
  const GUID *v7; // r8
  const GUID *v8; // r9
  __int64 v10; // [rsp+30h] [rbp-39h] BYREF
  __int64 v11; // [rsp+38h] [rbp-31h] BYREF
  __int64 v12; // [rsp+40h] [rbp-29h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-19h] BYREF
  const char *v14; // [rsp+70h] [rbp+7h]
  __int64 v15; // [rsp+78h] [rbp+Fh]
  __int64 *v16; // [rsp+80h] [rbp+17h]
  __int64 v17; // [rsp+88h] [rbp+1Fh]
  char *v18; // [rsp+90h] [rbp+27h]
  __int64 v19; // [rsp+98h] [rbp+2Fh]

  v1 = 0;
  v2 = (char *)a1 + 184;
  v3 = (char *)*((_QWORD *)a1 + 23);
  v11 = 0LL;
  v12 = 0LL;
  while ( v3 != v2 )
  {
    v5 = v3;
    v3 = *(char **)v3;
    if ( *((_DWORD *)v5 + 4) == 1 )
    {
      v6 = *((_WORD *)v5 + 40);
      if ( v6 == 48 )
      {
        LODWORD(v12) = InteractiveControlParser::GetScaledComponentValue(
                         (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v5,
                         *((_DWORD *)v5 + 19) - *((_DWORD *)v5 + 18));
      }
      else if ( v6 == 49 )
      {
        HIDWORD(v12) = InteractiveControlParser::GetScaledComponentValue(
                         (struct tagINTERACTIVECTRL_COMPONENT_ENTRY *)v5,
                         *((_DWORD *)v5 + 19) - *((_DWORD *)v5 + 18));
      }
    }
  }
  RIMFindTouchDigitizerWithSize(&v11, (char *)a1 + 240);
  if ( !*((_QWORD *)a1 + 30) )
  {
    if ( dword_1C031C7D0 > 3u )
    {
      v15 = 84LL;
      v14 = "InteractiveControlParser::FindDigitizerForDevice failed to find matching digitizer.";
      v10 = v12;
      v16 = &v10;
      v18 = (char *)&v10 + 4;
      v17 = 4LL;
      v19 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E4327, v7, v8, 5u, &pData);
    }
    return (unsigned int)-1073741632;
  }
  return v1;
}
