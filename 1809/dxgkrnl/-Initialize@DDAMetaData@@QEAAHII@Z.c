/*
 * XREFs of ?Initialize@DDAMetaData@@QEAAHII@Z @ 0x1C0243A40
 * Callers:
 *     ?Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z @ 0x1C0243B38 (-Initialize@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_D3DKMT_CREATE_OUTPUTDUPL@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0011EE0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C013B158 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 */

__int64 __fastcall DDAMetaData::Initialize(DDAMetaData *this)
{
  _DWORD *v2; // rax
  _QWORD *v3; // rbx
  _DWORD *v4; // rax
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax

  if ( *((_DWORD *)this + 5) < 0x10u || *((_DWORD *)this + 10) < 4u )
    return 0LL;
  v2 = operator new(0x10uLL, 0x674D444Fu, PagedPool);
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
  v4 = operator new(0x10uLL, 0x674D444Fu, PagedPool);
  v6 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = 0LL;
    v4[2] = 0;
    v4[3] = 0;
    AUTOEXPANDALLOCATION::GetBuffer((AUTOEXPANDALLOCATION *)v4, 0x60u, 0);
  }
  else
  {
    v6 = 0LL;
  }
  *((_QWORD *)this + 6) = v6;
  if ( !v6 || !*v6 )
    return 0LL;
  if ( !*((_QWORD *)this + 7) )
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = 259LL;
    WdLogEvent5_WdError(v7);
    return 0LL;
  }
  return 1LL;
}
