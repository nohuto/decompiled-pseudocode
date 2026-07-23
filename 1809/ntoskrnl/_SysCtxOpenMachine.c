/*
 * XREFs of _SysCtxOpenMachine @ 0x14073CC58
 * Callers:
 *     _PnpCtxCreateNode @ 0x14073CB0C (_PnpCtxCreateNode.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwDuplicateObject @ 0x1401B8A70 (ZwDuplicateObject.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     _RegRtlOpenKeyTransacted @ 0x1405C8B4C (_RegRtlOpenKeyTransacted.c)
 *     RtlGetVersion @ 0x1406B59D0 (RtlGetVersion.c)
 *     _SysCtxOpenControlSet @ 0x14073CE88 (_SysCtxOpenControlSet.c)
 */

__int64 __fastcall SysCtxOpenMachine(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        HANDLE SourceHandle,
        int a6,
        _QWORD *a7)
{
  int Version; // ebx
  _BYTE *PoolWithTag; // rax
  _BYTE *v11; // rdi
  __int64 v12; // rcx
  int v13; // r8d
  const WCHAR *v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  HANDLE v17; // rcx
  HANDLE TargetHandle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE v21; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v22; // [rsp+58h] [rbp-A8h] BYREF
  HANDLE v23; // [rsp+60h] [rbp-A0h]
  _BYTE VersionInformation[284]; // [rsp+70h] [rbp-90h] BYREF

  Handle = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  Version = 0;
  TargetHandle = 0LL;
  *a7 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x38uLL, 0x53504E50u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    Version = -1073741801;
    goto LABEL_27;
  }
  memset(PoolWithTag, 0, 0x38uLL);
  v13 = a6;
  if ( !a6 )
  {
    memset(VersionInformation, 0, sizeof(VersionInformation));
    *(_DWORD *)VersionInformation = 284;
    Version = RtlGetVersion((PRTL_OSVERSIONINFOW)VersionInformation);
    if ( Version < 0 )
      goto LABEL_27;
    v12 = VersionInformation[276];
    LOWORD(v12) = VersionInformation[276] << 8;
    v13 = VersionInformation[278] | (unsigned __int16)v12 | ((VersionInformation[8] | (unsigned __int16)(VersionInformation[4] << 8)) << 16);
  }
  *(_DWORD *)v11 = v13;
  if ( SourceHandle )
  {
    Version = ZwDuplicateObject(
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                SourceHandle,
                (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                &TargetHandle,
                0,
                0,
                2u);
    if ( Version < 0 )
    {
      TargetHandle = 0LL;
      goto LABEL_15;
    }
  }
  if ( !a2 )
  {
    v14 = L"SYSTEM";
    v15 = 2147483650LL;
    goto LABEL_6;
  }
  if ( a2 != -1 )
  {
    v14 = 0LL;
    v15 = a2;
LABEL_6:
    Version = RegRtlOpenKeyTransacted((char *)v15, v14, 0, 0x2000000u, &Handle, (__int64)TargetHandle);
    if ( Version )
      goto LABEL_27;
  }
  if ( !Handle || (Version = SysCtxOpenControlSet(v12, Handle, TargetHandle, &v22)) == 0 )
  {
    if ( a4 )
    {
      if ( a4 == -1 )
        goto LABEL_12;
      v16 = a4;
    }
    else
    {
      v16 = 2147483651LL;
    }
    Version = RegRtlOpenKeyTransacted((char *)v16, 0LL, 0, 0x2000000u, &v21, (__int64)TargetHandle);
    if ( !Version )
    {
LABEL_12:
      v11[16] = 1;
      v17 = 0LL;
      *((_QWORD *)v11 + 1) = TargetHandle;
      *((_QWORD *)v11 + 3) = Handle;
      *((_QWORD *)v11 + 4) = v23;
      *((_QWORD *)v11 + 6) = v22;
      *((_QWORD *)v11 + 5) = v21;
      *a7 = v11;
      v11 = 0LL;
      TargetHandle = 0LL;
      Handle = 0LL;
      v23 = 0LL;
      v22 = 0LL;
      v21 = 0LL;
      goto LABEL_13;
    }
  }
LABEL_27:
  v17 = TargetHandle;
LABEL_13:
  if ( v17 )
    ZwClose(v17);
LABEL_15:
  if ( Handle )
    ZwClose(Handle);
  if ( v23 )
    ZwClose(v23);
  if ( v22 )
    ZwClose(v22);
  if ( v21 )
    ZwClose(v21);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  return (unsigned int)Version;
}
