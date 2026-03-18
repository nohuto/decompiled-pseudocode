/*
 * XREFs of ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C0030668
 * Callers:
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C002DF08 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C0001F48 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C0005A7C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0020760 (__security_check_cookie.c)
 */

void __fastcall ADAPTER_DISPLAY::NotifyVSync(ADAPTER_DISPLAY *this, unsigned int a2, const GUID **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  const GUID *v9; // r9
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ecx
  __int16 v13; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  __int16 *v15; // [rsp+58h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp-28h]

  if ( a2 < *((_DWORD *)this + 20) )
  {
    _mm_lfence();
    v5 = *(unsigned int *)(3760LL * a2 + *((_QWORD *)this + 14) + 3756);
    if ( (_DWORD)v5 )
    {
      v6 = 10 * v5;
      v7 = *((_QWORD *)this + 10 * v5 + 87);
      if ( v7 )
      {
        v8 = *((_QWORD *)this + 10 * v5 + 85);
        v9 = *a3;
        if ( !v8 )
        {
LABEL_15:
          *((_QWORD *)this + v6 + 85) = v9;
          return;
        }
        if ( (unsigned __int64)v9 - v8 > *((unsigned int *)this + 20 * v5 + 168) )
        {
          v10 = *((_QWORD *)this + 10 * v5 + 86);
          if ( v10 )
          {
            ++*((_DWORD *)this + 2 * v6 + 164);
            v11 = v10 - v8;
            v12 = (unsigned int)(v10 - v8) >> 6;
            *((_DWORD *)this + 2 * v6 + 167) += v11 >> 4;
            if ( v12 >= 0x80 )
              v12 = 127;
            ++*(_DWORD *)(3 * v12 + v7);
          }
          else if ( !*((_BYTE *)this + 8 * v6 + 648) )
          {
            ++*((_DWORD *)this + 2 * v6 + 163);
            if ( hProvider > 5u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x4000uLL) )
              {
                v13 = 0;
                v15 = &v13;
                v16 = 2LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C006A3D3, 0LL, v9, 3u, &pData);
                v9 = *a3;
              }
            }
          }
          *((_QWORD *)this + v6 + 86) = 0LL;
          goto LABEL_15;
        }
        *((_BYTE *)this + 80 * v5 + 648) = 0;
        *((_QWORD *)this + 10 * v5 + 86) = v9;
      }
    }
  }
}
