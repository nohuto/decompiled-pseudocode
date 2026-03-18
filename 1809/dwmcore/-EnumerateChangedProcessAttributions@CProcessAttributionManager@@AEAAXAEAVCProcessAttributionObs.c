/*
 * XREFs of ?EnumerateChangedProcessAttributions@CProcessAttributionManager@@AEAAXAEAVCProcessAttributionObserver@@PEAXP6AX1K_KW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@Z @ 0x180056DB0
 * Callers:
 *     ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x18006AF20 (-SendReportToE3@CEnergyReporter@@AEAAXXZ.c)
 *     _anonymous_namespace_::SealCurrentFrameSequence @ 0x1800C3D90 (_anonymous_namespace_--SealCurrentFrameSequence.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800CA2F0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800EBE98 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     memmove_0 @ 0x1800F0087 (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CProcessAttributionManager::EnumerateChangedProcessAttributions(
        void ***this,
        struct CProcessAttributionObserver *a2,
        void *a3,
        void (__high *a4)(void *, unsigned int, unsigned __int64, enum ProcessAttributionFlags, const struct ProcessAttributionResourceCounters *))
{
  struct CProcessAttributionObserver *v4; // rsi
  void **v6; // rdi
  _QWORD *v7; // rbx
  void **v8; // rax
  _DWORD *v9; // rdx
  _DWORD *v10; // rcx
  __int64 v11; // r12
  _DWORD *v12; // r13
  unsigned int v13; // ebp
  int v14; // r15d
  int v15; // r11d
  bool v16; // zf
  bool v17; // r14
  bool v18; // r15
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // r9d
  bool v23; // [rsp+30h] [rbp-F8h]
  bool v24; // [rsp+31h] [rbp-F7h]
  bool v25; // [rsp+32h] [rbp-F6h]
  bool v26; // [rsp+34h] [rbp-F4h]
  void **v27; // [rsp+38h] [rbp-F0h]
  char *Src; // [rsp+48h] [rbp-E0h]
  char v33[96]; // [rsp+70h] [rbp-B8h] BYREF

  v4 = a2;
  memset_0(v33, 0, 0x54uLL);
  v6 = *this;
  v7 = (_QWORD *)*((_QWORD *)v4 + 2);
  v8 = v6 + 1;
  Src = (char *)(v7 + 1);
LABEL_2:
  v27 = v8;
  while ( v7 != *((_QWORD **)v4 + 3) )
  {
    v9 = *v6;
    v10 = (_DWORD *)*v7;
    v11 = *(_QWORD *)*v6;
    v12 = (_DWORD *)*((_QWORD *)*v6 + 14);
    if ( *(_QWORD *)*v7 != v11 )
    {
      ++v6;
      ++v8;
      goto LABEL_2;
    }
    v13 = v9[30];
    if ( v12 )
    {
      ++v27;
      ++v6;
      Src += 8;
      ++v7;
      v14 = v10[6];
      v15 = v12[10];
      v4 = a2;
      v26 = v10[3] != v12[7];
      v13 = v9[30];
      v23 = v10[4] != v12[8];
      v16 = v10[5] == v12[9];
      v17 = v10[2] != v12[6];
      *(_OWORD *)(v10 + 2) = *(_OWORD *)(v12 + 6);
      v24 = !v16;
      v10[6] = v12[10];
      v16 = v14 == v15;
      v18 = v26;
      v25 = !v16;
    }
    else
    {
      v17 = v10[2] != v9[2];
      v18 = v10[3] != v9[3];
      v23 = v10[4] != v9[4];
      v24 = v10[5] != v9[5];
      v25 = v10[6] != v9[6];
      operator delete(v10, 0x70uLL);
      memmove_0(v7, Src, *((_QWORD *)v4 + 3) - (_QWORD)Src);
      *((_QWORD *)v4 + 3) -= 8LL;
      if ( --*((_DWORD *)*v6 + 31) )
      {
        ++v6;
        ++v27;
      }
      else
      {
        operator delete(*v6, 0x80uLL);
        memmove_0(v6, v27, (char *)this[1]-- - (char *)v27);
      }
    }
    v19 = v17 | 2;
    if ( !v18 )
      v19 = v17;
    v20 = v19 | 4;
    if ( !v23 )
      v20 = v19;
    v21 = v20 | 8;
    if ( !v24 )
      v21 = v20;
    v8 = v27;
    v22 = v21 | 0x10;
    if ( !v25 )
      v22 = v21;
    if ( v22 )
    {
      ((void (__fastcall *)(void *, _QWORD, __int64))a4)(a3, v13, v11);
      v8 = v27;
    }
  }
}
