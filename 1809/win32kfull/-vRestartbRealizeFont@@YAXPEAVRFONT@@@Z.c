/*
 * XREFs of ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x1C028BFB0
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C008471C (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1C0086CD4 (--$FreeIsolatedType@V-$CTypeIsolation@$0DJAAA@$0DJA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x1C0086DC0 (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1C028BE54 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

void __fastcall vRestartbRealizeFont(struct RFONT *a1)
{
  __int64 v1; // rax
  struct _FONTOBJ *v3; // [rsp+20h] [rbp-28h] BYREF
  int v4; // [rsp+28h] [rbp-20h]
  _QWORD v5[3]; // [rsp+30h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 16);
  v4 = 0;
  v3 = (struct _FONTOBJ *)a1;
  v5[0] = v1;
  RFONTOBJ::vDestroyFont(&v3, 0);
  PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v5);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<233472,912>>((__int64)a1);
  v3 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v3);
}
