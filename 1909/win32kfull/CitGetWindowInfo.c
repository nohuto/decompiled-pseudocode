/*
 * XREFs of CitGetWindowInfo @ 0x1C0013BB0
 * Callers:
 *     <none>
 * Callees:
 *     _MonitorFromRect @ 0x1C00147D0 (_MonitorFromRect.c)
 *     _GetProp @ 0x1C00692EC (_GetProp.c)
 *     _GetTopLevelWindow @ 0x1C006A460 (_GetTopLevelWindow.c)
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 */

__int64 __fastcall CitGetWindowInfo(__int64 a1, _WORD *a2)
{
  __int64 result; // rax
  __int64 v4; // rdi
  __int16 v5; // bx
  __int64 v6; // rax
  __int64 v7; // r8
  char v8; // al
  char v9; // cl
  __int16 v10; // cx
  __int16 v11; // dx
  int v12; // r8d
  __int16 v13; // dx
  unsigned __int16 v14; // ax
  struct tagRECT *Prop; // rax
  struct tagRECT v16; // [rsp+20h] [rbp-38h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = result;
  if ( result )
  {
    v5 = 32;
    v16 = *(struct tagRECT *)(*(_QWORD *)(result + 40) + 88LL);
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 31LL) & 0x20) != 0 )
    {
      Prop = (struct tagRECT *)GetProp(result, *((unsigned __int16 *)&WPP_MAIN_CB.DeviceQueue.Size + 1), 1LL);
      if ( Prop )
        v16 = *Prop;
    }
    LogicalToPhysicalDPIRect(&v16, &v16, *(unsigned int *)(*(_QWORD *)(v4 + 40) + 288LL), 0LL);
    *a2 = LOWORD(v16.right) - LOWORD(v16.left);
    a2[1] = LOWORD(v16.bottom) - LOWORD(v16.top);
    v6 = MonitorFromRect(&v16);
    if ( v6 )
      CitGetMonitorInfo(v6, a2);
    v7 = *(_QWORD *)(v4 + 40);
    v8 = *(_BYTE *)(v7 + 31);
    if ( (v8 & 0x20) != 0 )
    {
      v10 = 1;
    }
    else if ( (v8 & 1) != 0 )
    {
      v10 = 2;
    }
    else
    {
      v9 = *(_BYTE *)(v7 + 233);
      if ( (v9 & 3) == 3 )
      {
        v10 = 5;
      }
      else if ( (v9 & 1) != 0 )
      {
        v10 = 3;
      }
      else if ( (v9 & 2) != 0 )
      {
        v10 = 4;
      }
      else
      {
        v10 = 0;
        if ( *(char *)(v7 + 234) < 0 )
          v10 = 6;
      }
    }
    v11 = 0;
    v12 = (*(_DWORD *)(v7 + 288) & 0xF) - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
        v11 = 2;
    }
    else
    {
      v11 = 1;
    }
    v13 = v10 | (8 * v11);
    a2[4] = v13;
    v14 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 416LL) + 284LL);
    if ( v14 > 0x60u )
    {
      if ( v14 > 0x78u )
      {
        if ( v14 > 0x90u )
        {
          if ( v14 > 0xA8u )
          {
            v5 = 192;
            if ( v14 > 0xC0u )
            {
              if ( v14 > 0xF0u )
              {
                if ( v14 > 0x120u )
                  v5 = 224;
              }
              else
              {
                v5 = 160;
              }
            }
            else
            {
              v5 = 128;
            }
          }
          else
          {
            v5 = 96;
          }
        }
        else
        {
          v5 = 64;
        }
      }
    }
    else
    {
      v5 = 0;
    }
    a2[4] = v5 | v13;
    result = GetProp(v4, (unsigned __int16)atomDWMProp, 1LL);
    if ( result )
    {
      result = *(unsigned int *)result;
      if ( (result & 0x2000) != 0 )
      {
        result = 256LL;
        a2[4] |= 0x100u;
      }
    }
  }
  return result;
}
