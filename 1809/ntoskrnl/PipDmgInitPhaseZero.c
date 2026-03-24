/*
 * XREFs of PipDmgInitPhaseZero @ 0x1409C8558
 * Callers:
 *     PiDmaGuardInitialize @ 0x140181CE8 (PiDmaGuardInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 */

__int64 PipDmgInitPhaseZero()
{
  int v0; // eax
  int v1; // ecx
  char v2; // al
  char v4; // [rsp+40h] [rbp+8h] BYREF
  int v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v0 = ((__int64 (__fastcall *)(__int64, __int64, char *, int *))off_140400458[0])(47LL, 1LL, &v4, &v5);
  v1 = 0;
  if ( v0 < 0 || (v2 = v4, v5 != 1) )
    v2 = 0;
  PipHalIommuSecurityEnabled = v2;
  if ( v2 || PipDmaGuardTestMode )
    v1 = 3;
  PipDmaGuardPolicy = v1;
  return 0LL;
}
