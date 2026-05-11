/*
 * XREFs of USBHwGetTransportResources @ 0x1C00293A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C0011080 (memmove.c)
 */

__int64 __fastcall USBHwGetTransportResources(int a1, _QWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v4; // rax
  int v6; // ebp
  unsigned int v9; // ebx
  __int64 v10; // r13
  __int64 v11; // r14
  PKSDEVICE Device; // rax
  __int64 v13; // r12
  unsigned __int16 v14; // r9
  unsigned __int16 v15; // r9
  unsigned int *v16; // rdx
  size_t v17; // rsi
  unsigned __int16 v18; // r9
  unsigned __int8 *v19; // rdx

  v4 = a2[2];
  v6 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(v4 + 152);
  v11 = *(_QWORD *)(v4 + 144);
  Device = KsGetDevice(a2);
  if ( !Device )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      9u,
      0xAu,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
LABEL_3:
    v9 = -1073741437;
    goto LABEL_46;
  }
  v13 = *((_QWORD *)Device->Context + 9);
  switch ( a1 )
  {
    case 0:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
        9u,
        0xBu,
        (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
      v19 = *(unsigned __int8 **)(v11 + 136);
      if ( !v19 )
      {
        *a4 = 0;
        goto LABEL_3;
      }
      LODWORD(v17) = *v19;
      if ( *a4 )
      {
        if ( *a4 < (unsigned int)v17 )
        {
          v9 = -1073741811;
          goto LABEL_46;
        }
        memmove(a3, v19, *v19);
      }
      else
      {
        v9 = -1073741789;
      }
      goto LABEL_45;
    case 1:
      v18 = 12;
      goto LABEL_32;
    case 2:
      v15 = 14;
LABEL_22:
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
        9u,
        v15,
        (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
      v16 = *(unsigned int **)(v10 + 80);
      if ( v6 )
        v16 = *(unsigned int **)(v10 + 88);
      if ( !v16 )
      {
LABEL_25:
        *a4 = 0;
        v9 = -1073741437;
        goto LABEL_46;
      }
      v17 = *v16;
      goto LABEL_36;
  }
  if ( a1 != 3 )
  {
    if ( a1 != 5 )
    {
      if ( a1 != 6 )
      {
        if ( a1 != 7 )
        {
          v9 = -1073741811;
          *a4 = 0;
          goto LABEL_46;
        }
        v14 = 17;
        goto LABEL_16;
      }
      v6 = 1;
      v15 = 15;
      goto LABEL_22;
    }
    v6 = 1;
    v18 = 13;
LABEL_32:
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      9u,
      v18,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
    v16 = *(unsigned int **)(v11 + 168);
    if ( v6 )
      v16 = *(unsigned int **)(v11 + 176);
    if ( !v16 )
      goto LABEL_25;
    v17 = *(unsigned __int8 *)v16;
LABEL_36:
    if ( *a4 )
    {
      if ( *a4 < (unsigned int)v17 )
      {
        v9 = -1073741811;
        goto LABEL_46;
      }
      memmove(a3, v16, v17);
    }
    else
    {
      v9 = -1073741789;
    }
LABEL_45:
    *a4 = v17;
    goto LABEL_46;
  }
  v14 = 16;
LABEL_16:
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
    9u,
    v14,
    (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
  if ( *a4 )
  {
    if ( *a4 >= 4u )
    {
      *(_WORD *)a3 = *(_WORD *)(v13 + 8);
      a3[2] = *(_BYTE *)(v11 + 186);
      a3[3] = *(_BYTE *)(v11 + 187);
      *a4 = 4;
    }
    else
    {
      v9 = -1073741811;
    }
  }
  else
  {
    *a4 = 4;
    v9 = -1073741789;
  }
LABEL_46:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      9u,
      0x12u,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      v9);
  return v9;
}
