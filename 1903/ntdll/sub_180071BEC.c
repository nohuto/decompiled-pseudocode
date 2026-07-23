/*
 * XREFs of sub_180071BEC @ 0x180071BEC
 * Callers:
 *     RtlCreateActivationContext @ 0x180071A00 (RtlCreateActivationContext.c)
 * Callees:
 *     DbgPrintEx @ 0x180052780 (DbgPrintEx.c)
 */

__int64 __fastcall sub_180071BEC(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rax
  unsigned int v3; // r8d
  __int64 v4; // r9
  unsigned __int64 v5; // r10
  __int64 v6; // rcx
  unsigned int v7; // eax
  __int64 v8; // rax
  const CHAR *v10; // r8
  unsigned int v11; // [rsp+20h] [rbp-18h]

  if ( *a2 != 2020893505 || a2[2] != 1 )
    return (unsigned int)-1072365565;
  v2 = (unsigned int)a2[4];
  v3 = 0;
  if ( !(_DWORD)v2 || (v2 & 3) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: Warning: Activation context data at %p missing default TOC\n", a2);
    return (unsigned int)-1072365565;
  }
  v4 = (unsigned int)a2[6];
  if ( !(_DWORD)v4 || (v4 & 3) != 0 )
  {
    DbgPrintEx(0x33u, 0, "SXS: Warning: Activation context data at %p lacks assembly roster\n", a2);
    return (unsigned int)-1072365565;
  }
  v5 = (unsigned int)a2[3];
  if ( (unsigned int)v2 >= (unsigned int)v5 || (v6 = (unsigned int)v2, v2 + 16 > v5) )
  {
    DbgPrintEx(0x33u, 0, "SXS: Activation context data at %p has invalid TOC header offset\n", a2);
    return (unsigned int)-1072365565;
  }
  v7 = *(_DWORD *)((char *)a2 + (unsigned int)v2);
  if ( v7 < 0x10 )
  {
    v10 = "SXS: Activation context data at %p has TOC header too small (%lu)\n";
LABEL_22:
    v11 = v7;
    DbgPrintEx(0x33u, 0, v10, a2, v11);
    return (unsigned int)-1072365565;
  }
  v8 = *(unsigned int *)((char *)a2 + v6 + 8);
  if ( (unsigned int)v8 >= (unsigned int)v5
    || (v8 & 3) != 0
    || v8 + 16 * (unsigned __int64)*(unsigned int *)((char *)a2 + v6 + 4) > v5 )
  {
    DbgPrintEx(0x33u, 0, "SXS: Activation context data at %p has invalid TOC entry array offset\n", a2);
    return (unsigned int)-1072365565;
  }
  if ( (unsigned int)v4 >= (unsigned int)v5 || v4 + 20 > v5 )
  {
    DbgPrintEx(0x33u, 0, "SXS: Activation context data at %p has invalid assembly roster offset\n", a2);
    return (unsigned int)-1072365565;
  }
  v7 = *(_DWORD *)((char *)a2 + v4);
  if ( v7 < 0x14 )
  {
    v10 = "SXS: Activation context data at %p has assembly roster header too small (%lu)\n";
    goto LABEL_22;
  }
  return v3;
}
