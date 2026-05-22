/*
 * XREFs of ?MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_@ISMTracing@@QEAAXPEAUIInputTarget@@KI_K@Z @ 0x180009B40
 * Callers:
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x18000740C (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z @ 0x180009DF0 (-GetPIDOfTarget@ISMTracing@@SAKPEAUIInputTarget@@@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCInputRouter_GetFrameworkViewTypeFromFocusTarget_(
        ISMTracing *this,
        struct IInputTarget *a2,
        int a3,
        int a4,
        unsigned __int64 a5)
{
  __int64 v7; // rdi
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  const wchar_t *v13; // rax
  __int64 v14; // rdx
  unsigned int PIDOfTarget; // [rsp+38h] [rbp-51h] BYREF
  struct IInputTarget *v16; // [rsp+40h] [rbp-49h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-41h] BYREF
  struct IInputTarget **v18; // [rsp+68h] [rbp-21h]
  __int64 v19; // [rsp+70h] [rbp-19h]
  unsigned int *p_PIDOfTarget; // [rsp+78h] [rbp-11h]
  __int64 v21; // [rsp+80h] [rbp-9h]
  int *v22; // [rsp+88h] [rbp-1h]
  __int64 v23; // [rsp+90h] [rbp+7h]
  const wchar_t *v24; // [rsp+98h] [rbp+Fh]
  int v25; // [rsp+A0h] [rbp+17h]
  int v26; // [rsp+A4h] [rbp+1Bh]
  unsigned __int64 *v27; // [rsp+A8h] [rbp+1Fh]
  __int64 v28; // [rsp+B0h] [rbp+27h]
  int v29; // [rsp+F8h] [rbp+6Fh] BYREF

  v29 = a3;
  v7 = *((_QWORD *)ISMTracing::Instance() + 1);
  if ( *(_DWORD *)v7 > 4u && (*(_BYTE *)(v7 + 16) & 1) != 0 && (*(_QWORD *)(v7 + 24) & 1LL) == *(_QWORD *)(v7 + 24) )
  {
    v16 = a2;
    v18 = &v16;
    v19 = 8LL;
    PIDOfTarget = ISMTracing::GetPIDOfTarget(a2);
    p_PIDOfTarget = &PIDOfTarget;
    v22 = &v29;
    v21 = 4LL;
    v23 = 4LL;
    if ( a4 )
    {
      v8 = a4 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            v11 = v10 - 1;
            if ( v11 )
            {
              v12 = v11 - 1;
              if ( v12 )
              {
                if ( v12 == 1 )
                  v13 = L"Unset";
                else
                  v13 = &sourceString;
              }
              else
              {
                v13 = L"Shell";
              }
            }
            else
            {
              v13 = L"HologramFrameworkIsolated";
            }
          }
          else
          {
            v13 = L"_HologramFrameworkMaterial";
          }
        }
        else
        {
          v13 = L"HologramFrameworkDefault";
        }
      }
      else
      {
        v13 = L"Exclusive";
      }
    }
    else
    {
      v13 = L"Slate";
    }
    v14 = -1LL;
    do
      ++v14;
    while ( v13[v14] );
    v24 = v13;
    v25 = 2 * v14 + 2;
    v27 = &a5;
    v26 = 0;
    v28 = 8LL;
    TlgWrite((TraceLoggingHProvider)v7, &unk_180166090, 0LL, 0LL, 7u, &pData);
  }
}
