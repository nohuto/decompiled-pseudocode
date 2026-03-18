/*
 * XREFs of ?ValidateDeviceFeatures@InkDevice@@AEBAJXZ @ 0x1C0252818
 * Callers:
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C0251450 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall InkDevice::ValidateDeviceFeatures(InkDevice *this)
{
  unsigned int v1; // ebx
  int v3; // [rsp+30h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-38h] BYREF
  int *v5; // [rsp+58h] [rbp-18h]
  __int64 v6; // [rsp+60h] [rbp-10h]

  v1 = 0;
  if ( *((_DWORD *)this + 29) == 1 )
  {
    if ( *((_DWORD *)this + 30) == 1 )
    {
      if ( *((_DWORD *)this + 35) == 1 )
      {
        if ( *((_DWORD *)this + 28) != 72 )
        {
          v1 = -1073741762;
          if ( dword_1C0321298 > 2u )
          {
            v3 = -1073741762;
            v5 = &v3;
            v6 = 4LL;
            TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &pData);
          }
        }
      }
      else
      {
        v1 = -1073741637;
        if ( dword_1C0321298 > 2u )
        {
LABEL_9:
          v3 = -1073741637;
          v5 = &v3;
          v6 = 4LL;
          TlgWrite((TraceLoggingHProvider)&dword_1C0321298, &unk_1C02E8371, 0LL, 0LL, 3u, &pData);
        }
      }
    }
    else
    {
      v1 = -1073741637;
      if ( dword_1C0321298 > 2u )
        goto LABEL_9;
    }
  }
  else
  {
    v1 = -1073741637;
    if ( dword_1C0321298 > 2u )
      goto LABEL_9;
  }
  return v1;
}
