/*
 * XREFs of ?_UpdateReportDescriptor@@YAXUtagRECT@@KK@Z @ 0x1C01A9E38
 * Callers:
 *     CreatePseudoDigitizerDevice @ 0x1C01A9F40 (CreatePseudoDigitizerDevice.c)
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

  byte_1C0320122 = a3;
  v3 = a3 >> 8;
  byte_1C0320194 = a3;
  byte_1C0320206 = a3;
  byte_1C0320278 = a3;
  v4 = (a1->right - a1->left) >> 8;
  v5 = LOBYTE(a1->right) - LOBYTE(a1->left);
  word_1C032011D = a2;
  word_1C032018F = a2;
  word_1C0320201 = a2;
  word_1C0320273 = a2;
  v6 = LOBYTE(a1->bottom) - LOBYTE(a1->top);
  byte_1C0320123 = v3;
  byte_1C0320195 = v3;
  byte_1C0320207 = v3;
  byte_1C0320279 = v3;
  v7 = a1->bottom - a1->top;
  byte_1C0320110 = v5;
  byte_1C0320126 = BYTE1(v7);
  byte_1C0320198 = BYTE1(v7);
  byte_1C032020A = BYTE1(v7);
  byte_1C032027C = BYTE1(v7);
  byte_1C0320111 = v4;
  byte_1C0320125 = v6;
  byte_1C0320182 = v5;
  byte_1C0320183 = v4;
  byte_1C0320197 = v6;
  byte_1C03201F4 = v5;
  byte_1C03201F5 = v4;
  byte_1C0320209 = v6;
  byte_1C0320266 = v5;
  byte_1C0320267 = v4;
  byte_1C032027B = v6;
}
