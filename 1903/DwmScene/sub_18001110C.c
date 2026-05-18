/*
 * XREFs of sub_18001110C @ 0x18001110C
 * Callers:
 *     sub_180002570 @ 0x180002570 (sub_180002570.c)
 *     sub_180010500 @ 0x180010500 (sub_180010500.c)
 *     sub_180013600 @ 0x180013600 (sub_180013600.c)
 *     sub_180013FD0 @ 0x180013FD0 (sub_180013FD0.c)
 *     sub_1800141C0 @ 0x1800141C0 (sub_1800141C0.c)
 *     sub_180018150 @ 0x180018150 (sub_180018150.c)
 *     sub_18001C270 @ 0x18001C270 (sub_18001C270.c)
 *     sub_18001C378 @ 0x18001C378 (sub_18001C378.c)
 *     sub_18006B9E8 @ 0x18006B9E8 (sub_18006B9E8.c)
 *     sub_18006CD34 @ 0x18006CD34 (sub_18006CD34.c)
 *     sub_18006CD5C @ 0x18006CD5C (sub_18006CD5C.c)
 *     sub_18006CD8C @ 0x18006CD8C (sub_18006CD8C.c)
 *     sub_18006CDC8 @ 0x18006CDC8 (sub_18006CDC8.c)
 *     sub_18006ECE4 @ 0x18006ECE4 (sub_18006ECE4.c)
 *     sub_18006EE48 @ 0x18006EE48 (sub_18006EE48.c)
 *     sub_180075500 @ 0x180075500 (sub_180075500.c)
 *     sub_18007C5F0 @ 0x18007C5F0 (sub_18007C5F0.c)
 *     sub_180088398 @ 0x180088398 (sub_180088398.c)
 *     sub_180088418 @ 0x180088418 (sub_180088418.c)
 *     sub_180088F14 @ 0x180088F14 (sub_180088F14.c)
 *     sub_180089214 @ 0x180089214 (sub_180089214.c)
 *     sub_180089A38 @ 0x180089A38 (sub_180089A38.c)
 *     sub_18008A058 @ 0x18008A058 (sub_18008A058.c)
 *     sub_18008A970 @ 0x18008A970 (sub_18008A970.c)
 *     sub_18008ACB0 @ 0x18008ACB0 (sub_18008ACB0.c)
 *     sub_18008B1A0 @ 0x18008B1A0 (sub_18008B1A0.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     sub_18008B44C @ 0x18008B44C (sub_18008B44C.c)
 *     sub_18008BC2C @ 0x18008BC2C (sub_18008BC2C.c)
 *     sub_18008C220 @ 0x18008C220 (sub_18008C220.c)
 *     sub_1800AAB2C @ 0x1800AAB2C (sub_1800AAB2C.c)
 *     sub_1800AC4BC @ 0x1800AC4BC (sub_1800AC4BC.c)
 *     sub_1800AF450 @ 0x1800AF450 (sub_1800AF450.c)
 *     sub_1800BB534 @ 0x1800BB534 (sub_1800BB534.c)
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800C00D0 @ 0x1800C00D0 (sub_1800C00D0.c)
 *     sub_1800C1340 @ 0x1800C1340 (sub_1800C1340.c)
 *     sub_1800C1AF8 @ 0x1800C1AF8 (sub_1800C1AF8.c)
 *     sub_1800C1DD4 @ 0x1800C1DD4 (sub_1800C1DD4.c)
 *     sub_1800C62FC @ 0x1800C62FC (sub_1800C62FC.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 *     sub_1800DC25C @ 0x1800DC25C (sub_1800DC25C.c)
 *     sub_1800DE700 @ 0x1800DE700 (sub_1800DE700.c)
 *     sub_1801007B0 @ 0x1801007B0 (sub_1801007B0.c)
 *     sub_18011ECFC @ 0x18011ECFC (sub_18011ECFC.c)
 *     sub_18011F05C @ 0x18011F05C (sub_18011F05C.c)
 *     sub_18011F370 @ 0x18011F370 (sub_18011F370.c)
 *     sub_18011F458 @ 0x18011F458 (sub_18011F458.c)
 *     sub_18011F918 @ 0x18011F918 (sub_18011F918.c)
 *     sub_18011FBAC @ 0x18011FBAC (sub_18011FBAC.c)
 *     sub_18011FDF4 @ 0x18011FDF4 (sub_18011FDF4.c)
 *     sub_180120040 @ 0x180120040 (sub_180120040.c)
 *     sub_180120324 @ 0x180120324 (sub_180120324.c)
 *     sub_180120710 @ 0x180120710 (sub_180120710.c)
 *     sub_1801208AC @ 0x1801208AC (sub_1801208AC.c)
 *     sub_1801218E4 @ 0x1801218E4 (sub_1801218E4.c)
 *     sub_180121D14 @ 0x180121D14 (sub_180121D14.c)
 *     sub_180122630 @ 0x180122630 (sub_180122630.c)
 *     sub_180122800 @ 0x180122800 (sub_180122800.c)
 *     sub_180122C30 @ 0x180122C30 (sub_180122C30.c)
 *     sub_180123AB0 @ 0x180123AB0 (sub_180123AB0.c)
 *     sub_1801242EC @ 0x1801242EC (sub_1801242EC.c)
 *     sub_1801245B8 @ 0x1801245B8 (sub_1801245B8.c)
 *     sub_180124680 @ 0x180124680 (sub_180124680.c)
 * Callees:
 *     sub_180011480 @ 0x180011480 (sub_180011480.c)
 *     memcpy @ 0x180125A84 (memcpy.c)
 */

void __fastcall sub_18001110C(_QWORD *a1, __int64 a2)
{
  _OWORD *v2; // rbx
  unsigned __int64 v3; // rbp
  __int64 v5; // rsi
  void *v6; // rax

  v2 = (_OWORD *)a2;
  v3 = *(_QWORD *)(a2 + 16);
  if ( *(_QWORD *)(a2 + 24) >= 8uLL )
    v2 = *(_OWORD **)a2;
  v5 = 7LL;
  if ( v3 >= 8 )
  {
    v5 = v3 | 7;
    if ( (v3 | 7) > 0x7FFFFFFFFFFFFFFELL )
      v5 = 0x7FFFFFFFFFFFFFFELL;
    v6 = (void *)sub_180011480(a1, v5 + 1);
    *a1 = v6;
    memcpy(v6, v2, 2 * v3 + 2);
  }
  else
  {
    *(_OWORD *)a1 = *v2;
  }
  a1[2] = v3;
  a1[3] = v5;
}
