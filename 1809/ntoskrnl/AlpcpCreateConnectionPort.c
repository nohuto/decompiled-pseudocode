/*
 * XREFs of AlpcpCreateConnectionPort @ 0x1406B7948
 * Callers:
 *     NtAlpcCreatePort @ 0x1406B7900 (NtAlpcCreatePort.c)
 *     NtCreatePort @ 0x1406DCD40 (NtCreatePort.c)
 *     NtCreateWaitablePort @ 0x14071FB60 (NtCreateWaitablePort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004E150 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     AlpcpCreatePort @ 0x140615C6C (AlpcpCreatePort.c)
 *     AlpcpInitializePort @ 0x140615CD0 (AlpcpInitializePort.c)
 *     AlpcpValidateAndSetPortAttributes @ 0x140615E5C (AlpcpValidateAndSetPortAttributes.c)
 *     AlpcpSetOwnerProcessPort @ 0x1406164A0 (AlpcpSetOwnerProcessPort.c)
 *     AlpcpAllocateBlob @ 0x14061949C (AlpcpAllocateBlob.c)
 *     AlpcInitializeHandleTable @ 0x14061AC84 (AlpcInitializeHandleTable.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 */

__int64 __fastcall AlpcpCreateConnectionPort(
        HANDLE *a1,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        char a5,
        char a6)
{
  char PreviousMode; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 result; // rax
  char v14; // al
  _QWORD *v15; // rbx
  int v16; // r14d
  int *v17; // r14
  int v18; // edi
  char *Blob; // rax
  _QWORD *v20; // rax
  int v21; // eax
  int inserted; // ebx
  HANDLE Handle; // [rsp+40h] [rbp-A8h] BYREF
  PVOID Object; // [rsp+48h] [rbp-A0h] BYREF
  _OWORD v25[5]; // [rsp+50h] [rbp-98h] BYREF

  memset(v25, 0, 0x48uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v11 = (__int64)a1;
    if ( (unsigned __int64)a1 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v11 = *(_QWORD *)v11;
    if ( a3 )
    {
      v12 = a3;
      if ( a3 >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      v25[0] = *(_OWORD *)v12;
      v25[1] = *(_OWORD *)(v12 + 16);
      v25[2] = *(_OWORD *)(v12 + 32);
      v25[3] = *(_OWORD *)(v12 + 48);
      *(_QWORD *)&v25[4] = *(_QWORD *)(v12 + 64);
    }
  }
  else if ( a3 )
  {
    v25[0] = *(_OWORD *)a3;
    v25[1] = *(_OWORD *)(a3 + 16);
    v25[2] = *(_OWORD *)(a3 + 32);
    v25[3] = *(_OWORD *)(a3 + 48);
    *(_QWORD *)&v25[4] = *(_QWORD *)(a3 + 64);
  }
  result = AlpcpCreatePort(PreviousMode, a2, &Object);
  if ( (int)result >= 0 )
  {
    if ( a3 )
    {
      v14 = a5;
      if ( (v25[0] & 0x40000) != 0 )
        v14 = 1;
      a5 = v14;
    }
    v15 = Object;
    v16 = AlpcpInitializePort((__int64)Object, 1, a5);
    if ( v16 < 0 )
    {
      ObfDereferenceObject(v15);
      return (unsigned int)v16;
    }
    v17 = (int *)((unsigned __int64)v25 & -(__int64)(a3 != 0));
    v18 = AlpcpValidateAndSetPortAttributes((__int64)v15, v17, (__int64)v15, 0LL, a4, a5, a6);
    if ( v18 >= 0 )
    {
      if ( a6 )
        *((_DWORD *)v15 + 104) |= 0x3000u;
      AlpcpSetOwnerProcessPort((__int64)v15, v17);
      Blob = AlpcpAllocateBlob((__int64)&AlpcConnectionType, 80LL, 1);
      v15[2] = Blob;
      if ( Blob )
      {
        *((_QWORD *)Blob + 2) = 0LL;
        *(_QWORD *)v15[2] = v15;
        *(_QWORD *)(v15[2] + 8LL) = 0LL;
        *(_QWORD *)(v15[2] + 72LL) = 0LL;
        v20 = (_QWORD *)(v15[2] + 24LL);
        v20[1] = v20;
        *v20 = v20;
        v21 = AlpcInitializeHandleTable(v15[2] + 40LL);
        if ( v21 >= 0 )
        {
          inserted = ObInsertObjectEx(v15, 0LL, 2031617LL, 0, 0, 0LL, (unsigned __int64 *)&Handle);
          if ( inserted >= 0 )
            *a1 = Handle;
          return (unsigned int)inserted;
        }
        v18 = v21;
      }
      else
      {
        v18 = -1073741801;
      }
    }
    ObfDereferenceObject(v15);
    return (unsigned int)v18;
  }
  return result;
}
