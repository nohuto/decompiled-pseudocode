/*
 * XREFs of ?OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatus@3456@@Z @ 0x18006E400
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800035E4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800056F0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x18006F088 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 */

__int64 __fastcall WGIController::OnIRInputReceived(__int64 a1, __int64 a2, int a3, int a4)
{
  int v5; // ebx
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d
  int v11; // r8d
  int v12; // r8d
  int v13; // r8d
  int v14; // r8d
  int v15; // r8d
  int v16; // r8d
  int v17; // r8d
  int v18; // r8d
  int v19; // r8d
  int v20; // r8d
  int v21; // r8d
  int v22; // r8d
  _DWORD *v23; // rax
  DWORD TickCount; // eax
  unsigned int v26; // eax
  _DWORD v27[4]; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER v28; // [rsp+30h] [rbp-D0h]
  int v29; // [rsp+38h] [rbp-C8h]
  __int64 v30; // [rsp+208h] [rbp+108h]
  char v31; // [rsp+224h] [rbp+124h]
  int v32; // [rsp+228h] [rbp+128h]
  char v33; // [rsp+22Ch] [rbp+12Ch]
  wil::details::in1diag3 *retaddr; // [rsp+668h] [rbp+568h]
  LARGE_INTEGER PerformanceCount; // [rsp+670h] [rbp+570h] BYREF

  if ( !*(_QWORD *)(a1 + 144) )
  {
    v26 = wil::verify_hresult<long>(0x8000FFFF);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2E6,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)v26);
    JUMPOUT(0x18006E634LL);
  }
  if ( a4 == 1 )
  {
    if ( a3 > 70 )
    {
      v17 = a3 - 72;
      if ( !v17 )
      {
        v5 = 40;
        goto LABEL_48;
      }
      v18 = v17 - 5;
      if ( !v18 )
      {
        v5 = 29;
        goto LABEL_48;
      }
      v19 = v18 - 35;
      if ( !v19 )
      {
        v5 = 25;
        goto LABEL_48;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v5 = 41;
        goto LABEL_48;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        v5 = 42;
        goto LABEL_48;
      }
      v22 = v21 - 2;
      if ( !v22 )
      {
        v5 = 43;
        goto LABEL_48;
      }
      if ( v22 == 1 )
      {
        v5 = 44;
        goto LABEL_48;
      }
    }
    else
    {
      if ( a3 == 70 )
      {
        v5 = 39;
        goto LABEL_48;
      }
      v5 = 23;
      if ( a3 > 23 )
      {
        v12 = a3 - 24;
        if ( !v12 )
        {
          v5 = 18;
          goto LABEL_48;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          v5 = 24;
          goto LABEL_48;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          v5 = 22;
          goto LABEL_48;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
LABEL_48:
          QueryPerformanceCounter(&PerformanceCount);
          memset_0(v27, 0, 0x640uLL);
          v23 = *(_DWORD **)(a1 + 144);
          v29 = 1600;
          v27[0] = 128;
          v27[1] = *v23;
          TickCount = GetTickCount();
          v31 = 1;
          v27[2] = TickCount;
          v28 = PerformanceCount;
          v30 = *(_QWORD *)(a1 + 120);
          v32 = v5;
          v33 = 1;
          WGIController::NotifyInputReport((WGIController *)(a1 - 24), (struct InputInfo *)v27);
          return 0LL;
        }
        v16 = v15 - 10;
        if ( !v16 )
        {
          v5 = 28;
          goto LABEL_48;
        }
        if ( v16 == 1 )
        {
          v5 = 14;
          goto LABEL_48;
        }
      }
      else
      {
        if ( a3 == 23 )
        {
          v5 = 19;
          goto LABEL_48;
        }
        v6 = a3 - 14;
        if ( !v6 )
        {
          v5 = 26;
          goto LABEL_48;
        }
        v7 = v6 - 1;
        if ( !v7 )
        {
          v5 = 27;
          goto LABEL_48;
        }
        v8 = v7 - 1;
        if ( !v8 )
        {
          v5 = 5;
          goto LABEL_48;
        }
        v9 = v8 - 1;
        if ( !v9 )
        {
          v5 = 6;
          goto LABEL_48;
        }
        v10 = v9 - 3;
        if ( !v10 )
        {
          v5 = 20;
          goto LABEL_48;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
          v5 = 21;
          goto LABEL_48;
        }
        if ( v11 == 1 )
        {
          v5 = 17;
          goto LABEL_48;
        }
      }
    }
  }
  return 0LL;
}
