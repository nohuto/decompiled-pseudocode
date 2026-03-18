/*
 * XREFs of ?RefreshDpiKMMetricsCacheNode@@YAXPEAUtagDpiKMMetricsCacheNode@@@Z @ 0x1C01B8A18
 * Callers:
 *     GetDPIMETRICSForDpiUnsafe @ 0x1C00AB77C (GetDPIMETRICSForDpiUnsafe.c)
 * Callees:
 *     CreateScaledFont @ 0x1C01B8B58 (CreateScaledFont.c)
 */

void __fastcall RefreshDpiKMMetricsCacheNode(struct tagDpiKMMetricsCacheNode *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // r8
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // r8
  _BYTE v10[4]; // [rsp+40h] [rbp-48h] BYREF
  int v11; // [rsp+44h] [rbp-44h]
  int v12; // [rsp+50h] [rbp-38h]
  int v13; // [rsp+60h] [rbp-28h]

  if ( *((_WORD *)a1 + 1) )
  {
    v2 = (_QWORD *)Get96DpiMetrics();
    CreateScaledFont(
      v2[4],
      (char *)a1 + 48,
      (char *)a1 + 60,
      *(unsigned __int16 *)a1,
      (char *)a1 + 56,
      (char *)a1 + 60,
      0LL);
    if ( !*((_QWORD *)a1 + 2) )
    {
      if ( (unsigned int)CreateScaledFont(
                           *v2,
                           (char *)a1 + 16,
                           v3,
                           *(unsigned __int16 *)a1,
                           (char *)a1 + 24,
                           (char *)a1 + 28,
                           v10) )
      {
        v4 = v12;
        v5 = v13;
        *((_DWORD *)a1 + 9) = v12;
        v6 = *((_DWORD *)a1 + 7) + v4 + 2;
        *((_DWORD *)a1 + 8) = v5;
        v7 = v11 + 1;
        *((_DWORD *)a1 + 11) = v6;
        *((_DWORD *)a1 + 10) = v7;
      }
    }
    CreateScaledFont(v2[6], (char *)a1 + 64, v3, *(unsigned __int16 *)a1, 0LL, 0LL, 0LL);
    CreateScaledFont(v2[7], (char *)a1 + 72, v8, *(unsigned __int16 *)a1, 0LL, 0LL, 0LL);
    CreateScaledFont(v2[8], (char *)a1 + 80, v9, *(unsigned __int16 *)a1, 0LL, 0LL, 0LL);
    *((_WORD *)a1 + 1) = 0;
  }
}
