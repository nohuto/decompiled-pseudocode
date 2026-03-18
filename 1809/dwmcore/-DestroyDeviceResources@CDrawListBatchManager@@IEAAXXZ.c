/*
 * XREFs of ?DestroyDeviceResources@CDrawListBatchManager@@IEAAXXZ @ 0x1800E97F0
 * Callers:
 *     ?DestroyDeviceResources@CD2DContext@@IEAAJXZ @ 0x1800E95E0 (-DestroyDeviceResources@CD2DContext@@IEAAJXZ.c)
 *     ??1CDrawListBatchManager@@IEAA@XZ @ 0x1800E9748 (--1CDrawListBatchManager@@IEAA@XZ.c)
 * Callees:
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180027370 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA?AV?$com_ptr_t@VCDrawListEntryBatch@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1800E98DC (-CloseCurrentDrawListEntryBatch@CDrawListBatchManager@@IEAA-AV-$com_ptr_t@VCDrawListEntryBatch@@.c)
 *     ?DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ @ 0x1800E9920 (-DestroyDeviceResources@CSharedDirect3DResources@CDrawListEntryBatch@@QEAAXXZ.c)
 */

void __fastcall CDrawListBatchManager::DestroyDeviceResources(CDrawListEntryBatch::CSharedDirect3DResources **this)
{
  CDrawListEntryBatch::CSharedDirect3DResources *v2; // rcx
  CMILRefCountBase *v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  CDrawListBatchManager::CloseCurrentDrawListEntryBatch(this, &v10);
  if ( v10 )
    CMILRefCountBase::Release((CMILRefCountBase *)(v10 + 8));
  v2 = this[20];
  if ( v2 )
  {
    CDrawListEntryBatch::CSharedDirect3DResources::DestroyDeviceResources(v2);
    v3 = this[20];
    this[20] = 0LL;
    if ( v3 )
      CMILRefCountBase::Release(v3);
  }
  if ( *((_DWORD *)this + 16) )
  {
    v8 = *((unsigned int *)this + 16);
    v9 = 0LL;
    do
    {
      CMILRefCountBase::Release(*(CMILRefCountBase **)((char *)this[5] + v9));
      v9 += 8LL;
      --v8;
    }
    while ( v8 );
  }
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 18) = 0;
  if ( *((_DWORD *)this + 26) )
  {
    v6 = *((unsigned int *)this + 26);
    v7 = 0LL;
    do
    {
      CMILRefCountBase::Release(*(CMILRefCountBase **)((char *)this[10] + v7));
      v7 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 28) = 0;
  if ( *((_DWORD *)this + 36) )
  {
    v4 = 0LL;
    v5 = *((unsigned int *)this + 36);
    do
    {
      CMILRefCountBase::Release((CMILRefCountBase *)(*(_QWORD *)((char *)this[15] + v4) + 8LL));
      v4 += 8LL;
      --v5;
    }
    while ( v5 );
  }
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 38) = 0;
}
