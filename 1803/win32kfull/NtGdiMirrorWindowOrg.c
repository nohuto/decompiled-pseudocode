/*
 * XREFs of NtGdiMirrorWindowOrg @ 0x1C027FE70
 * Callers:
 *     <none>
 * Callees:
 *     ??0MDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0078C50 (--0MDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0078C80 (--1DCOBJ@@QEAA@XZ.c)
 *     ?MirrorWindowOrg@DC@@QEAAXXZ @ 0x1C008ACA4 (-MirrorWindowOrg@DC@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiMirrorWindowOrg(HDC a1)
{
  __int64 result; // rax
  DC *v2[3]; // [rsp+20h] [rbp-18h] BYREF

  MDCOBJ::MDCOBJ((MDCOBJ *)v2, a1);
  result = 0LL;
  if ( v2[0] )
  {
    DC::MirrorWindowOrg(v2[0]);
    DCOBJ::~DCOBJ((DCOBJ *)v2);
    return 1LL;
  }
  return result;
}
