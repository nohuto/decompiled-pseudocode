/*
 * XREFs of ?NdisPDDeleteBMGroup@@YAXPEAUPD_BUFFER_MANAGEMENT_GROUP_HANDLE__@@@Z @ 0x1C00FF140
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     ndisBugCheckEx @ 0x1C004FE18 (ndisBugCheckEx.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall NdisPDDeleteBMGroup(_QWORD *BugCheckParameter3)
{
  __int64 v2; // rax
  _QWORD *v3; // rcx
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x4Du, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)BugCheckParameter3);
  v4.m_State = Unlocked;
  v4.m_Lock = (KPushLockBase *)qword_1C00A07C8;
  v4.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v4);
  if ( (_QWORD *)BugCheckParameter3[3] != BugCheckParameter3 + 3 )
    ndisBugCheckEx(0x23uLL, 6uLL, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(BugCheckParameter3[2] + 80LL));
  v2 = *BugCheckParameter3;
  if ( *(_QWORD **)(*BugCheckParameter3 + 8LL) != BugCheckParameter3
    || (v3 = (_QWORD *)BugCheckParameter3[1], (_QWORD *)*v3 != BugCheckParameter3) )
  {
    __fastfail(3u);
  }
  *v3 = v2;
  *(_QWORD *)(v2 + 8) = v3;
  *BugCheckParameter3 = 0LL;
  BugCheckParameter3[2] = 0LL;
  KLockHolder::~KLockHolder(&v4);
  ExFreePoolWithTag(BugCheckParameter3, 0x6D41444Eu);
  if ( (unsigned __int8)byte_1C00A026C >= 4u )
    WPP_SF_q(0x4Eu, &WPP_ab90398e33e23eea2eee39389267d473_Traceguids, (__int64)BugCheckParameter3);
}
