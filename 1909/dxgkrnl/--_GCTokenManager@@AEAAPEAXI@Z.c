/*
 * XREFs of ??_GCTokenManager@@AEAAPEAXI@Z @ 0x1C0013FB8
 * Callers:
 *     CreateTokenManagerSessionGlobal @ 0x1C0001330 (CreateTokenManagerSessionGlobal.c)
 *     ?Release@CTokenManager@@UEAAJXZ @ 0x1C0013FF0 (-Release@CTokenManager@@UEAAJXZ.c)
 * Callees:
 *     ??1CTokenManager@@AEAA@XZ @ 0x1C0013E7C (--1CTokenManager@@AEAA@XZ.c)
 */

CTokenManager *__fastcall CTokenManager::`scalar deleting destructor'(CTokenManager *P)
{
  CTokenManager::~CTokenManager(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
