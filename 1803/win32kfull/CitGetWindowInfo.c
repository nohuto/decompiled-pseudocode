/*
 * XREFs of CitGetWindowInfo @ 0x1C00FCBE0
 * Callers:
 *     <none>
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0030730 (_GetTopLevelWindow.c)
 *     _MonitorFromRect @ 0x1C0072BA0 (_MonitorFromRect.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 __fastcall CitGetWindowInfo(__int64 a1, _WORD *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rdi
  __int16 v5; // bx
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  char v9; // al
  char v10; // r8
  unsigned __int8 v11; // cl
  unsigned __int8 v12; // r8
  int v13; // edx
  __int16 v14; // dx
  unsigned int v15; // eax
  struct tagRECT *Prop; // rax
  struct tagRECT v17; // [rsp+20h] [rbp-38h] BYREF

  result = GetTopLevelWindow(a1);
  v4 = (_QWORD *)result;
  if ( result )
  {
    v5 = 32;
    v17 = *(struct tagRECT *)(*(_QWORD *)(result + 40) + 88LL);
    if ( (*(_BYTE *)(*(_QWORD *)(result + 40) + 31LL) & 0x20) != 0 )
    {
      Prop = (struct tagRECT *)RealGetProp(*(_QWORD *)(result + 120), (unsigned __int16)atomCheckpointProp, 1LL);
      if ( Prop )
        v17 = *Prop;
    }
    LogicalToPhysicalDPIRect(&v17, &v17, *(unsigned int *)(v4[5] + 288LL), 0LL);
    *a2 = LOWORD(v17.right) - LOWORD(v17.left);
    a2[1] = LOWORD(v17.bottom) - LOWORD(v17.top);
    v7 = MonitorFromRect(&v17, 1LL, 18LL, v6);
    if ( v7 )
      CitGetMonitorInfo(v7, a2);
    v8 = v4[5];
    v9 = *(_BYTE *)(v8 + 31);
    if ( (v9 & 0x20) != 0 )
    {
      v11 = 1;
    }
    else if ( (v9 & 1) != 0 )
    {
      v11 = 2;
    }
    else
    {
      v10 = *(_BYTE *)(v8 + 233);
      v11 = 3;
      if ( (v10 & 3) == 3 )
      {
        v11 = 5;
      }
      else if ( (v10 & 1) == 0 )
      {
        if ( (v10 & 2) != 0 )
        {
          v11 = 4;
        }
        else
        {
          v11 = 0;
          if ( *(char *)(v8 + 234) < 0 )
            v11 = 6;
        }
      }
    }
    v12 = 0;
    v13 = (*(_DWORD *)(v8 + 288) & 0xF) - 1;
    if ( v13 )
    {
      if ( v13 == 1 )
        v12 = 2;
    }
    else
    {
      v12 = 1;
    }
    v14 = v11 | (unsigned __int16)(8 * v12);
    a2[4] = v14;
    v15 = *(unsigned __int16 *)(*(_QWORD *)(v4[2] + 416LL) + 284LL);
    if ( v15 > 0x60 )
    {
      if ( v15 > 0x78 )
      {
        if ( v15 > 0x90 )
        {
          if ( v15 > 0xA8 )
          {
            v5 = 192;
            if ( v15 > 0xC0 )
            {
              if ( v15 > 0xF0 )
              {
                if ( v15 > 0x120 )
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
    a2[4] = v5 | v14;
    result = RealGetProp(v4[15], (unsigned __int16)atomDWMProp, 1LL);
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
