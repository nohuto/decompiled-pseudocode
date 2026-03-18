/*
 * XREFs of GreAccNotifyWindow @ 0x1C007B710
 * Callers:
 *     ?SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z @ 0x1C00326C0 (-SetRedirectionBitmap@@YAHPEAUtagWND@@QEAUHBITMAP__@@H@Z.c)
 * Callees:
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1C007B77C (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFEF8 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00BFF44 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 */

void __fastcall GreAccNotifyWindow(__int64 a1, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  __int64 v7; // rbx
  char v8; // [rsp+40h] [rbp+18h] BYREF

  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
  LOBYTE(v4) = 5;
  v5 = HmgShareLockCheck(a1, v4);
  v7 = v5;
  if ( v5 )
  {
    vAccNotify((struct _SURFOBJ *)(v5 + 24), 5u, a2);
    DEC_SHARE_REF_CNT(v7);
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6);
}
