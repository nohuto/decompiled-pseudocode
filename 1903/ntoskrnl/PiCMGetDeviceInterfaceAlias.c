/*
 * XREFs of PiCMGetDeviceInterfaceAlias @ 0x1406F5BC0
 * Callers:
 *     PiCMHandleIoctl @ 0x1405BB780 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140002850 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140002C70 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x1405BCA60 (PiCMReturnBufferResultData.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F5DA0 (IoGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406F6284 (PiCMCaptureInterfaceAliasInputData.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceAlias(
        __int64 a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  _WORD *PoolWithTag; // rsi
  unsigned __int64 v11; // r14
  int v12; // eax
  unsigned int v13; // edx
  NTSTATUS inited; // ebx
  unsigned int v15; // edi
  NTSTATUS v16; // eax
  UNICODE_STRING AliasSymbolicLinkName; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v20[5]; // [rsp+70h] [rbp-29h] BYREF

  *(_QWORD *)&AliasSymbolicLinkName.Length = 0LL;
  AliasSymbolicLinkName.Buffer = 0LL;
  memset(v20, 0, sizeof(v20));
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  PoolWithTag = 0LL;
  *a6 = 0;
  LODWORD(v11) = 0;
  v12 = PiCMCaptureInterfaceAliasInputData(a1, a2, a5, v20);
  v13 = 0;
  inited = v12;
  if ( v12 < 0 )
    goto LABEL_23;
  if ( !v20[3] || HIDWORD(v20[0]) )
  {
    inited = -1073741811;
  }
  else
  {
    if ( !a3 || a4 < 0x14 )
    {
      inited = -1073741811;
      goto LABEL_28;
    }
    v15 = 0;
    if ( a4 - 20 >= 2 )
      v15 = a4 - 20;
    if ( v15 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v15, 0x34706E50u);
      if ( !PoolWithTag )
        inited = -1073741670;
    }
    if ( inited >= 0 )
    {
      if ( v15 >= 2 )
        *PoolWithTag = 0;
      inited = RtlInitUnicodeStringEx(&DestinationString, (PCWSTR)v20[3]);
      if ( inited >= 0 )
      {
        inited = IoGetDeviceInterfaceAlias(&DestinationString, (const GUID *)&v20[1], &AliasSymbolicLinkName);
        if ( inited >= 0 )
        {
          v11 = ((unsigned __int64)AliasSymbolicLinkName.Length + 2) >> 1;
          if ( 2 * (unsigned __int64)(unsigned int)v11 > v15 )
          {
            inited = -1073741789;
          }
          else
          {
            memmove(PoolWithTag, AliasSymbolicLinkName.Buffer, AliasSymbolicLinkName.Length);
            PoolWithTag[(unsigned int)(v11 - 1)] = 0;
          }
          ExFreePoolWithTag(AliasSymbolicLinkName.Buffer, 0);
        }
      }
    }
  }
  v13 = 2 * v11;
  if ( inited >= 0 )
  {
    v16 = PiCMReturnBufferResultData(inited, v13, 0, PoolWithTag, v13, SHIDWORD(v20[4]), a3, a4, a6);
    goto LABEL_21;
  }
LABEL_28:
  v16 = PiCMReturnBufferResultData(inited, v13, 0, 0LL, 0, SHIDWORD(v20[4]), a3, a4, a6);
LABEL_21:
  inited = v16;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_23:
  if ( v20[3] )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)v20[3]);
  return (unsigned int)inited;
}
