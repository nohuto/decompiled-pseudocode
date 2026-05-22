/*
 * XREFs of ?MPCHolographicInputManager_SetProviderPrimary_@ISMTracing@@QEAAXK_KI@Z @ 0x18004420C
 * Callers:
 *     ?AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z @ 0x180042D40 (-AddPrimaryInputProvider@MPCHolographicInputManager@@AEAAXPEAUIMPCInputProviderBase@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000A954 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_SetProviderPrimary_(
        ISMTracing *this,
        int a2,
        __int64 a3,
        int a4)
{
  _DWORD *v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  const wchar_t *v12; // rax
  __int64 v13; // rdx
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-9h] BYREF
  int *v15; // [rsp+58h] [rbp+17h]
  __int64 v16; // [rsp+60h] [rbp+1Fh]
  __int64 *v17; // [rsp+68h] [rbp+27h]
  __int64 v18; // [rsp+70h] [rbp+2Fh]
  const wchar_t *v19; // [rsp+78h] [rbp+37h]
  int v20; // [rsp+80h] [rbp+3Fh]
  int v21; // [rsp+84h] [rbp+43h]
  int v22; // [rsp+B0h] [rbp+6Fh] BYREF
  __int64 v23; // [rsp+B8h] [rbp+77h] BYREF

  v23 = a3;
  v22 = a2;
  v5 = (_DWORD *)*((_QWORD *)ISMTracing::Instance() + 1);
  if ( v5 )
  {
    if ( *v5 )
    {
      v6 = *((_QWORD *)ISMTracing::Instance() + 1);
      if ( *(_DWORD *)v6 > 4u && (*(_BYTE *)(v6 + 16) & 1) != 0 && (*(_QWORD *)(v6 + 24) & 1LL) == *(_QWORD *)(v6 + 24) )
      {
        v16 = 4LL;
        v15 = &v22;
        v17 = &v23;
        v18 = 8LL;
        if ( a4 )
        {
          v7 = a4 - 1;
          if ( v7 )
          {
            v8 = v7 - 1;
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
                    if ( v11 == 1 )
                      v12 = L"Hand";
                    else
                      v12 = &sourceString;
                  }
                  else
                  {
                    v12 = L"SixDof";
                  }
                }
                else
                {
                  v12 = L"GamePad";
                }
              }
              else
              {
                v12 = L"Mouse";
              }
            }
            else
            {
              v12 = L"Controller";
            }
          }
          else
          {
            v12 = L"Gaze";
          }
        }
        else
        {
          v12 = L"UnknownKind";
        }
        v13 = -1LL;
        do
          ++v13;
        while ( v12[v13] );
        v19 = v12;
        v20 = 2 * v13 + 2;
        v21 = 0;
        TlgWrite((TraceLoggingHProvider)v6, &unk_180166EF0, 0LL, 0LL, 5u, &pData);
      }
    }
  }
}
