/*
 * XREFs of CmpPublishEventForPcaResolver @ 0x1407ECFF0
 * Callers:
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 * Callees:
 *     PsGetCurrentThreadProcess @ 0x140006800 (PsGetCurrentThreadProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     EtwEventEnabled @ 0x14005B2D0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x1400CAE00 (EtwWrite.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     CmpAttachToRegistryProcess @ 0x1405D5048 (CmpAttachToRegistryProcess.c)
 */

unsigned __int8 __fastcall CmpPublishEventForPcaResolver(__int64 a1, unsigned __int16 *a2)
{
  unsigned __int8 result; // al
  int v5; // ebx
  _KPROCESS *CurrentThreadProcess; // rax
  int v7; // r8d
  unsigned __int16 *v8; // rdx
  __int64 v9; // rax
  int v10; // ecx
  __int16 v11; // [rsp+34h] [rbp-35h] BYREF
  __int16 v12; // [rsp+38h] [rbp-31h] BYREF
  _BYTE v13[48]; // [rsp+40h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+70h] [rbp+7h] BYREF
  __int64 v15; // [rsp+80h] [rbp+17h]
  int v16; // [rsp+88h] [rbp+1Fh]
  int v17; // [rsp+8Ch] [rbp+23h]
  __int16 *v18; // [rsp+90h] [rbp+27h]
  int v19; // [rsp+98h] [rbp+2Fh]
  int v20; // [rsp+9Ch] [rbp+33h]
  __int64 v21; // [rsp+A0h] [rbp+37h]
  int v22; // [rsp+A8h] [rbp+3Fh]
  int v23; // [rsp+ACh] [rbp+43h]

  result = (unsigned __int8)memset(v13, 0, sizeof(v13));
  if ( EtwAppCompatProvRegHandle )
  {
    result = EtwEventEnabled(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED);
    if ( result )
    {
      v5 = *(_DWORD *)(a1 + 160) & 1;
      if ( !v5 )
        CmpAttachToRegistryProcess((__int64)v13);
      CurrentThreadProcess = PsGetCurrentThreadProcess();
      v7 = *a2;
      v8 = (unsigned __int16 *)CurrentThreadProcess[1].ActiveProcessors.Bitmap[15];
      LOWORD(CurrentThreadProcess) = *v8;
      UserData.Reserved = 0;
      v11 = (unsigned __int16)CurrentThreadProcess >> 1;
      v12 = (unsigned __int16)v7 >> 1;
      UserData.Ptr = (ULONGLONG)&v11;
      UserData.Size = 2;
      v9 = *((_QWORD *)v8 + 1);
      v10 = *v8;
      v17 = 0;
      v20 = 0;
      v23 = 0;
      v15 = v9;
      v18 = &v12;
      v21 = *((_QWORD *)a2 + 1);
      v16 = v10;
      v19 = 2;
      v22 = v7;
      result = EtwWrite(EtwAppCompatProvRegHandle, &APPCOMPAT_REG_WRP_ACCESS_DENIED, 0LL, 4u, &UserData);
      if ( (unsigned __int8)v5 != 1 )
        return KiUnstackDetachProcess((__int64)v13, 0LL);
    }
  }
  return result;
}
