/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01CC8B0
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C0021FA8 (GetDPIMETRICSForDpiUnsafe.c)
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     CreateScaledFont @ 0x1C01CCA70 (CreateScaledFont.c)
 */

void __fastcall RefreshDpiKMMetricsCacheNode(struct tagDpiKMMetricsCacheNode *a1)
{
  _QWORD *v2; // rsi
  int v3; // ecx
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  __int64 v7[8]; // [rsp+40h] [rbp-48h] BYREF

  if ( *((_WORD *)a1 + 1) )
  {
    v2 = (_QWORD *)Get96DpiMetrics();
    CreateScaledFont(v2[4], (__int64)a1 + 56, (__int64)a1 + 60, 0LL);
    memset(v7, 0, 0x3CuLL);
    if ( !*((_QWORD *)a1 + 2) )
    {
      if ( (unsigned int)CreateScaledFont(*v2, (__int64)a1 + 24, (__int64)a1 + 28, (__int64)v7) )
      {
        v3 = v7[2];
        v4 = v7[4];
        *((_DWORD *)a1 + 9) = v7[2];
        v5 = *((_DWORD *)a1 + 7) + v3 + 2;
        *((_DWORD *)a1 + 8) = v4;
        v6 = HIDWORD(v7[0]) + 1;
        *((_DWORD *)a1 + 11) = v5;
        *((_DWORD *)a1 + 10) = v6;
      }
    }
    CreateScaledFont(v2[6], 0LL, 0LL, 0LL);
    CreateScaledFont(v2[7], 0LL, 0LL, 0LL);
    CreateScaledFont(v2[8], 0LL, 0LL, 0LL);
    *((_WORD *)a1 + 1) = 0;
  }
}
