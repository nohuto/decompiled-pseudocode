/*
 * XREFs of ?xxxCallTSFNotifyHook@@YAXPEAUtagNOTIFY@@@Z @ 0x1C00D8DA0
 * Callers:
 *     ?xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z @ 0x1C00063FC (-xxxDoLocalTSFWork@@YAXKPEAUtagWND@@JJKKPEAUtagTHREADINFO@@K@Z.c)
 *     xxxProcessTSFEvent @ 0x1C00D7064 (xxxProcessTSFEvent.c)
 * Callees:
 *     fnHkINLPNOTIFYSTRUCT @ 0x1C00D8DFC (fnHkINLPNOTIFYSTRUCT.c)
 *     ??0?$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ @ 0x1C00D8F64 (--0-$CUnLockDomainExclusive@VDLT_WINEVENT@@@@QEAA@XZ.c)
 */

void __fastcall xxxCallTSFNotifyHook(struct tagNOTIFY *a1)
{
  int v2; // edx
  int v3; // r9d
  int v4; // [rsp+40h] [rbp+8h] BYREF
  tagObjLock *v5; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  CUnLockDomainExclusive<DLT_WINEVENT>::CUnLockDomainExclusive<DLT_WINEVENT>(&v5);
  fnHkINLPNOTIFYSTRUCT(*((_DWORD *)a1 + 5), v2, (_DWORD)a1, v3, *(_QWORD *)(gpsi + 856LL), (__int64)&v4);
  tagObjLock::LockExclusive(v5);
}
