/*
 * XREFs of ?NdisPDFreeMemory@@YAXPEAUPD_MEMORY_HANDLE__@@@Z @ 0x1C011F3C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C011E0E4 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDFreeMemory(struct PD_MEMORY_HANDLE__ ***a1)
{
  struct PD_MEMORY_HANDLE__ **v2; // rcx
  struct PD_MEMORY_HANDLE__ **v3; // rax
  KLockHolder v4; // [rsp+30h] [rbp-28h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      88,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00E67A8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  v2 = *a1;
  if ( (*a1)[1] != (struct PD_MEMORY_HANDLE__ *)a1 || (v3 = a1[1], *v3 != (struct PD_MEMORY_HANDLE__ *)a1) )
    __fastfail(3u);
  *v3 = (struct PD_MEMORY_HANDLE__ *)v2;
  v2[1] = (struct PD_MEMORY_HANDLE__ *)v3;
  *a1 = 0LL;
  KLockHolder::~KLockHolder(&v4);
  NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      89,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
}
