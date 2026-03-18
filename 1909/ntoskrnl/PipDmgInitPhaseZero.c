/*
 * XREFs of PipDmgInitPhaseZero @ 0x1409F8364
 * Callers:
 *     PiDmaGuardInitialize @ 0x140189CE4 (PiDmaGuardInitialize.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 PipDmgInitPhaseZero()
{
  int v0; // ebx
  char v1; // al
  char v3; // [rsp+40h] [rbp+8h] BYREF
  int v4; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  v3 = 0;
  if ( ((int (__fastcall *)(__int64, __int64, char *, int *))off_140426798[0])(47LL, 1LL, &v3, &v4) < 0
    || (v1 = v3, v4 != 1) )
  {
    v1 = 0;
  }
  PipHalIommuSecurityEnabled = v1;
  if ( v1 || PipDmaGuardTestMode )
    v0 = 3;
  PipDmaGuardPolicy = v0;
  return 0LL;
}
