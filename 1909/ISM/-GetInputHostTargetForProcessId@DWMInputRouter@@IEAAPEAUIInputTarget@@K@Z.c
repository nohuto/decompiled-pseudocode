/*
 * XREFs of ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x1800C3558
 * Callers:
 *     ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800543AC (-Initialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z @ 0x1800C2EE0 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKKK_KKKPEAPEAUIInputTarget@@@Z.c)
 *     ?GetSupportedInputTargetForProcessId@DWMInputRouter@@IEAAPEAUIDWMSupportedInputTarget@@K@Z @ 0x1800C36A4 (-GetSupportedInputTargetForProcessId@DWMInputRouter@@IEAAPEAUIDWMSupportedInputTarget@@K@Z.c)
 * Callees:
 *     <none>
 */

struct IInputTarget *__fastcall DWMInputRouter::GetInputHostTargetForProcessId(DWMInputRouter *this, int a2)
{
  __int64 **v2; // r8
  __int64 *i; // rax

  v2 = (__int64 **)*((_QWORD *)this + 12);
  for ( i = *v2; i != (__int64 *)v2; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 4) == a2 )
      return (struct IInputTarget *)i[7];
  }
  return 0LL;
}
