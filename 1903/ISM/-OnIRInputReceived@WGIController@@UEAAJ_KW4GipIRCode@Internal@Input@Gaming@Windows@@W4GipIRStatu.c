/*
 * XREFs of ?OnIRInputReceived@WGIController@@UEAAJ_KW4GipIRCode@Internal@Input@Gaming@Windows@@W4GipIRStatus@3456@@Z @ 0x1800AB0B0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002E124 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800AABA8 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
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
  _DWORD v26[4]; // [rsp+20h] [rbp-E0h] BYREF
  LARGE_INTEGER v27; // [rsp+30h] [rbp-D0h]
  int v28; // [rsp+38h] [rbp-C8h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  int v30; // [rsp+60h] [rbp-A0h]
  char v31; // [rsp+64h] [rbp-9Ch]
  wil::details::in1diag3 *retaddr; // [rsp+818h] [rbp+718h]
  LARGE_INTEGER PerformanceCount; // [rsp+820h] [rbp+720h] BYREF

  if ( !*(_QWORD *)(a1 + 160) )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      799LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\wgi\\lib\\wgicontroller.cpp",
      (const char *)0x8000FFFFLL);
    __debugbreak();
  }
  if ( a4 == 1 )
  {
    if ( a3 > 70 )
    {
      v17 = a3 - 72;
      if ( !v17 )
      {
        v5 = 40;
        goto LABEL_49;
      }
      v18 = v17 - 5;
      if ( !v18 )
      {
        v5 = 29;
        goto LABEL_49;
      }
      v19 = v18 - 35;
      if ( !v19 )
      {
        v5 = 25;
        goto LABEL_49;
      }
      v20 = v19 - 1;
      if ( !v20 )
      {
        v5 = 41;
        goto LABEL_49;
      }
      v21 = v20 - 1;
      if ( !v21 )
      {
        v5 = 42;
        goto LABEL_49;
      }
      v22 = v21 - 2;
      if ( !v22 )
      {
        v5 = 43;
        goto LABEL_49;
      }
      if ( v22 == 1 )
      {
        v5 = 44;
        goto LABEL_49;
      }
    }
    else
    {
      if ( a3 == 70 )
      {
        v5 = 39;
        goto LABEL_49;
      }
      v5 = 23;
      if ( a3 > 23 )
      {
        v12 = a3 - 24;
        if ( !v12 )
        {
          v5 = 18;
          goto LABEL_49;
        }
        v13 = v12 - 1;
        if ( !v13 )
        {
          v5 = 24;
          goto LABEL_49;
        }
        v14 = v13 - 1;
        if ( !v14 )
        {
          v5 = 22;
          goto LABEL_49;
        }
        v15 = v14 - 1;
        if ( !v15 )
        {
LABEL_49:
          QueryPerformanceCounter(&PerformanceCount);
          memset_0(v26, 0, 0x7F0uLL);
          v23 = *(_DWORD **)(a1 + 160);
          v28 = 2032;
          v26[0] = 128;
          v26[1] = *v23;
          TickCount = GetTickCount();
          v30 = v5;
          v26[2] = TickCount;
          v27 = PerformanceCount;
          v29 = *(_QWORD *)(a1 + 128);
          v31 = 1;
          WGIController::NotifyInputReport((WGIController *)(a1 - 24), (struct InputInfo *)v26);
          return 0LL;
        }
        v16 = v15 - 10;
        if ( !v16 )
        {
          v5 = 28;
          goto LABEL_49;
        }
        if ( v16 == 1 )
        {
          v5 = 14;
          goto LABEL_49;
        }
      }
      else
      {
        if ( a3 == 23 )
        {
          v5 = 19;
          goto LABEL_49;
        }
        v6 = a3 - 14;
        if ( !v6 )
        {
          v5 = 26;
          goto LABEL_49;
        }
        v7 = v6 - 1;
        if ( !v7 )
        {
          v5 = 27;
          goto LABEL_49;
        }
        v8 = v7 - 1;
        if ( !v8 )
        {
          v5 = 5;
          goto LABEL_49;
        }
        v9 = v8 - 1;
        if ( !v9 )
        {
          v5 = 6;
          goto LABEL_49;
        }
        v10 = v9 - 3;
        if ( !v10 )
        {
          v5 = 20;
          goto LABEL_49;
        }
        v11 = v10 - 1;
        if ( !v11 )
        {
          v5 = 21;
          goto LABEL_49;
        }
        if ( v11 == 1 )
        {
          v5 = 17;
          goto LABEL_49;
        }
      }
    }
  }
  return 0LL;
}
