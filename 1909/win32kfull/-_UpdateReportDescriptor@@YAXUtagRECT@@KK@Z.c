/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01E07F0
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01E08F8 (CreatePseudoDigitizerDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall _UpdateReportDescriptor(struct tagRECT *a1, __int16 a2, unsigned int a3)
{
  unsigned int v3; // eax
  int v4; // r8d
  char v5; // r9
  char v6; // dl
  int v7; // ecx

  byte_1C03239F2 = a3;
  v3 = a3 >> 8;
  byte_1C0323A64 = a3;
  byte_1C0323AD6 = a3;
  byte_1C0323B48 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C03239ED = a2;
  word_1C0323A5F = a2;
  word_1C0323AD1 = a2;
  word_1C0323B43 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C03239F3 = v3;
  byte_1C0323A65 = v3;
  byte_1C0323AD7 = v3;
  byte_1C0323B49 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C03239E0 = v5;
  byte_1C03239F6 = BYTE1(v7);
  byte_1C0323A68 = BYTE1(v7);
  byte_1C0323ADA = BYTE1(v7);
  byte_1C0323B4C = BYTE1(v7);
  byte_1C03239E1 = v4;
  byte_1C03239F5 = v6;
  byte_1C0323A52 = v5;
  byte_1C0323A53 = v4;
  byte_1C0323A67 = v6;
  byte_1C0323AC4 = v5;
  byte_1C0323AC5 = v4;
  byte_1C0323AD9 = v6;
  byte_1C0323B36 = v5;
  byte_1C0323B37 = v4;
  byte_1C0323B4B = v6;
}
