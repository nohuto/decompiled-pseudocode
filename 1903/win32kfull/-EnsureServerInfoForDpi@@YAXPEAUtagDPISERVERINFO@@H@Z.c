/*
 * XREFs of ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01CC784
 * Callers:
 *     GetDPIServerInfoForDpi @ 0x1C00E43E0 (GetDPIServerInfoForDpi.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00E3F50 (DeleteMetricsFont.c)
 *     GreTextInitialized @ 0x1C0165578 (GreTextInitialized.c)
 *     memset @ 0x1C0166840 (memset.c)
 *     CreateScaledFont @ 0x1C01CCA70 (CreateScaledFont.c)
 */

void __fastcall EnsureServerInfoForDpi(struct tagDPISERVERINFO *a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  __int64 v5; // rsi
  struct HLFONT__ *v6; // rcx
  struct HLFONT__ *v7; // rcx
  _QWORD v8[14]; // [rsp+48h] [rbp-19h] BYREF

  v3 = a2;
  if ( !*(_DWORD *)a1 )
  {
    v5 = Get96DpiServerInfo(a1, a2, a3);
    if ( GreTextInitialized() )
    {
      memset(v8, 0, 0x68uLL);
      if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v5 + 8), (__int64)&v8[2], (__int64)&v8[2] + 4, 0LL) )
      {
        v6 = (struct HLFONT__ *)*((_QWORD *)a1 + 1);
        *((_QWORD *)a1 + 2) = v8[2];
        *((_QWORD *)a1 + 1) = v8[1];
        DeleteMetricsFont(v6);
      }
      if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v5 + 24), (__int64)&v8[4], (__int64)&v8[4] + 4, (__int64)&v8[5]) )
      {
        v7 = (struct HLFONT__ *)*((_QWORD *)a1 + 3);
        *((_QWORD *)a1 + 4) = v8[4];
        *((_QWORD *)a1 + 3) = v8[3];
        DeleteMetricsFont(v7);
      }
      *(_DWORD *)a1 = 1;
    }
    *((_DWORD *)a1 + 1) = (v3 * *(_DWORD *)(v5 + 4) + 48) / 96;
  }
}
