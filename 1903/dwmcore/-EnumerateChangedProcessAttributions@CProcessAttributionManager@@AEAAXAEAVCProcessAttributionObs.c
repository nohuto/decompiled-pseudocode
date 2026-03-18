/*
 * XREFs of ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x1800A1EC0
 * Callers:
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x180075728 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x180094CE0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800C7464 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     ?CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ @ 0x1800CA8F0 (-CheckAndReportHighResourceUsage@CProcessResourceAttributionReporter@@AEAAXXZ.c)
 * Callees:
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800A21D0 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800CEFE0 (--3@YAXPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     memmove_0 @ 0x1800EC557 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessAttributionManager::EnumerateChangedProcessAttributions(
        CProcessAttributionManager::Record ***this,
        struct CProcessAttributionObserver *a2,
        void *a3,
        void (__high *a4)(void *, unsigned int, unsigned __int64, const unsigned __int16 *, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))
{
  struct CProcessAttributionObserver *v4; // rsi
  _QWORD *v6; // rdi
  CProcessAttributionManager::Record **v7; // rbx
  char *v8; // r12
  CProcessAttributionManager::Record *v9; // rdx
  _DWORD *v10; // rcx
  _DWORD *v11; // r13
  unsigned int v12; // edx
  int v13; // r14d
  bool v14; // r8
  int v15; // r10d
  int v16; // r15d
  bool v17; // r9
  bool v18; // r10
  int v19; // ecx
  bool v20; // zf
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  CProcessAttributionManager::Record *v26; // rcx
  int v27; // esi
  int v28; // ebp
  int v29; // r14d
  int v30; // r15d
  int v31; // r12d
  int v32; // r13d
  char v33; // [rsp+40h] [rbp-118h]
  int v34; // [rsp+44h] [rbp-114h]
  int v36; // [rsp+50h] [rbp-108h]
  int v37; // [rsp+54h] [rbp-104h]
  int v38; // [rsp+58h] [rbp-100h]
  unsigned int v39; // [rsp+5Ch] [rbp-FCh]
  char *Src; // [rsp+60h] [rbp-F8h]
  char *v41; // [rsp+68h] [rbp-F0h]
  __int64 v42; // [rsp+78h] [rbp-E0h]
  char v46[96]; // [rsp+A0h] [rbp-B8h] BYREF

  v4 = a2;
  memset_0(v46, 0, 0x54uLL);
  v6 = (_QWORD *)*((_QWORD *)v4 + 2);
  v7 = *this;
  Src = (char *)(v6 + 1);
  v8 = (char *)(*this + 1);
LABEL_2:
  v41 = v8;
  while ( v6 != *((_QWORD **)v4 + 3) )
  {
    v9 = *v7;
    v10 = (_DWORD *)*v6;
    v11 = (_DWORD *)*((_QWORD *)*v7 + 14);
    v42 = *(_QWORD *)*v7;
    if ( *(_QWORD *)*v6 != v42 )
    {
      ++v7;
      v8 += 8;
      goto LABEL_2;
    }
    v39 = *((_DWORD *)v9 + 30);
    v34 = v10[2];
    v33 = 0;
    if ( v11 )
    {
      Src += 8;
      ++v6;
      v12 = v11[7];
      LOBYTE(v12) = v10[3] != v12;
      v13 = v10[6];
      v14 = v10[4] != v11[8];
      v15 = v11[10];
      v16 = v11[6];
      v17 = v10[5] != v11[9];
      *(_OWORD *)(v10 + 2) = *(_OWORD *)(v11 + 6);
      v18 = v13 != v15;
      v10[6] = v11[10];
      v19 = 0;
      v20 = v34 == v16;
    }
    else
    {
      v27 = *((_DWORD *)v9 + 3);
      v28 = *((_DWORD *)v9 + 4);
      v29 = *((_DWORD *)v9 + 5);
      v30 = *((_DWORD *)v9 + 6);
      v31 = v10[3];
      v32 = v10[4];
      v38 = *((_DWORD *)v9 + 2);
      v36 = v10[5];
      v37 = v10[6];
      v33 = 1;
      operator delete(v10, 0x70uLL);
      memmove_0(v6, Src, *((_QWORD *)a2 + 3) - (_QWORD)Src);
      *((_QWORD *)a2 + 3) -= 8LL;
      --*((_DWORD *)*v7 + 40);
      v20 = v31 == v27;
      v8 = v41;
      LOBYTE(v12) = !v20;
      v14 = v32 != v28;
      v17 = v36 != v29;
      v18 = v37 != v30;
      v19 = 0;
      v20 = v34 == v38;
    }
    LOBYTE(v19) = !v20;
    v21 = v19 | 2;
    if ( !(_BYTE)v12 )
      v21 = v19;
    v22 = v21 | 4;
    if ( !v14 )
      v22 = v21;
    v23 = v22 | 8;
    if ( !v17 )
      v23 = v22;
    v24 = v23 | 0x10;
    if ( !v18 )
      v24 = v23;
    v25 = v24 | 0x20;
    if ( !v33 )
      v25 = v24;
    if ( v25 )
      ((void (__fastcall *)(void *, _QWORD, __int64))a4)(a3, v39, v42);
    v26 = *v7;
    if ( *((_DWORD *)*v7 + 40) )
    {
      v4 = a2;
      ++v7;
      v8 += 8;
      goto LABEL_2;
    }
    if ( v26 )
      CProcessAttributionManager::Record::`scalar deleting destructor'(v26, v12);
    memmove_0(v7, v8, (char *)this[1]-- - v8);
    v4 = a2;
  }
}
