/*
 * XREFs of ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x180054CB8
 * Callers:
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x180053CB8 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 * Callees:
 *     ?get@?$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z @ 0x1800148A4 (-get@-$static_lazy@VISMTracing@@@details@wil@@QEAAPEAVISMTracing@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _TlgCreateWsz @ 0x1800531D4 (_TlgCreateWsz.c)
 *     _TlgKeywordOn @ 0x1800532AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800532D4 (_TlgWrite.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180054098 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 */

void __fastcall ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  _QWORD *v7; // rax
  const struct _TlgProvider_t *v8; // rsi
  int PIDOfTarget; // eax
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  const WCHAR *v15; // rdx
  int v16; // [rsp+30h] [rbp-51h] BYREF
  struct IInputTarget *v17; // [rsp+38h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-41h] BYREF
  struct IInputTarget **v19; // [rsp+60h] [rbp-21h]
  int v20; // [rsp+68h] [rbp-19h]
  int v21; // [rsp+6Ch] [rbp-15h]
  int *v22; // [rsp+70h] [rbp-11h]
  int v23; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+7Ch] [rbp-5h]
  int *v25; // [rsp+80h] [rbp-1h]
  int v26; // [rsp+88h] [rbp+7h]
  int v27; // [rsp+8Ch] [rbp+Bh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+90h] [rbp+Fh] BYREF
  unsigned __int64 *v29; // [rsp+A0h] [rbp+1Fh]
  int v30; // [rsp+A8h] [rbp+27h]
  int v31; // [rsp+ACh] [rbp+2Bh]
  int v32; // [rsp+F0h] [rbp+6Fh] BYREF

  v32 = a3;
  v7 = wil::details::static_lazy<ISMTracing>::get(
         (__int64)this,
         lambda_7fd51406feab050c3f0aab483d3938ea_::_lambda_invoker_cdecl_);
  v8 = (const struct _TlgProvider_t *)v7[1];
  if ( *(_DWORD *)v8 > 4u && TlgKeywordOn((TraceLoggingHProvider)v7[1], 1uLL) )
  {
    v21 = 0;
    v19 = &v17;
    v17 = a2;
    v20 = 8;
    PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
    v24 = 0;
    v27 = 0;
    v16 = PIDOfTarget;
    v22 = &v16;
    v25 = &v32;
    v23 = 4;
    v26 = 4;
    if ( a4 )
    {
      v10 = a4 - 1;
      if ( v10 )
      {
        v11 = v10 - 1;
        if ( v11 )
        {
          v12 = v11 - 1;
          if ( v12 )
          {
            v13 = v12 - 1;
            if ( v13 )
            {
              v14 = v13 - 1;
              if ( v14 )
              {
                if ( v14 == 1 )
                  v15 = L"Unset";
                else
                  v15 = (const unsigned __int16 *)((char *)&word_180182F8B + 1);
              }
              else
              {
                v15 = L"Shell";
              }
            }
            else
            {
              v15 = L"HologramFrameworkIsolated";
            }
          }
          else
          {
            v15 = L"_HologramFrameworkMaterial";
          }
        }
        else
        {
          v15 = L"HologramFrameworkDefault";
        }
      }
      else
      {
        v15 = L"Exclusive";
      }
    }
    else
    {
      v15 = L"Slate";
    }
    TlgCreateWsz(&pDesc, v15);
    v31 = 0;
    v29 = &a5;
    v30 = 8;
    TlgWrite(v8, &unk_18019A8B2, 0LL, 0LL, 7u, &pData);
  }
}
