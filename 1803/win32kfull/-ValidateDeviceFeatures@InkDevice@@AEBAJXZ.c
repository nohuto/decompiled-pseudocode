/*
 * XREFs of ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C0210518
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C020F240 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall InkDevice::ValidateDeviceFeatures(InkDevice *this, __int64 a2, const GUID *a3, const GUID *a4)
{
  unsigned int v4; // ebx
  int v6; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  int *v8; // [rsp+58h] [rbp-18h]
  __int64 v9; // [rsp+60h] [rbp-10h]

  v4 = 0;
  if ( *((_DWORD *)this + 29) == 1 )
  {
    if ( *((_DWORD *)this + 30) == 1 )
    {
      if ( *((_DWORD *)this + 35) == 1 )
      {
        if ( *((_DWORD *)this + 28) != 72 )
        {
          v4 = -1073741762;
          if ( (unsigned int)pRelatedActivityId > 2 )
          {
            v6 = -1073741762;
            v8 = &v6;
            v9 = 4LL;
            TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, a3, a4, 3u, &pData);
          }
        }
      }
      else
      {
        v4 = -1073741637;
        if ( (unsigned int)pRelatedActivityId > 2 )
        {
LABEL_9:
          v6 = -1073741637;
          v8 = &v6;
          v9 = 4LL;
          TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1C02E36AF, a3, a4, 3u, &pData);
        }
      }
    }
    else
    {
      v4 = -1073741637;
      if ( (unsigned int)pRelatedActivityId > 2 )
        goto LABEL_9;
    }
  }
  else
  {
    v4 = -1073741637;
    if ( (unsigned int)pRelatedActivityId > 2 )
      goto LABEL_9;
  }
  return v4;
}
