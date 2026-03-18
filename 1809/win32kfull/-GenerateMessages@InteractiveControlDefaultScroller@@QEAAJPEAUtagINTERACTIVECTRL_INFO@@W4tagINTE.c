/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C023CB50
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C023C3E8 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     _TlgWrite @ 0x1C0117A34 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C023CEC0 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C023CF90 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C023D168 (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C023D550 (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C023D5F8 (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        int a3)
{
  signed int updated; // ebx
  int v6; // r14d
  struct tagWND *v7; // rsi
  int v8; // eax
  int v9; // edx
  __int16 v11[2]; // [rsp+30h] [rbp-29h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-19h] BYREF
  const char *v13; // [rsp+60h] [rbp+7h]
  __int64 v14; // [rsp+68h] [rbp+Fh]
  __int16 *v15; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]

  *((_DWORD *)a1 + 14) = a3;
  updated = 0;
  v6 = 1;
  if ( (unsigned int)(a3 - 1) > 1 )
    updated = -1073700861;
  if ( updated >= 0 )
  {
    if ( gpqForeground )
      v7 = *(struct tagWND **)(gpqForeground + 112LL);
    else
      v7 = 0LL;
    updated = v7 == 0LL ? 0xC0000008 : 0;
    if ( v7 )
    {
      updated = InteractiveControlDefaultScroller::UpdateTime(a1, (int *)v11);
      if ( updated >= 0 )
      {
        if ( *(_DWORD *)v11 )
          InteractiveControlDefaultScroller::Reset(a1, v7);
        v8 = *((_DWORD *)a1 + 15);
        v9 = *(_DWORD *)(a2 + 24);
        if ( !v8 || v9 > 0 == v8 > 0 )
          v6 = 0;
        *((_DWORD *)a1 + 15) = v9;
        updated = 0;
        if ( v6 )
        {
          InteractiveControlDefaultScroller::Reset(a1, v7);
        }
        else
        {
          updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, v11);
            if ( updated >= 0 )
            {
              updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v11[0], v7);
              if ( updated < 0 && dword_1C030C400 > 2u )
                goto LABEL_30;
            }
            else if ( dword_1C030C400 > 2u )
            {
              goto LABEL_30;
            }
          }
          else if ( dword_1C030C400 > 2u )
          {
            goto LABEL_30;
          }
        }
      }
      else if ( dword_1C030C400 > 2u )
      {
        goto LABEL_30;
      }
    }
    else if ( dword_1C030C400 > 2u )
    {
      v14 = 17LL;
      v13 = "Function failed.";
      v15 = v11;
      v16 = 4LL;
      *(_DWORD *)v11 = -1073741816;
      TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
    }
  }
  else if ( dword_1C030C400 > 2u )
  {
LABEL_30:
    v14 = 17LL;
    v13 = "Function failed.";
    v15 = v11;
    v16 = 4LL;
    *(_DWORD *)v11 = updated;
    TlgWrite((TraceLoggingHProvider)&dword_1C030C400, &unk_1C02D6152, 0LL, 0LL, 4u, &pData);
  }
  return (unsigned int)updated;
}
