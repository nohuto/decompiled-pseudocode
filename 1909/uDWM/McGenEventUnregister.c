/*
 * XREFs of McGenEventUnregister @ 0x180085480
 * Callers:
 *     DllMain @ 0x18004F64C (DllMain.c)
 * Callees:
 *     <none>
 */

__int64 McGenEventUnregister()
{
  __int64 result; // rax

  if ( !Microsoft_Windows_Dwm_Udwm_Provider_Context )
    return 0LL;
  result = EtwEventUnregister(Microsoft_Windows_Dwm_Udwm_Provider_Context);
  Microsoft_Windows_Dwm_Udwm_Provider_Context = 0LL;
  return result;
}
