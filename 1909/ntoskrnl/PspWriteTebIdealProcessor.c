/*
 * XREFs of PspWriteTebIdealProcessor @ 0x1405E7900
 * Callers:
 *     PspUserThreadStartup @ 0x1405E7470 (PspUserThreadStartup.c)
 *     NtSetInformationThread @ 0x1405F1400 (NtSetInformationThread.c)
 * Callees:
 *     KeGetProcessorNumberFromIndex @ 0x140015DA0 (KeGetProcessorNumberFromIndex.c)
 *     ExReleaseRundownProtection_0 @ 0x140043C20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140043CA0 (ExAcquireRundownProtection_0.c)
 *     KiStackAttachProcess @ 0x1400CD9F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CDDC0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

void __fastcall PspWriteTebIdealProcessor(__int64 a1, __int64 a2)
{
  _PROCESSOR_NUMBER *v4; // r15
  _PROCESSOR_NUMBER *v5; // r14
  _PROCESSOR_NUMBER *v6; // r13
  _KPROCESS *v7; // rcx
  unsigned __int64 v8; // rax
  char v9; // di
  char v10; // si
  _PROCESSOR_NUMBER *i; // r12
  _PROCESSOR_NUMBER v12; // eax
  signed __int32 v13[8]; // [rsp+0h] [rbp-C8h] BYREF
  char v14; // [rsp+20h] [rbp-A8h]
  char v15; // [rsp+21h] [rbp-A7h]
  _PROCESSOR_NUMBER ProcNumber; // [rsp+24h] [rbp-A4h] BYREF
  _PROCESSOR_NUMBER v17; // [rsp+28h] [rbp-A0h] BYREF
  _KPROCESS *v18; // [rsp+30h] [rbp-98h]
  _PROCESSOR_NUMBER *v19; // [rsp+38h] [rbp-90h]
  _PROCESSOR_NUMBER *v20; // [rsp+40h] [rbp-88h]
  _PROCESSOR_NUMBER *p_ProcNumber; // [rsp+48h] [rbp-80h]
  _PROCESSOR_NUMBER *v22; // [rsp+50h] [rbp-78h]
  __int64 v23; // [rsp+58h] [rbp-70h]
  _BYTE v24[48]; // [rsp+60h] [rbp-68h] BYREF

  v23 = a2;
  memset(v24, 0, sizeof(v24));
  ProcNumber = 0;
  v17 = 0;
  v4 = 0LL;
  v19 = 0LL;
  v5 = 0LL;
  v20 = 0LL;
  v6 = *(_PROCESSOR_NUMBER **)(a2 + 240);
  v22 = v6;
  v7 = *(_KPROCESS **)(a2 + 544);
  v18 = v7;
  p_ProcNumber = &ProcNumber;
  v8 = v7[1].ActiveProcessors.Bitmap[6];
  if ( v8 )
  {
    if ( *(_WORD *)(v8 + 8) == 0x8664 )
    {
      v5 = v6 + 2048;
      v20 = v6 + 2048;
    }
    else
    {
      v4 = v6 + 2048;
      v19 = v6 + 2048;
    }
  }
  v9 = 0;
  v14 = 0;
  if ( a2 != a1 )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1736)) )
      return;
    v9 = 1;
    v14 = 1;
    v7 = v18;
  }
  v10 = 0;
  v15 = 0;
  if ( v7 != *(_KPROCESS **)(a1 + 184) )
  {
    KiStackAttachProcess(v7, 0, (__int64)v24);
    v10 = 1;
    v15 = 1;
  }
  KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &ProcNumber);
  for ( i = p_ProcNumber; ; *i = v17 )
  {
    ProcNumber.Reserved = ProcNumber.Number;
    v12 = ProcNumber;
    v6[1489] = ProcNumber;
    if ( v5 )
      v5[1489] = v12;
    if ( v4 )
    {
      LOWORD(v18) = v12.Group;
      BYTE2(v18) = v12.Number & 0x1F;
      BYTE3(v18) = v12.Reserved & 0x1F;
      v4[989] = (_PROCESSOR_NUMBER)v18;
    }
    _InterlockedOr(v13, 0);
    KeGetProcessorNumberFromIndex(*(_DWORD *)(a2 + 196), &v17);
    if ( v17.Group == ProcNumber.Group && v17.Number == ProcNumber.Number )
      break;
  }
  if ( v10 )
    KiUnstackDetachProcess((struct _KTHREAD *)v24, 0);
  if ( v9 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a2 + 1736));
}
