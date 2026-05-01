/*
 * XREFs of ?get_Offset@WindowingEnvironmentSettings@@UEAAJPEAUPoint@Foundation@Windows@@@Z @ 0x180282A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowingEnvironmentSettings::get_Offset(
        WindowingEnvironmentSettings *this,
        struct Windows::Foundation::Point *a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  if ( *((_BYTE *)this + 93) == *((_BYTE *)this + 92) )
    return 2147943568LL;
  result = 0LL;
  *(_QWORD *)a2 = *((_QWORD *)this + 12);
  return result;
}
