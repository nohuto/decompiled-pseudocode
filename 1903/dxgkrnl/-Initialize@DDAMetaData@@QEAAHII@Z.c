/*
 * XREFs of ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C0278E54
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0278F4C (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000C364 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C014B958 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall DDAMetaData::Initialize(DDAMetaData *this)
{
  _DWORD *v2; // rax
  _QWORD *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rbx
  __int64 v9; // rax

  if ( *((_DWORD *)this + 5) < 0x10u || *((_DWORD *)this + 10) < 4u )
    return 0LL;
  v2 = operator new[](0x10uLL, 0x674D444Fu, PagedPool);
  v3 = v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = 0LL;
    v2[2] = 0;
    v2[3] = 0;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v2, 0x124u, 0);
  }
  else
  {
    v3 = 0LL;
  }
  *((_QWORD *)this + 4) = v3;
  if ( !v3 || !*v3 )
    return 0LL;
  v4 = operator new[](0x10uLL, 0x674D444Fu, PagedPool);
  v8 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    v4[2] = 0;
    v4[3] = 0;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v4, 0x60u, 0);
  }
  else
  {
    v8 = 0LL;
  }
  *((_QWORD *)this + 6) = v8;
  if ( !v8 || !*v8 )
    return 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    v9 = WdLogNewEntry5_WdError(v6, v5, v7);
    *(_QWORD *)(v9 + 24) = 259LL;
    WdLogEvent5_WdError(v9);
    return 0LL;
  }
  return 1LL;
}
