/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01E0970
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01E0A78 (CreatePseudoDigitizerDevice.c)
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

  byte_1C03259F2 = a3;
  v3 = a3 >> 8;
  byte_1C0325A64 = a3;
  byte_1C0325AD6 = a3;
  byte_1C0325B48 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C03259ED = a2;
  word_1C0325A5F = a2;
  word_1C0325AD1 = a2;
  word_1C0325B43 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C03259F3 = v3;
  byte_1C0325A65 = v3;
  byte_1C0325AD7 = v3;
  byte_1C0325B49 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C03259E0 = v5;
  byte_1C03259F6 = BYTE1(v7);
  byte_1C0325A68 = BYTE1(v7);
  byte_1C0325ADA = BYTE1(v7);
  byte_1C0325B4C = BYTE1(v7);
  byte_1C03259E1 = v4;
  byte_1C03259F5 = v6;
  byte_1C0325A52 = v5;
  byte_1C0325A53 = v4;
  byte_1C0325A67 = v6;
  byte_1C0325AC4 = v5;
  byte_1C0325AC5 = v4;
  byte_1C0325AD9 = v6;
  byte_1C0325B36 = v5;
  byte_1C0325B37 = v4;
  byte_1C0325B4B = v6;
}
