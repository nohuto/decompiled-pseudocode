/*
 * XREFs of IopWriteCapsuleTriageDumpToFirmware @ 0x1402976EC
 * Callers:
 *     IoWriteCrashDump @ 0x14029580C (IoWriteCrashDump.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     IoFillDumpHeader @ 0x140294748 (IoFillDumpHeader.c)
 *     IoFillTriageDumpBuffer @ 0x140294A14 (IoFillTriageDumpBuffer.c)
 *     IopUpdateMinidumpContext @ 0x140297338 (IopUpdateMinidumpContext.c)
 *     IopWriteTriageDumpToFirmware @ 0x140297A2C (IopWriteTriageDumpToFirmware.c)
 *     MmSnapTriageDumpInformation @ 0x1402C6610 (MmSnapTriageDumpInformation.c)
 *     VfDisableHalVerifier @ 0x140327CF8 (VfDisableHalVerifier.c)
 */

bool __fastcall IopWriteCapsuleTriageDumpToFirmware(
        int a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        void *a7)
{
  char *v7; // rsi
  char v8; // r14
  _KTHREAD *v13; // r9
  int v14; // r10d
  int v15; // ebx
  __int64 v16; // rax
  int v17; // [rsp+38h] [rbp-71h]
  int v19; // [rsp+74h] [rbp-35h] BYREF
  void *v20; // [rsp+78h] [rbp-31h]
  _QWORD *v21; // [rsp+80h] [rbp-29h]
  __int64 v22; // [rsp+88h] [rbp-21h] BYREF
  void *v23; // [rsp+90h] [rbp-19h]
  __int64 v24; // [rsp+98h] [rbp-11h]
  __int64 v25; // [rsp+A0h] [rbp-9h]

  v7 = (char *)CapsuleTriageDumpBlock;
  v8 = 0;
  v20 = a7;
  v21 = a6;
  v19 = 0;
  if ( !CapsuleTriageDumpBlock )
    return 0;
  VfDisableHalVerifier();
  v25 = a5;
  v22 = a2;
  v23 = a3;
  v24 = a4;
  IopUpdateMinidumpContext(v14, a2, a3, a4, a5, a6, v13);
  MmSnapTriageDumpInformation(a6, &v22);
  IoFillDumpHeader((_NT_PRODUCT_TYPE *)v7 + 1031, 4, a1, a2, (__int64)a3, a4, a5, (__int64)v20);
  v22 = (unsigned int)IopNumTriageDumpDataBlocks | 0x10000000000LL;
  v23 = &IopTriageDumpDataBlocks;
  v15 = IoFillTriageDumpBuffer(
          0x3E000u,
          (__int64 *)(v7 + 12316),
          1,
          3583,
          0LL,
          (__int64)v21,
          v20,
          v17,
          65,
          1u,
          (__int64)&v22,
          (__int64)&v22,
          &v19);
  memset(v7 + 4220, 0, 0x20uLL);
  *((_DWORD *)v7 + 2070) = 0;
  v16 = *((unsigned int *)v7 + 3080);
  *((_DWORD *)v7 + 2075) |= 0x88u;
  *(_QWORD *)(v7 + 8124) = v16;
  *((_DWORD *)v7 + 2069) = 3583;
  if ( v15 >= 0 )
    return (int)IopWriteTriageDumpToFirmware(CapsuleTriageDumpBlock) >= 0;
  return v8;
}
