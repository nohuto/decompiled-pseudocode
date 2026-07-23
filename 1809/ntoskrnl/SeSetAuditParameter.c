/*
 * XREFs of SeSetAuditParameter @ 0x1401194B0
 * Callers:
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall SeSetAuditParameter(
        PSE_ADT_PARAMETER_ARRAY AuditParameters,
        SE_ADT_PARAMETER_TYPE Type,
        ULONG Index,
        PVOID Data)
{
  NTSTATUS v4; // r11d
  int v5; // r10d
  char *v6; // rcx
  int v8; // eax

  v4 = 0;
  v5 = 0;
  if ( !AuditParameters )
    return -1073741811;
  switch ( Type )
  {
    case SeAdtParmTypeNone:
    case SeAdtParmTypeNoLogonId:
      v6 = (char *)AuditParameters + 32 * Index;
      *((_DWORD *)v6 + 7) = 0;
      goto LABEL_5;
    case SeAdtParmTypeString:
    case SeAdtParmTypeFileSpec:
    case SeAdtParmTypeMultiSzString:
      v5 = *(unsigned __int16 *)Data + 16;
      goto LABEL_9;
    case SeAdtParmTypeUlong:
    case SeAdtParmTypeHexUlong:
    case SeAdtParmTypeMessage:
    case SeAdtParmTypeUlongNoConv:
      v5 = 4;
      v6 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v6 + 4) = *(unsigned int *)Data;
      goto LABEL_5;
    case SeAdtParmTypeSid:
      v8 = *((unsigned __int8 *)Data + 1);
      goto LABEL_19;
    case SeAdtParmTypeLogonId:
    case SeAdtParmTypeTime:
    case SeAdtParmTypeLuid:
    case SeAdtParmTypeHexInt64:
    case SeAdtParmTypeDuration:
    case SeAdtParmTypeDateTime:
    case SeAdtParmTypeLogonIdNoSid:
    case SeAdtParmTypeLogonIdEx:
      v6 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v6 + 4) = *(_QWORD *)Data;
      goto LABEL_4;
    case SeAdtParmTypeAccessMask:
    case SeAdtParmTypeObjectTypes:
    case SeAdtParmTypeStringList:
    case SeAdtParmTypeSidList:
    case SeAdtParmTypeUserAccountControl:
    case SeAdtParmTypeNoUac:
      return -1073741822;
    case SeAdtParmTypePrivs:
      if ( !Data )
        goto LABEL_9;
      if ( *(_DWORD *)Data )
      {
        v8 = 3 * *(_DWORD *)Data;
LABEL_19:
        v5 = 4 * v8 + 8;
      }
      else
      {
        v5 = 8;
      }
      goto LABEL_9;
    case SeAdtParmTypePtr:
      v6 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v6 + 4) = Data;
LABEL_4:
      v5 = 8;
      goto LABEL_5;
    case SeAdtParmTypeGuid:
      v5 = 16;
      goto LABEL_9;
    case SeAdtParmTypeSockAddr:
    case SeAdtParmTypeSockAddrNoPort:
      if ( *(_WORD *)Data == 23 )
      {
        v5 = 28;
      }
      else
      {
        v5 = 16;
        if ( *(_WORD *)Data == 33 )
          v5 = 14;
      }
LABEL_9:
      v6 = (char *)AuditParameters + 32 * Index;
      *((_QWORD *)v6 + 6) = Data;
LABEL_5:
      *((_DWORD *)v6 + 6) = Type;
      *((_DWORD *)v6 + 7) = v5;
      break;
    default:
      v4 = -1073741811;
      break;
  }
  return v4;
}
