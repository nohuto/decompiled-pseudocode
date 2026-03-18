/*
 * XREFs of ?PresentCancel@CFlipManager@@QEAAJAEA_K@Z @ 0x1C005A764
 * Callers:
 *     NtFlipObjectPresentCancel @ 0x1C00586C0 (NtFlipObjectPresentCancel.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CFlipManager::PresentCancel(CFlipManager *this, unsigned __int64 *a2)
{
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v5; // r11
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 result; // rax
  CFlipManager *v9; // r11
  CFlipManager **v10; // rdx

  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, 0x28uLL, 0x63704346u);
  v5 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    v6 = *a2;
    v7 = *((_QWORD *)this + 25);
    PoolWithQuotaTag[2] = PoolWithQuotaTag + 1;
    PoolWithQuotaTag[1] = PoolWithQuotaTag + 1;
    *PoolWithQuotaTag = &CFlipPresentCancel::`vftable';
    PoolWithQuotaTag[3] = v7;
    PoolWithQuotaTag[4] = v6;
  }
  else
  {
    v5 = 0LL;
  }
  result = v5 == 0LL ? 0xC0000017 : 0;
  if ( v5 )
  {
    v9 = (CFlipManager *)(v5 + 1);
    v10 = (CFlipManager **)*((_QWORD *)this + 22);
    if ( *v10 != (CFlipManager *)((char *)this + 168) )
      __fastfail(3u);
    *(_QWORD *)v9 = (char *)this + 168;
    *((_QWORD *)v9 + 1) = v10;
    *v10 = v9;
    *((_QWORD *)this + 22) = v9;
    *((_QWORD *)this + 31) = *a2;
  }
  return result;
}
