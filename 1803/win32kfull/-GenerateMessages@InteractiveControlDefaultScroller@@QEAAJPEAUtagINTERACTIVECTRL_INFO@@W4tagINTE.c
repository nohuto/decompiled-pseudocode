/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C021331C
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C0212BDC (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     _TlgWrite @ 0x1C00BD788 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C0213668 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0213738 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C02138E0 (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C0213CA4 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C0213D4C (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        const GUID *a3,
        const GUID *a4)
{
  signed int updated; // ebx
  int v7; // r14d
  struct tagWND *v8; // rsi
  int v9; // eax
  int v10; // edx
  __int16 v12[2]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  __int16 *v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]

  *((_DWORD *)a1 + 14) = (_DWORD)a3;
  updated = 0;
  v7 = 1;
  if ( (unsigned int)((_DWORD)a3 - 1) > 1 )
    updated = -1073700861;
  if ( updated >= 0 )
  {
    if ( gpqForeground )
      v8 = *(struct tagWND **)(gpqForeground + 112LL);
    else
      v8 = 0LL;
    updated = v8 == 0LL ? 0xC0000008 : 0;
    if ( v8 )
    {
      updated = InteractiveControlDefaultScroller::UpdateTime(a1, (int *)v12);
      if ( updated >= 0 )
      {
        if ( *(_DWORD *)v12 )
          InteractiveControlDefaultScroller::Reset(a1, v8);
        v9 = *((_DWORD *)a1 + 15);
        v10 = *(_DWORD *)(a2 + 24);
        if ( !v9 || v10 > 0 == v9 > 0 )
          v7 = 0;
        *((_DWORD *)a1 + 15) = v10;
        updated = 0;
        if ( v7 )
        {
          InteractiveControlDefaultScroller::Reset(a1, v8);
        }
        else
        {
          updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, v12);
            if ( updated >= 0 )
            {
              updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v12[0], v8);
              if ( updated < 0 && dword_1C031C7D0 > 2u )
                goto LABEL_30;
            }
            else if ( dword_1C031C7D0 > 2u )
            {
              goto LABEL_30;
            }
          }
          else if ( dword_1C031C7D0 > 2u )
          {
            goto LABEL_30;
          }
        }
      }
      else if ( dword_1C031C7D0 > 2u )
      {
        goto LABEL_30;
      }
    }
    else if ( dword_1C031C7D0 > 2u )
    {
      v15 = 17LL;
      v14 = "Function failed.";
      v16 = v12;
      v17 = 4LL;
      *(_DWORD *)v12 = -1073741816;
      TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, a3, a4, 4u, &pData);
    }
  }
  else if ( dword_1C031C7D0 > 2u )
  {
LABEL_30:
    v15 = 17LL;
    v14 = "Function failed.";
    v16 = v12;
    v17 = 4LL;
    *(_DWORD *)v12 = updated;
    TlgWrite((TraceLoggingHProvider)&dword_1C031C7D0, &unk_1C02E3990, a3, a4, 4u, &pData);
  }
  return (unsigned int)updated;
}
