/*
 * XREFs of ?NdisPDFreeBufferSet@@YAXPEAUPD_BUFFER_SET_HANDLE__@@@Z @ 0x1C011F270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00FCD0C (--1KLockHolder@@QEAA@XZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00FCF64 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z @ 0x1C011E0E4 (--_GNDIS_PD_MEM_BLOCK@@QEAAPEAXI@Z.c)
 */

void __fastcall NdisPDFreeBufferSet(struct PD_BUFFER_SET_HANDLE__ *a1)
{
  struct PD_BUFFER_SET_HANDLE__ *v2; // rdi
  __int64 v3; // rcx
  struct PD_BUFFER_SET_HANDLE__ **v4; // rax
  int v5; // edx
  _QWORD *v6; // rsi
  struct PD_BUFFER_SET_HANDLE__ *v7; // rbp
  KLockHolder v8; // [rsp+40h] [rbp-38h] BYREF

  v2 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      83,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
  v8.m_State = Unlocked;
  v8.m_Lock = (KPushLockBase *)qword_1C00E67E8;
  v8.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v8);
  v3 = *(_QWORD *)a1;
  if ( *(struct PD_BUFFER_SET_HANDLE__ **)(*(_QWORD *)a1 + 8LL) != a1
    || (v4 = (struct PD_BUFFER_SET_HANDLE__ **)*((_QWORD *)a1 + 1), *v4 != a1) )
  {
    __fastfail(3u);
  }
  *v4 = (struct PD_BUFFER_SET_HANDLE__ *)v3;
  *(_QWORD *)(v3 + 8) = v4;
  *(_QWORD *)a1 = 0LL;
  KLockHolder::~KLockHolder(&v8);
  do
  {
    v6 = (_QWORD *)((char *)v2 + 64);
    v7 = v2;
    v2 = (struct PD_BUFFER_SET_HANDLE__ *)*((_QWORD *)v2 + 8);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 4;
      WPP_RECORDER_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        29,
        84,
        (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
        (char)a1,
        (char)v7);
    }
    *v6 = 0LL;
    NDIS_PD_MEM_BLOCK::`scalar deleting destructor'(v7);
  }
  while ( v2 );
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      29,
      85,
      (struct _GUID *)&WPP_5f85a8a445ed38721f29efd45c5f3696_Traceguids,
      (char)a1);
}
