/*
 * XREFs of EtwpFileProvTrace @ 0x140310E20
 * Callers:
 *     EtwpTraceFileIo @ 0x140311C30 (EtwpTraceFileIo.c)
 * Callees:
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x1400CAE40 (EtwWriteEx.c)
 */

char __fastcall EtwpFileProvTrace(PEVENT_DATA_DESCRIPTOR UserData, ULONG UserDataCount, __int16 a3, const GUID *a4)
{
  ULONG v4; // edi
  char result; // al
  const EVENT_DESCRIPTOR *v9; // rbx
  REGHANDLE v10; // rsi

  v4 = 0;
  result = a3 - 64;
  switch ( a3 )
  {
    case 1088:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_Create;
      goto LABEL_25;
    case 1089:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_Cleanup;
      goto LABEL_25;
    case 1090:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_Close;
      goto LABEL_25;
    case 1091:
      v4 = 1;
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_Read;
      goto LABEL_25;
    case 1092:
      v4 = 1;
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_Write;
      goto LABEL_25;
    case 1093:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_SetInformation;
      goto LABEL_25;
    case 1094:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_Delete;
      goto LABEL_25;
    case 1095:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_Rename;
      goto LABEL_25;
    case 1096:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_DirEnum;
      goto LABEL_25;
    case 1097:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_Flush;
      goto LABEL_25;
    case 1098:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_QueryInformation;
      goto LABEL_25;
    case 1099:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_FSCTL;
      goto LABEL_25;
    case 1100:
      v4 = 1;
      v9 = &KFileEvt_OperationEnd;
      goto LABEL_25;
    case 1101:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_DirNotify;
      goto LABEL_25;
    case 1102:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_CreateNewFile;
      goto LABEL_25;
    case 1103:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_DeletePath;
      goto LABEL_25;
    case 1104:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_RenamePath;
      goto LABEL_25;
    case 1105:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_SetLinkPath;
      goto LABEL_25;
    case 1106:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_SetLink;
      goto LABEL_25;
    case 1107:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_SetSecurity;
      goto LABEL_25;
    case 1108:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_QuerySecurity;
      goto LABEL_25;
    case 1109:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_SetEA;
      goto LABEL_25;
    case 1110:
      v9 = (const EVENT_DESCRIPTOR *)&KFileEvt_QueryEA;
LABEL_25:
      v10 = EtwpFileProvRegHandle;
      result = EtwEventEnabled(EtwpFileProvRegHandle, v9);
      if ( result )
        result = EtwWriteEx(v10, v9, 0LL, v4, a4, 0LL, UserDataCount, UserData);
      break;
    default:
      return result;
  }
  return result;
}
