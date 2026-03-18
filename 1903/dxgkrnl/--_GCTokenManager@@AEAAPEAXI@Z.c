/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0013818
 * Callers:
 *     CreateTokenManagerSessionGlobal @ 0x1C0001340 (CreateTokenManagerSessionGlobal.c)
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x1C0013850 (-Release@CTokenManager@@UEAAJXZ.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C00136DC (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *P)
{
  CTokenManager::~CTokenManager(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
