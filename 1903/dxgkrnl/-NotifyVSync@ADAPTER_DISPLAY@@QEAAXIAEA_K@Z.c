/*
 * XREFs of ?NotifyVSync@ADAPTER_DISPLAY@@QEAAXIAEA_K@Z @ 0x1C0035E48
 * Callers:
 *     ?NotifyVSync@DXGADAPTER@@QEAAXI@Z @ 0x1C0033630 (-NotifyVSync@DXGADAPTER@@QEAAXI@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00035A0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0019EC0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00232F0 (__security_check_cookie.c)
 */

void __fastcall ADAPTER_DISPLAY::NotifyVSync(ADAPTER_DISPLAY *this, unsigned int a2, const GUID **a3)
{
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rax
  const GUID *v9; // r9
  unsigned int v10; // ecx
  unsigned int v11; // ecx
  __int16 v12; // [rsp+30h] [rbp-58h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-50h] BYREF
  __int16 *v14; // [rsp+58h] [rbp-30h]
  __int64 v15; // [rsp+60h] [rbp-28h]

  if ( a2 < *((_DWORD *)this + 20) )
  {
    _mm_lfence();
    v5 = *(unsigned int *)(3968LL * a2 + *((_QWORD *)this + 14) + 3756);
    if ( (_DWORD)v5 )
    {
      v6 = *((_QWORD *)this + 10 * v5 + 100);
      if ( v6 )
      {
        v7 = 10 * v5;
        if ( !*((_DWORD *)this + 20 * v5 + 184) )
        {
          *((_QWORD *)this + 10 * v5 + 98) = 0LL;
          *((_QWORD *)this + 10 * v5 + 99) = 0LL;
          return;
        }
        v8 = *((_QWORD *)this + 10 * v5 + 98);
        v9 = *a3;
        if ( !v8 )
          goto LABEL_17;
        if ( (unsigned __int64)v9 - v8 > *((unsigned int *)this + 20 * v5 + 194) )
        {
          if ( *((_QWORD *)this + 10 * v5 + 99) )
          {
            v10 = *((_DWORD *)this + 20 * v5 + 198) - *((_DWORD *)this + 20 * v5 + 196);
            ++*((_DWORD *)this + 2 * v7 + 190);
            *((_DWORD *)this + 2 * v7 + 193) += v10 >> 4;
            v11 = v10 >> 6;
            if ( v11 >= 0x80 )
              v11 = 127;
            ++*(_DWORD *)(3 * v11 + v6);
          }
          else if ( !*((_BYTE *)this + 80 * v5 + 752) )
          {
            ++*((_DWORD *)this + 20 * v5 + 189);
            if ( hProvider > 5u )
            {
              if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x4000uLL) )
              {
                v12 = 0;
                v14 = &v12;
                v15 = 2LL;
                TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1C0072A58, 0LL, v9, 3u, &pData);
                v9 = *a3;
              }
            }
          }
          *((_QWORD *)this + v7 + 99) = 0LL;
LABEL_17:
          *((_QWORD *)this + v7 + 98) = v9;
          return;
        }
        *((_BYTE *)this + 80 * v5 + 752) = 0;
        *((_QWORD *)this + 10 * v5 + 99) = v9;
      }
    }
  }
}
