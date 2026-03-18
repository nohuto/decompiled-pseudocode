/*
 * XREFs of NVMeHwStartIo @ 0x1C00020B0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C0002320 (ProcessCommandInSpecificQueue.c)
 *     NVMeControllerPowerDown @ 0x1C000B298 (NVMeControllerPowerDown.c)
 *     NVMeRequestComplete @ 0x1C000D8E8 (NVMeRequestComplete.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // dl
  int v5; // eax
  __int64 v6; // rax
  int v7; // ecx
  bool v8; // zf
  unsigned __int8 v9; // cl
  __int64 v10; // rcx
  __int64 v12; // rsi
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // r12
  __int64 v15; // r14
  unsigned int v16; // eax
  int v17; // ebp
  unsigned int v18; // r15d
  unsigned __int16 v19; // ax

  v4 = *(_BYTE *)(a2 + 2);
  if ( v4 == 40 )
    v5 = *(_DWORD *)(a2 + 20);
  else
    v5 = v4;
  switch ( v5 )
  {
    case 0:
    case 2:
    case 9:
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 16) )
      {
        NVMeControllerPowerDown(a1);
        v4 = *(_BYTE *)(a2 + 2);
      }
      if ( v4 == 40 )
        v9 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v9 = *(_BYTE *)(a2 + 7);
      if ( (unsigned int)v9 < *(_DWORD *)(a1 + 192) )
      {
        v10 = *(_QWORD *)(a1 + 8LL * v9 + 1648);
        if ( v10 )
          *(_DWORD *)(v10 + 20) |= 2u;
      }
      *(_BYTE *)(a2 + 3) = 1;
      break;
    case 37:
      if ( v4 == 40 )
      {
        v6 = a2 + *(unsigned int *)(a2 + 120);
        v7 = *(_DWORD *)(v6 + 12);
        v8 = *(_DWORD *)(v6 + 16) == 1;
      }
      else
      {
        v7 = *(_DWORD *)(a2 + 8);
        v8 = *(_DWORD *)(a2 + 64) == 1;
      }
      if ( v8 )
      {
        if ( v7 == 2 || v7 == 23 )
        {
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFF6 | 8;
          *(_BYTE *)(a2 + 3) = 1;
        }
        else
        {
          if ( v7 != 4 )
            goto LABEL_23;
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFFC | 2;
          *(_BYTE *)(a2 + 3) = 1;
        }
      }
      break;
    default:
LABEL_23:
      *(_BYTE *)(a2 + 3) = 6;
      break;
  }
  if ( *(_BYTE *)(a2 + 3) )
  {
    StorPortNotification(0LL, a1, a2);
    return 1;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v12 = *(_QWORD *)(a2 + 104);
    else
      v12 = *(_QWORD *)(a2 + 56);
    if ( (v12 & 0xFFF) != 0 )
      v12 = v12 - (v12 & 0xFFF) + 4096;
    v13 = *(_WORD *)(v12 + 4244);
    if ( v13 )
    {
      v14 = *(_WORD *)(a1 + 270);
      v15 = 136LL * v13 + *(_QWORD *)(a1 + 760) - 136LL;
    }
    else
    {
      v14 = *(_WORD *)(a1 + 268);
      v15 = a1 + 280;
    }
    if ( (unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v15, v14) )
    {
      return 1;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 3) == 5
        && *(_WORD *)(v15 + 40)
        && (v16 = *(unsigned __int16 *)(a1 + 272), v17 = 0, *(_BYTE *)(v12 + 4253) |= 0x10u, (v18 = v16) != 0) )
      {
        while ( 1 )
        {
          v19 = 1;
          if ( ((unsigned int)*(unsigned __int16 *)(v15 + 40) + 1) % *(unsigned __int16 *)(a1 + 272) )
            v19 = ((unsigned int)*(unsigned __int16 *)(v15 + 40) + 1) % *(unsigned __int16 *)(a1 + 272);
          *(_WORD *)(v12 + 4244) = v19;
          v15 = 136LL * v19 + *(_QWORD *)(a1 + 760) - 136LL;
          if ( (unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v15, v14) )
            break;
          if ( *(_BYTE *)(a2 + 3) == 5 && ++v17 < v18 )
            continue;
          goto LABEL_43;
        }
      }
      else
      {
LABEL_43:
        NVMeRequestComplete(a1, a2, 0LL);
      }
      return 1;
    }
  }
}
