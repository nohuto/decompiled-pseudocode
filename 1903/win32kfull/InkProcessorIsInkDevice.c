/*
 * XREFs of InkProcessorIsInkDevice @ 0x1C0109040
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@InkProcessor@@QEBA_NXZ @ 0x1C01090D0 (-IsEnabled@InkProcessor@@QEBA_NXZ.c)
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall InkProcessorIsInkDevice(__int16 a1, __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned int v5; // ebx
  int v10; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v5 = 0;
  if ( InkProcessor::s_pInstance )
  {
    if ( InkProcessor::IsEnabled(InkProcessor::s_pInstance)
      && a1 == -241
      && a2 == 256
      && (!a3 || *a3 == 1118)
      && (!a4 || *a4 == 85) )
    {
      return 1;
    }
  }
  else if ( dword_1C0321298 > 2u )
  {
    v10 = -1073741823;
    v12 = &v10;
    v13 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &pData);
  }
  return v5;
}
