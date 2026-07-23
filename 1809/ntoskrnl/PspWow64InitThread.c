/*
 * XREFs of PspWow64InitThread @ 0x1406A91FC
 * Callers:
 *     PspAllocateThread @ 0x1405F8E84 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x140016DB0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x140017190 (KiUnstackDetachProcess.c)
 *     RtlpGetLegacyContextLength @ 0x1400A1E1C (RtlpGetLegacyContextLength.c)
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     PspWow64GetSharedInformation @ 0x14067959C (PspWow64GetSharedInformation.c)
 *     PsWow64GetProcessNtdllType @ 0x1406795B4 (PsWow64GetProcessNtdllType.c)
 *     PspWow64InitThreadGuestx86 @ 0x1406A93E0 (PspWow64InitThreadGuestx86.c)
 *     RtlpArchContextFlagFromMachine @ 0x1406AA3FC (RtlpArchContextFlagFromMachine.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rax
  unsigned __int16 v8; // si
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r10
  _DWORD *v12; // rbx
  __int64 v13; // r14
  unsigned __int16 ProcessNtdllType; // ax
  __int64 v15; // r15
  __int64 v16; // r12
  _DWORD *v17; // rdx
  __int64 v19; // [rsp+30h] [rbp-98h] BYREF
  int v20; // [rsp+38h] [rbp-90h]
  _DWORD *v21; // [rsp+40h] [rbp-88h]
  __int64 v22; // [rsp+48h] [rbp-80h]
  _BYTE v23[48]; // [rsp+50h] [rbp-78h] BYREF

  v22 = a4;
  v6 = 0;
  v7 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7];
  if ( !v7 || (v8 = *(_WORD *)(v7 + 8)) == 0 )
    v8 = -31132;
  v9 = RtlpArchContextFlagFromMachine(v8);
  if ( !v9 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v9, 0LL, &v19);
  v21 = *(_DWORD **)(v11 + 16);
  v12 = (_DWORD *)(~((unsigned int)v19 - 1LL) & ((unsigned __int64)v21 + (unsigned int)v19 + 3));
  v19 = *(_QWORD *)(v11 + 40);
  v13 = a3[31];
  if ( v13 == PspUserThreadStart )
  {
    ProcessNtdllType = PsWow64GetProcessNtdllType((__int64)BugCheckParameter1);
    v13 = *((_QWORD *)PspWow64GetSharedInformation(ProcessNtdllType) + 4);
  }
  v15 = a3[16];
  v16 = a3[17];
  KiStackAttachProcess(BugCheckParameter1, v10, (__int64)v23);
  v17 = v21;
  *(_QWORD *)(v22 + 5256) = v21;
  *v17 = v8 << 16;
  switch ( v8 )
  {
    case 0x14Cu:
      PspWow64InitThreadGuestx86(BugCheckParameter1, v12, v13, v19, v15, v16);
      break;
    case 0x1C4u:
      memset(v12, 0, 0x1A0uLL);
      v12[14] = v19;
      v12[16] = v13;
      v12[1] = v15;
      v12[2] = v16;
      *(_QWORD *)(v12 + 17) = 48LL;
      *v12 = 2097159;
      break;
    case 0x8664u:
      memset(v12, 0, 0x4D0uLL);
      *((_QWORD *)v12 + 19) = v19;
      *((_QWORD *)v12 + 31) = v13;
      *((_QWORD *)v12 + 16) = v15;
      *((_QWORD *)v12 + 17) = v16;
      v12[12] = 1048607;
      break;
    default:
      v6 = -1073741811;
      v20 = -1073741811;
      break;
  }
  KiUnstackDetachProcess((__int64)v23, 0LL);
  return v6;
}
