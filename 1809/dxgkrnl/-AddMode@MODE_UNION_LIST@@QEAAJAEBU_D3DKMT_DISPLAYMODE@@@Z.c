/*
 * XREFs of ?AddMode@MODE_UNION_LIST@@QEAAJAEBU_D3DKMT_DISPLAYMODE@@@Z @ 0x1C00E3DF8
 * Callers:
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z @ 0x1C00E2DB0 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI01@Z.c)
 *     ??ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z @ 0x1C020345C (--ROBTAIN_PREFERRED_MODES_ON_PATH@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAI@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0011F20 (--_V@YAXPEAX@Z.c)
 *     memmove @ 0x1C0022E80 (memmove.c)
 *     memset @ 0x1C00231C0 (memset.c)
 */

__int64 __fastcall MODE_UNION_LIST::AddMode(MODE_UNION_LIST *this, const struct _D3DKMT_DISPLAYMODE *a2)
{
  unsigned int v3; // eax
  unsigned int v5; // ecx
  __int64 v6; // rdx
  __int64 v7; // rcx
  void *v9; // rdi
  SIZE_T v10; // rax
  PVOID v11; // rax
  __int64 v12; // rax

  v3 = *((_DWORD *)this + 4) + 1;
  *((_DWORD *)this + 4) = v3;
  v5 = *((_DWORD *)this + 6);
  if ( v3 <= v5 )
  {
LABEL_2:
    v6 = 44LL * (v3 - 1);
    v7 = *((_QWORD *)this + 1);
    *(_OWORD *)(v6 + v7) = *(_OWORD *)&a2->Width;
    *(_OWORD *)(v6 + v7 + 16) = *(_OWORD *)&a2->RefreshRate.Numerator;
    *(_QWORD *)(v6 + v7 + 32) = *(_QWORD *)&a2->DisplayFixedOutput;
    *(_DWORD *)(v6 + v7 + 40) = *((_DWORD *)&a2->Flags + 1);
    return 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 1);
  v10 = 44LL * (v5 + 500);
  if ( !is_mul_ok(v5 + 500, 0x2CuLL) )
    v10 = -1LL;
  v11 = operator new(v10, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 1) = v11;
  if ( v11 )
  {
    if ( v9 )
    {
      memmove(v11, v9, 44LL * *((unsigned int *)this + 6));
      memset((void *)(*((_QWORD *)this + 1) + 44LL * *((unsigned int *)this + 6)), 0, 0x55F0uLL);
      operator delete[](v9);
    }
    else
    {
      memset(v11, 0, 0x55F0uLL);
    }
    *((_DWORD *)this + 6) += 500;
    v3 = *((_DWORD *)this + 4);
    goto LABEL_2;
  }
  v12 = WdLogNewEntry5_WdLowResource(0LL);
  *(_QWORD *)(v12 + 24) = 1651LL;
  WdLogEvent5_WdLowResource(v12);
  operator delete[](v9);
  return 3221225495LL;
}
