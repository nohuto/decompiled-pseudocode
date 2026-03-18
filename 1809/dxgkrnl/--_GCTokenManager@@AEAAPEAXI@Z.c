/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C001AEB8
 * Callers:
 *     CreateTokenManagerSessionGlobal @ 0x1C001A778 (CreateTokenManagerSessionGlobal.c)
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x1C001AEF0 (-Release@CTokenManager@@UEAAJXZ.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C001AA50 (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *P)
{
  CTokenManager::~CTokenManager(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
