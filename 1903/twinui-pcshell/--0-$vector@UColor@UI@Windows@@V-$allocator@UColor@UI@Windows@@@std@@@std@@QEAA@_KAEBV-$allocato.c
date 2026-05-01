/*
 * XREFs of ??0?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@QEAA@_KAEBV?$allocator@UColor@UI@Windows@@@1@@Z @ 0x180402F9C
 * Callers:
 *     ??0AssistantLightStrip@Lighting@TwinUI@@QEAA@V?$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@Microsoft@@V?$vector@HV?$allocator@H@std@@@std@@1@Z @ 0x180403030 (--0AssistantLightStrip@Lighting@TwinUI@@QEAA@V-$ComPtr@UILampArray@Lights@Devices@Windows@@@WRL@.c)
 * Callees:
 *     memset_0 @ 0x180087BFA (memset_0.c)
 *     ?_Buy@?$vector@UColor@UI@Windows@@V?$allocator@UColor@UI@Windows@@@std@@@std@@AEAA_N_K@Z @ 0x180402A44 (-_Buy@-$vector@UColor@UI@Windows@@V-$allocator@UColor@UI@Windows@@@std@@@std@@AEAA_N_K@Z.c)
 */

__int64 *__fastcall std::vector<Windows::UI::Color>::vector<Windows::UI::Color>(__int64 *a1, unsigned __int64 a2)
{
  char *v4; // rdi

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( std::vector<Windows::UI::Color>::_Buy(a1, a2) )
  {
    v4 = (char *)*a1;
    if ( a2 )
    {
      memset_0((void *)*a1, 0, 4 * a2);
      v4 += 4 * a2;
    }
    a1[1] = (__int64)v4;
  }
  return a1;
}
