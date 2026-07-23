/*
 * XREFs of FsRtlLogCcFlushError @ 0x140815820
 * Callers:
 *     CcMmLogLostDelayedWriteError @ 0x140269E30 (CcMmLogLostDelayedWriteError.c)
 * Callees:
 *     MmIsWriteErrorFatal @ 0x140022E5C (MmIsWriteErrorFatal.c)
 *     IoAllocateErrorLogEntry @ 0x14016CC50 (IoAllocateErrorLogEntry.c)
 *     IoWriteErrorLogEntry @ 0x14016CD70 (IoWriteErrorLogEntry.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     IoRaiseInformationalHardError @ 0x1402836F0 (IoRaiseInformationalHardError.c)
 */

NTSTATUS __stdcall FsRtlLogCcFlushError(
        PUNICODE_STRING FileName,
        PDEVICE_OBJECT DeviceObject,
        PSECTION_OBJECT_POINTERS SectionObjectPointer,
        NTSTATUS FlushError,
        ULONG Flags)
{
  NTSTATUS v7; // r14d
  NTSTATUS result; // eax
  bool v10; // zf
  NTSTATUS v11; // ecx
  int v12; // ebp
  __int64 Length; // rsi
  UCHAR v14; // si
  char *ErrorLogEntry; // rax
  void *v16; // rdi
  int v17; // ebp
  char *v18; // rsi
  unsigned int v19; // ebp
  void *v20; // rcx
  size_t v21; // rax
  wchar_t *Buffer; // rdx
  unsigned int v23; // eax
  unsigned int v24; // ebp
  __int64 v25; // rbx
  char *v26; // rsi
  char *v27; // rsi

  v7 = 0;
  result = MmIsWriteErrorFatal(1, (DeviceObject->Characteristics >> 4) & 1, FlushError);
  if ( !result )
    return result;
  if ( FlushError > -1073741623 )
  {
    if ( FlushError > -1073741252 )
    {
      if ( FlushError == -1073741247 || FlushError == -1073740964 )
        goto LABEL_29;
      if ( FlushError > -1073740699 )
      {
        if ( FlushError <= -1073740697 )
          goto LABEL_29;
        v10 = FlushError == -1073740672;
        goto LABEL_27;
      }
    }
    else
    {
      if ( FlushError == -1073741252 || FlushError == -1073741620 || FlushError == -1073741309 )
        goto LABEL_29;
      if ( FlushError > -1073741301 )
      {
        if ( FlushError <= -1073741299 )
          goto LABEL_29;
        v10 = FlushError == -1073741258;
        goto LABEL_27;
      }
    }
LABEL_28:
    v11 = -1073741278;
    v12 = -2147221454;
    goto LABEL_30;
  }
  switch ( FlushError )
  {
    case -1073741623:
      goto LABEL_29;
    case -1073741816:
    case -1073741790:
    case -1073741697:
      v11 = -1073700735;
      v12 = -2147221364;
      break;
    case -1073741672:
    case -1073741667:
    case -1073741662:
      v11 = -1073700734;
      v12 = -2147221363;
      break;
    case -1073741636:
    case -1073741634:
      goto LABEL_29;
    default:
      v10 = FlushError == -1073741628;
LABEL_27:
      if ( !v10 )
        goto LABEL_28;
LABEL_29:
      v11 = -1073700736;
      v12 = -2147221365;
      break;
  }
LABEL_30:
  __incgsdword(0x5E3Cu);
  if ( (Flags & 1) == 0 )
    IoRaiseInformationalHardError(v11, FileName, 0LL);
  if ( (Flags & 2) == 0 )
  {
    Length = FileName->Length;
    if ( (unsigned __int64)(Length + 50) > 0xF0 )
      v14 = -16;
    else
      v14 = Length + 50;
    ErrorLogEntry = (char *)IoAllocateErrorLogEntry(DeviceObject, v14);
    v16 = ErrorLogEntry;
    if ( ErrorLogEntry )
    {
      *((_DWORD *)ErrorLogEntry + 3) = v12;
      *ErrorLogEntry = 4;
      v17 = v14;
      v18 = ErrorLogEntry + 48;
      *((_WORD *)ErrorLogEntry + 3) = 48;
      v19 = v17 - 50;
      *((_DWORD *)ErrorLogEntry + 5) = FlushError;
      v20 = ErrorLogEntry + 48;
      *(_DWORD *)(ErrorLogEntry + 2) = 65540;
      *((_DWORD *)ErrorLogEntry + 10) = FlushError;
      v21 = FileName->Length;
      Buffer = FileName->Buffer;
      if ( v19 >= (unsigned int)v21 )
      {
        memmove(v20, Buffer, v21);
        v27 = &v18[2 * ((unsigned __int64)FileName->Length >> 1)];
      }
      else
      {
        v23 = 2 * (v19 >> 2) - 4;
        v24 = v19 - v23 - 8;
        v25 = v23;
        memmove(v20, Buffer, v23);
        v26 = &v18[v25];
        *(_QWORD *)v26 = 0x20002E002E0020LL;
        v26 += 8;
        memmove(v26, (char *)FileName->Buffer + FileName->Length - (unsigned __int64)v24, v24);
        v27 = &v26[v24];
      }
      *(_WORD *)v27 = 0;
      IoWriteErrorLogEntry(v16);
    }
    else
    {
      return -1073741670;
    }
  }
  return v7;
}
