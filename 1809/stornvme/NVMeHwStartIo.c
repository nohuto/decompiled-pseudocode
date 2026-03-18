/*
 * XREFs of NVMeHwStartIo @ 0x1C0002BE0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommandInSpecificQueue @ 0x1C0002E50 (ProcessCommandInSpecificQueue.c)
 *     NVMeControllerPowerDown @ 0x1C000DD5C (NVMeControllerPowerDown.c)
 *     NVMeRequestComplete @ 0x1C000F7AC (NVMeRequestComplete.c)
 */

char __fastcall NVMeHwStartIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int8 v6; // dl
  int v7; // eax
  __int64 v8; // rax
  int v9; // ecx
  bool v10; // zf
  unsigned __int8 v11; // cl
  __int64 v12; // rcx
  __int64 v14; // rsi
  unsigned __int16 v15; // ax
  unsigned __int16 v16; // r12
  __int64 v17; // r14
  unsigned int v18; // eax
  int v19; // ebp
  unsigned int v20; // r15d
  unsigned __int16 v21; // ax

  v6 = *(_BYTE *)(a2 + 2);
  if ( v6 == 40 )
    v7 = *(_DWORD *)(a2 + 20);
  else
    v7 = v6;
  switch ( v7 )
  {
    case 0:
    case 2:
    case 9:
      break;
    case 7:
      if ( *(_BYTE *)(a1 + 16) )
      {
        NVMeControllerPowerDown(a1);
        v6 = *(_BYTE *)(a2 + 2);
      }
      if ( v6 == 40 )
        v11 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
      else
        v11 = *(_BYTE *)(a2 + 7);
      if ( (unsigned int)v11 < *(_DWORD *)(a1 + 184) )
      {
        v12 = *(_QWORD *)(a1 + 8LL * v11 + 1640);
        if ( v12 )
          *(_DWORD *)(v12 + 20) |= 2u;
      }
      *(_BYTE *)(a2 + 3) = 1;
      break;
    case 37:
      if ( v6 == 40 )
      {
        v8 = a2 + *(unsigned int *)(a2 + 120);
        v9 = *(_DWORD *)(v8 + 12);
        v10 = *(_DWORD *)(v8 + 16) == 1;
      }
      else
      {
        v9 = *(_DWORD *)(a2 + 8);
        v10 = *(_DWORD *)(a2 + 64) == 1;
      }
      if ( v10 )
      {
        if ( v9 == 2 || v9 == 23 )
        {
          *(_DWORD *)(a1 + 20) = *(_DWORD *)(a1 + 20) & 0xFFFFFFF6 | 8;
          *(_BYTE *)(a2 + 3) = 1;
        }
        else
        {
          if ( v9 != 4 )
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
    StorPortNotification(0LL, a1, a2, a4);
    return 1;
  }
  else
  {
    if ( *(_BYTE *)(a2 + 2) == 40 )
      v14 = *(_QWORD *)(a2 + 104);
    else
      v14 = *(_QWORD *)(a2 + 56);
    if ( (v14 & 0xFFF) != 0 )
      v14 = v14 - (v14 & 0xFFF) + 4096;
    v15 = *(_WORD *)(v14 + 4244);
    if ( v15 )
    {
      v16 = *(_WORD *)(a1 + 262);
      v17 = 136LL * v15 + *(_QWORD *)(a1 + 752) - 136LL;
    }
    else
    {
      v16 = *(_WORD *)(a1 + 260);
      v17 = a1 + 272;
    }
    if ( (unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v17, v16) )
    {
      return 1;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 3) == 5
        && *(_WORD *)(v17 + 40)
        && (v18 = *(unsigned __int16 *)(a1 + 264), v19 = 0, *(_BYTE *)(v14 + 4253) |= 0x10u, (v20 = v18) != 0) )
      {
        while ( 1 )
        {
          v21 = 1;
          if ( ((unsigned int)*(unsigned __int16 *)(v17 + 40) + 1) % *(unsigned __int16 *)(a1 + 264) )
            v21 = ((unsigned int)*(unsigned __int16 *)(v17 + 40) + 1) % *(unsigned __int16 *)(a1 + 264);
          *(_WORD *)(v14 + 4244) = v21;
          v17 = 136LL * v21 + *(_QWORD *)(a1 + 752) - 136LL;
          if ( (unsigned __int8)ProcessCommandInSpecificQueue(a1, a2, v17, v16) )
            break;
          if ( *(_BYTE *)(a2 + 3) == 5 && ++v19 < v20 )
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
