/*
 * XREFs of USBHwGetTransportResources @ 0x1C002A580
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     memmove @ 0x1C00123C0 (memmove.c)
 */

__int64 __fastcall USBHwGetTransportResources(int a1, _QWORD *a2, _BYTE *a3, _DWORD *a4)
{
  __int64 v4; // rax
  unsigned int v8; // ebx
  int v9; // r14d
  __int64 v10; // r13
  __int64 v11; // rbp
  PKSDEVICE Device; // rax
  __int64 v13; // rdx
  __int64 v14; // r12
  unsigned __int16 v15; // r9
  unsigned __int16 v16; // r9
  size_t v17; // rsi
  unsigned __int16 v18; // r9

  v4 = a2[2];
  v8 = 0;
  v9 = 0;
  v10 = *(_QWORD *)(v4 + 152);
  v11 = *(_QWORD *)(v4 + 144);
  Device = KsGetDevice(a2);
  v13 = 9LL;
  if ( !Device )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        9LL,
        9u,
        0xAu,
        (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
    goto LABEL_4;
  }
  v14 = *((_QWORD *)Device->Context + 9);
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        v18 = 12;
        break;
      case 2:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v16 = 14;
        goto LABEL_30;
      case 3:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_20;
        v15 = 16;
        goto LABEL_19;
      case 5:
        v9 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_42;
        v18 = 13;
        break;
      case 6:
        v9 = 1;
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_31:
          v13 = *(_QWORD *)(v10 + 80);
          if ( v9 )
            v13 = *(_QWORD *)(v10 + 88);
          if ( v13 )
          {
            v17 = *(unsigned int *)v13;
            goto LABEL_35;
          }
          goto LABEL_49;
        }
        v16 = 15;
LABEL_30:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          9LL,
          9u,
          v16,
          (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
        goto LABEL_31;
      case 7:
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
LABEL_20:
          if ( *a4 )
          {
            if ( *a4 < 4u )
            {
              v8 = -1073741811;
              goto LABEL_54;
            }
            *(_WORD *)a3 = *(_WORD *)(v14 + 8);
            a3[2] = *(_BYTE *)(v11 + 186);
            a3[3] = *(_BYTE *)(v11 + 187);
          }
          else
          {
            v8 = -1073741789;
          }
          *a4 = 4;
          goto LABEL_54;
        }
        v15 = 17;
LABEL_19:
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          9LL,
          9u,
          v15,
          (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
        goto LABEL_20;
      default:
        v8 = -1073741811;
        *a4 = 0;
        goto LABEL_54;
    }
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      9LL,
      9u,
      v18,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
LABEL_42:
    v13 = *(_QWORD *)(v11 + 168);
    if ( v9 )
      v13 = *(_QWORD *)(v11 + 176);
    goto LABEL_48;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      9LL,
      9u,
      0xBu,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids);
  v13 = *(_QWORD *)(v11 + 136);
LABEL_48:
  if ( v13 )
  {
    v17 = *(unsigned __int8 *)v13;
LABEL_35:
    if ( *a4 )
    {
      if ( *a4 < (unsigned int)v17 )
      {
        v8 = -1073741811;
        goto LABEL_54;
      }
      memmove(a3, (const void *)v13, v17);
    }
    else
    {
      v8 = -1073741789;
    }
    *a4 = v17;
    goto LABEL_54;
  }
LABEL_49:
  *a4 = 0;
LABEL_4:
  v8 = -1073741437;
LABEL_54:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v13,
      9u,
      0x12u,
      (__int64)&WPP_45be40ce8fd538488aced682dd98354a_Traceguids,
      v8);
  return v8;
}
