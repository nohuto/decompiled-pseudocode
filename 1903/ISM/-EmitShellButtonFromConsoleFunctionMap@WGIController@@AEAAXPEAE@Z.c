/*
 * XREFs of ?EmitShellButtonFromConsoleFunctionMap@WGIController@@AEAAXPEAE@Z @ 0x1800353E4
 * Callers:
 *     ?OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@Z @ 0x1800AB470 (-OnMessageReceived@WGIController@@UEAAJ_KW4GipMessageClass@Custom@Input@Gaming@Windows@@EEIPEBE@.c)
 * Callees:
 *     memset_0 @ 0x18002C3EE (memset_0.c)
 *     ?NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z @ 0x1800AABA8 (-NotifyInputReport@WGIController@@AEAAJPEAUInputInfo@@@Z.c)
 */

void __fastcall WGIController::EmitShellButtonFromConsoleFunctionMap(WGIController *this, unsigned __int8 *a2)
{
  unsigned int v4; // r14d
  unsigned __int8 *v5; // rsi
  unsigned __int8 v6; // r15
  _DWORD *v7; // rax
  DWORD TickCount; // eax
  _DWORD v9[4]; // [rsp+28h] [rbp-E0h] BYREF
  LARGE_INTEGER v10; // [rsp+38h] [rbp-D0h]
  __int64 v11; // [rsp+40h] [rbp-C8h]
  __int64 v12; // [rsp+48h] [rbp-C0h]
  int v13; // [rsp+68h] [rbp-A0h]
  char v14; // [rsp+6Ch] [rbp-9Ch]
  LARGE_INTEGER PerformanceCount; // [rsp+838h] [rbp+730h] BYREF

  if ( *(_QWORD *)a2 != *((_QWORD *)this + 32)
    || *((_QWORD *)a2 + 1) != *((_QWORD *)this + 33)
    || *((_WORD *)a2 + 8) != *((_WORD *)this + 136) )
  {
    v4 = 0;
    v5 = a2;
    do
    {
      v6 = *v5;
      if ( *v5 )
      {
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(v9, 0, 0x7F0uLL);
        v7 = (_DWORD *)*((_QWORD *)this + 23);
        LODWORD(v11) = 2032;
        v9[0] = 128;
        v9[1] = *v7;
        TickCount = GetTickCount();
        v14 = 1;
        v9[2] = TickCount;
        v10 = PerformanceCount;
        v12 = *((_QWORD *)this + 19);
        v13 = v6 + 44;
        WGIController::NotifyInputReport(this, (struct InputInfo *)v9);
      }
      ++v4;
      ++v5;
    }
    while ( v4 < 0x12 );
    *((_OWORD *)this + 16) = *(_OWORD *)a2;
    *((_WORD *)this + 136) = *((_WORD *)a2 + 8);
  }
}
