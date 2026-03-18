/*
 * XREFs of ?EnsureServerInfoForDpi@@YAXPEAUtagDPISERVERINFO@@H@Z @ 0x1C0197934
 * Callers:
 *     GetDPIServerInfoForDpi @ 0x1C0053A58 (GetDPIServerInfoForDpi.c)
 * Callees:
 *     DeleteMetricsFont @ 0x1C0053A30 (DeleteMetricsFont.c)
 *     memset @ 0x1C013D6C0 (memset.c)
 *     CreateScaledFont @ 0x1C0197B88 (CreateScaledFont.c)
 */

void __fastcall EnsureServerInfoForDpi(struct tagDPISERVERINFO *a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // r8
  __int64 v10; // r8
  struct HLFONT__ *v11; // rcx
  struct HLFONT__ *v12; // rcx
  int v13; // ecx
  _QWORD v14[14]; // [rsp+48h] [rbp-19h] BYREF

  if ( !*(_DWORD *)a1 )
  {
    memset(v14, 0, 0x68uLL);
    v8 = Get96DpiServerInfo(v5, v4, v6, v7);
    if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v8 + 8), &v14[1], v9, a2, &v14[2], (char *)&v14[2] + 4, 0LL) )
    {
      v11 = (struct HLFONT__ *)*((_QWORD *)a1 + 1);
      *((_QWORD *)a1 + 2) = v14[2];
      *((_QWORD *)a1 + 1) = v14[1];
      DeleteMetricsFont(v11);
    }
    if ( (unsigned int)CreateScaledFont(*(_QWORD *)(v8 + 24), &v14[3], v10, a2, &v14[4], (char *)&v14[4] + 4, &v14[5]) )
    {
      v12 = (struct HLFONT__ *)*((_QWORD *)a1 + 3);
      *((_QWORD *)a1 + 4) = v14[4];
      *((_QWORD *)a1 + 3) = v14[3];
      DeleteMetricsFont(v12);
    }
    v13 = a2 * *(_DWORD *)(v8 + 4);
    *(_DWORD *)a1 = 1;
    *((_DWORD *)a1 + 1) = (v13 + 48) / 96;
  }
}
