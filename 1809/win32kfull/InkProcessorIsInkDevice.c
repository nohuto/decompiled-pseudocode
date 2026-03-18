/*
 * XREFs of InkProcessorIsInkDevice @ 0x1C00FEF70
 * Callers:
 *     <none>
 * Callees:
 *     ?IsEnabled@InkProcessor@@QEBA_NXZ @ 0x1C00FF014 (-IsEnabled@InkProcessor@@QEBA_NXZ.c)
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 */

__int64 __fastcall InkProcessorIsInkDevice(__int16 a1, __int16 a2, _WORD *a3, _WORD *a4)
{
  unsigned int v5; // ebx
  unsigned int v10; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  unsigned int *v12; // [rsp+58h] [rbp-20h]
  __int64 v13; // [rsp+60h] [rbp-18h]

  v5 = 0;
  if ( InkProcessor::s_pInstance )
  {
    if ( InkProcessor::IsEnabled((InkProcessor *)InkProcessor::s_pInstance)
      && a1 == -241
      && a2 == 256
      && (!a3 || *a3 == 1118)
      && (!a4 || *a4 == 85) )
    {
      return 1;
    }
  }
  else if ( dword_1C030C390 > 2u )
  {
    v10 = InkProcessor::s_pInstance == 0LL ? 0xC0000001 : 0;
    v12 = &v10;
    v13 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C390, &unk_1C02D57C3, 0LL, 0LL, 3u, &pData);
  }
  return v5;
}
