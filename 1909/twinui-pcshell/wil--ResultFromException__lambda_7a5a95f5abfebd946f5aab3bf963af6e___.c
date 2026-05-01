/*
 * XREFs of wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___ @ 0x1803BEB90
 * Callers:
 *     ?PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicationViewOperation@@W4SHELL_POSITIONER_TYPE@@PEAUIAppLayout@@@Z @ 0x1803C2388 (-PositionViewForPositionerHandoff@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUIApplicatio.c)
 * Callees:
 *     _lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator() @ 0x1803BFEA4 (_lambda_7a5a95f5abfebd946f5aab3bf963af6e_--operator().c)
 */

__int64 __fastcall wil::ResultFromException__lambda_7a5a95f5abfebd946f5aab3bf963af6e___(__int64 a1)
{
  wil *v1; // rcx
  __int64 result; // rax

  try
  {
    lambda_7a5a95f5abfebd946f5aab3bf963af6e_::operator()(a1);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::ResultFromCaughtException(v1);
  }
  return result;
}
