/*
 * XREFs of ?NdisPDBMAllocateCommonBuffer@@YAJPEAUNDIS_PD_BM_DOMAIN_HANDLE__@@KKKPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0102D10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026E30 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027180 (memset.c)
 *     WPP_SF_dq @ 0x1C0041A40 (WPP_SF_dq.c)
 *     WPP_SF_dqd @ 0x1C007D1E8 (WPP_SF_dqd.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00C2AE0 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00C2E30 (--1KLockHolder@@QEAA@XZ.c)
 */

__int64 __fastcall NdisPDBMAllocateCommonBuffer(
        KPushLockBase *a1,
        int a2,
        int a3,
        unsigned int a4,
        union _LARGE_INTEGER *a5,
        void **a6)
{
  size_t v9; // rsi
  int v10; // ebx
  struct NDIS_PD_BM_DOMAIN_HANDLE__ *Value; // rbx
  void *ContiguousNodeMemory; // rax
  void *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  KLockHolder v19; // [rsp+50h] [rbp-38h] BYREF

  v19.m_State = Unlocked;
  v19.m_Lock = a1;
  a5->QuadPart = 0LL;
  *a6 = 0LL;
  v9 = a4;
  v19.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v19);
  if ( a2 )
  {
    v10 = -1073741811;
  }
  else
  {
    Value = (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)a1[1].m_Lock.Value;
    if ( Value == (struct NDIS_PD_BM_DOMAIN_HANDLE__ *)&a1[1] )
    {
      v10 = -1073741436;
    }
    else if ( *((_BYTE *)&a1[3].m_Lock.0 + 1) )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v9, 0LL, -1LL, 0x200000LL, 4, a3);
      v13 = ContiguousNodeMemory;
      if ( ContiguousNodeMemory )
      {
        memset(ContiguousNodeMemory, 0, v9);
        *a6 = v13;
        ++HIDWORD(a1[3].m_Lock.Ptr);
        v10 = 0;
      }
      else
      {
        v10 = -1073741670;
        if ( (unsigned __int8)byte_1C00A026C >= 2u )
          WPP_SF_dq(0xEu, &WPP_2bb36296776a30873aa5d98cc8ebb16c_Traceguids, v9, a1);
      }
    }
    else
    {
      v14 = *((_QWORD *)Value + 3);
      v15 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 264LL))(v14);
      v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, _QWORD, int, union _LARGE_INTEGER *, void **))(*(_QWORD *)(v14 + 8) + 232LL))(
              v14,
              v15,
              0LL,
              (unsigned int)v9,
              1,
              0LL,
              a3,
              a5,
              a6);
      if ( v10 < 0 )
      {
        if ( (unsigned __int8)byte_1C00A026C >= 2u )
          WPP_SF_dqd(v17, v16, v9, (__int64)a1);
      }
      else
      {
        memset(*a6, 0, v9);
        ++HIDWORD(a1[3].m_Lock.Ptr);
      }
    }
  }
  KLockHolder::~KLockHolder(&v19);
  return (unsigned int)v10;
}
