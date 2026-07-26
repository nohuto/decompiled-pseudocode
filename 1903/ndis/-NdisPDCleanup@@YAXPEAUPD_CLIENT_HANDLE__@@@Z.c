/*
 * XREFs of ?NdisPDCleanup@@YAXPEAUPD_CLIENT_HANDLE__@@@Z @ 0x1C011EB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?ndisPDDereferenceClientDriver@@YAXPEAX@Z @ 0x1C01217FC (-ndisPDDereferenceClientDriver@@YAXPEAX@Z.c)
 */

void __fastcall NdisPDCleanup(struct PD_CLIENT_HANDLE__ ***a1)
{
  struct PD_CLIENT_HANDLE__ **v2; // rcx
  struct PD_CLIENT_HANDLE__ **v3; // rax
  __int64 v4; // rcx
  KLockHolder v5; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      21,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
  v5.m_State = Unlocked;
  v5.m_Lock = (KPushLockBase *)qword_1C00E67A8;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  v2 = *a1;
  if ( (*a1)[1] != (struct PD_CLIENT_HANDLE__ *)a1 || (v3 = a1[1], *v3 != (struct PD_CLIENT_HANDLE__ *)a1) )
    __fastfail(3u);
  *v3 = (struct PD_CLIENT_HANDLE__ *)v2;
  v2[1] = (struct PD_CLIENT_HANDLE__ *)v3;
  v4 = qword_1C00E67A8;
  *a1 = 0LL;
  RtlClearBit((PRTL_BITMAP)(v4 + 24), *((unsigned __int16 *)a1 + 52));
  KLockHolder::~KLockHolder(&v5);
  ndisPDDereferenceClientDriver(a1[10]);
  a1[10] = 0LL;
  ExFreePoolWithTag(a1, 0x6341444Eu);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      22,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
}
