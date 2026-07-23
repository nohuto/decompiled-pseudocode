/*
 * XREFs of PipSendQueryRemoveIrpAndCheckOpenHandles @ 0x1408419B0
 * Callers:
 *     PipProcessQueryRemovalInKernelMode @ 0x140841890 (PipProcessQueryRemovalInKernelMode.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1406EF0B8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCollectOpenHandles @ 0x1408340F0 (PnpCollectOpenHandles.c)
 *     PnpFreeVetoInformation @ 0x140834298 (PnpFreeVetoInformation.c)
 *     PnpLogVetoInformation @ 0x140834330 (PnpLogVetoInformation.c)
 *     PipEventRemovalCheckOpenHandles @ 0x140841810 (PipEventRemovalCheckOpenHandles.c)
 *     PipRecordOpenHandleVeto @ 0x140841928 (PipRecordOpenHandleVeto.c)
 */

__int64 __fastcall PipSendQueryRemoveIrpAndCheckOpenHandles(
        int a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        PVOID **a5,
        _DWORD *a6)
{
  __int64 v6; // r15
  _DWORD *v8; // r14
  int v11; // edi
  char v12; // cl
  __int64 v13; // rax
  _QWORD v15[6]; // [rsp+40h] [rbp-30h] BYREF
  struct _DEVICE_OBJECT *v16; // [rsp+A8h] [rbp+38h] BYREF

  v6 = *(_QWORD *)(a2 + 152);
  v8 = a6;
  v16 = 0LL;
  v11 = PnpDeleteLockedDeviceNodes(
          v6,
          a3,
          0,
          1,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          (ULONG_PTR)a6,
          (__int64)(a6 + 2));
  memset(v15, 0, 0x28uLL);
  v12 = BYTE5(v15[4]);
  if ( (a1 & 0xFFFFFFFB) == 0 )
    v12 = 1;
  BYTE5(v15[4]) = v12;
  if ( v6 )
    v13 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
  else
    v13 = 0LL;
  LODWORD(v15[4]) = 0;
  v15[0] = 0LL;
  v15[1] = v13 + 40;
  v15[3] = &v15[2];
  v15[2] = &v15[2];
  BYTE4(v15[4]) = (NtGlobalFlag & 0x4000) != 0;
  if ( v11 < 0 )
  {
    if ( *v8 == 6 )
      PnpCollectOpenHandles(a5, a4, (__int64)v15);
  }
  else
  {
    v11 = PipEventRemovalCheckOpenHandles(a5, a4, &v16);
    if ( v11 < 0 )
    {
      PipRecordOpenHandleVeto(a4, a5, v16, (__int64)v15, (__int64)v8);
      PnpDeleteLockedDeviceNodes(v6, a3, 1, 1, 0, 0, 0LL, 0LL);
      v11 = -2147483608;
    }
  }
  if ( BYTE5(v15[4]) )
  {
    PnpLogVetoInformation(v15[1], &v15[2]);
    PnpFreeVetoInformation((_QWORD **)&v15[2]);
  }
  return (unsigned int)v11;
}
