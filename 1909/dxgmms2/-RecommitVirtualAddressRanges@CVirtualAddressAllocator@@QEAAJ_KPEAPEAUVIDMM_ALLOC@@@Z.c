/*
 * XREFs of ?RecommitVirtualAddressRanges@CVirtualAddressAllocator@@QEAAJ_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00B872C
 * Callers:
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006D890 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z @ 0x1C00AE990 (-RecommitGpuVirtualAddresses@VIDMM_GLOBAL@@QEAAJ_K@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001514 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x1C002557C (-GetVidMmGlobalAllocFromOwner@@YAPEAU_VIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     ?VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C006C0A8 (-VidMmGetFullMDL@@YAPEAU_MDL@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006D890 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 */

__int64 __fastcall CVirtualAddressAllocator::RecommitVirtualAddressRanges(
        struct _KTHREAD **this,
        __int64 a2,
        struct VIDMM_ALLOC **a3)
{
  CVirtualAddressAllocator *i; // rdi
  __int64 v5; // rsi
  char *v6; // r15
  char *v7; // rax
  struct _MDL *FullMDL; // r8
  int v9; // r12d
  int v10; // ecx
  __int64 VidMmGlobalAllocFromOwner; // rax
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r12
  _QWORD *v18; // rax
  __int64 v20; // [rsp+40h] [rbp-58h]
  char v21; // [rsp+A0h] [rbp+8h]
  __int64 v22; // [rsp+A8h] [rbp+10h]

  v22 = a2;
  v21 = 0;
  if ( this[8] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(this + 7));
    a2 = v22;
    v21 = 1;
  }
  for ( i = this[3]; i != (CVirtualAddressAllocator *)(this + 3); i = *(CVirtualAddressAllocator **)i )
  {
    v5 = 0LL;
    if ( *((_DWORD *)this[10] + 1748) )
    {
      while ( 1 )
      {
        if ( _bittest64(&a2, (unsigned int)v5) )
        {
          v6 = (char *)*((_QWORD *)i + 3 * v5 + 7);
          if ( v6 != (char *)i + 16 * v5 + 8 * (unsigned int)v5 + 56 )
            break;
        }
LABEL_26:
        v5 = (unsigned int)(v5 + 1);
        if ( (unsigned int)v5 >= *((_DWORD *)this[10] + 1748) )
          goto LABEL_27;
      }
      v7 = (char *)i + 16 * v5 + 8 * (unsigned int)v5 + 56;
LABEL_8:
      FullMDL = 0LL;
      v20 = 0LL;
      v9 = 0;
      v10 = (int)(*((_DWORD *)v6 + 14) << 28) >> 28;
      if ( v10 != 1 )
      {
        if ( v10 == 2 )
          goto LABEL_14;
        if ( v10 <= 2 )
          goto LABEL_24;
        if ( v10 > 5 )
        {
          if ( v10 == 6 )
          {
            v9 = -2;
            goto LABEL_22;
          }
          if ( v10 == 7 )
          {
LABEL_14:
            FullMDL = (struct _MDL *)**((_QWORD **)v6 + 6);
LABEL_22:
            v14 = CVirtualAddressAllocator::CommitVirtualAddressRange(
                    (CVirtualAddressAllocator *)this,
                    (struct VIDMM_MAPPED_VA_RANGE *)(v6 - 8),
                    v5,
                    v9,
                    *((_QWORD *)v6 + 8) + v20,
                    FullMDL,
                    0,
                    a3);
            v17 = v14;
            if ( v14 < 0 )
            {
              v18 = (_QWORD *)WdLogNewEntry5_WdAssertion(v16, v15);
              v18[3] = v17;
              v18[4] = *((_QWORD *)v6 + 11);
              v18[5] = *((_QWORD *)v6 + 12);
              v18[6] = (unsigned int)v5;
              WdLogEvent5_WdAssertion(v18);
              break;
            }
LABEL_23:
            v7 = (char *)i + 16 * v5 + 8 * (unsigned int)v5 + 56;
          }
LABEL_24:
          v6 = *(char **)v6;
          if ( v6 == v7 )
          {
            a2 = v22;
            goto LABEL_26;
          }
          goto LABEL_8;
        }
      }
      VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v10, *((_QWORD *)v6 + 6));
      if ( *(_DWORD *)(VidMmGlobalAllocFromOwner + 128) != (_DWORD)FullMDL )
      {
        v12 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 136);
        v13 = *(_DWORD *)(v12 + 80);
        if ( (v13 & 0x1001) != 0 )
        {
          FullMDL = VidMmGetFullMDL((struct _VIDMM_GLOBAL_ALLOC *)VidMmGlobalAllocFromOwner, 0LL);
        }
        else
        {
          if ( (v13 & 0x1000) == 0 )
            v9 = *(_DWORD *)(v12 + 16) + 1;
          v20 = *(_QWORD *)(VidMmGlobalAllocFromOwner + 144);
        }
        goto LABEL_22;
      }
      goto LABEL_23;
    }
LABEL_27:
    ;
  }
  if ( v21 )
  {
    this[8] = 0LL;
    ExReleasePushLockExclusiveEx(this + 7, 0LL);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
