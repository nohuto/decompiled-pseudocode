/*
 * XREFs of CreateTokenManagerSessionGlobal @ 0x1C0001330
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00C649C (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     ?Initialize@CTokenManager@@AEAAJXZ @ 0x1C00013B0 (-Initialize@CTokenManager@@AEAAJXZ.c)
 *     ??0CTokenManager@@AEAA@XZ @ 0x1C0001508 (--0CTokenManager@@AEAA@XZ.c)
 *     ??2@YAPEAX_KIHW4_POOL_TYPE@@@Z @ 0x1C0008ADC (--2@YAPEAX_KIHW4_POOL_TYPE@@@Z.c)
 *     ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0013FB8 (--_GCTokenManager@@AEAAPEAXI@Z.c)
 */

__int64 __fastcall CreateTokenManagerSessionGlobal(CTokenManager **a1)
{
  CTokenManager *v2; // rax
  CTokenManager *v3; // rbx
  unsigned int v4; // edx
  int v5; // edi

  v2 = (CTokenManager *)operator new(0x160uLL, 0x67734D54u, 1, PagedPool);
  if ( v2 )
    v3 = CTokenManager::CTokenManager(v2);
  else
    v3 = 0LL;
  if ( v3 )
  {
    v5 = CTokenManager::Initialize(v3);
    if ( v5 >= 0 )
    {
      *a1 = v3;
      v3 = 0LL;
    }
    if ( v3 )
      CTokenManager::`scalar deleting destructor'(v3, v4);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
