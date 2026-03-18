/*
 * XREFs of ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1C0255848
 * Callers:
 *     ?GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@I@Z @ 0x1C02550E4 (-GenerateMessages@InteractiveControlInput@@QEAAJPEAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@.c)
 * Callees:
 *     _TlgWrite @ 0x1C010F038 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 *     ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1C0255BC8 (-GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z.c)
 *     ?GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z @ 0x1C0255C98 (-GenerateWheelMessage@InteractiveControlDefaultScroller@@AEAAJFPEAUtagWND@@@Z.c)
 *     ?Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z @ 0x1C0255E74 (-Reset@InteractiveControlDefaultScroller@@AEAAXPEAUtagWND@@@Z.c)
 *     ?UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ @ 0x1C025625C (-UpdateBallistics@InteractiveControlDefaultScroller@@AEAAJXZ.c)
 *     ?UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z @ 0x1C0256300 (-UpdateTime@InteractiveControlDefaultScroller@@AEAAJPEAH@Z.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateMessages(
        InteractiveControlDefaultScroller *a1,
        __int64 a2,
        int a3)
{
  int v3; // r15d
  signed int updated; // edi
  struct tagWND *v7; // r14
  int v8; // eax
  int v9; // edx
  __int16 v11[2]; // [rsp+38h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-9h] BYREF
  const char *v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  __int16 *v16; // [rsp+78h] [rbp+27h]
  int v17; // [rsp+80h] [rbp+2Fh]
  int v18; // [rsp+84h] [rbp+33h]

  *((_DWORD *)a1 + 14) = a3;
  v3 = 1;
  if ( (unsigned int)(a3 - 1) <= 1 )
  {
    v7 = (struct tagWND *)gpqForeground;
    if ( gpqForeground )
      v7 = *(struct tagWND **)(gpqForeground + 120LL);
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
          v3 = 0;
        updated = 0;
        *((_DWORD *)a1 + 15) = v9;
        if ( v3 )
        {
          InteractiveControlDefaultScroller::Reset(a1, v7);
          return (unsigned int)updated;
        }
        updated = InteractiveControlDefaultScroller::UpdateBallistics(a1);
        if ( updated >= 0 )
        {
          updated = InteractiveControlDefaultScroller::GenerateWheelDelta(a1, v11);
          if ( updated >= 0 )
          {
            updated = InteractiveControlDefaultScroller::GenerateWheelMessage(a1, v11[0], v7);
            if ( updated >= 0 || dword_1C0321308 <= 2u )
              return (unsigned int)updated;
          }
          else if ( dword_1C0321308 <= 2u )
          {
            return (unsigned int)updated;
          }
        }
        else if ( dword_1C0321308 <= 2u )
        {
          return (unsigned int)updated;
        }
      }
      else if ( dword_1C0321308 <= 2u )
      {
        return (unsigned int)updated;
      }
      v15 = 0;
      v18 = 0;
      v13 = "Function failed.";
      v16 = v11;
      v17 = 4;
      v14 = 17;
      *(_DWORD *)v11 = updated;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
      return (unsigned int)updated;
    }
    if ( dword_1C0321308 > 2u )
    {
      v15 = 0;
      v18 = 0;
      v13 = "Function failed.";
      v16 = v11;
      v17 = 4;
      v14 = 17;
      *(_DWORD *)v11 = -1073741816;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
    }
  }
  else
  {
    updated = -1073700861;
    if ( dword_1C0321308 > 2u )
    {
      v15 = 0;
      v18 = 0;
      v13 = "Function failed.";
      v16 = v11;
      v17 = 4;
      v14 = 17;
      *(_DWORD *)v11 = -1073700861;
      TlgWrite((TraceLoggingHProvider)&dword_1C0321308, &unk_1C02E8E2D, 0LL, 0LL, 4u, &pData);
    }
  }
  return (unsigned int)updated;
}
