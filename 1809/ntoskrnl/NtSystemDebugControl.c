/*
 * XREFs of NtSystemDebugControl @ 0x1408DBAF0
 * Callers:
 *     <none>
 * Callees:
 *     ExUnlockUserBuffer @ 0x14011A788 (ExUnlockUserBuffer.c)
 *     KdDisableDebugger @ 0x140193810 (KdDisableDebugger.c)
 *     DbgBreakPointWithStatus @ 0x1401C54B0 (DbgBreakPointWithStatus.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     DbgkCaptureLiveKernelDump @ 0x14026E15C (DbgkCaptureLiveKernelDump.c)
 *     KdEnableDebugger @ 0x14028C1D0 (KdEnableDebugger.c)
 *     KdSetDbgPrintBufferSize @ 0x14028CA50 (KdSetDbgPrintBufferSize.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140613160 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x14062AA80 (ProbeForWrite.c)
 *     ExLockUserBuffer @ 0x14069FBD8 (ExLockUserBuffer.c)
 *     DbgkCaptureLiveDump @ 0x140812920 (DbgkCaptureLiveDump.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408D7880 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtSystemDebugControl(
        SYSDBG_COMMAND ControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        PULONG ReturnLength)
{
  __int64 v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS v12; // ebx
  __int64 v13; // r13
  NTSTATUS v14; // eax
  __int32 v15; // edi
  __int32 v16; // edi
  __int32 v17; // edi
  __int32 v18; // edi
  __int32 v19; // edi
  __int32 v20; // edi
  __int32 v21; // edi
  int v22; // edi
  int v23; // edi
  int v24; // edi
  int v25; // edi
  unsigned int v26; // ebx
  unsigned int v27; // eax
  size_t v28; // rsi
  PVOID PoolWithTag; // rdi
  KPROCESSOR_MODE v30; // [rsp+34h] [rbp-D4h]
  size_t Size; // [rsp+38h] [rbp-D0h] BYREF
  SIZE_T NumberOfBytes; // [rsp+40h] [rbp-C8h]
  __int64 v33; // [rsp+48h] [rbp-C0h] BYREF
  PVOID P; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v35[56]; // [rsp+58h] [rbp-B0h] BYREF
  _OWORD v36[7]; // [rsp+90h] [rbp-78h] BYREF

  v7 = InputBufferLength;
  LODWORD(NumberOfBytes) = OutputBufferLength;
  LODWORD(Size) = 0;
  memset(v35, 0, sizeof(v35));
  memset(v36, 0, 0x40uLL);
  v33 = 0LL;
  P = 0LL;
  if ( KdPitchDebugger && !KdLocalDebugEnabled && ((ControlCode - 29) & 0xFFFFFFF7) != 0 )
    return -1073740972;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v30 = PreviousMode;
  if ( !SeSinglePrivilegeCheck(SeDebugPrivilege, PreviousMode) )
    return -1073741790;
  v12 = 0;
  if ( PreviousMode )
  {
    if ( (_DWORD)v7 )
    {
      if ( ((unsigned __int8)InputBuffer & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v13 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)InputBuffer + v7 > 0x7FFFFFFF0000LL || (char *)InputBuffer + v7 < InputBuffer )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    else
    {
      v13 = 0x7FFFFFFF0000LL;
    }
    if ( OutputBufferLength )
      ProbeForWrite(OutputBuffer, OutputBufferLength, 4u);
    if ( ReturnLength )
    {
      if ( (unsigned __int64)ReturnLength < 0x7FFFFFFF0000LL )
        v13 = (__int64)ReturnLength;
      *(_DWORD *)v13 = *(_DWORD *)v13;
    }
    PreviousMode = v30;
  }
  if ( ControlCode > SysDbgSetKdUmExceptionEnable )
  {
    v18 = ControlCode - 29;
    if ( !v18 )
    {
      if ( (_DWORD)v7 == 56 && OutputBufferLength >= 0x40000 )
      {
        *(_OWORD *)v35 = *(_OWORD *)InputBuffer;
        *(_OWORD *)&v35[16] = *((_OWORD *)InputBuffer + 1);
        *(_OWORD *)&v35[32] = *((_OWORD *)InputBuffer + 2);
        *(_QWORD *)&v35[48] = *((_QWORD *)InputBuffer + 6);
        if ( *(_DWORD *)&v35[40]
          || !*(_DWORD *)&v35[44]
          || (*(_DWORD *)v35 & 0xFFFFFFFE) != 0
          || 8 * (unsigned __int64)*(unsigned int *)&v35[44] > 0xFFFFFFFF )
        {
          return -1073741811;
        }
        v26 = 8 * *(_DWORD *)&v35[44];
        v27 = 0x100000;
        if ( OutputBufferLength <= 0x100000 )
          v27 = NumberOfBytes;
        v28 = v27;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v27, 0x704E534Bu);
        NumberOfBytes = (SIZE_T)PoolWithTag;
        if ( PoolWithTag )
        {
          v12 = ExLockUserBuffer(
                  *(unsigned __int64 *)&v35[48],
                  v26,
                  PreviousMode,
                  IoReadAccess,
                  &v33,
                  (struct _MDL **)&P);
          if ( v12 >= 0 )
          {
            memset(PoolWithTag, 0, v28);
            *(_QWORD *)&v35[48] = v33;
            v12 = DbgkCaptureLiveDump((__int64)v35, (__int64)PoolWithTag, v28, (__int64)&Size);
            if ( v12 >= 0 )
            {
              if ( (unsigned int)Size <= OutputBufferLength )
                memmove(OutputBuffer, PoolWithTag, (unsigned int)Size);
              else
                v12 = -1073741823;
            }
            ExFreePoolWithTag(PoolWithTag, 0);
            ExUnlockUserBuffer((struct _MDL *)P);
          }
          else
          {
            ExFreePoolWithTag(PoolWithTag, 0);
          }
        }
        else
        {
          v12 = -1073741801;
        }
        goto LABEL_99;
      }
      return -1073741820;
    }
    v19 = v18 - 1;
    if ( !v19 )
    {
      if ( OutputBufferLength == 1 )
      {
        *(_BYTE *)OutputBuffer = KdBlockEnable;
        goto LABEL_99;
      }
      return -1073741820;
    }
    v20 = v19 - 1;
    if ( !v20 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdBlockEnable = *(_BYTE *)InputBuffer;
        goto LABEL_99;
      }
      return -1073741820;
    }
    v21 = v20 - 1;
    if ( !v21 )
    {
      KdUmBreakMarker = -618808389;
      goto LABEL_76;
    }
    v22 = v21 - 1;
    if ( v22 )
    {
      v23 = v22 - 1;
      if ( v23 )
      {
        v24 = v23 - 1;
        if ( v24 )
        {
          v25 = v24 - 1;
          if ( v25 )
          {
            if ( v25 != 1 )
              goto LABEL_65;
            if ( (_DWORD)v7 != 64 || OutputBufferLength )
              return -1073741820;
            v36[0] = *(_OWORD *)InputBuffer;
            v36[1] = *((_OWORD *)InputBuffer + 1);
            v36[2] = *((_OWORD *)InputBuffer + 2);
            v36[3] = *((_OWORD *)InputBuffer + 3);
            v14 = DbgkCaptureLiveKernelDump((__int64)v36);
            goto LABEL_35;
          }
          goto LABEL_71;
        }
        if ( OutputBufferLength != 4 )
          return -1073741820;
        *(_DWORD *)OutputBuffer = KdUmAttachPid;
        if ( KdResetUmAttachPid )
LABEL_71:
          KdUmAttachPid = 0;
LABEL_76:
        v12 = 0;
        goto LABEL_99;
      }
    }
    else
    {
      if ( OutputBufferLength != 4 )
        return -1073741820;
      *(_DWORD *)OutputBuffer = KdUmBreakPid;
      if ( !KdResetUmBreakPid )
        goto LABEL_76;
    }
    KdUmBreakPid = 0;
    goto LABEL_76;
  }
  if ( ControlCode == SysDbgSetKdUmExceptionEnable )
  {
    if ( (_DWORD)v7 == 1 )
    {
      KdIgnoreUmExceptions = *(_BYTE *)InputBuffer == 0;
      goto LABEL_99;
    }
    return -1073741820;
  }
  if ( ControlCode > SysDbgGetAutoKdEnable )
  {
    v15 = ControlCode - 24;
    if ( !v15 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        KdAutoEnableOnEvent = *(_BYTE *)InputBuffer != 0;
        goto LABEL_99;
      }
      return -1073741820;
    }
    v16 = v15 - 1;
    if ( !v16 )
    {
      if ( OutputBufferLength == 4 )
      {
        *(_DWORD *)OutputBuffer = KdPrintBufferSize;
        goto LABEL_99;
      }
      return -1073741820;
    }
    v17 = v16 - 1;
    if ( v17 )
    {
      if ( v17 != 1 )
        goto LABEL_65;
      if ( OutputBufferLength == 1 )
      {
        *(_BYTE *)OutputBuffer = KdIgnoreUmExceptions == 0;
        goto LABEL_99;
      }
      return -1073741820;
    }
    if ( (_DWORD)v7 != 4 )
      return -1073741820;
    HIDWORD(Size) = 0;
    v14 = KdSetDbgPrintBufferSize(*(unsigned int *)InputBuffer);
LABEL_35:
    v12 = v14;
    goto LABEL_99;
  }
  if ( ControlCode == SysDbgGetAutoKdEnable )
  {
    if ( OutputBufferLength == 1 )
    {
      *(_BYTE *)OutputBuffer = KdAutoEnableOnEvent;
      goto LABEL_99;
    }
    return -1073741820;
  }
  if ( ControlCode < SysDbgQueryModuleInformation )
  {
LABEL_65:
    v12 = -1073741821;
    goto LABEL_99;
  }
  if ( ControlCode <= SysDbgQuerySpecialCalls )
    return -1073741822;
  if ( ControlCode != SysDbgBreakPoint )
  {
    if ( ControlCode > SysDbgCheckLowMemory )
    {
      if ( ControlCode == SysDbgEnableKernelDebugger )
        v14 = KdEnableDebugger();
      else
        v14 = KdDisableDebugger();
      goto LABEL_35;
    }
    return -1073741822;
  }
  if ( (_BYTE)KdDebuggerEnabled == 1 )
    DbgBreakPointWithStatus(6u);
  else
    v12 = -1073741823;
LABEL_99:
  if ( ReturnLength )
    *ReturnLength = Size;
  return v12;
}
