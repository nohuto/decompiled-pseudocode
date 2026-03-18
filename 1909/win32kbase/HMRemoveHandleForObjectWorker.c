/*
 * XREFs of HMRemoveHandleForObjectWorker @ 0x1C0102F08
 * Callers:
 *     HMRemoveHandleForObject @ 0x1C0073480 (HMRemoveHandleForObject.c)
 *     ?HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z @ 0x1C00AA02C (-HMDestroyUnlockedObjectWorker@@YAXPEAU_HANDLEENTRY@@@Z.c)
 * Callees:
 *     HMPkheFromPhe @ 0x1C0026DE0 (HMPkheFromPhe.c)
 *     memset @ 0x1C00BF640 (memset.c)
 */

__int64 __fastcall HMRemoveHandleForObjectWorker(_WORD *a1)
{
  char *v2; // rax
  char *v3; // rbx
  __int16 v4; // di
  __int16 v5; // ax
  signed __int64 v6; // rsi

  v2 = HMPkheFromPhe((__int64)a1);
  --giheCount;
  v3 = v2;
  v4 = a1[13] + 1;
  memset(a1, 0, 0x20uLL);
  *(_QWORD *)v3 = 0LL;
  *((_QWORD *)v3 + 1) = 0LL;
  *((_QWORD *)v3 + 2) = 0LL;
  v5 = 1;
  if ( v4 != -1 )
    v5 = v4;
  a1[13] = v5;
  v6 = ((char *)a1 - (char *)qword_1C0210758) >> 5;
  if ( (v6 & 1) != 0 )
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v6) = qword_1C0210700;
    qword_1C0210700 = v6;
  }
  else
  {
    *((_QWORD *)gpKernelHandleTable + 3 * v6) = qword_1C02106F8;
    qword_1C02106F8 = v6;
  }
  return 1LL;
}
