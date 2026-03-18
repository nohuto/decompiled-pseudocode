/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01CC4A0
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01CC5A8 (CreatePseudoDigitizerDevice.c)
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

  byte_1C03109C2 = a3;
  v3 = a3 >> 8;
  byte_1C0310A34 = a3;
  byte_1C0310AA6 = a3;
  byte_1C0310B18 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C03109BD = a2;
  word_1C0310A2F = a2;
  word_1C0310AA1 = a2;
  word_1C0310B13 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C03109C3 = v3;
  byte_1C0310A35 = v3;
  byte_1C0310AA7 = v3;
  byte_1C0310B19 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C03109B0 = v5;
  byte_1C03109C6 = BYTE1(v7);
  byte_1C0310A38 = BYTE1(v7);
  byte_1C0310AAA = BYTE1(v7);
  byte_1C0310B1C = BYTE1(v7);
  byte_1C03109B1 = v4;
  byte_1C03109C5 = v6;
  byte_1C0310A22 = v5;
  byte_1C0310A23 = v4;
  byte_1C0310A37 = v6;
  byte_1C0310A94 = v5;
  byte_1C0310A95 = v4;
  byte_1C0310AA9 = v6;
  byte_1C0310B06 = v5;
  byte_1C0310B07 = v4;
  byte_1C0310B1B = v6;
}
