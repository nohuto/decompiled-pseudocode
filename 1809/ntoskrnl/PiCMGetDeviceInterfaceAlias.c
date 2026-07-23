/*
 * XREFs of PiCMGetDeviceInterfaceAlias @ 0x1406D6384
 * Callers:
 *     PiCMHandleIoctl @ 0x1405984F0 (PiCMHandleIoctl.c)
 * Callees:
 *     PiControlFreeUserModeCallersBuffer @ 0x140006AF0 (PiControlFreeUserModeCallersBuffer.c)
 *     RtlInitUnicodeStringEx @ 0x140015EB0 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiCMReturnBufferResultData @ 0x14059ADD4 (PiCMReturnBufferResultData.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D6540 (IoGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1406D6A14 (PiCMCaptureInterfaceAliasInputData.c)
 */

__int64 __fastcall PiCMGetDeviceInterfaceAlias(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v6; // esi
  _WORD *PoolWithTag; // rdi
  unsigned __int64 v10; // r14
  NTSTATUS inited; // ebx
  unsigned int v12; // edx
  NTSTATUS v13; // eax
  UNICODE_STRING AliasSymbolicLinkName; // [rsp+50h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-39h] BYREF
  _BYTE v17[4]; // [rsp+70h] [rbp-29h] BYREF
  int v18; // [rsp+74h] [rbp-25h]
  GUID AliasInterfaceClassGuid; // [rsp+78h] [rbp-21h] BYREF
  PCWSTR SourceString; // [rsp+88h] [rbp-11h]
  int v21; // [rsp+94h] [rbp-5h]

  v6 = 0;
  PoolWithTag = 0LL;
  LODWORD(v10) = 0;
  *a6 = 0;
  inited = PiCMCaptureInterfaceAliasInputData(a1, a2, a5, v17);
  if ( inited < 0 )
    goto LABEL_23;
  if ( !SourceString || v18 )
  {
    inited = -1073741811;
  }
  else
  {
    if ( !a3 || a4 < 0x14 )
    {
      inited = -1073741811;
      v12 = 0;
      goto LABEL_28;
    }
    if ( a4 - 20 >= 2 )
      v6 = a4 - 20;
    if ( v6 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x34706E50u);
      if ( !PoolWithTag )
        inited = -1073741670;
    }
    if ( inited >= 0 )
    {
      if ( v6 >= 2 )
        *PoolWithTag = 0;
      inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
      if ( inited >= 0 )
      {
        inited = IoGetDeviceInterfaceAlias(&DestinationString, &AliasInterfaceClassGuid, &AliasSymbolicLinkName);
        if ( inited >= 0 )
        {
          v10 = ((unsigned __int64)AliasSymbolicLinkName.Length + 2) >> 1;
          if ( 2 * (unsigned __int64)(unsigned int)v10 > v6 )
          {
            inited = -1073741789;
          }
          else
          {
            memmove(PoolWithTag, AliasSymbolicLinkName.Buffer, AliasSymbolicLinkName.Length);
            PoolWithTag[(unsigned int)(v10 - 1)] = 0;
          }
          ExFreePoolWithTag(AliasSymbolicLinkName.Buffer, 0);
        }
      }
    }
  }
  v12 = 2 * v10;
  if ( inited >= 0 )
  {
    v13 = PiCMReturnBufferResultData(inited, v12, 0, PoolWithTag, v12, v21, a3, a4, a6);
    goto LABEL_21;
  }
LABEL_28:
  v13 = PiCMReturnBufferResultData(inited, v12, 0, 0LL, 0, v21, a3, a4, a6);
LABEL_21:
  inited = v13;
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0x34706E50u);
LABEL_23:
  if ( SourceString )
    PiControlFreeUserModeCallersBuffer(KeGetCurrentThread()->PreviousMode, (void *)SourceString);
  return (unsigned int)inited;
}
