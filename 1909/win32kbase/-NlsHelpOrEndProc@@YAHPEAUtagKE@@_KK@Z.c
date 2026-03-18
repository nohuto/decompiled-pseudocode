/*
 * XREFs of ?NlsHelpOrEndProc@@YAHPEAUtagKE@@_KK@Z @ 0x1C017F7C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NlsTestKeyStateToggle@@YAHE@Z @ 0x1C017FEFC (-NlsTestKeyStateToggle@@YAHE@Z.c)
 */

__int64 __fastcall NlsHelpOrEndProc(struct tagKE *a1)
{
  __int16 v1; // r8
  unsigned __int8 v2; // r10
  __int16 v3; // r8
  int v4; // eax
  __int16 v5; // r8
  __int64 v6; // r9
  char v7; // r10
  __int16 v8; // r8

  v1 = *((_WORD *)a1 + 1);
  if ( (v1 & 0x800) == 0 )
  {
    v2 = fNlsKbdConfiguration;
    v3 = v1 & 0x8F00;
    *((_WORD *)a1 + 1) = v3;
    if ( (v2 & 1) != 0 )
    {
      v4 = NlsTestKeyStateToggle(0x15u);
      if ( (v7 & 2) != 0 )
      {
        *(_WORD *)(v6 + 2) = v5 | (v4 != 0 ? 47 : 35);
      }
      else
      {
        if ( v4 )
          v8 = v5 | 0x23;
        else
          v8 = v5 | 0x2F;
        *(_WORD *)(v6 + 2) = v8;
      }
    }
    else
    {
      *((_WORD *)a1 + 1) = v3 | ((v2 & 2) != 0 ? 35 : 47);
    }
  }
  return 1LL;
}
