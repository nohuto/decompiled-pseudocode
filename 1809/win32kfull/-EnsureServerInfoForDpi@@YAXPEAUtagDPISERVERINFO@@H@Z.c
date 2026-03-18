/*
 * XREFs of ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C01B88F8
 * Callers:
 *     GetDPIServerInfoForDpi @ 0x1C00AB7B4 (GetDPIServerInfoForDpi.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C00BEF80 (DeleteMetricsFont.c)
 *     memset @ 0x1C0163640 (memset.c)
 *     CreateScaledFont @ 0x1C01B8B58 (CreateScaledFont.c)
 */

void __fastcall EnsureServerInfoForDpi(struct tagDPISERVERINFO *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v8; // r8
  __int64 v9; // r8
  struct HLFONT__ *v10; // rcx
  struct HLFONT__ *v11; // rcx
  int v12; // ecx
  _QWORD v13[14]; // [rsp+48h] [rbp-19h] BYREF

  if ( !*(_DWORD *)a1 )
  {
    memset(v13, 0, 0x68uLL);
    v7 = Get96DpiServerInfo(v5, v4, v6);
    if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v7 + 8), &v13[1], v8, a2, &v13[2], (char *)&v13[2] + 4, 0LL) )
    {
      v10 = (struct HLFONT__ *)*((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 2) = v13[2];
      *((_QWORD *)a1 + 1) = v13[1];
      DeleteMetricsFont(v10);
    }
    if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v7 + 24), &v13[3], v9, a2, &v13[4], (char *)&v13[4] + 4, &v13[5]) )
    {
      v11 = (struct HLFONT__ *)*((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 4) = v13[4];
      *((_QWORD *)a1 + 3) = v13[3];
      DeleteMetricsFont(v11);
    }
    v12 = a2 * *(_DWORD *)(v7 + 4);
    *(_DWORD *)a1 = 1;
    *((_DWORD *)a1 + 1) = (v12 + 48) / 96;
  }
}
